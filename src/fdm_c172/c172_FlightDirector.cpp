/****************************************************************************//*
 * Copyright (C) 2019 Marek M. Cel
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

#include <fdm_c172/c172_FlightDirector.h>

#include <fdm/fdm_Log.h>
#include <fdm/utils/fdm_Misc.h>
#include <fdm/utils/fdm_Units.h>
#include <fdm/utils/fdm_WGS84.h>
#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

C172_FlightDirector::C172_FlightDirector() :
    _lat_mode ( LM_FD ),
    _ver_mode ( VM_FD ),

    _arm_mode ( ARM_NONE ),

    _pid_alt     ( 0.0, 0.0, 0.0, -M_PI_2  , M_PI_2  ),
    _pid_ias     ( 0.0, 0.0, 0.0, -M_PI_2  , M_PI_2  ),
    _pid_vs      ( 0.0, 0.0, 0.0, -M_PI_2  , M_PI_2  ),
    _pid_arm     ( 0.0, 0.0, 0.0, -DBL_MAX , DBL_MAX ),
    _pid_gs      ( 0.0, 0.0, 0.0, -M_PI_2  , M_PI_2  ),
    _pid_nav_ang ( 0.0, 0.0, 0.0, -M_PI_2  , M_PI_2  ),
    _pid_nav_lin ( 0.0, 0.0, 0.0, -M_PI_2  , M_PI_2  ),
    _pid_apr_ang ( 0.0, 0.0, 0.0, -M_PI_2  , M_PI_2  ),
    _pid_apr_lin ( 0.0, 0.0, 0.0, -M_PI_2  , M_PI_2  ),
    _pid_hdg     ( 0.0, 0.0, 0.0, -M_PI_2  , M_PI_2  ),
    _pid_trn     ( 0.0, 0.0, 0.0, -DBL_MAX , DBL_MAX ),

    _max_roll  ( 0.0 ),
    _min_pitch ( 0.0 ),
    _max_pitch ( 0.0 ),
    _max_yaw   ( 0.0 ),

    _max_rate_roll  ( 0.0 ),
    _max_rate_pitch ( 0.0 ),
    _max_rate_tr    ( 0.0 ),

    _heading_act ( 0.0 ),

    _climbRate_act ( 0.0 ),
    _climbRate_tc  ( 0.0 ),

    _turnRate ( 0.0 ),

    _min_dh_arm  ( 0.0 ),

    _nav_dev_max ( 0.0 ),
    _apr_dev_max ( 0.0 ),

    _ver_dev_prev ( 0.0 ),

    _turnRateMode ( false )
{
    _pid_alt     .setAntiWindup( PID::Calculation );
    _pid_ias     .setAntiWindup( PID::Calculation );
    _pid_vs      .setAntiWindup( PID::Calculation );
    _pid_arm     .setAntiWindup( PID::Calculation );
    _pid_gs      .setAntiWindup( PID::Calculation );
    _pid_nav_ang .setAntiWindup( PID::Calculation );
    _pid_nav_lin .setAntiWindup( PID::Calculation );
    _pid_apr_ang .setAntiWindup( PID::Calculation );
    _pid_apr_lin .setAntiWindup( PID::Calculation );
    _pid_hdg     .setAntiWindup( PID::Calculation );
    _pid_trn     .setAntiWindup( PID::Calculation );
}

////////////////////////////////////////////////////////////////////////////////

C172_FlightDirector::~C172_FlightDirector() {}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _max_roll  , "max_roll"  );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _min_pitch , "min_pitch" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _max_pitch , "max_pitch" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _max_yaw   , "max_yaw"   );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _max_rate_roll  , "max_rate_roll"  );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _max_rate_pitch , "max_rate_pitch" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _max_rate_tr    , "max_rate_tr"    );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _climbRate_tc, "climb_rate_tc" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _min_dh_arm, "min_dh_arm" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _nav_dev_max, "nav_dev_max" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _apr_dev_max, "apr_dev_max" );

        if ( result != FDM_SUCCESS ) XmlUtils::throwError( __FILE__, __LINE__, dataNode );

        XmlNode nodeALT = dataNode.getFirstChildElement( "mode_alt" );
        XmlNode nodeIAS = dataNode.getFirstChildElement( "mode_ias" );
        XmlNode nodeVS  = dataNode.getFirstChildElement( "mode_vs"  );
        XmlNode nodeARM = dataNode.getFirstChildElement( "mode_arm" );
        XmlNode nodeGS  = dataNode.getFirstChildElement( "mode_gs"  );

        XmlNode nodeNAV_ANG = dataNode.getFirstChildElement( "mode_nav_ang" );
        XmlNode nodeNAV_LIN = dataNode.getFirstChildElement( "mode_nav_lin" );
        XmlNode nodeAPR_ANG = dataNode.getFirstChildElement( "mode_apr_ang" );
        XmlNode nodeAPR_LIN = dataNode.getFirstChildElement( "mode_apr_lin" );
        XmlNode nodeHDG = dataNode.getFirstChildElement( "mode_hdg" );
        XmlNode nodeTRN = dataNode.getFirstChildElement( "mode_trn" );

        readMode( nodeALT , _pid_alt , _min_pitch , _max_pitch );
        readMode( nodeIAS , _pid_ias , _min_pitch , _max_pitch );
        readMode( nodeVS  , _pid_vs  , _min_pitch , _max_pitch );
        readMode( nodeARM , _pid_arm , -DBL_MAX   , DBL_MAX    );
        readMode( nodeGS  , _pid_gs  , _min_pitch , _max_pitch );

        readMode( nodeNAV_ANG, _pid_nav_ang, -_max_yaw, _max_yaw );
        readMode( nodeNAV_LIN, _pid_nav_lin, -_max_yaw, _max_yaw );
        readMode( nodeAPR_ANG, _pid_apr_ang, -_max_yaw, _max_yaw );
        readMode( nodeAPR_LIN, _pid_apr_lin, -_max_yaw, _max_yaw );
        readMode( nodeHDG , _pid_hdg , -DBL_MAX   , DBL_MAX   );
        readMode( nodeTRN , _pid_trn , -_max_roll , _max_roll );

        disableHalfBank();
    }
    else
    {
        XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::update( double timeStep,
                                  double heading,
                                  double altitude, double airspeed,
                                  double turnRate, double climbRate,
                                  double distance,
                                  double lat_deviation, bool lat_active,
                                  double ver_deviation, bool ver_active )
{
    _turnRateMode = false;

    updateArmMode( distance, lat_deviation, lat_active );

    if ( _engaged )
    {
        if ( _lat_mode != LM_NAV && _lat_mode != LM_APR && _lat_mode != LM_BC )
        {
            _heading_act = _heading;
        }

        updateLatFD( timeStep );
        updateLatNAV( timeStep, distance, lat_deviation );
        updateLatAPR( timeStep, distance, lat_deviation );
        updateLatBC();

        updateLatHDG( timeStep, heading, turnRate );
        updateLatTRN( timeStep, turnRate, airspeed );

        updateVerFD( timeStep );
        updateVerALT( timeStep, altitude );
        updateVerIAS( timeStep, airspeed );
        updateVerVS( timeStep, climbRate );
        updateVerARM( timeStep, altitude, climbRate );
        updateVerGS( timeStep, ver_deviation, ver_active );

        _cmd_roll  = Misc::satur( -_max_roll  , _max_roll  , _cmd_roll  );
        _cmd_pitch = Misc::satur(  _min_pitch , _max_pitch , _cmd_pitch );

        _ver_dev_prev = ver_deviation;
    }
    else
    {
        _pid_alt .reset();
        _pid_ias .reset();
        _pid_vs  .reset();
        _pid_arm .reset();
        _pid_hdg .reset();

        _cmd_roll  = 0.0;
        _cmd_pitch = 0.0;

        _climbRate_act = climbRate;
        _turnRate = turnRate;

        _ver_dev_prev = 0.0;
    }
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::disableHalfBank()
{
    _pid_trn .setMin( -_max_roll );
    _pid_trn .setMax(  _max_roll );
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::enableHalfBank()
{
    double min_roll = -0.5 * _max_roll;
    double max_roll =  0.5 * _max_roll;

    _pid_trn .setMin( min_roll );
    _pid_trn .setMax( max_roll );
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::toggleLatMode( LatMode lat_mode )
{
    if ( _lat_mode == lat_mode )
        _lat_mode = LM_FD;
    else
        _lat_mode = lat_mode;
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::toggleVerMode( VerMode ver_mode )
{
    if ( _ver_mode == ver_mode )
        _ver_mode = VM_FD;
    else
        _ver_mode = ver_mode;
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::readMode( const fdm::XmlNode &dataNode, PID &pid, double min, double max )
{
    if ( dataNode.isValid() )
    {
        XmlNode nodePID = dataNode.getFirstChildElement( "pid" );
        readPID( nodePID, pid, min, max );
    }
    else
    {
        XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::readPID( const fdm::XmlNode &dataNode, PID &pid, double min, double max )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        double kp = 0.0;
        double ki = 0.0;
        double kd = 0.0;

        double temp_min = pid.getMin();
        double temp_max = pid.getMax();

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, kp, "kp", true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, ki, "ki", true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, kd, "kd", true );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, temp_min, "min", true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, temp_max, "max", true );

        if ( result == FDM_SUCCESS )
        {
            if ( temp_min < min ) temp_min = min;
            if ( temp_max > max ) temp_max = max;

            pid.setKp( kp );
            pid.setKi( ki );
            pid.setKd( kd );

            pid.setMin( temp_min );
            pid.setMax( temp_max );
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

void C172_FlightDirector::updateArmMode( double distance, double lat_deviation, bool lat_active )
{
    if ( _arm_mode == ARM_NAV )
    {
        if ( lat_active && fabs( lat_deviation ) < _nav_dev_max )
        {
            _arm_mode = ARM_NONE;
            _lat_mode = LM_NAV;
        }
    }
    else if ( _arm_mode == ARM_NONE && _lat_mode == LM_NAV && fabs( lat_deviation ) > _nav_dev_max )
    {
        if ( distance > 1.0e-9 )
        {
            double lin_dev_max = _pid_nav_lin.getMax() / _pid_nav_lin.getKp();
            double lin_deviation = distance * sin( lat_deviation );

            if ( fabs( lin_deviation ) > lin_dev_max )
                _arm_mode = ARM_NAV;
        }
        else
        {
            double ang_dev_max = _pid_nav_ang.getMax() / _pid_nav_ang.getKp();

            if ( fabs( lat_deviation ) > ang_dev_max )
                _arm_mode = ARM_NAV;
        }
    }

    if ( _arm_mode == ARM_APR )
    {
        if ( lat_active && fabs( lat_deviation ) < _apr_dev_max )
        {
            _arm_mode = ARM_NONE;
            _lat_mode = LM_APR;
        }
    }
    else if ( _arm_mode == ARM_NONE && _lat_mode == LM_APR && fabs( lat_deviation ) > _apr_dev_max )
    {
        _arm_mode = ARM_APR;
    }
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::updateLatFD( double timeStep )
{
    if ( _lat_mode == LM_FD )
    {
        _cmd_roll = Misc::rate( timeStep, _max_rate_roll, _cmd_roll, 0.0 );
    }
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::updateLatNAV( double timeStep, double dme_distance, double hor_deviation )
{
    if ( _lat_mode == LM_NAV )
    {
        if ( _arm_mode == ARM_NAV )
        {
            _heading_act = hor_deviation > 0.0 ? _course + _max_yaw : _course - _max_yaw;
        }
        else
        {
            if ( dme_distance > 1.0e-9 )
            {
                double lin_deviation = dme_distance * sin( hor_deviation );
                _pid_nav_lin.update( timeStep, lin_deviation );
                _heading_act = _course + _pid_nav_lin.getValue();
            }
            else
            {
                _pid_nav_ang.update( timeStep, hor_deviation );
                _heading_act = _course + _pid_nav_ang.getValue();
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::updateLatAPR( double timeStep, double dme_distance, double hor_deviation )
{
    if ( _lat_mode == LM_APR )
    {
        if ( _arm_mode == ARM_APR )
        {
            _heading_act = hor_deviation > 0.0 ? _course + _max_yaw : _course - _max_yaw;
        }
        else
        {
            if ( dme_distance > 1.0e-9 )
            {
                double lin_deviation = dme_distance * sin( hor_deviation );
                _pid_apr_lin.update( timeStep, lin_deviation );
                _heading_act = _course + _pid_apr_lin.getValue();
            }
            else
            {
                _pid_apr_ang.update( timeStep, hor_deviation );
                _heading_act = _course + _pid_apr_ang.getValue();
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::updateLatBC() {}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::updateLatHDG( double timeStep, double heading, double turnRate )
{
    if ( _lat_mode == LM_HDG || _lat_mode == LM_NAV || _lat_mode == LM_APR || _lat_mode == LM_BC )
    {
        _turnRateMode = true;

        double delta_hdg = _heading_act - heading;

        while ( delta_hdg < -M_PI ) delta_hdg += 2.0 * M_PI;
        while ( delta_hdg >  M_PI ) delta_hdg -= 2.0 * M_PI;

        _pid_hdg.update( timeStep, delta_hdg );
        _turnRate = Misc::rate( timeStep, _max_rate_tr, _turnRate, _pid_hdg.getValue() );
    }
    else
    {
        _pid_hdg.setValue( turnRate );
    }
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::updateLatTRN( double timeStep, double turnRate, double airspeed )
{
    if ( _turnRateMode )
    {
        double roll = atan2( airspeed * _turnRate, fdm::WGS84::_g );

        _pid_trn.update( timeStep, _turnRate - turnRate );
        _cmd_roll = Misc::rate( timeStep, _max_rate_roll, _cmd_roll, roll + _pid_trn.getValue() );
    }
    else
    {
        _pid_trn.setValue( _cmd_roll );
        _turnRate = turnRate;
    }
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::updateVerFD( double timeStep )
{
    if ( _ver_mode == VM_FD )
        _cmd_pitch = Misc::rate( timeStep, _max_rate_pitch, _cmd_pitch, _pitch );
    else
        _pitch = _cmd_pitch;
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::updateVerALT( double timeStep, double altitude )
{
    if ( _ver_mode == VM_ALT )
    {
        _pid_alt.update( timeStep, _altitude - altitude );
        _cmd_pitch = Misc::rate( timeStep, _max_rate_pitch, _cmd_pitch, _pid_alt.getValue() );
    }
    else
    {
        _pid_alt.setValue( _cmd_pitch );
    }
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::updateVerIAS( double timeStep, double airspeed )
{
    if ( _ver_mode == VM_IAS )
    {
        _pid_ias.update( timeStep, _airspeed - airspeed );
        _cmd_pitch = Misc::rate( timeStep, _max_rate_pitch, _cmd_pitch, _pid_ias.getValue() );
    }
    else
    {
        _pid_ias.setValue( _cmd_pitch );
    }
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::updateVerVS( double timeStep, double climbRate )
{
    if ( _ver_mode == VM_VS || _ver_mode == VM_ARM )
    {
        _climbRate_act = Misc::inertia( _climbRate, _climbRate_act, timeStep, _climbRate_tc );
        _pid_vs.update( timeStep, _climbRate_act - climbRate );
        _cmd_pitch = Misc::rate( timeStep, _max_rate_pitch, _cmd_pitch, _pid_vs.getValue() );
    }
    else
    {
        _pid_vs.setValue( _cmd_pitch );
        _climbRate_act = climbRate;
    }
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::updateVerARM( double timeStep, double altitude, double climbRate )
{
    if ( _ver_mode == VM_ARM )
    {
        double delta_h = _altitude - altitude;

        if ( fabs( delta_h ) < _min_dh_arm )
        {
            _ver_mode = VM_ALT;
        }
        else
        {
            _pid_arm.update( timeStep, delta_h );
            _climbRate = _pid_arm.getValue();
        }
    }
    else
    {
        _pid_arm.setValue( climbRate );
    }
}

////////////////////////////////////////////////////////////////////////////////

void C172_FlightDirector::updateVerGS( double timeStep, double ver_deviation, bool ver_active )
{
    if ( ver_active && _lat_mode == LM_APR && _ver_mode != VM_GS
      && ( Misc::sign( _ver_dev_prev ) != Misc::sign( ver_deviation ) ) )
    {
        _ver_mode = VM_GS;
    }

    if ( _ver_mode == VM_GS )
    {
        _pid_gs.update( timeStep, ver_deviation );
        _cmd_pitch = Misc::rate( timeStep, _max_rate_pitch, _cmd_pitch, _pid_gs.getValue() );
    }
    else
    {
        _pid_gs.setValue( _cmd_pitch );
    }
}
