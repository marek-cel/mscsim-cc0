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
 ******************************************************************************/

#include <fdm/auto/fdm_Autopilot.h>

#include <fdm/utils/fdm_Misc.h>
#include <fdm/utils/fdm_Units.h>

#include <fdm/xml/fdm_XmlUtils.h>

#include <iostream>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

Autopilot::Autopilot( FlightDirector *fd ) :
    _fd ( fd ),

    _pid_r ( 0.0, 0.0, 0.0, -1.0, 1.0 ),
    _pid_p ( 0.0, 0.0, 0.0, -1.0, 1.0 ),
    _pid_y ( 0.0, 0.0, 0.0, -1.0, 1.0 ),

    _max_rate_roll  ( DBL_MAX ),
    _max_rate_pitch ( DBL_MAX ),
    _max_rate_yaw   ( DBL_MAX ),

    _min_roll  ( -M_PI_2  ),
    _max_roll  (  M_PI_2  ),
    _min_pitch ( -M_PI_2  ),
    _max_pitch (  M_PI_2  ),
    _min_alt   (  0.0     ),
    _max_alt   (  DBL_MAX ),
    _min_ias   (  0.0     ),
    _max_ias   (  DBL_MAX ),
    _min_vs    ( -DBL_MAX ),
    _max_vs    (  DBL_MAX ),

    _ctrl_roll  ( 0.0 ),
    _ctrl_pitch ( 0.0 ),
    _ctrl_yaw   ( 0.0 ),

    _yaw_damper ( false ),

    _testing ( false ),
    _engaged ( false )
{
    _pid_r.setAntiWindup( PID::Calculation );
    _pid_p.setAntiWindup( PID::Calculation );
    _pid_y.setAntiWindup( PID::Calculation );

    _gain_ias_r = Table1::oneRecordTable( 1.0 );
    _gain_ias_p = Table1::oneRecordTable( 1.0 );
    _gain_ias_y = Table1::oneRecordTable( 1.0 );
}

////////////////////////////////////////////////////////////////////////////////

Autopilot::~Autopilot() {}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_min_roll  , "min_roll"  , true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_max_roll  , "max_roll"  , true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_min_pitch , "min_pitch" , true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_max_pitch , "max_pitch" , true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_min_alt   , "min_alt"   , true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_max_alt   , "max_alt"   , true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_min_ias   , "min_ias"   , true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_max_ias   , "max_ias"   , true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_min_vs    , "min_vs"    , true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_max_vs    , "max_vs"    , true );

        if ( result == FDM_SUCCESS )
        {
            XmlNode nodeRoll  = dataNode.getFirstChildElement( "ctrl_roll"  );
            XmlNode nodePitch = dataNode.getFirstChildElement( "ctrl_pitch" );
            XmlNode nodeYaw   = dataNode.getFirstChildElement( "ctrl_yaw"   );

            readChannel( nodeRoll  , &_max_rate_roll  , &_pid_r, &_gain_ias_r );
            readChannel( nodePitch , &_max_rate_pitch , &_pid_p, &_gain_ias_p );
            readChannel( nodeYaw   , &_max_rate_yaw   , &_pid_y, &_gain_ias_y );
        }
        else
        {
            XmlUtils::throwError( __FILE__, __LINE__, dataNode );
        }

        XmlNode nodeFlightDirector = dataNode.getFirstChildElement( "flight_director" );
        _fd->readData( nodeFlightDirector );
    }
    else
    {
        XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::initialize() {}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::update( double timeStep,
                        double roll, double pitch, double heading,
                        double altitude, double airspeed,
                        double turn_rate, double yaw_rate, double climb_rate,
                        double dme_distance,
                        double nav_deviation, bool nav_active,
                        double loc_deviation, bool loc_active,
                        double gs_deviation,  bool gs_active )
{
    _fd->update( timeStep,
                 heading,
                 altitude, airspeed,
                 turn_rate, climb_rate,
                 dme_distance,
                 nav_deviation, nav_active,
                 loc_deviation, loc_active,
                 gs_deviation, gs_active );

    if ( _engaged && _fd->isEngaged() )
    {
        _pid_r.update( timeStep, _fd->getCmdRoll()  - roll  );
        _pid_p.update( timeStep, _fd->getCmdPitch() - pitch );
    }
    else
    {
        _pid_r.reset();
        _pid_p.reset();

        _ctrl_roll  = 0.0;
        _ctrl_pitch = 0.0;
    }

    if ( _yaw_damper )
    {
        _pid_y.update( timeStep, -yaw_rate );
    }
    else
    {
        _pid_y.reset();
        _ctrl_yaw = 0.0;
    }

    double ctrl_roll  = _gain_ias_r.getValue( airspeed ) * _pid_r.getValue();
    double ctrl_pitch = _gain_ias_p.getValue( airspeed ) * _pid_p.getValue();
    double ctrl_yaw   = _gain_ias_y.getValue( airspeed ) * _pid_y.getValue();

//    if ( _softRide )
//    {
//        ctrl_roll  *= _softRideCoef;
//        ctrl_pitch *= _softRideCoef;
//        ctrl_yaw   *= _softRideCoef;
//    }

    _ctrl_roll  = Misc::rate( timeStep, _max_rate_roll  , _ctrl_roll  , ctrl_roll  );
    _ctrl_pitch = Misc::rate( timeStep, _max_rate_pitch , _ctrl_pitch , ctrl_pitch );
    _ctrl_yaw   = Misc::rate( timeStep, _max_rate_yaw   , _ctrl_yaw   , ctrl_yaw   );

    _ctrl_roll  = Misc::satur( -1.0, 1.0, _ctrl_roll  );
    _ctrl_pitch = Misc::satur( -1.0, 1.0, _ctrl_pitch );
    _ctrl_yaw   = Misc::satur( -1.0, 1.0, _ctrl_yaw   );
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::setAltitude( double altitude )
{
    _fd->setAltitude( fdm::Misc::satur( _min_alt, _max_alt, altitude ) );
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::setAirspeed( double airspeed )
{
    _fd->setAirspeed( fdm::Misc::satur( _min_ias, _max_ias, airspeed ) );
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::setClimbRate( double climb_rate )
{
    _fd->setClimbRate( fdm::Misc::satur( _min_vs, _max_vs, climb_rate ) );
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::setHeading( double heading )
{
    _fd->setHeading( heading );
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::setCourse( double course )
{
    _fd->setCourse( course );
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::setRoll( double roll )
{
    _fd->setRoll( Misc::satur( _min_roll, _max_roll, roll ) );
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::setPitch( double pitch )
{
    _fd->setPitch( Misc::satur( _min_pitch, _max_pitch, pitch ) );
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::readChannel( const XmlNode &dataNode, double *max_rate,
                             PID *pid, Table1 *gain_ias )
{
    if ( dataNode.isValid() )
    {
        int result = XmlUtils::read( dataNode, max_rate, "max_rate" );

        if ( result != FDM_SUCCESS ) XmlUtils::throwError( __FILE__, __LINE__, dataNode );

        XmlNode nodePID = dataNode.getFirstChildElement( "pid" );

        if ( FDM_SUCCESS != XmlUtils::read( nodePID, pid, -1.0, 1.0 ) )
        {
            XmlUtils::throwError( __FILE__, __LINE__, dataNode );
        }

        result = XmlUtils::read( dataNode, gain_ias, "gain_ias", true );

        if ( result != FDM_SUCCESS ) XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
    else
    {
        XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
}
