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

#include <Simulation.h>

////////////////////////////////////////////////////////////////////////////////

Simulation::Simulation() :
    QThread ( 0 ),

    m_timeoutTimer ( 0 ),
    m_elapsedTimer ( 0 ),

    m_fdm ( 0 ),

    m_timeStep ( 0.0 ),
    m_timeCoef ( 1.0 ),

    m_timerId ( 0 )
{
    m_fdm = new fdm::Manager();

    memset( &m_dataInp, 0, sizeof(fdm::DataInp) );
    memset( &m_dataOut, 0, sizeof(fdm::DataOut) );

#   ifdef SIM_USETHREADS
    moveToThread( this );
#   endif
}

////////////////////////////////////////////////////////////////////////////////

Simulation::~Simulation()
{
    if ( m_timerId ) killTimer( m_timerId );

    if ( m_timeoutTimer ) delete m_timeoutTimer;
    m_timeoutTimer = 0;

    if ( m_elapsedTimer ) delete m_elapsedTimer;
    m_elapsedTimer = 0;

    if ( m_fdm ) delete m_fdm;
    m_fdm = 0;
}

////////////////////////////////////////////////////////////////////////////////

void Simulation::init()
{
#   ifdef SIM_USETHREADS
    start();
    setPriority( QThread::HighPriority );
#   else
    m_elapsedTimer = new QElapsedTimer();
    m_timerId = startTimer( 1000 * FDM_TIME_STEP );
#   endif
}

////////////////////////////////////////////////////////////////////////////////

void Simulation::run()
{
    m_timeoutTimer = new QTimer();
    m_elapsedTimer = new QElapsedTimer();

    connect( m_timeoutTimer, SIGNAL(timeout()), this, SLOT(update()) );

    m_timeoutTimer->start( 1000 * FDM_TIME_STEP );
    m_elapsedTimer->start();

    ///////////////
    QThread::run();
    ///////////////

    disconnect( m_timeoutTimer, SIGNAL(timeout()), 0, 0 );

    m_timeoutTimer->stop();
}

////////////////////////////////////////////////////////////////////////////////

void Simulation::onDataInpUpdated( const Data::DataBuf *data )
{
    m_timeCoef = data->timeCoef;

    // environment
    m_dataInp.environment.temperature_0  = data->environment.temperature_0;
    m_dataInp.environment.pressure_0     = data->environment.pressure_0;
    m_dataInp.environment.wind_direction = data->environment.wind_direction;
    m_dataInp.environment.wind_speed     = data->environment.wind_speed;
    m_dataInp.environment.turbulence     = data->environment.turbulence;
    m_dataInp.environment.windShear      = data->environment.windShear;

    // initial conditions
    m_dataInp.initial.latitude     = data->initial.latitude;
    m_dataInp.initial.longitude    = data->initial.longitude;
    m_dataInp.initial.altitude_agl = data->initial.altitude_agl;
    m_dataInp.initial.heading      = data->initial.heading;
    m_dataInp.initial.airspeed     = data->initial.airspeed;
    m_dataInp.initial.engineOn     = data->initial.engineOn;

    // ground
    m_dataInp.ground.elevation = data->ground.elevation;
    m_dataInp.ground.r_x_wgs   = data->ground.r_x_wgs;
    m_dataInp.ground.r_y_wgs   = data->ground.r_y_wgs;
    m_dataInp.ground.r_z_wgs   = data->ground.r_z_wgs;
    m_dataInp.ground.n_x_wgs   = data->ground.n_x_wgs;
    m_dataInp.ground.n_y_wgs   = data->ground.n_y_wgs;
    m_dataInp.ground.n_z_wgs   = data->ground.n_z_wgs;

    // controls
    m_dataInp.controls.roll         = data->controls.roll;
    m_dataInp.controls.pitch        = data->controls.pitch;
    m_dataInp.controls.yaw          = data->controls.yaw;
    m_dataInp.controls.trim_roll    = data->controls.trim_roll;
    m_dataInp.controls.trim_pitch   = data->controls.trim_pitch;
    m_dataInp.controls.trim_yaw     = data->controls.trim_yaw;
    m_dataInp.controls.brake_l      = data->controls.brake_l;
    m_dataInp.controls.brake_r      = data->controls.brake_r;
    m_dataInp.controls.landing_gear = data->controls.landing_gear;
    m_dataInp.controls.nose_wheel   = data->controls.nose_wheel;
    m_dataInp.controls.lg_handle    = data->controls.lg_handle;
    m_dataInp.controls.nw_steering  = data->controls.nw_steering;
    m_dataInp.controls.flaps        = data->controls.flaps;
    m_dataInp.controls.airbrake     = data->controls.airbrake;
    m_dataInp.controls.spoilers     = data->controls.spoilers;
    m_dataInp.controls.collective   = data->controls.collective;

    // engines
    for ( unsigned int i = 0; i < FDM_MAX_ENGINES; i++ )
    {
        m_dataInp.engine[ i ].throttle  = data->propulsion.engine[ i ].throttle;
        m_dataInp.engine[ i ].mixture   = data->propulsion.engine[ i ].mixture;
        m_dataInp.engine[ i ].propeller = data->propulsion.engine[ i ].propeller;
        m_dataInp.engine[ i ].fuel      = data->propulsion.engine[ i ].fuel;
        m_dataInp.engine[ i ].ignition  = data->propulsion.engine[ i ].ignition;
        m_dataInp.engine[ i ].starter   = data->propulsion.engine[ i ].starter;
    }

    // masses
    m_dataInp.masses.pilot_1     = data->masses.pilot_1;
    m_dataInp.masses.pilot_2     = data->masses.pilot_2;
    m_dataInp.masses.fuel_tank_1 = data->masses.fuel_tank_1;
    m_dataInp.masses.fuel_tank_2 = data->masses.fuel_tank_2;
    m_dataInp.masses.fuel_tank_3 = data->masses.fuel_tank_3;
    m_dataInp.masses.fuel_tank_4 = data->masses.fuel_tank_4;
    m_dataInp.masses.cabin       = data->masses.cabin;
    m_dataInp.masses.trunk       = data->masses.trunk;

    // aircraft type
    m_dataInp.aircraftType = data->aircraftType;

    // input state
    m_dataInp.phaseInp = data->phaseInp;
}

////////////////////////////////////////////////////////////////////////////////

void Simulation::timerEvent( QTimerEvent *event )
{
    /////////////////////////////
    QThread::timerEvent( event );
    /////////////////////////////

#   ifndef SIM_USETHREADS
    update();
#   endif
}

////////////////////////////////////////////////////////////////////////////////

void Simulation::update()
{
    m_timeStep = m_timeCoef * (double)m_elapsedTimer->restart() / 1000.0;

    m_fdm->step( m_timeStep, m_dataInp, m_dataOut );

    /////////////////////////////////
    emit dataOutUpdated( m_dataOut );
    /////////////////////////////////
}
