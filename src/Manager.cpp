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

#include <Manager.h>

#include <QApplication>
#include <QSplashScreen>

#include <Common.h>
#include <Data.h>

#include <fdm/utils/fdm_Units.h>

#include <gui/Aircrafts.h>

#include <hid/hid_AxisTune.h>
#include <hid/hid_Manager.h>

////////////////////////////////////////////////////////////////////////////////

Data::DataBuf Data::_data;

////////////////////////////////////////////////////////////////////////////////

Manager::Manager() :
    QObject( NULLPTR ),

    _ap  ( NULLPTR ),
    _nav ( NULLPTR ),
    _sfx ( NULLPTR ),
    _sim ( NULLPTR ),
    _win ( NULLPTR ),

    _g1000_ifd ( NULLPTR ),

    _timer ( 0 ),
    _timerId ( 0 ),
    _timeStep ( 0.0 )
{
    _ap  = new Autopilot();
    _nav = new nav::Manager();
    _sfx = new sfx::Thread();
    _sim = new Simulation();
    _win = new MainWindow();

    _g1000_ifd = new g1000::IFD();
    memset( &_g1000_input, 0, sizeof( g1000::Input ) );

    _timer = new QElapsedTimer();
}

////////////////////////////////////////////////////////////////////////////////

Manager::~Manager()
{
    if ( _timerId != 0 ) killTimer( _timerId );

    DELPTR( _timer );

    if ( _sfx )
    {
        while ( _sfx->isRunning() )
        {
            _sfx->quit();
        }
    }

    if ( _sim )
    {
        while ( _sim->isRunning() )
        {
            _sim->quit();
        }
    }

    DELPTR( _ap  );
    DELPTR( _nav );
    DELPTR( _sfx );
    DELPTR( _sim );
    DELPTR( _win );

    DELPTR( _g1000_ifd );
}

////////////////////////////////////////////////////////////////////////////////

void Manager::init()
{
    QPixmap pixmap(":/gui/images/splashscreen.png");
    QSplashScreen splash( pixmap );
    splash.show();
    splash.showMessage( QString( SIM_APP_NAME ) + " " + QString( SIM_APP_VER ) );
    qApp->processEvents();
#   ifdef SIM_TEST
    QTimer::singleShot(  100, &splash, SLOT(close()) );
#   else
    QTimer::singleShot( 2000, &splash, SLOT(close()) );
#   endif
    while ( splash.isVisible() )
    {
        qApp->processEvents();
    }

    qRegisterMetaType< Data::DataBuf >( "Data::DataBuf" );
    qRegisterMetaType< fdm::DataOut  >( "fdm::DataOut"  );

    connect( this, SIGNAL(dataInpUpdated(const Data::DataBuf*)), _sim, SLOT(onDataInpUpdated(const Data::DataBuf*)) );
    connect( this, SIGNAL(dataInpUpdated(const Data::DataBuf*)), _sfx, SLOT(onDataInpUpdated(const Data::DataBuf*)) );

    connect( _sim, SIGNAL(dataOutUpdated(const fdm::DataOut&)), this, SLOT(onDataOutUpdated(const fdm::DataOut&)) );

    hid::Manager::instance()->init();

    _sfx->init();
    _sim->init();

    _win->setup( _ap, _g1000_ifd );
    _win->show();
    splash.finish( _win );
    //qApp->processEvents();

    _win->init();

    _timerId = startTimer( 1000.0 * FDM_TIME_STEP );

    _timer->start();
}

////////////////////////////////////////////////////////////////////////////////

void Manager::timerEvent( QTimerEvent *event )
{
    /////////////////////////////
    QObject::timerEvent( event );
    /////////////////////////////

    _timeStep = Data::get()->timeCoef * (double)_timer->restart() / 1000.0;

    if ( Data::get()->stateInp == fdm::DataInp::Idle )
    {
        hid::Manager::instance()->reset( Data::get()->initial.altitude_agl < FDM_MIN_INIT_ALTITUDE );
    }
    else if ( Data::get()->stateInp == fdm::DataInp::Work )
    {
        // TODO
    }

    hid::Manager::instance()->update( _timeStep );

    _ap->update( _timeStep );

    updatedInputG1000();
    _g1000_ifd->update( _timeStep, _g1000_input );

    _nav->setCourse( fdm::Units::deg2rad( _win->getCourse() ) );
    _nav->setFreqNAV( 1000 * _win->getFreqNav() );
    _nav->update();

    // controls
    double r_rv = hid::Manager::instance()->getCtrlRoll();
    double p_rv = hid::Manager::instance()->getCtrlPitch();
    double y_rv = hid::Manager::instance()->getCtrlYaw();

    Aircrafts::Aircraft aircraft = _win->getCurrentAircraft();

    double r_d = aircraft.axes.roll.deadzone;
    double r_c = aircraft.axes.roll.curvature;
    double r_s = aircraft.axes.roll.scale;

    double p_d = aircraft.axes.pitch.deadzone;
    double p_c = aircraft.axes.pitch.curvature;
    double p_s = aircraft.axes.pitch.scale;

    double y_d = aircraft.axes.yaw.deadzone;
    double y_c = aircraft.axes.yaw.curvature;
    double y_s = aircraft.axes.yaw.scale;

    Data::get()->controls.roll         = -hid::AxisTune::getAxisTune( r_rv, r_d, r_c, r_s );
    Data::get()->controls.pitch        = -hid::AxisTune::getAxisTune( p_rv, p_d, p_c, p_s );
    Data::get()->controls.yaw          = -hid::AxisTune::getAxisTune( y_rv, y_d, y_c, y_s );
    Data::get()->controls.trim_roll    = -hid::Manager::instance()->getTrimRoll();
    Data::get()->controls.trim_pitch   = -hid::Manager::instance()->getTrimPitch();
    Data::get()->controls.trim_yaw     = -hid::Manager::instance()->getTrimYaw();
    Data::get()->controls.brake_l      =  hid::Manager::instance()->getBrakeLeft();
    Data::get()->controls.brake_r      =  hid::Manager::instance()->getBrakeRight();
    Data::get()->controls.landing_gear =  hid::Manager::instance()->getLandingGear();
    Data::get()->controls.nose_wheel   =  hid::Manager::instance()->getCtrlYaw();
    Data::get()->controls.flaps        =  hid::Manager::instance()->getFlaps();
    Data::get()->controls.airbrake     =  hid::Manager::instance()->getAirbrake();
    Data::get()->controls.spoilers     =  hid::Manager::instance()->getSpoilers();
    Data::get()->controls.collective   =  hid::Manager::instance()->getCollective();

    Data::get()->controls.lgh = hid::Manager::instance()->isLgHandleDown();
    Data::get()->controls.nws = _win->getNWS();
    Data::get()->controls.abs = _win->getABS();

    if ( _ap->isActiveAP() && _ap->isActiveFD() && !hid::Manager::instance()->getCWS() )
    {
        Data::get()->controls.roll  -= _ap->getCtrlRoll();
        Data::get()->controls.pitch -= _ap->getCtrlPitch();

        Data::get()->controls.roll  = std::max( -1.0, std::min( 1.0, Data::get()->controls.roll  ) );
        Data::get()->controls.pitch = std::max( -1.0, std::min( 1.0, Data::get()->controls.pitch ) );
    }

    if ( _ap->isActiveYD() )
    {
        Data::get()->controls.yaw -= _ap->getCtrlYaw();
        Data::get()->controls.yaw = std::max( -1.0, std::min( 1.0, Data::get()->controls.yaw ) );
    }

    // engines
    for ( unsigned int i = 0; i < FDM_MAX_ENGINES; i++ )
    {
        Data::get()->propulsion.engine[ i ].throttle  = hid::Manager::instance()->getThrottle( i );
        Data::get()->propulsion.engine[ i ].mixture   = hid::Manager::instance()->getMixture( i );
        Data::get()->propulsion.engine[ i ].propeller = hid::Manager::instance()->getPropeller( i );
    }

    ///////////////////////////////////
    emit dataInpUpdated( Data::get() );
    ///////////////////////////////////
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updatedInputG1000()
{
    _g1000_input.ref_pressure = 101325.0;

    _g1000_input.fd_visible = false;
    _g1000_input.fd_pitch = 0.0;
    _g1000_input.fd_roll  = 0.0;

    _g1000_input.sel_course    = 0.0;
    _g1000_input.sel_heading   = 0.0;
    _g1000_input.sel_airspeed  = 0.0;
    _g1000_input.sel_altitude  = 0.0;
    _g1000_input.sel_climbRate = 0.0;

    _g1000_input.com_1_act = 118.000;
    _g1000_input.com_1_sby = 118.000;
    _g1000_input.com_2_act = 136.975;
    _g1000_input.com_2_sby = 136.975;

    _g1000_input.nav_1_act = 108.00;
    _g1000_input.nav_1_sby = 108.00;
    _g1000_input.nav_2_act = 117.95;
    _g1000_input.nav_2_sby = 117.95;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updatedInputG1000( const fdm::DataOut &dataOut )
{
    _g1000_input.roll    = dataOut.flight.roll;
    _g1000_input.pitch   = dataOut.flight.pitch;
    _g1000_input.heading = dataOut.flight.heading;

    _g1000_input.airspeed_u_bas = dataOut.flight.airspeed_u_bas;
    _g1000_input.airspeed_v_bas = dataOut.flight.airspeed_v_bas;
    _g1000_input.airspeed_w_bas = dataOut.flight.airspeed_w_bas;

    _g1000_input.air_pressure    = dataOut.environment.air_pressure;
    _g1000_input.air_density     = dataOut.environment.air_density;
    _g1000_input.air_temperature = dataOut.environment.air_temperature;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::onDataOutUpdated( const fdm::DataOut &dataOut )
{
    updatedInputG1000( dataOut );

    // hud
    Data::get()->cgi.hud.roll    = dataOut.flight.roll;
    Data::get()->cgi.hud.pitch   = dataOut.flight.pitch;
    Data::get()->cgi.hud.heading = dataOut.flight.heading;

    Data::get()->cgi.hud.angleOfAttack = dataOut.flight.angleOfAttack;
    Data::get()->cgi.hud.sideslipAngle = dataOut.flight.sideslipAngle;

    Data::get()->cgi.hud.altitude  = dataOut.flight.altitude_asl;
    Data::get()->cgi.hud.climbRate = dataOut.flight.climbRate;
    Data::get()->cgi.hud.radioAlt  = dataOut.flight.altitude_agl;

    Data::get()->cgi.hud.airspeed   = dataOut.flight.ias;
    Data::get()->cgi.hud.machNumber = dataOut.flight.machNumber;
    Data::get()->cgi.hud.g_force    = dataOut.flight.g_force_z;

    Data::get()->cgi.hud.ils_visible      = Data::get()->navigation.ils_visible;
    Data::get()->cgi.hud.ils_gs_deviation = Data::get()->navigation.ils_gs_norm;
    Data::get()->cgi.hud.ils_lc_deviation = Data::get()->navigation.ils_lc_norm;

    Data::get()->cgi.hud.stall = dataOut.flight.stall;

    // ownship
    Data::get()->ownship.mainRotor.omega       = dataOut.rotor.mainRotor_omega;
    Data::get()->ownship.mainRotor.azimuth     = dataOut.rotor.mainRotor_azimuth;
    Data::get()->ownship.mainRotor.coningAngle = dataOut.rotor.mainRotor_coningAngle;
    Data::get()->ownship.mainRotor.diskRoll    = dataOut.rotor.mainRotor_diskRoll;
    Data::get()->ownship.mainRotor.diskPitch   = dataOut.rotor.mainRotor_diskPitch;
    Data::get()->ownship.mainRotor.collective  = dataOut.rotor.mainRotor_collective;
    Data::get()->ownship.mainRotor.cyclicLon   = dataOut.rotor.mainRotor_cyclicLon;
    Data::get()->ownship.mainRotor.cyclicLat   = dataOut.rotor.mainRotor_cyclicLat;

    for ( int i = 0; i < FDM_MAX_BLADES; i++ )
    {
        Data::get()->ownship.mainRotor.blade[ i ].flapping   = dataOut.blade[ i ].flapping;
        Data::get()->ownship.mainRotor.blade[ i ].feathering = dataOut.blade[ i ].feathering;
    }

    Data::get()->ownship.tailRotor.azimuth     = dataOut.rotor.tailRotor_azimuth;

    Data::get()->ownship.latitude  = dataOut.flight.latitude;
    Data::get()->ownship.longitude = dataOut.flight.longitude;

    Data::get()->ownship.altitude_asl = dataOut.flight.altitude_asl;
    Data::get()->ownship.altitude_agl = dataOut.flight.altitude_agl;

    Data::get()->ownship.roll    = dataOut.flight.roll;
    Data::get()->ownship.pitch   = dataOut.flight.pitch;
    Data::get()->ownship.heading = dataOut.flight.heading;

    Data::get()->ownship.angleOfAttack = dataOut.flight.angleOfAttack;
    Data::get()->ownship.sideslipAngle = dataOut.flight.sideslipAngle;

    Data::get()->ownship.climbAngle = dataOut.flight.climbAngle;
    Data::get()->ownship.trackAngle = dataOut.flight.trackAngle;

    Data::get()->ownship.slipSkidAngle = dataOut.flight.slipSkidAngle;

    Data::get()->ownship.airspeed    = dataOut.flight.airspeed;
    Data::get()->ownship.ias         = dataOut.flight.ias;
    Data::get()->ownship.tas         = dataOut.flight.tas;
    Data::get()->ownship.groundSpeed = dataOut.flight.groundSpeed;
    Data::get()->ownship.machNumber  = dataOut.flight.machNumber;
    Data::get()->ownship.climbRate   = dataOut.flight.climbRate;

    Data::get()->ownship.rollRate  = dataOut.flight.rollRate;
    Data::get()->ownship.pitchRate = dataOut.flight.pitchRate;
    Data::get()->ownship.yawRate   = dataOut.flight.yawRate;
    Data::get()->ownship.turnRate  = dataOut.flight.turnRate;

    Data::get()->ownship.g_force_x = dataOut.flight.g_force_x;
    Data::get()->ownship.g_force_y = dataOut.flight.g_force_y;
    Data::get()->ownship.g_force_z = dataOut.flight.g_force_z;

    Data::get()->ownship.pos_x_wgs = dataOut.flight.pos_x_wgs;
    Data::get()->ownship.pos_y_wgs = dataOut.flight.pos_y_wgs;
    Data::get()->ownship.pos_z_wgs = dataOut.flight.pos_z_wgs;

    Data::get()->ownship.att_e0_wgs = dataOut.flight.att_e0_wgs;
    Data::get()->ownship.att_ex_wgs = dataOut.flight.att_ex_wgs;
    Data::get()->ownship.att_ey_wgs = dataOut.flight.att_ey_wgs;
    Data::get()->ownship.att_ez_wgs = dataOut.flight.att_ez_wgs;

    Data::get()->ownship.vel_north = dataOut.flight.vel_north;
    Data::get()->ownship.vel_east  = dataOut.flight.vel_east;

    Data::get()->ownship.ailerons    = dataOut.controls.ailerons;
    Data::get()->ownship.elevator    = dataOut.controls.elevator;
    Data::get()->ownship.elevons     = dataOut.controls.elevons;
    Data::get()->ownship.rudder      = dataOut.controls.rudder;
    Data::get()->ownship.flaps       = dataOut.controls.flaps;
    Data::get()->ownship.flaperons   = dataOut.controls.flaperons;
    Data::get()->ownship.lef         = dataOut.controls.lef;
    Data::get()->ownship.airbrake    = dataOut.controls.airbrake;

    Data::get()->ownship.norm_flaps       = hid::Manager::instance()->getFlaps();
    Data::get()->ownship.norm_landingGear = hid::Manager::instance()->getLandingGear();

    if ( dataOut.stateOut == fdm::DataOut::Working )
    {
        for ( signed int i = 0; i < FDM_MAX_ENGINES; i++ )
        {
            Data::get()->ownship.propeller[ i ] += _timeStep * M_PI * dataOut.engine[ i ].rpm / 30.0;

            while ( Data::get()->ownship.propeller[ i ] > 2.0f * M_PI )
            {
                Data::get()->ownship.propeller[ i ] -= (float)( 2.0f * M_PI );
            }
        }
    }
    else if ( dataOut.stateOut == fdm::DataOut::Idle )
    {
        for ( signed int i = 0; i < FDM_MAX_ENGINES; i++ )
        {
            Data::get()->ownship.propeller[ i ] = 0.0;
        }
    }

    Data::get()->ownship.onGround = dataOut.flight.onGround;
    Data::get()->ownship.stall = dataOut.flight.stall;
    Data::get()->ownship.crash = dataOut.crash != fdm::DataOut::NoCrash;

    for ( int i = 0; i < FDM_MAX_ENGINES; i++ )
    {
        Data::get()->propulsion.engine[ i ].state       = dataOut.engine[ i ].state;
        Data::get()->propulsion.engine[ i ].afterburner = dataOut.engine[ i ].afterburner;

        Data::get()->propulsion.engine[ i ].rpm  = dataOut.engine[ i ].rpm;
        Data::get()->propulsion.engine[ i ].prop = dataOut.engine[ i ].prop;
        Data::get()->propulsion.engine[ i ].ng   = dataOut.engine[ i ].ng;
        Data::get()->propulsion.engine[ i ].n1   = dataOut.engine[ i ].n1;
        Data::get()->propulsion.engine[ i ].n2   = dataOut.engine[ i ].n2;
        Data::get()->propulsion.engine[ i ].trq  = dataOut.engine[ i ].trq;
        Data::get()->propulsion.engine[ i ].epr  = dataOut.engine[ i ].epr;
        Data::get()->propulsion.engine[ i ].map  = dataOut.engine[ i ].map;
        Data::get()->propulsion.engine[ i ].egt  = dataOut.engine[ i ].egt;
        Data::get()->propulsion.engine[ i ].itt  = dataOut.engine[ i ].itt;
        Data::get()->propulsion.engine[ i ].tit  = dataOut.engine[ i ].tit;

        Data::get()->propulsion.engine[ i ].fuelFlow = dataOut.engine[ i ].fuelFlow;
    }

    // SFX
    // TODO

    // output state
    Data::get()->stateOut = dataOut.stateOut;

    // time step
    Data::get()->timeStep = _timeStep;
}
