/****************************************************************************//*
 * Copyright (C) 2020 Marek M. Cel
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

#include <fdm_xf/xf_Engine.h>

#ifdef _MSC_VER
#   include <algorithm>
#endif

#include <fdm/utils/fdm_Misc.h>
#include <fdm/utils/fdm_Units.h>
#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

XF_Engine::XF_Engine() :
    _state ( Stopped ),

    _thrust_mil ( 0.0 ),
    _thrust_ab  ( 0.0 ),

    _tc_tit ( 1.0 ),

    _tsfc    ( 0.0 ),
    _tsfc_ab ( 0.0 ),

    _n1_idle ( 0.0 ),
    _n2_idle ( 0.0 ),
    _n1_ab   ( 0.0 ),
    _n2_ab   ( 0.0 ),
    _n1_max  ( 0.0 ),
    _n2_max  ( 0.0 ),

    _n1_setpoint ( 0.0 ),
    _n2_setpoint ( 0.0 ),

    _tit_setpoint ( 0.0 ),

    _pow_command ( 0.0 ),
    _pow ( 0.0 ),

    _thrust_tc_inv ( 1.0 ),
    _tit_tc_actual ( 1.0 ),

    _temperature ( 15.0 ),

    _n1 ( 0.0 ),
    _n2 ( 0.0 ),
    _tit ( 0.0 ),
    _fuelFlow ( 0.0 ),
    _thrust ( 0.0 ),

    _afterburner ( false )
{}

////////////////////////////////////////////////////////////////////////////////

XF_Engine::~XF_Engine() {}

////////////////////////////////////////////////////////////////////////////////

void XF_Engine::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        _n1_idle = 0.0;
        _n2_idle = 0.0;
        _n1_ab   = 0.0;
        _n2_ab   = 0.0;
        _n1_max  = 0.0;
        _n2_max  = 0.0;

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _pos_bas, "position" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _thrust_mil , "thrust_mil" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _thrust_ab  , "thrust_ab"  );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _ab_threshold, "ab_threshold" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _tc_n1, "time_constant_n1" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _tc_n2, "time_constant_n2" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _tc_thrust, "time_constant_thrust" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _tc_tit, "time_constant_tit" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _tsfc    , "tsfc"    );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _tsfc_ab , "tsfc_ab" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _n1_throttle, "n1_throttle" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _n2_throttle, "n2_throttle" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _tit_n2, "tit_n2" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _tf_idle , "thrust_factor_idle" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _tf_mil  , "thrust_factor_mil"  );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _tf_ab   , "thrust_factor_ab"   );

        if ( result == FDM_SUCCESS )
        {
            _n1_idle = _n1_throttle.getValueMin();
            _n2_idle = _n2_throttle.getValueMin();

            _n1_ab = _n1_throttle.getValue( _ab_threshold );
            _n2_ab = _n2_throttle.getValue( _ab_threshold );

            _n1_max = _n1_throttle.getValueMax();
            _n2_max = _n2_throttle.getValueMax();
        }
        else
        {
            XmlUtils::throwError( __FILE__, __LINE__, dataNode );
        }
    }
    else
    {
        XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
}

////////////////////////////////////////////////////////////////////////////////

void XF_Engine::initialize( bool engineOn )
{
    if ( engineOn )
    {
        _n1 = _n1_setpoint = _n1_idle;
        _n2 = _n2_setpoint = _n2_idle;

        _tit = _tit_n2.getValue( _n2_idle );
    }
    else
    {
        _n1 = _n1_setpoint = 0.0;
        _n2 = _n2_setpoint = 0.0;

        _tit = _temperature;
    }
}

////////////////////////////////////////////////////////////////////////////////

void XF_Engine::computeThrust( double machNumber, double airDensity )
{
    if ( _state == Running )
    {
        // (NASA-TP-1538, p.218)
        // (NASA-TN-D-8176, p.152)
        if ( _afterburner )
        {
            double t_mil = _thrust_mil * _tf_mil .getValue( machNumber, airDensity );
            double t_ab  = _thrust_ab  * _tf_ab  .getValue( machNumber, airDensity );

            _thrust = t_mil + ( t_ab - t_mil ) * ( _pow - 0.5 ) / 0.5;
        }
        else
        {
            double t_idle = _thrust_mil * _tf_idle .getValue( machNumber, airDensity );
            double t_mil  = _thrust_mil * _tf_mil  .getValue( machNumber, airDensity );

            _thrust = t_idle + ( t_mil - t_idle ) * std::min( 0.5, _pow ) / 0.5;
        }
    }
    else
    {
        _thrust = 0.0;
    }
}

////////////////////////////////////////////////////////////////////////////////

void XF_Engine::integrate( double timeStep )
{
    double pow_deriv = _thrust_tc_inv * ( _pow_command - _pow );
    _pow = _pow + timeStep * pow_deriv;

    double epsilon_n1 = 0.01 * ( _n1 < _n1_idle ? _n1_idle : _n1_max );
    double epsilon_n2 = 0.01 * ( _n2 < _n2_idle ? _n2_idle : _n2_max );

    double n1_tc = _tc_n1.getValue( _n1_setpoint - _n1 );
    double n2_tc = _tc_n1.getValue( _n2_setpoint - _n2 );

    _n1 = fabs( _n1 - _n1_setpoint ) < epsilon_n1 ? _n1_setpoint : Misc::inertia( _n1_setpoint, _n1, timeStep, n1_tc );
    _n2 = fabs( _n2 - _n2_setpoint ) < epsilon_n2 ? _n2_setpoint : Misc::inertia( _n2_setpoint, _n2, timeStep, n2_tc );

    _tit = Misc::inertia( _tit_setpoint, _tit, timeStep, _tit_tc_actual );
}

////////////////////////////////////////////////////////////////////////////////

void XF_Engine::update( double throttle, double temperature,
                         double machNumber, double airDensity,
                         bool fuel, bool starter )
{
    computeThrust( machNumber, airDensity );

    _temperature = temperature;

    if ( _n1 >= _n1_idle && _n2 >= _n2_idle && fuel )
    {
        _state = Running;

        if ( throttle < _ab_threshold )
        {
            // military
            if ( _pow < 0.5 )
            {
                _pow_command = 0.5 * throttle / _ab_threshold;
                _thrust_tc_inv = 1.0 / _tc_thrust.getValue( _pow_command - _pow );

                _n1_setpoint = _n1_throttle.getValue( throttle );
                _n2_setpoint = _n2_throttle.getValue( throttle );
            }
            else
            {
                _pow_command = 0.4;
                _thrust_tc_inv = 5.0;

                _n1_setpoint = _n1_ab;
                _n2_setpoint = _n2_ab;
            }
        }
        else
        {
            // afterburner
            if ( _pow < 0.5 )
            {
                _pow_command = 0.6;
                _thrust_tc_inv = 1.0 / _tc_thrust.getValue( _pow_command - _pow );

                _n1_setpoint = _n1 < _n2_ab ? 1.2 * _n2_ab : _n1_throttle.getValue( throttle );
                _n2_setpoint = _n2 < _n2_ab ? 1.2 * _n2_ab : _n2_throttle.getValue( throttle );
            }
            else
            {
                _pow_command = 0.5 + 0.5 * ( throttle - _ab_threshold ) / ( 1.0 - _ab_threshold );
                _thrust_tc_inv = 5.0;

                _n1_setpoint = _n1_throttle.getValue( throttle );
                _n2_setpoint = _n2_throttle.getValue( throttle );
            }
        }

        _tit_tc_actual = _tc_tit;
        _tit_setpoint = _tit_n2.getValue( _n2 );

        _afterburner = _pow >= 0.5 && _n1 >= _n1_ab && _n2 >= _n2_ab;

        if ( _afterburner )
        {
            _fuelFlow = _thrust * _tsfc_ab;
        }
        else
        {
            _fuelFlow = _thrust * _tsfc;
        }
    }
    else
    {
        if ( starter )
        {
            _state = Starting;

            _pow_command = 0.0; // TODO

            _n1_setpoint = 1.2 * _n1_idle;
            _n2_setpoint = 1.2 * _n2_idle;

            _tit_setpoint = _temperature; // TODO

            _fuelFlow = 0.0; // TODO
        }
        else
        {
            _state = Stopped;

            _pow_command = 0.0;
            _pow = 0.0;

            _n1_setpoint = 0.0;
            _n2_setpoint = 0.0;

            _tit_setpoint = _temperature;

            _fuelFlow = 0.0;
        }

        _tit_tc_actual = 20.0;

        _afterburner = false;
    }
}
