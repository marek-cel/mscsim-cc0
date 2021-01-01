/****************************************************************************//*
 * Copyright (C) 2021 Marek M. Cel
 *
 * Creative Commons Legal Code
 *
 * CC0 1.0 Universal
 *
 *     CREATIVE COMMONS CORPORATION IS NOT A LAW FIRM AND DOES NOT PROVIDE
 *     LEGAL SERVICES. DISTRIBUTION OF THIS DOCUMENT DOES NOT CREATE AN
 *     ATTORNEY-CLIENT RELATIONSHIP. CREATIVE COMMONS PROVIDES THIS
 *     INFORMATION ON AN "AS-IS" BASIS. CREATIVE COMMONS MAKES NO WARRANTIES
 *     REGARDING THE USE OF THIS DOCUMENT OR THE INFORMATION OR WORKS
 *     PROVIDED HEREUNDER, AND DISCLAIMS LIABILITY FOR DAMAGES RESULTING FROM
 *     THE USE OF THIS DOCUMENT OR THE INFORMATION OR WORKS PROVIDED
 *     HEREUNDER.
 *
 * Statement of Purpose
 *
 * The laws of most jurisdictions throughout the world automatically confer
 * exclusive Copyright and Related Rights (defined below) upon the creator
 * and subsequent owner(s) (each and all, an "owner") of an original work of
 * authorship and/or a database (each, a "Work").
 *
 * Certain owners wish to permanently relinquish those rights to a Work for
 * the purpose of contributing to a commons of creative, cultural and
 * scientific works ("Commons") that the public can reliably and without fear
 * of later claims of infringement build upon, modify, incorporate in other
 * works, reuse and redistribute as freely as possible in any form whatsoever
 * and for any purposes, including without limitation commercial purposes.
 * These owners may contribute to the Commons to promote the ideal of a free
 * culture and the further production of creative, cultural and scientific
 * works, or to gain reputation or greater distribution for their Work in
 * part through the use and efforts of others.
 *
 * For these and/or other purposes and motivations, and without any
 * expectation of additional consideration or compensation, the person
 * associating CC0 with a Work (the "Affirmer"), to the extent that he or she
 * is an owner of Copyright and Related Rights in the Work, voluntarily
 * elects to apply CC0 to the Work and publicly distribute the Work under its
 * terms, with knowledge of his or her Copyright and Related Rights in the
 * Work and the meaning and intended legal effect of CC0 on those rights.
 *
 * 1. Copyright and Related Rights. A Work made available under CC0 may be
 * protected by copyright and related or neighboring rights ("Copyright and
 * Related Rights"). Copyright and Related Rights include, but are not
 * limited to, the following:
 *
 *   i. the right to reproduce, adapt, distribute, perform, display,
 *      communicate, and translate a Work;
 *  ii. moral rights retained by the original author(s) and/or performer(s);
 * iii. publicity and privacy rights pertaining to a person's image or
 *      likeness depicted in a Work;
 *  iv. rights protecting against unfair competition in regards to a Work,
 *      subject to the limitations in paragraph 4(a), below;
 *   v. rights protecting the extraction, dissemination, use and reuse of data
 *      in a Work;
 *  vi. database rights (such as those arising under Directive 96/9/EC of the
 *      European Parliament and of the Council of 11 March 1996 on the legal
 *      protection of databases, and under any national implementation
 *      thereof, including any amended or successor version of such
 *      directive); and
 * vii. other similar, equivalent or corresponding rights throughout the
 *      world based on applicable law or treaty, and any national
 *      implementations thereof.
 *
 * 2. Waiver. To the greatest extent permitted by, but not in contravention
 * of, applicable law, Affirmer hereby overtly, fully, permanently,
 * irrevocably and unconditionally waives, abandons, and surrenders all of
 * Affirmer's Copyright and Related Rights and associated claims and causes
 * of action, whether now known or unknown (including existing as well as
 * future claims and causes of action), in the Work (i) in all territories
 * worldwide, (ii) for the maximum duration provided by applicable law or
 * treaty (including future time extensions), (iii) in any current or future
 * medium and for any number of copies, and (iv) for any purpose whatsoever,
 * including without limitation commercial, advertising or promotional
 * purposes (the "Waiver"). Affirmer makes the Waiver for the benefit of each
 * member of the public at large and to the detriment of Affirmer's heirs and
 * successors, fully intending that such Waiver shall not be subject to
 * revocation, rescission, cancellation, termination, or any other legal or
 * equitable action to disrupt the quiet enjoyment of the Work by the public
 * as contemplated by Affirmer's express Statement of Purpose.
 *
 * 3. Public License Fallback. Should any part of the Waiver for any reason
 * be judged legally invalid or ineffective under applicable law, then the
 * Waiver shall be preserved to the maximum extent permitted taking into
 * account Affirmer's express Statement of Purpose. In addition, to the
 * extent the Waiver is so judged Affirmer hereby grants to each affected
 * person a royalty-free, non transferable, non sublicensable, non exclusive,
 * irrevocable and unconditional license to exercise Affirmer's Copyright and
 * Related Rights in the Work (i) in all territories worldwide, (ii) for the
 * maximum duration provided by applicable law or treaty (including future
 * time extensions), (iii) in any current or future medium and for any number
 * of copies, and (iv) for any purpose whatsoever, including without
 * limitation commercial, advertising or promotional purposes (the
 * "License"). The License shall be deemed effective as of the date CC0 was
 * applied by Affirmer to the Work. Should any part of the License for any
 * reason be judged legally invalid or ineffective under applicable law, such
 * partial invalidity or ineffectiveness shall not invalidate the remainder
 * of the License, and in such case Affirmer hereby affirms that he or she
 * will not (i) exercise any of his or her remaining Copyright and Related
 * Rights in the Work or (ii) assert any associated claims and causes of
 * action with respect to the Work, in either case contrary to Affirmer's
 * express Statement of Purpose.
 *
 * 4. Limitations and Disclaimers.
 *
 *  a. No trademark or patent rights held by Affirmer are waived, abandoned,
 *     surrendered, licensed or otherwise affected by this document.
 *  b. Affirmer offers the Work as-is and makes no representations or
 *     warranties of any kind concerning the Work, express, implied,
 *     statutory or otherwise, including without limitation warranties of
 *     title, merchantability, fitness for a particular purpose, non
 *     infringement, or the absence of latent or other defects, accuracy, or
 *     the present or absence of errors, whether or not discoverable, all to
 *     the greatest extent permissible under applicable law.
 *  c. Affirmer disclaims responsibility for clearing rights of other persons
 *     that may apply to the Work or any use thereof, including without
 *     limitation any person's Copyright and Related Rights in the Work.
 *     Further, Affirmer disclaims responsibility for obtaining any necessary
 *     consents, permissions or other rights required for any use of the
 *     Work.
 *  d. Affirmer understands and acknowledges that Creative Commons is not a
 *     party to this document and has no duty or obligation with respect to
 *     this CC0 or use of the Work.
 *
 ******************************************************************************/

#include <fdm/models/fdm_PistonEngine.h>

#include <fdm/utils/fdm_Units.h>
#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

PistonEngine::PistonEngine() :
    _state ( Stopped ),

    _rpm_min      ( 0.0 ),
    _rpm_max      ( 0.0 ),
    _starter      ( 0.0 ),
    _displacement ( 0.0 ),
    _inertia      ( 0.0 ),
    _specFuelCons ( 0.0 ),

    _rpm      ( 0.0 ),
    _map      ( 0.0 ),
    _power    ( 0.0 ),
    _torque   ( 0.0 ),
    _airFlow  ( 0.0 ),
    _fuelFlow ( 0.0 )
{}

////////////////////////////////////////////////////////////////////////////////

PistonEngine::~PistonEngine() {}

////////////////////////////////////////////////////////////////////////////////

void PistonEngine::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_rpm_min      , "rpm_min"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_rpm_max      , "rpm_max"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_starter      , "starter"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_displacement , "displacement" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_inertia      , "inertia"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_specFuelCons , "sfc"          );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_power_rpm      , "power_rpm"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_power_throttle , "power_throttle" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_power_altitude , "power_altitude" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_mixture        , "mixture"        );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_power_factor   , "power_factor"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_map_throttle   , "map_throttle"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_map_rpm        , "map_rpm"        );

        if ( result != FDM_SUCCESS ) XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
    else
    {
        XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
}

////////////////////////////////////////////////////////////////////////////////

void PistonEngine::update( double throttleLever,
                           double mixtureLever,
                           double rpm,
                           double airPressure,
                           double airDensity,
                           double densityAlt,
                           bool fuel,
                           bool starter,
                           bool magneto_l,
                           bool magneto_r )
{
    double omega = M_PI * rpm / 30.0;

    _rpm = rpm;
    _map = getManifoldAbsolutePressure( throttleLever, _rpm, airPressure );
    _power = getNetPower( throttleLever, mixtureLever, _rpm, airDensity, densityAlt,
                          fuel, magneto_l, magneto_r );

    _airFlow = 0.5 * _displacement * airDensity * ( _rpm / 60.0 );
    _fuelFlow = Misc::max( 0.0, _power ) * _specFuelCons;

    // engine torque [N*m]
    _torque = ( omega > 1.0 ) ? _power / omega : _power;

    // state
    if ( _power > 0.0 || ( _rpm > _rpm_min && fuel && ( magneto_l || magneto_r ) ) )
    {
        _state = Running;
    }
    else
    {
        _state = Stopped;

        if ( starter )
        {
            _state = Starting;
            _torque += _starter;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void PistonEngine::setRPM( double rpm )
{
    _rpm = Misc::max( 0.0, rpm );
}

////////////////////////////////////////////////////////////////////////////////

double PistonEngine::getManifoldAbsolutePressure( double throttleLever,
                                                  double rpm, double airPressure )
{
    double map = airPressure
            * _map_throttle.getValue( throttleLever )
            * _map_rpm.getValue( rpm );

    map = Misc::max( 0.0, map );

    return map;
}

////////////////////////////////////////////////////////////////////////////////

double PistonEngine::getFuelToAirRatio( double mixture, double airDensity )
{
    return mixture * (1.225 / airDensity );
}

////////////////////////////////////////////////////////////////////////////////

double PistonEngine::getPowerFactor( double mixture, double airDensity, bool fuel,
                                     bool magneto_l, bool magneto_r )
{
    double fuelToAirRatio = getFuelToAirRatio( mixture, airDensity );

    // Allerton D.: Principles of Flight Simulation, p.130
    double powerFactor = _power_factor.getValue( fuelToAirRatio );

    if ( !fuel )
    {
        // no fuel - engine starving
        powerFactor = 0.0;
    }
    else if ( !magneto_l && !magneto_r )
    {
        // both magnetos disabled
        powerFactor = 0.0;
    }
    else if ( ( magneto_l && !magneto_r ) || ( !magneto_l && magneto_r ) )
    {
        // 5% reduction in power caused by the reduced effectiveness of the combustion
        // Allerton D.: Principles of Flight Simulation, p.131
        powerFactor *= 0.95;
    }

    powerFactor = Misc::satur( 0.0, 1.0, powerFactor );

    return powerFactor;
}

////////////////////////////////////////////////////////////////////////////////

double PistonEngine::getNetPower( double throttleLever, double mixtureLever, double rpm,
                                  double airDensity, double densityAltitude,
                                  bool fuel, bool magneto_l, bool magneto_r )
{
    double power = _power_rpm.getValue( rpm );
    power *= _power_throttle.getValue( throttleLever );
    power *= _power_altitude.getValue( densityAltitude );
    power *= getPowerFactor( _mixture.getValue( mixtureLever ), airDensity,
                             fuel, magneto_l, magneto_r );

    if ( rpm < _rpm_min ) power = 0.0;

    return power;
}
