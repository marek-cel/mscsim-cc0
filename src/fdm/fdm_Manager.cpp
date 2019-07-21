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

#include <fdm/fdm_Manager.h>

#include <iostream>
#include <memory.h>

#include <fdm/fdm_Log.h>

#include <fdm/utils/fdm_String.h>
#include <fdm/utils/fdm_Units.h>

#include <fdm_c130/c130_Aircraft.h>
#include <fdm_c172/c172_Aircraft.h>
#include <fdm_f16/f16_Aircraft.h>
#include <fdm_uh60/uh60_Aircraft.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

Manager::Manager() :
    m_aircraft ( 0 ),

    m_phaseInp ( DataInp::Idle ),
    m_stateOut ( DataOut::Idle ),

    m_initStep ( 0 ),

    m_init_phi ( 0.0 ),
    m_init_tht ( 0.0 ),
    m_init_alt ( 0.0 ),

    m_timeStep ( 0.0 ),
    m_realTime ( 0.0 ),

    m_timeSteps ( 0 ),

    m_verbose ( true )
{
    memset( &m_dataInp, 0, sizeof(DataInp) );
    memset( &m_dataOut, 0, sizeof(DataOut) );
}

////////////////////////////////////////////////////////////////////////////////

Manager::~Manager()
{
    if ( m_aircraft ) delete m_aircraft;
    m_aircraft = 0;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::step( double timeStep, const DataInp &dataInp, DataOut &dataOut )
{
    m_timeStep = timeStep;

    if ( m_timeStep < FDM_TIME_STEP_MIN ) m_timeStep = FDM_TIME_STEP_MIN;
    if ( m_timeStep > FDM_TIME_STEP_MAX ) m_timeStep = FDM_TIME_STEP_MAX;

    m_dataInp = dataInp;

    updateInternalPhaseInp();

    if ( m_stateOut == DataOut::Idle )
    {
        m_aircraftType = m_dataInp.aircraftType;
    }

    switch ( m_phaseInp )
    {
        case DataInp::Idle:  updatePhaseIdle();  break;
        case DataInp::Init:  updatePhaseInit();  break;
        case DataInp::Work:  updatePhaseWork();  break;
        case DataInp::Pause: updatePhasePause(); break;
        case DataInp::Stop:  updatePhaseStop();  break;
    }

    m_dataOut.stateOut = m_stateOut;

    dataOut = m_dataOut;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::initEquilibriumInFlight()
{
    if ( m_stateOut != DataOut::Ready )
    {
        updateInitialPositionAndAttitude();

        StateVector stateVector;

        stateVector( is_x  ) = m_init_pos_wgs.x();
        stateVector( is_y  ) = m_init_pos_wgs.y();
        stateVector( is_z  ) = m_init_pos_wgs.z();
        stateVector( is_e0 ) = m_init_att_wgs.e0();
        stateVector( is_ex ) = m_init_att_wgs.ex();
        stateVector( is_ey ) = m_init_att_wgs.ey();
        stateVector( is_ez ) = m_init_att_wgs.ez();
        stateVector( is_u  ) = m_dataInp.initial.airspeed;
        stateVector( is_v  ) = 0.0;
        stateVector( is_w  ) = 0.0;
        stateVector( is_p  ) = 0.0;
        stateVector( is_q  ) = 0.0;
        stateVector( is_r  ) = 0.0;

        // TODO
        m_stateOut = DataOut::Ready;

        m_aircraft->setStateVector( stateVector );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Manager::initEquilibriumOnGround()
{
    if ( m_stateOut != DataOut::Ready )
    {
        if ( m_initStep == 0 )
        {
            m_init_phi =  0.0;
            m_init_tht =  0.0;
            m_init_alt = FDM_MIN_INIT_ALTITUDE + m_dataInp.ground.elevation;
        }

        for ( UInt32 i = 0; i < 1000 && m_initStep < FDM_MAX_INIT_STEPS && m_stateOut != DataOut::Ready; i++  )
        {
            Vector3 n_wgs = m_aircraft->getIsect()->getNormal( m_dataInp.initial.latitude,
                                                               m_dataInp.initial.longitude );

            WGS84::Geo pos_geo;

            pos_geo.lat = m_dataInp.initial.latitude;
            pos_geo.lon = m_dataInp.initial.longitude;
            pos_geo.alt = m_init_alt;

            Quaternion ned2bas( Angles( m_init_phi,
                                        m_init_tht,
                                        m_dataInp.initial.heading ) );

            WGS84 wgs( pos_geo );

            m_init_pos_wgs = wgs.getPos_WGS();
            m_init_att_wgs = wgs.getWGS2BAS( ned2bas );

            StateVector stateVector;
            StateVector derivVector;

            stateVector( is_x  ) = m_init_pos_wgs.x();
            stateVector( is_y  ) = m_init_pos_wgs.y();
            stateVector( is_z  ) = m_init_pos_wgs.z();
            stateVector( is_e0 ) = m_init_att_wgs.e0();
            stateVector( is_ex ) = m_init_att_wgs.ex();
            stateVector( is_ey ) = m_init_att_wgs.ey();
            stateVector( is_ez ) = m_init_att_wgs.ez();
            stateVector( is_u  ) = 0.0;
            stateVector( is_v  ) = 0.0;
            stateVector( is_w  ) = 0.0;
            stateVector( is_p  ) = 0.0;
            stateVector( is_q  ) = 0.0;
            stateVector( is_r  ) = 0.0;

            m_aircraft->setStateVector( stateVector );
            derivVector = m_aircraft->getDerivVect();

            const double coef = 0.01;

            double dp_dt = derivVector( is_p );
            double dq_dt = derivVector( is_q );
            double dn_dt = ( m_aircraft->getWGS2BAS() * n_wgs )
                         * Vector3( derivVector( is_u ),
                                    derivVector( is_v ),
                                    derivVector( is_w ) );

            // attitude updating only on the ground
            if ( m_aircraft->getGear()->getFor_BAS().getLength2() > 0.0 )
            {
                m_init_phi += dp_dt * coef;
                m_init_tht += dq_dt * coef;
                m_init_alt += dn_dt * coef;
            }
            else
            {
                m_init_alt += dn_dt * coef;
            }

            if ( m_init_alt > 0.0
              && fabs( dp_dt ) < 1.0e-3
              && fabs( dq_dt ) < 1.0e-3
              && fabs( dn_dt ) < 1.0e-3 )
            {
                m_stateOut = DataOut::Ready;

                if ( m_verbose )
                {
                    Log::i() << "On-ground initialization finished in " << m_initStep << " steps" << std::endl;
                    printState();
                }
            }
            else
            {
                m_initStep++;
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updateInitialPositionAndAttitude()
{
    double altitude_asl = m_dataInp.initial.altitude_agl + m_dataInp.ground.elevation;

    if ( m_dataInp.initial.altitude_agl < FDM_MIN_INIT_ALTITUDE )
    {
        altitude_asl = 1.0 + m_dataInp.ground.elevation;
    }

    WGS84::Geo pos_geo;

    pos_geo.lat = m_dataInp.initial.latitude;
    pos_geo.lon = m_dataInp.initial.longitude;
    pos_geo.alt = altitude_asl;

    Quaternion ned2bas( Angles( 0.0, 0.0, m_dataInp.initial.heading ) );

    WGS84 wgs( pos_geo );

    m_init_pos_wgs = wgs.getPos_WGS();
    m_init_att_wgs = wgs.getWGS2BAS( ned2bas );
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updateInternalPhaseInp()
{
    switch ( m_dataInp.phaseInp )
    {
    case DataInp::Idle:
        if ( m_stateOut == DataOut::Idle
          || m_stateOut == DataOut::Stopped )
        {
            m_phaseInp = DataInp::Idle;
        }
        else
        {
            m_phaseInp = DataInp::Stop;
        }
        break;

    case DataInp::Init:
        if ( m_stateOut == DataOut::Idle
          || m_stateOut == DataOut::Initializing
          || m_stateOut == DataOut::Ready )
        {
            m_phaseInp = DataInp::Init;
        }
        else
        {
            m_phaseInp = DataInp::Stop;
        }
        break;

    case DataInp::Work:
        if ( m_stateOut == DataOut::Ready
          || m_stateOut == DataOut::Working
          || m_stateOut == DataOut::Paused )
        {
            m_phaseInp = DataInp::Work;
        }
        else if ( m_stateOut == DataOut::Idle )
        {
            m_phaseInp = DataInp::Init;
        }
        else if ( m_stateOut == DataOut::Stopped )
        {
            m_phaseInp = DataInp::Stop;
        }
        else
        {
            m_phaseInp = DataInp::Idle;
        }
        break;

    case DataInp::Pause:
        if ( m_stateOut == DataOut::Ready
          || m_stateOut == DataOut::Working
          || m_stateOut == DataOut::Paused )
        {
            m_phaseInp = DataInp::Pause;
        }
        else if ( m_stateOut == DataOut::Idle )
        {
            m_phaseInp = DataInp::Init;
        }
        else
        {
            m_phaseInp = DataInp::Idle;
        }
        break;

    default:
        m_phaseInp = DataInp::Stop;
    }
}
////////////////////////////////////////////////////////////////////////////////

void Manager::updatePhaseIdle()
{
    updateInitialPositionAndAttitude();

    Angles angles_wgs = m_init_att_wgs.getAngles();

    double altitude_asl = m_dataInp.initial.altitude_agl + m_dataInp.ground.elevation;
    double altitude_agl = m_dataInp.initial.altitude_agl;
    bool onGround = false;

    if ( m_dataInp.initial.altitude_agl < FDM_MIN_INIT_ALTITUDE )
    {
        altitude_asl = WGS84( m_init_pos_wgs ).getPos_Geo().alt;
        altitude_agl = altitude_asl - m_dataInp.ground.elevation;
        onGround = true;
    }

    // flight data
    m_dataOut.flight.latitude  = m_dataInp.initial.latitude;
    m_dataOut.flight.longitude = m_dataInp.initial.longitude;

    m_dataOut.flight.altitude_asl = altitude_asl;
    m_dataOut.flight.altitude_agl = altitude_agl;

    m_dataOut.flight.roll    = 0.0;
    m_dataOut.flight.pitch   = 0.0;
    m_dataOut.flight.heading = m_dataInp.initial.heading;

    m_dataOut.flight.angleOfAttack = 0.0;
    m_dataOut.flight.sideslipAngle = 0.0;

    m_dataOut.flight.course    = m_dataInp.initial.heading;
    m_dataOut.flight.pathAngle = 0.0;

    m_dataOut.flight.slipSkidAngle = 0.0;

    m_dataOut.flight.airspeed   = m_dataInp.initial.airspeed;
    m_dataOut.flight.machNumber = m_dataInp.initial.airspeed / 340.29;
    m_dataOut.flight.climbRate  = 0.0;

    m_dataOut.flight.rollRate  = 0.0;
    m_dataOut.flight.pitchRate = 0.0;
    m_dataOut.flight.yawRate   = 0.0;
    m_dataOut.flight.turnRate  = 0.0;

    m_dataOut.flight.pos_x_wgs = m_init_pos_wgs.x();
    m_dataOut.flight.pos_y_wgs = m_init_pos_wgs.y();
    m_dataOut.flight.pos_z_wgs = m_init_pos_wgs.z();

    m_dataOut.flight.att_e0_wgs = m_init_att_wgs.e0();
    m_dataOut.flight.att_ex_wgs = m_init_att_wgs.ex();
    m_dataOut.flight.att_ey_wgs = m_init_att_wgs.ey();
    m_dataOut.flight.att_ez_wgs = m_init_att_wgs.ez();

    m_dataOut.flight.vel_u_bas = m_dataInp.initial.airspeed;
    m_dataOut.flight.vel_v_bas = 0.0;
    m_dataOut.flight.vel_w_bas = 0.0;

    m_dataOut.flight.omg_p_bas = 0.0;
    m_dataOut.flight.omg_q_bas = 0.0;
    m_dataOut.flight.omg_r_bas = 0.0;

    m_dataOut.flight.phi_wgs = angles_wgs.phi();
    m_dataOut.flight.tht_wgs = angles_wgs.tht();
    m_dataOut.flight.psi_wgs = angles_wgs.psi();

    m_dataOut.flight.tas_u_bas = m_dataInp.initial.airspeed;
    m_dataOut.flight.tas_v_bas = 0.0;
    m_dataOut.flight.tas_w_bas = 0.0;

    m_dataOut.flight.vel_north = 0.0;
    m_dataOut.flight.vel_east  = 0.0;

    m_dataOut.flight.acc_x_bas = 0.0;
    m_dataOut.flight.acc_y_bas = 0.0;
    m_dataOut.flight.acc_z_bas = 0.0;

    m_dataOut.flight.g_force_x = 0.0;
    m_dataOut.flight.g_force_y = 0.0;
    m_dataOut.flight.g_force_z = 1.0;

    m_dataOut.flight.g_pilot_x = 0.0;
    m_dataOut.flight.g_pilot_y = 0.0;
    m_dataOut.flight.g_pilot_z = 1.0;

    m_dataOut.flight.onGround = onGround;
    m_dataOut.flight.stall = false;

    // controls
    m_dataOut.controls.ailerons  = 0.0;
    m_dataOut.controls.elevator  = 0.0;
    m_dataOut.controls.elevons   = 0.0;
    m_dataOut.controls.rudder    = 0.0;
    m_dataOut.controls.flaps     = 0.0;
    m_dataOut.controls.flaperons = 0.0;
    m_dataOut.controls.lef       = 0.0;
    m_dataOut.controls.airbrake  = 0.0;

    // propulsion
    for ( int i = 0; i < FDM_MAX_ENGINES; i++ )
    {
        m_dataOut.engine[ i ].state = false;
        m_dataOut.engine[ i ].rpm   = 0.0;
        m_dataOut.engine[ i ].prop  = 0.0;
        m_dataOut.engine[ i ].ng    = 0.0;
        m_dataOut.engine[ i ].n1    = 0.0;
        m_dataOut.engine[ i ].n2    = 0.0;
        m_dataOut.engine[ i ].trq   = 0.0;
        m_dataOut.engine[ i ].epr   = 0.0;
        m_dataOut.engine[ i ].map   = 0.0;
        m_dataOut.engine[ i ].egt   = 0.0;
        m_dataOut.engine[ i ].itt   = 0.0;
        m_dataOut.engine[ i ].tit   = 0.0;
        m_dataOut.engine[ i ].ff    = 0.0;
    }

    // rotor
    m_dataOut.rotor.mainRotor_azimuth     = 0.0;
    m_dataOut.rotor.mainRotor_coningAngle = 0.0;
    m_dataOut.rotor.mainRotor_diskRoll    = 0.0;
    m_dataOut.rotor.mainRotor_diskPitch   = 0.0;
    m_dataOut.rotor.mainRotor_collective  = 0.0;
    m_dataOut.rotor.mainRotor_cyclicLon   = 0.0;
    m_dataOut.rotor.mainRotor_cyclicLat   = 0.0;
    m_dataOut.rotor.tailRotor_azimuth     = 0.0;

    // crash
    m_dataOut.crash = DataOut::NoCrash;

    m_stateOut = DataOut::Idle;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updatePhaseInit()
{
    if ( m_stateOut != DataOut::Ready )
    {
        try
        {
            if ( m_aircraft == 0 )
            {
                m_stateOut = DataOut::Initializing;
                m_initStep = 0;

                switch ( m_aircraftType )
                {
                case DataInp::C130:
                    m_aircraft = new C130_Aircraft( &m_dataInp, &m_dataOut );
                    break;

                case DataInp::C172:
                    m_aircraft = new C172_Aircraft( &m_dataInp, &m_dataOut );
                    break;

                case DataInp::F16:
                    m_aircraft = new F16_Aircraft( &m_dataInp, &m_dataOut );
                    break;

                case DataInp::UH60:
                    m_aircraft = new UH60_Aircraft( &m_dataInp, &m_dataOut );
                    break;
                }

                if ( m_aircraft != 0 )
                {
                    m_aircraft->init( m_dataInp.initial.engineOn );
                }
            }

            if ( m_aircraft != 0 )
            {
                if ( m_dataInp.initial.altitude_agl < FDM_MIN_INIT_ALTITUDE )
                {
                    initEquilibriumOnGround();
                }
                else
                {
                    initEquilibriumInFlight();
                }

                m_aircraft->updateOutputData();
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

            m_stateOut = DataOut::Stopped;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updatePhaseWork()
{
    if ( m_aircraft != 0 )
    {
        try
        {
            m_realTime += m_timeStep;
            m_timeSteps++;

            m_aircraft->step( m_timeStep );
            m_aircraft->updateOutputData();

            if ( DataOut::NoCrash == m_aircraft->getCrash() )
            {
                m_stateOut = DataOut::Working;
            }
            else
            {
                m_stateOut = DataOut::Stopped;

                if ( m_verbose )
                {
                    switch ( m_aircraft->getCrash() )
                    {
                    case fdm::DataOut::Collision:
                        Log::i() << "CRASH: Collision with terrain or obstacle." << std::endl;
                        break;

                    case fdm::DataOut::Overspeed:
                        Log::i() << "CRASH: Airspeed too high. Airspeed= " << m_aircraft->getAirspeed() << " [m/s]" << std::endl;
                        break;

                    case fdm::DataOut::Overstressed:
                        Log::i() << "CRASH: Load factor too high. Gz= " << m_aircraft->getGForce().z() << std::endl;
                        break;

                    default:
                        Log::i() << "CRASH: Unknown crash cause." << std::endl;
                        break;
                    }

                    printState();
                }
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

            m_stateOut = DataOut::Stopped;
        }
    }
    else
    {
        m_stateOut = DataOut::Stopped;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updatePhasePause()
{
    m_stateOut = DataOut::Paused;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updatePhaseStop()
{
    if ( m_verbose )
    {
        if ( m_timeSteps > 0 )
        {
            double meanStep = m_realTime / (double)m_timeSteps;
            double meanFreq = 1.0 / meanStep;
            Log::i() << "Mean time step: " << meanStep << " s"  << std::endl;
            Log::i() << "Mean frequency: " << meanFreq << " Hz" << std::endl;
        }
    }

    m_realTime = 0.0;
    m_timeSteps = 0;

    if ( m_aircraft ) delete m_aircraft;
    m_aircraft = 0;

    m_stateOut = DataOut::Stopped;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::printState()
{
    if ( m_aircraft )
    {
        Log::out() << "        x-wgs [m] : " << m_aircraft->getPos_WGS().x() << std::endl;
        Log::out() << "        y-wgs [m] : " << m_aircraft->getPos_WGS().y() << std::endl;
        Log::out() << "        z-wgs [m] : " << m_aircraft->getPos_WGS().z() << std::endl;
        Log::out() << "   latitude [deg] : " << Units::rad2deg( m_aircraft->getWGS().getPos_Geo().lat ) << std::endl;
        Log::out() << "  longitude [deg] : " << Units::rad2deg( m_aircraft->getWGS().getPos_Geo().lat ) << std::endl;
        Log::out() << " altitude ASL [m] : " << m_aircraft->getAltitude_ASL() << std::endl;
        Log::out() << " altitude AGL [m] : " << m_aircraft->getAltitude_AGL() << std::endl;
        Log::out() << "       roll [deg] : " << Units::rad2deg( m_aircraft->getAngles_NED().phi() ) << std::endl;
        Log::out() << "      pitch [deg] : " << Units::rad2deg( m_aircraft->getAngles_NED().tht() ) << std::endl;
        Log::out() << "    heading [deg] : " << Units::rad2deg( m_aircraft->getAngles_NED().psi() ) << std::endl;
        Log::out() << "      u-bas [m/s] : " << m_aircraft->getVel_BAS().x() << std::endl;
        Log::out() << "      v-bas [m/s] : " << m_aircraft->getVel_BAS().y() << std::endl;
        Log::out() << "      w-bas [m/s] : " << m_aircraft->getVel_BAS().z() << std::endl;
        Log::out() << "    p-bas [deg/s] : " << Units::rad2deg( m_aircraft->getOmg_BAS().x() ) << std::endl;
        Log::out() << "    q-bas [deg/s] : " << Units::rad2deg( m_aircraft->getOmg_BAS().y() ) << std::endl;
        Log::out() << "    r-bas [deg/s] : " << Units::rad2deg( m_aircraft->getOmg_BAS().z() ) << std::endl;
        Log::out() << "   airspeed [m/s] : " << m_aircraft->getAirspeed() << std::endl;
        Log::out() << "        AoA [deg] : " << Units::rad2deg( m_aircraft->getAngleOfAttack() ) << std::endl;
        Log::out() << "           Gx [-] : " << m_aircraft->getGForce().x() << std::endl;
        Log::out() << "           Gy [-] : " << m_aircraft->getGForce().y() << std::endl;
        Log::out() << "           Gz [-] : " << m_aircraft->getGForce().z() << std::endl;
        Log::out() << std::endl;
    }
}
