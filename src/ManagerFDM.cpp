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

#include <ManagerFDM.h>

#include <cstring>

#include <fdm/fdm_Log.h>

#include <fdm/utils/fdm_String.h>
#include <fdm/utils/fdm_Time.h>
#include <fdm/utils/fdm_Units.h>

#include <fdm_aw101/aw101_Aircraft.h>
#include <fdm_c130/c130_Aircraft.h>
#include <fdm_c172/c172_Aircraft.h>
#include <fdm_f16/f16_Aircraft.h>
#include <fdm_f35a/f35a_Aircraft.h>
#include <fdm_p51/p51_Aircraft.h>
#include <fdm_r44/r44_Aircraft.h>
#include <fdm_uh60/uh60_Aircraft.h>

#ifdef FDM_TEST
#   include <fdm_xf/xf_Aircraft.h>
#   include <fdm_xh/xh_Aircraft.h>
#endif

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

Manager::Manager() :
    _aircraft ( FDM_NULLPTR ),
    _recorder ( FDM_NULLPTR ),

    _stateInp ( DataInp::Idle ),
    _stateOut ( DataOut::Idle ),

    _initStep ( 0 ),

    _init_phi ( 0.0 ),
    _init_tht ( 0.0 ),
    _init_alt ( 0.0 ),

    _timeStep ( 0.0 ),
    _realTime ( 0.0 ),

    _compTimeMax  ( 0.0 ),
    _compTimeSum  ( 0.0 ),
    _compTimeSum2 ( 0.0 ),

    _timeStepRaw  ( 0.0 ),
    _timeStepMin  ( DBL_MAX ),
    _timeStepMax  ( 0.0 ),
    _timeStepSum  ( 0.0 ),
    _timeStepSum2 ( 0.0 ),

    _timeSteps ( 0 ),

    _stepsLT_def ( 0 ),
    _stepsGT_def ( 0 ),

    _verbose ( true )
{
    memset( &_dataInp, 0, sizeof(DataInp) );
    memset( &_dataOut, 0, sizeof(DataOut) );
}

////////////////////////////////////////////////////////////////////////////////

Manager::~Manager()
{
    FDM_DELPTR( _aircraft );
    FDM_DELPTR( _recorder );
}

////////////////////////////////////////////////////////////////////////////////

void Manager::step( double timeStep, const DataInp &dataInp, DataOut &dataOut )
{
    _timeStep = _timeStepRaw = timeStep;

    if ( _timeStep < FDM_TIME_STEP_MIN ) _timeStep = FDM_TIME_STEP_MIN;
    if ( _timeStep > FDM_TIME_STEP_MAX ) _timeStep = FDM_TIME_STEP_MAX;

    _dataInp = dataInp;

    updateStateInp();

    if ( _stateOut == DataOut::Idle )
    {
        _aircraftType = _dataInp.aircraftType;
    }

    switch ( _stateInp )
    {
        case DataInp::Idle:   updateStateIdle();   break;
        case DataInp::Init:   updateStateInit();   break;
        case DataInp::Work:   updateStateWork();   break;
        case DataInp::Freeze: updateStateFreeze(); break;
        case DataInp::Pause:  updateStatePause();  break;
        default:
        case DataInp::Stop:   updateStateStop();   break;
    }

    _dataOut.stateOut = _stateOut;

    dataOut = _dataOut;
}

////////////////////////////////////////////////////////////////////////////////

Aircraft* Manager::createAircraft( AircraftType aircraftType )
{
    Aircraft *aircraft = 0;

    switch ( aircraftType )
    {
    case DataInp::AW101:
        aircraft = new AW101_Aircraft( &_dataInp, &_dataOut );
        break;

    case DataInp::C130:
        aircraft = new C130_Aircraft( &_dataInp, &_dataOut );
        break;

    case DataInp::C172:
        aircraft = new C172_Aircraft( &_dataInp, &_dataOut );
        break;

    case DataInp::F16:
        aircraft = new F16_Aircraft( &_dataInp, &_dataOut );
        break;

    case DataInp::F35A:
        aircraft = new F35A_Aircraft( &_dataInp, &_dataOut );
        break;

    case DataInp::P51:
        aircraft = new P51_Aircraft( &_dataInp, &_dataOut );
        break;

    case DataInp::R44:
        aircraft = new R44_Aircraft( &_dataInp, &_dataOut );
        break;

    case DataInp::UH60:
        aircraft = new UH60_Aircraft( &_dataInp, &_dataOut );
        break;

#   ifdef FDM_TEST        
    case DataInp::XF:
        aircraft = new XF_Aircraft( &_dataInp, &_dataOut );
        break;

    case DataInp::XH:
        aircraft = new XH_Aircraft( &_dataInp, &_dataOut );
        break;
#   endif
    }

    return aircraft;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::initInFlight()
{
    if ( _stateOut != DataOut::Ready )
    {
        if ( _initStep == 0 && _verbose )
        {
            Log::i() << "In-flight initialization..." << std::endl;
        }

        updateInitialPositionAndAttitude();

        Aircraft::StateVector stateVector( _aircraft->getStateVect() );

        stateVector( _is_x  ) = _init_pos_wgs.x();
        stateVector( _is_y  ) = _init_pos_wgs.y();
        stateVector( _is_z  ) = _init_pos_wgs.z();
        stateVector( _is_e0 ) = _init_att_wgs.e0();
        stateVector( _is_ex ) = _init_att_wgs.ex();
        stateVector( _is_ey ) = _init_att_wgs.ey();
        stateVector( _is_ez ) = _init_att_wgs.ez();
        stateVector( _is_u  ) = _dataInp.initial.airspeed;
        stateVector( _is_v  ) = 0.0;
        stateVector( _is_w  ) = 0.0;
        stateVector( _is_p  ) = 0.0;
        stateVector( _is_q  ) = 0.0;
        stateVector( _is_r  ) = 0.0;

        _aircraft->setStateVector( stateVector );

        // TODO
        _stateOut = DataOut::Ready;

        if ( _verbose )
        {
            Log::i() << "In-flight initialization finished in " << _initStep << " steps" << std::endl;
            printState();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Manager::initOnGround()
{
    if ( _stateOut != DataOut::Ready )
    {
        if ( _initStep == 0 && _verbose )
        {
            Log::i() << "On-ground initialization..." << std::endl;
        }

        if ( _initStep == 0 )
        {
            _init_phi =  0.0;
            _init_tht =  0.0;
            _init_alt = FDM_MIN_INIT_ALTITUDE + _dataInp.ground.elevation;
        }

        for ( UInt32 i = 0; i < 1000 && _initStep < FDM_MAX_INIT_STEPS && _stateOut != DataOut::Ready; i++  )
        {
            Vector3 n_wgs = _aircraft->getIsect()->getNormal( _dataInp.initial.latitude,
                                                              _dataInp.initial.longitude );

            WGS84::Geo pos_geo;

            pos_geo.lat = _dataInp.initial.latitude;
            pos_geo.lon = _dataInp.initial.longitude;
            pos_geo.alt = _init_alt;

            Quaternion ned2bas( Angles( _init_phi,
                                        _init_tht,
                                        _dataInp.initial.heading ) );

            WGS84 wgs( pos_geo );

            _init_pos_wgs = wgs.getPos_WGS();
            _init_att_wgs = wgs.getWGS2BAS( ned2bas );

            Aircraft::StateVector stateVector( _aircraft->getStateVect() );
            Aircraft::StateVector derivVector( _aircraft->getDerivVect() );

            stateVector( _is_x  ) = _init_pos_wgs.x();
            stateVector( _is_y  ) = _init_pos_wgs.y();
            stateVector( _is_z  ) = _init_pos_wgs.z();
            stateVector( _is_e0 ) = _init_att_wgs.e0();
            stateVector( _is_ex ) = _init_att_wgs.ex();
            stateVector( _is_ey ) = _init_att_wgs.ey();
            stateVector( _is_ez ) = _init_att_wgs.ez();
            stateVector( _is_u  ) = 0.0;
            stateVector( _is_v  ) = 0.0;
            stateVector( _is_w  ) = 0.0;
            stateVector( _is_p  ) = 0.0;
            stateVector( _is_q  ) = 0.0;
            stateVector( _is_r  ) = 0.0;

            _aircraft->setStateVector( stateVector );
            derivVector = _aircraft->getDerivVect();

            const double coef_p = 0.001;
            const double coef_q = 0.001;
            const double coef_n = 0.01;

            double dp_dt = derivVector( _is_p );
            double dq_dt = derivVector( _is_q );
            double dn_dt = ( _aircraft->getWGS2BAS() * n_wgs )
                         * Vector3( derivVector( _is_u ),
                                    derivVector( _is_v ),
                                    derivVector( _is_w ) );

            // attitude updating only on the ground
            if ( _aircraft->getGear()->getFor_BAS().getLength2() > 0.0 )
            {
                _init_phi += dp_dt * coef_p;
                _init_tht += dq_dt * coef_q;
                _init_alt += dn_dt * coef_n;
            }
            else
            {
                _init_alt += dn_dt * coef_n;
            }

            if ( _init_alt > 0.0
              && fabs( dp_dt ) < 1.0e-3
              && fabs( dq_dt ) < 1.0e-3
              && fabs( dn_dt ) < 1.0e-3 )
            {
                _stateOut = DataOut::Ready;

                if ( _verbose )
                {
                    Log::i() << "On-ground initialization finished in " << _initStep << " steps" << std::endl;
                    printState();
                }
            }
            else
            {
                _initStep++;
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Manager::initRecorder()
{
    // state
    _recorder->addVariable( new Recorder::Variable< double >( "state_x"  , &( _aircraft->getStateVect()( _is_x  ) ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "state_y"  , &( _aircraft->getStateVect()( _is_y  ) ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "state_z"  , &( _aircraft->getStateVect()( _is_z  ) ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "state_e0" , &( _aircraft->getStateVect()( _is_e0 ) ), 8 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "state_ex" , &( _aircraft->getStateVect()( _is_ex ) ), 8 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "state_ey" , &( _aircraft->getStateVect()( _is_ey ) ), 8 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "state_ez" , &( _aircraft->getStateVect()( _is_ez ) ), 8 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "state_u"  , &( _aircraft->getStateVect()( _is_u  ) ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "state_v"  , &( _aircraft->getStateVect()( _is_v  ) ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "state_w"  , &( _aircraft->getStateVect()( _is_w  ) ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "state_p"  , &( _aircraft->getStateVect()( _is_p  ) ), 8 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "state_q"  , &( _aircraft->getStateVect()( _is_q  ) ), 8 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "state_r"  , &( _aircraft->getStateVect()( _is_r  ) ), 8 ) );

    // initial conditions
    _recorder->addVariable( new Recorder::Variable< bool >( "engine_on" , &( _dataInp.initial.engineOn ) ) );

    // flight data
    _recorder->addVariable( new Recorder::Variable< double >( "latitude"        , &( _dataOut.flight.latitude      ), 8 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "longitude"       , &( _dataOut.flight.longitude     ), 8 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "altitude_agl"    , &( _dataOut.flight.altitude_agl  ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "altitude_asl"    , &( _dataOut.flight.altitude_asl  ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "roll"            , &( _dataOut.flight.roll          ), 6 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "pitch"           , &( _dataOut.flight.pitch         ), 6 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "heading"         , &( _dataOut.flight.heading       ), 6 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "angle_of_attack" , &( _dataOut.flight.angleOfAttack ), 6 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "sideslip_angle"  , &( _dataOut.flight.sideslipAngle ), 6 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "climb_angle"     , &( _dataOut.flight.climbAngle    ), 6 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "track_angle"     , &( _dataOut.flight.trackAngle    ), 6 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "slip_skid_angle" , &( _dataOut.flight.slipSkidAngle ), 6 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "airspeed"        , &( _dataOut.flight.airspeed      ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "mach_number"     , &( _dataOut.flight.machNumber    ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "climb_rate"      , &( _dataOut.flight.climbRate     ), 3 ) );

    // controls
    _recorder->addVariable( new Recorder::Variable< double >( "controls_roll"  , &( _dataInp.controls.roll         ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "controls_pitch" , &( _dataInp.controls.pitch        ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "controls_yaw"   , &( _dataInp.controls.yaw          ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "trim_roll"      , &( _dataInp.controls.trim_roll    ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "trim_pitch"     , &( _dataInp.controls.trim_pitch   ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "trim_yaw"       , &( _dataInp.controls.trim_yaw     ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "brake_l"        , &( _dataInp.controls.brake_l      ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "brake_r"        , &( _dataInp.controls.brake_r      ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "landing_gear"   , &( _dataInp.controls.landing_gear ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "nose_wheel"     , &( _dataInp.controls.nose_wheel   ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "flaps"          , &( _dataInp.controls.flaps        ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "airbrake"       , &( _dataInp.controls.airbrake     ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "spoilers"       , &( _dataInp.controls.spoilers     ), 3 ) );
    _recorder->addVariable( new Recorder::Variable< double >( "collective"     , &( _dataInp.controls.collective   ), 3 ) );

    _recorder->addVariable( new Recorder::Variable< bool >( "lgh" , &( _dataInp.controls.lgh ) ) );
    _recorder->addVariable( new Recorder::Variable< bool >( "nws" , &( _dataInp.controls.nws ) ) );
    _recorder->addVariable( new Recorder::Variable< bool >( "abs" , &( _dataInp.controls.abs ) ) );

    // engines
    for ( unsigned int i = 0; i < FDM_MAX_ENGINES; i++ )
    {
        std::string num = "_" + String::toString( (int)i );

        std::string throttle  = "throttle"   + num;
        std::string mixture   = "mixture"    + num;
        std::string propeller = "propeller"  + num;

        std::string fuel     = "fuel"      + num;
        std::string ignition = "ignition"  + num;
        std::string starter  = "starter"   + num;

        _recorder->addVariable( new Recorder::Variable< double >( throttle  .c_str(), &( _dataInp.engine[ i ].throttle  ), 3 ) );
        _recorder->addVariable( new Recorder::Variable< double >( mixture   .c_str(), &( _dataInp.engine[ i ].mixture   ), 3 ) );
        _recorder->addVariable( new Recorder::Variable< double >( propeller .c_str(), &( _dataInp.engine[ i ].propeller ), 3 ) );

        _recorder->addVariable( new Recorder::Variable< bool >( fuel     .c_str(), &( _dataInp.engine[ i ].fuel     ) ) );
        _recorder->addVariable( new Recorder::Variable< bool >( ignition .c_str(), &( _dataInp.engine[ i ].ignition ) ) );
        _recorder->addVariable( new Recorder::Variable< bool >( starter  .c_str(), &( _dataInp.engine[ i ].starter  ) ) );
    }

    _recorder->initialize( _dataInp.recording.mode, _dataInp.recording.file );
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updateInitialPositionAndAttitude()
{
    double altitude_asl = _dataInp.initial.altitude_agl + _dataInp.ground.elevation;

    if ( _dataInp.initial.altitude_agl < FDM_MIN_INIT_ALTITUDE )
    {
        altitude_asl = 1.0 + _dataInp.ground.elevation;
    }

    WGS84::Geo pos_geo;

    pos_geo.lat = _dataInp.initial.latitude;
    pos_geo.lon = _dataInp.initial.longitude;
    pos_geo.alt = altitude_asl;

    pos_geo = WGS84::getGeoOffset( pos_geo, _dataInp.initial.heading,
                                   _dataInp.initial.offset_x,
                                   _dataInp.initial.offset_y );

    Quaternion ned2bas( Angles( 0.0, 0.0, _dataInp.initial.heading ) );

    WGS84 wgs( pos_geo );

    _init_pos_wgs = wgs.getPos_WGS();
    _init_att_wgs = wgs.getWGS2BAS( ned2bas );
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updateStateInp()
{
    switch ( _dataInp.stateInp )
    {
    case DataInp::Idle:
        if ( _stateOut == DataOut::Idle
          || _stateOut == DataOut::Stopped )
        {
            _stateInp = DataInp::Idle;
        }
        else
        {
            _stateInp = DataInp::Stop;
        }
        break;

    case DataInp::Init:
        if ( _stateOut == DataOut::Idle
          || _stateOut == DataOut::Initializing
          || _stateOut == DataOut::Ready )
        {
            _stateInp = DataInp::Init;
        }
        else
        {
            _stateInp = DataInp::Stop;
        }
        break;

    case DataInp::Work:
        if ( _stateOut == DataOut::Ready
          || _stateOut == DataOut::Working
          || _stateOut == DataOut::Frozen
          || _stateOut == DataOut::Paused )
        {
            _stateInp = DataInp::Work;
        }
        else if ( _stateOut == DataOut::Idle )
        {
            _stateInp = DataInp::Init;
        }
        else if ( _stateOut == DataOut::Stopped )
        {
            _stateInp = DataInp::Stop;
        }
        else
        {
            _stateInp = DataInp::Idle;
        }
        break;

    case DataInp::Freeze:
        if ( _stateOut == DataOut::Ready
          || _stateOut == DataOut::Working
          || _stateOut == DataOut::Frozen
          || _stateOut == DataOut::Paused )
        {
            _stateInp = DataInp::Freeze;
        }
        else if ( _stateOut == DataOut::Idle )
        {
            _stateInp = DataInp::Init;
        }
        else
        {
            _stateInp = DataInp::Idle;
        }
        break;

    case DataInp::Pause:
        if ( _stateOut == DataOut::Ready
          || _stateOut == DataOut::Working
          || _stateOut == DataOut::Frozen
          || _stateOut == DataOut::Paused )
        {
            _stateInp = DataInp::Pause;
        }
        else if ( _stateOut == DataOut::Idle )
        {
            _stateInp = DataInp::Init;
        }
        else
        {
            _stateInp = DataInp::Idle;
        }
        break;

    default:
        _stateInp = DataInp::Stop;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updateStateIdle()
{
    _realTime = 0.0;

    _compTimeMax  = 0.0;
    _compTimeSum  = 0.0;
    _compTimeSum2 = 0.0;

    _timeStepMin  = DBL_MAX;
    _timeStepMax  = 0.0;
    _timeStepSum  = 0.0;
    _timeStepSum2 = 0.0;

    _timeSteps = 0;

    _stepsLT_def = 0;
    _stepsGT_def = 0;

    updateInitialPositionAndAttitude();

    Angles angles_wgs = _init_att_wgs.getAngles();

    double altitude_asl = _dataInp.initial.altitude_agl + _dataInp.ground.elevation;
    double altitude_agl = _dataInp.initial.altitude_agl;
    bool onGround = false;

    if ( _dataInp.initial.altitude_agl < FDM_MIN_INIT_ALTITUDE )
    {
        altitude_asl = WGS84( _init_pos_wgs ).getPos_Geo().alt;
        altitude_agl = altitude_asl - _dataInp.ground.elevation;
        onGround = true;
    }

    // flight data
    _dataOut.flight.latitude  = _dataInp.initial.latitude;
    _dataOut.flight.longitude = _dataInp.initial.longitude;

    _dataOut.flight.altitude_asl = altitude_asl;
    _dataOut.flight.altitude_agl = altitude_agl;

    _dataOut.flight.roll    = 0.0;
    _dataOut.flight.pitch   = 0.0;
    _dataOut.flight.heading = _dataInp.initial.heading;

    _dataOut.flight.angleOfAttack = 0.0;
    _dataOut.flight.sideslipAngle = 0.0;

    _dataOut.flight.climbAngle = 0.0;
    _dataOut.flight.trackAngle = _dataInp.initial.heading;

    _dataOut.flight.slipSkidAngle = 0.0;

    _dataOut.flight.airspeed   = _dataInp.initial.airspeed;
    _dataOut.flight.machNumber = _dataInp.initial.airspeed / 340.29;
    _dataOut.flight.climbRate  = 0.0;

    _dataOut.flight.rollRate  = 0.0;
    _dataOut.flight.pitchRate = 0.0;
    _dataOut.flight.yawRate   = 0.0;
    _dataOut.flight.turnRate  = 0.0;

    _dataOut.flight.pos_x_wgs = _init_pos_wgs.x();
    _dataOut.flight.pos_y_wgs = _init_pos_wgs.y();
    _dataOut.flight.pos_z_wgs = _init_pos_wgs.z();

    _dataOut.flight.att_e0_wgs = _init_att_wgs.e0();
    _dataOut.flight.att_ex_wgs = _init_att_wgs.ex();
    _dataOut.flight.att_ey_wgs = _init_att_wgs.ey();
    _dataOut.flight.att_ez_wgs = _init_att_wgs.ez();

    _dataOut.flight.vel_u_bas = _dataInp.initial.airspeed;
    _dataOut.flight.vel_v_bas = 0.0;
    _dataOut.flight.vel_w_bas = 0.0;

    _dataOut.flight.omg_p_bas = 0.0;
    _dataOut.flight.omg_q_bas = 0.0;
    _dataOut.flight.omg_r_bas = 0.0;

    _dataOut.flight.phi_wgs = angles_wgs.phi();
    _dataOut.flight.tht_wgs = angles_wgs.tht();
    _dataOut.flight.psi_wgs = angles_wgs.psi();

    _dataOut.flight.airspeed_u_bas = _dataInp.initial.airspeed;
    _dataOut.flight.airspeed_v_bas = 0.0;
    _dataOut.flight.airspeed_w_bas = 0.0;

    _dataOut.flight.vel_north = 0.0;
    _dataOut.flight.vel_east  = 0.0;

    _dataOut.flight.acc_x_bas = 0.0;
    _dataOut.flight.acc_y_bas = 0.0;
    _dataOut.flight.acc_z_bas = 0.0;

    _dataOut.flight.g_force_x = 0.0;
    _dataOut.flight.g_force_y = 0.0;
    _dataOut.flight.g_force_z = 1.0;

    _dataOut.flight.g_pilot_x = 0.0;
    _dataOut.flight.g_pilot_y = 0.0;
    _dataOut.flight.g_pilot_z = 1.0;

    _dataOut.flight.onGround = onGround;
    _dataOut.flight.stall = false;

    // controls
    _dataOut.controls.ailerons  = 0.0;
    _dataOut.controls.elevator  = 0.0;
    _dataOut.controls.elevons   = 0.0;
    _dataOut.controls.rudder    = 0.0;
    _dataOut.controls.flaps     = 0.0;
    _dataOut.controls.flaperons = 0.0;
    _dataOut.controls.lef       = 0.0;
    _dataOut.controls.airbrake  = 0.0;

    // propulsion
    for ( int i = 0; i < FDM_MAX_ENGINES; i++ )
    {
        _dataOut.engine[ i ].state = false;
        _dataOut.engine[ i ].afterburner = false;
        _dataOut.engine[ i ].rpm  = 0.0;
        _dataOut.engine[ i ].prop = 0.0;
        _dataOut.engine[ i ].ng   = 0.0;
        _dataOut.engine[ i ].n1   = 0.0;
        _dataOut.engine[ i ].n2   = 0.0;
        _dataOut.engine[ i ].trq  = 0.0;
        _dataOut.engine[ i ].epr  = 0.0;
        _dataOut.engine[ i ].map  = 0.0;
        _dataOut.engine[ i ].egt  = 0.0;
        _dataOut.engine[ i ].itt  = 0.0;
        _dataOut.engine[ i ].tit  = 0.0;
        _dataOut.engine[ i ].fuelFlow = 0.0;
    }

    // rotor
    _dataOut.rotor.mainRotor_azimuth     = 0.0;
    _dataOut.rotor.mainRotor_coningAngle = 0.0;
    _dataOut.rotor.mainRotor_diskRoll    = 0.0;
    _dataOut.rotor.mainRotor_diskPitch   = 0.0;
    _dataOut.rotor.mainRotor_collective  = 0.0;
    _dataOut.rotor.mainRotor_cyclicLon   = 0.0;
    _dataOut.rotor.mainRotor_cyclicLat   = 0.0;
    _dataOut.rotor.tailRotor_azimuth     = 0.0;

    // crash
    _dataOut.crash = DataOut::NoCrash;

    _stateOut = DataOut::Idle;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updateStateInit()
{
    if ( _stateOut != DataOut::Ready )
    {
        try
        {
            if ( _aircraft == 0 )
            {
                _stateOut = DataOut::Initializing;
                _initStep = 0;

                _aircraft = createAircraft( _aircraftType );
                _recorder = new Recorder( 0.1 );

                if ( _aircraft != 0 )
                {
                    initRecorder();
                    _aircraft->initialize( _dataInp.initial.engineOn );

                    if ( _dataInp.recording.mode == DataInp::Recording::Replay )
                    {
                        _aircraft->updateFrozen( FDM_TIME_STEP );
                        _stateOut = DataOut::Ready;

                        if ( _verbose )
                        {
                            Log::i() << "Flight replaying started." << std::endl;
                            printState();
                        }
                    }
                }
            }

            if ( _aircraft != 0 )
            {
                _dataInp.controls.collective = 0.0;

                if ( _dataInp.initial.altitude_agl < FDM_MIN_INIT_ALTITUDE )
                    initOnGround();
                else
                    initInFlight();
            }
        }
        catch ( Exception &e )
        {
            Log::e() << e.getInfo() << std::endl;

            while ( e.hasCause() )
            {
                e = e.getCause();
                Log::e() << e.getInfo() << std::endl;
            }

            _stateOut = DataOut::Stopped;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updateStateWork()
{
    if ( _aircraft != 0 )
    {
        try
        {
            double compTime_0 = Time::get();

            _recorder->step( _timeStep );

            if ( _dataInp.recording.mode != DataInp::Recording::Replay || _recorder->isReplaying() )
            {
                if ( _recorder->isReplaying() )
                    _aircraft->updateFrozen( _timeStep );
                else
                    _aircraft->update( _timeStep );
            }

            _realTime += _timeStep;
            _timeSteps++;

            if ( DataOut::NoCrash == _aircraft->getCrash() || _recorder->isReplaying() )
            {
                if ( _dataInp.recording.mode == DataInp::Recording::Replay && !_recorder->isReplaying() )
                    _stateOut = DataOut::Stopped;
                else
                    _stateOut = DataOut::Working;
            }
            else
            {
                _stateOut = DataOut::Stopped;

                if ( _verbose )
                {
                    switch ( _aircraft->getCrash() )
                    {
                    case fdm::DataOut::Collision:
                        Log::i() << "Crash: Collision with terrain or obstacle." << std::endl;
                        break;

                    case fdm::DataOut::Overspeed:
                        Log::i() << "Crash: Airspeed too high. Airspeed= " << _aircraft->getAirspeed() << " [m/s]" << std::endl;
                        break;

                    case fdm::DataOut::Overstress:
                        Log::i() << "Crash: Load factor too high. Gz= " << _aircraft->getGForce().z() << std::endl;
                        break;

                    default:
                        Log::i() << "Crash: Unknown crash cause." << std::endl;
                        break;
                    }

                    printFlightEndInfo();
                }
            }

            updateTimeStepStats( compTime_0 );
        }
        catch ( Exception &e )
        {
            Log::e() << e.getInfo() << std::endl;

            while ( e.hasCause() )
            {
                e = e.getCause();
                Log::e() << e.getInfo() << std::endl;
            }

            _stateOut = DataOut::Stopped;
        }
    }
    else
    {
        _stateOut = DataOut::Stopped;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updateStateFreeze()
{
    if ( _aircraft != 0 )
    {
        try
        {
            double compTime_0 = Time::get();

            _aircraft->updateFrozen( _timeStep );

            _realTime += _timeStep;
            _timeSteps++;

            _stateOut = DataOut::Frozen;

            updateTimeStepStats( compTime_0 );
        }
        catch ( Exception &e )
        {
            Log::e() << e.getInfo() << std::endl;

            while ( e.hasCause() )
            {
                e = e.getCause();
                Log::e() << e.getInfo() << std::endl;
            }

            _stateOut = DataOut::Stopped;
        }
    }
    else
    {
        _stateOut = DataOut::Stopped;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updateStatePause()
{
    _stateOut = DataOut::Paused;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updateStateStop()
{
    if ( _verbose && _timeSteps > 0 && _stateOut != DataOut::Stopped )
    {
        printFlightEndInfo();
    }

    FDM_DELPTR( _aircraft );
    FDM_DELPTR( _recorder );

    _stateOut = DataOut::Stopped;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updateTimeStepStats( double compTime_0 )
{
    _timeStepMin = Misc::min( _timeStepMin, _timeStepRaw );
    _timeStepMax = Misc::max( _timeStepMax, _timeStepRaw );

    double compTime = Time::get() - compTime_0;
    _compTimeMax = Misc::max( _compTimeMax, compTime );

    _compTimeSum  += compTime;
    _compTimeSum2 += Misc::pow2( compTime );

    _timeStepSum  += _timeStepRaw;
    _timeStepSum2 += Misc::pow2( _timeStepRaw );

    if ( _timeStepRaw < FDM_TIME_STEP ) _stepsLT_def++;
    if ( _timeStepRaw > FDM_TIME_STEP ) _stepsGT_def++;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::printFlightEndInfo()
{
    Log::i() << "Flight finished." << std::endl;

    printState();
    printTimeStepStats();
}

////////////////////////////////////////////////////////////////////////////////

void Manager::printState()
{
    if ( _aircraft )
    {
        Log::out().setf( std::ios_base::showpoint );
        Log::out().setf( std::ios_base::fixed );

        Log::out() << "        x-wgs [m] : " << std::setprecision( 3 ) << _aircraft->getPos_WGS().x() << std::endl;
        Log::out() << "        y-wgs [m] : " << std::setprecision( 3 ) << _aircraft->getPos_WGS().y() << std::endl;
        Log::out() << "        z-wgs [m] : " << std::setprecision( 3 ) << _aircraft->getPos_WGS().z() << std::endl;
        Log::out() << "   latitude [deg] : " << std::setprecision( 6 ) << Units::rad2deg( _aircraft->getWGS().getPos_Geo().lat ) << std::endl;
        Log::out() << "  longitude [deg] : " << std::setprecision( 6 ) << Units::rad2deg( _aircraft->getWGS().getPos_Geo().lon ) << std::endl;

        Log::out().unsetf( std::ios_base::showpoint );
        Log::out().unsetf( std::ios_base::fixed );

        Log::out() << " altitude ASL [m] : " << _aircraft->getAltitude_ASL() << std::endl;
        Log::out() << " altitude AGL [m] : " << _aircraft->getAltitude_AGL() << std::endl;
        Log::out() << "       roll [deg] : " << Units::rad2deg( _aircraft->getAngles_NED().phi() ) << std::endl;
        Log::out() << "      pitch [deg] : " << Units::rad2deg( _aircraft->getAngles_NED().tht() ) << std::endl;
        Log::out() << "    heading [deg] : " << Units::rad2deg( _aircraft->getAngles_NED().psi() ) << std::endl;
        Log::out() << "      u-bas [m/s] : " << _aircraft->getVel_BAS().u() << std::endl;
        Log::out() << "      v-bas [m/s] : " << _aircraft->getVel_BAS().v() << std::endl;
        Log::out() << "      w-bas [m/s] : " << _aircraft->getVel_BAS().w() << std::endl;
        Log::out() << "    p-bas [deg/s] : " << Units::rad2deg( _aircraft->getOmg_BAS().p() ) << std::endl;
        Log::out() << "    q-bas [deg/s] : " << Units::rad2deg( _aircraft->getOmg_BAS().q() ) << std::endl;
        Log::out() << "    r-bas [deg/s] : " << Units::rad2deg( _aircraft->getOmg_BAS().r() ) << std::endl;
        Log::out() << "   airspeed [m/s] : " << _aircraft->getAirspeed() << std::endl;
        Log::out() << "        AoA [deg] : " << Units::rad2deg( _aircraft->getAngleOfAttack() ) << std::endl;
        Log::out() << "           Gx [-] : " << _aircraft->getGForce().x() << std::endl;
        Log::out() << "           Gy [-] : " << _aircraft->getGForce().y() << std::endl;
        Log::out() << "           Gz [-] : " << _aircraft->getGForce().z() << std::endl;
        Log::out() << "  total mass [kg] : " << _aircraft->getMass()->getMass() << std::endl;
        Log::out() << "       r_cm_x [m] : " << _aircraft->getMass()->getCenterOfMass().x() << std::endl;
        Log::out() << "       r_cm_y [m] : " << _aircraft->getMass()->getCenterOfMass().y() << std::endl;
        Log::out() << "       r_cm_z [m] : " << _aircraft->getMass()->getCenterOfMass().z() << std::endl;
        Log::out() << std::endl;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Manager::printTimeStepStats()
{
    double meanStep = _realTime / (double)_timeSteps;
    double meanFreq = 1.0 / meanStep;
    double meanComp = _compTimeSum / (double)_timeSteps;

    double sdStep = Misc::stDev( _timeStepSum, _timeStepSum2, _timeSteps );
    double sdComp = Misc::stDev( _compTimeSum, _compTimeSum2, _timeSteps );

    Log::out().setf( std::ios_base::showpoint );
    Log::out().setf( std::ios_base::fixed );

    Log::out() << "  Total simulation time [s] : " << std::setprecision( 3 ) << _realTime << std::endl;
    Log::out() << "        Mean frequency [Hz] : " << std::setprecision( 3 ) << meanFreq  << std::endl;
    Log::out() << "         Mean time step [s] : " << std::setprecision( 6 ) << meanStep  << std::endl;
    Log::out() << "           Time step SD [s] : " << std::setprecision( 6 ) << sdStep    << std::endl;
    Log::out() << " Mean computations time [s] : " << std::setprecision( 6 ) << meanComp  << std::endl;
    Log::out() << "   Computations time SD [s] : " << std::setprecision( 6 ) << sdComp    << std::endl;
    Log::out() << "          Min time step [s] : " << std::setprecision( 6 ) << _timeStepMin << std::endl;
    Log::out() << "          Max time step [s] : " << std::setprecision( 6 ) << _timeStepMax << std::endl;
    Log::out() << "  Max computations time [s] : " << std::setprecision( 6 ) << _compTimeMax << std::endl;
    Log::out() << "   mean_ts + 3*sigma_ts [s] : " << std::setprecision( 6 ) << ( meanStep + 3.0 * sdStep ) << " (96.65% is less than this value)"       << std::endl;
    Log::out() << "   mean_ct + 3*sigma_ct [s] : " << std::setprecision( 6 ) << ( meanComp + 3.0 * sdComp ) << " (96.65% is less than this value)"       << std::endl;
    Log::out() << "   mean_ts + 6*sigma_ts [s] : " << std::setprecision( 6 ) << ( meanStep + 6.0 * sdStep ) << " (99.99983% is less than this value)"   << std::endl;
    Log::out() << "   mean_ct + 6*sigma_ct [s] : " << std::setprecision( 6 ) << ( meanComp + 6.0 * sdComp ) << " (99.99983% is less than this value)"   << std::endl;
    Log::out() << "   mean_ts + 7*sigma_ts [s] : " << std::setprecision( 6 ) << ( meanStep + 7.0 * sdStep ) << " (99.99999905% is less than this value)" << std::endl;
    Log::out() << "   mean_ct + 7*sigma_ct [s] : " << std::setprecision( 6 ) << ( meanComp + 7.0 * sdComp ) << " (99.99999905% is less than this value)" << std::endl;
    Log::out() << "            Number of steps : " << _timeSteps << std::endl;
    Log::out() << "     Steps less than " << std::setprecision( 3 ) << FDM_TIME_STEP << "s : " << _stepsLT_def << std::endl;
    Log::out() << "  Steps greater than " << std::setprecision( 3 ) << FDM_TIME_STEP << "s : " << _stepsGT_def << std::endl;

    Log::out().unsetf( std::ios_base::showpoint );
    Log::out().unsetf( std::ios_base::fixed );
}
