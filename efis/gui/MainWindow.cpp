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

#include <gui/MainWindow.h>
#include <ui_MainWindow.h>

#include <iostream>

#include <QCloseEvent>
#include <QMessageBox>
#include <QSettings>

#include <fdm/utils/fdm_Units.h>

#include <hid/hid_Manager.h>
#include <Defines.h>

#include <gui/Keys.h>

////////////////////////////////////////////////////////////////////////////////

MainWindow::MainWindow( QWidget *parent ) :
    QMainWindow ( parent ),
    _ui ( new Ui::MainWindow ),

    _ap ( NULLPTR ),

    _pfd ( NULLPTR ),
    
    _airData ( NULLPTR ),

    _dialogConf ( NULLPTR ),
    _dialogInit ( NULLPTR ),

    _dockAuto ( NULLPTR ),
    _dockCtrl ( NULLPTR ),
    _dockData ( NULLPTR ),
    _dockMain ( NULLPTR ),
    _dockProp ( NULLPTR ),

    _timerId ( 0 ),

    _stateInp ( fdm::DataInp::Idle ),
    _stateOut ( fdm::DataOut::Idle )
{
    _ui->setupUi( this );

    _airData = new AirData();

    _dialogConf = new DialogConf( this );
    _dialogInit = new DialogInit( this );

    setSideDockAreasFullHeight( true, true );

    _dockAuto = new DockWidgetAuto( this );
    _dockCtrl = new DockWidgetCtrl( this );
    _dockData = new DockWidgetData( this );
    _dockMain = new DockWidgetMain( this );
    _dockProp = new DockWidgetProp( this );

    memset( &_data_gdu, 0, sizeof(Data) );

    _dockAuto->setObjectName( "DockAuto" );
    _dockCtrl->setObjectName( "DockCtrl" );
    _dockData->setObjectName( "DockData" );
    _dockMain->setObjectName( "DockMain" );
    _dockProp->setObjectName( "DockProp" );

    addDockWidget( Qt::BottomDockWidgetArea , _dockAuto );
    addDockWidget( Qt::BottomDockWidgetArea , _dockCtrl );
    addDockWidget( Qt::RightDockWidgetArea  , _dockData );
    addDockWidget( Qt::LeftDockWidgetArea   , _dockMain );
    addDockWidget( Qt::LeftDockWidgetArea   , _dockProp );

    _dockAuto->setVisible( false );
    _dockCtrl->setVisible( false );
    _dockData->setVisible( false );
    _dockMain->setVisible( false );
    _dockProp->setVisible( false );

    connect( _dockMain, SIGNAL(stateInpChanged(fdm::DataInp::StateInp)), this, SLOT(dockMain_stateInpChanged(fdm::DataInp::StateInp)) );

    connect( _dockAuto , SIGNAL(closed()), this, SLOT(dockAuto_closed()) );
    connect( _dockCtrl , SIGNAL(closed()), this, SLOT(dockCtrl_closed()) );
    connect( _dockData , SIGNAL(closed()), this, SLOT(dockData_closed()) );
    connect( _dockMain , SIGNAL(closed()), this, SLOT(dockMain_closed()) );
    connect( _dockProp , SIGNAL(closed()), this, SLOT(dockProp_closed()) );

    settingsRead();
    setStateIdle();
}

////////////////////////////////////////////////////////////////////////////////

MainWindow::~MainWindow()
{
    if ( _timerId ) killTimer( _timerId );

    settingsSave();

    DELPTR( _dialogConf );
    DELPTR( _dialogInit );

    DELPTR( _dockAuto );
    DELPTR( _dockCtrl );
    DELPTR( _dockData );
    DELPTR( _dockMain );
    DELPTR( _dockProp );

    DELPTR( _airData );

    DELPTR( _ui );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::init()
{
    _dialogConf->readData();
    _dialogInit->readData();

    _dialogConf->updateAssignments();

    updateOutputData();

    _timerId = startTimer( 1000.0 * GUI_TIME_STEP );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::keyPressEvent( QKeyEvent *event )
{
    ////////////////////////////////////
    QMainWindow::keyPressEvent( event );
    ////////////////////////////////////

    if ( !event->isAutoRepeat() )
    {
        _ui->widgetOTW->keyDn( Keys::getKey( event->key() ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::keyReleaseEvent( QKeyEvent *event )
{
    //////////////////////////////////////
    QMainWindow::keyReleaseEvent( event );
    //////////////////////////////////////

    if ( !event->isAutoRepeat() )
    {
        _ui->widgetOTW->keyUp( Keys::getKey( event->key() ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::closeEvent( QCloseEvent *event )
{
    QString title = windowTitle();
    QString text = tr( "Do you really want to quit?" );

    QMessageBox::StandardButton result = QMessageBox::question( this, title, text,
                                                                QMessageBox::Yes | QMessageBox::No,
                                                                QMessageBox::No );

    if ( result == QMessageBox::Yes )
    {
        /////////////////////////////////
        QMainWindow::closeEvent( event );
        /////////////////////////////////

        if ( _pfd ) _pfd->close();
    }
    else
    {
        event->ignore();
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::timerEvent( QTimerEvent *event )
{
    /////////////////////////////////
    QMainWindow::timerEvent( event );
    /////////////////////////////////

    _stateOut = Data::get()->stateOut;

    if ( _stateOut == fdm::DataOut::Stopped )
    {
        if ( _stateInp != fdm::DataInp::Idle && _stateInp != fdm::DataInp::Stop )
        {
            setStateStop();
        }
    }

    updateDateTime();

    updateDockMain();
    updateDockCtrl();
    updateDockData();
    updateDockAuto();
    updateDockProp();

    updateMenu();
    updateStatusBar();

    updateOutputData();

    updateDataGDU();

    if ( _pfd ) _pfd->update( _data_gdu );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::setStateIdle()
{
    _stateInp = fdm::DataInp::Idle;
    _dockMain->setStateInp( _stateInp );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::setStateInit()
{
    _stateInp = fdm::DataInp::Init;
    _dockMain->setStateInp( _stateInp );
    _ap->init();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::setStateWork()
{
    _stateInp = fdm::DataInp::Work;
    _dockMain->setStateInp( _stateInp );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::setStateFreeze()
{
    _stateInp = fdm::DataInp::Freeze;
    _dockMain->setStateInp( _stateInp );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::setStatePause()
{
    _stateInp = fdm::DataInp::Pause;
    _dockMain->setStateInp( _stateInp );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::setStateStop()
{
    _stateInp = fdm::DataInp::Stop;
    _dockMain->setStateInp( _stateInp );
    _ap->stop();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::setSideDockAreasFullHeight( bool left, bool rght )
{
    if ( left )
    {
        setCorner( Qt::TopLeftCorner    , Qt::LeftDockWidgetArea );
        setCorner( Qt::BottomLeftCorner , Qt::LeftDockWidgetArea );
    }
    else
    {
        setCorner( Qt::TopLeftCorner    , Qt::TopDockWidgetArea    );
        setCorner( Qt::BottomLeftCorner , Qt::BottomDockWidgetArea );
    }

    if ( rght )
    {
        setCorner( Qt::TopRightCorner    , Qt::RightDockWidgetArea );
        setCorner( Qt::BottomRightCorner , Qt::RightDockWidgetArea );
    }
    else
    {
        setCorner( Qt::TopRightCorner    , Qt::TopDockWidgetArea    );
        setCorner( Qt::BottomRightCorner , Qt::BottomDockWidgetArea );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::settingsRead()
{
    QSettings settings( SIM_ORG_NAME, SIM_APP_NAME );
    
    settings.beginGroup( "main_window" );

    restoreState( settings.value( "state" ).toByteArray() );
    restoreGeometry( settings.value( "geometry" ).toByteArray() );

    bool visibleAuto = settings.value( "dock_auto_visible" , 0 ).toBool();
    bool visibleData = settings.value( "dock_data_visible" , 0 ).toBool();
    bool visibleMain = settings.value( "dock_main_visible" , 0 ).toBool();
    bool visibleProp = settings.value( "dock_prop_visible" , 0 ).toBool();

    _ui->actionDockAuto->setChecked( visibleAuto );
    _ui->actionDockData->setChecked( visibleData );
    _ui->actionDockMain->setChecked( visibleMain );
    _ui->actionDockProp->setChecked( visibleProp );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::settingsSave()
{
    QSettings settings( SIM_ORG_NAME, SIM_APP_NAME );
    
    settings.beginGroup( "main_window" );

    settings.setValue( "state", saveState() );
    settings.setValue( "geometry", saveGeometry() );

    settings.setValue( "dock_auto_visible" , _ui->actionDockAuto->isChecked() ? 1 : 0 );
    settings.setValue( "dock_data_visible" , _ui->actionDockData->isChecked() ? 1 : 0 );
    settings.setValue( "dock_main_visible" , _ui->actionDockMain->isChecked() ? 1 : 0 );
    settings.setValue( "dock_prop_visible" , _ui->actionDockProp->isChecked() ? 1 : 0 );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateDataGDU()
{
    ///////////////////
    _airData->update();
    ///////////////////

    _data_gdu.pfd.roll    = Data::get()->ownship.roll;
    _data_gdu.pfd.pitch   = Data::get()->ownship.pitch;
    _data_gdu.pfd.heading = Data::get()->ownship.heading;

    _data_gdu.pfd.altitude  = Data::get()->ownship.altitude_asl;
    _data_gdu.pfd.ias       = Data::get()->ownship.ias;
    _data_gdu.pfd.tas       = _airData->getTAS();
    _data_gdu.pfd.climbRate = Data::get()->ownship.climbRate;
    _data_gdu.pfd.slipSkid  = Data::get()->ownship.slipSkidAngle;

    _data_gdu.pfd.ref_pressure = 101325.0;

    _data_gdu.pfd.sel_course    = fdm::Units::deg2rad( _dockAuto->getCourse() );
    _data_gdu.pfd.sel_heading   = _ap->getHeading();
    _data_gdu.pfd.sel_airspeed  = _ap->getAirspeed();
    _data_gdu.pfd.sel_altitude  = _ap->getAltitude();
    _data_gdu.pfd.sel_climbRate = _ap->getClimbRate();

    //std::cout << __FILE__ << "(" << __LINE__ << ") " << _data_gdu.pfd.sel_climbRate << std::endl;

    _data_gdu.pfd.fd_visible = _ap->isActiveFD();
    _data_gdu.pfd.fd_pitch   = _ap->getCmdPitch();
    _data_gdu.pfd.fd_roll    = _ap->getCmdRoll();

    _data_gdu.pfd.com_1_act = 118.00;
    _data_gdu.pfd.com_1_sby = 136.95;
    _data_gdu.pfd.com_2_act = 118.00;
    _data_gdu.pfd.com_2_sby = 136.95;

    _data_gdu.pfd.nav_1_act = 108.00;
    _data_gdu.pfd.nav_1_sby = 117.95;
    _data_gdu.pfd.nav_2_act = 108.00;
    _data_gdu.pfd.nav_2_sby = 117.95;
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateDateTime()
{
    if ( _stateOut == fdm::DataOut::Idle )
    {
        _flightTime.setHMS( 0, 0, 0 );
    }

    if ( _stateOut == fdm::DataOut::Working )
    {
        double timeStep_ms = 1000.0 * GUI_TIME_STEP;
        _flightTime = _flightTime.addMSecs( timeStep_ms );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateDockAuto() {}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateDockCtrl()
{
    if ( _dockCtrl->isVisible() )
    {
        _dockCtrl->setCtrlStick( -Data::get()->controls.roll,
                                 -Data::get()->controls.pitch );

        _dockCtrl->setTrimStick( -Data::get()->controls.trim_roll,
                                 -Data::get()->controls.trim_pitch );

        _dockCtrl->setCtrlPedals( -Data::get()->controls.yaw );
        _dockCtrl->setTrimPedals( -Data::get()->controls.trim_yaw );

        _dockCtrl->setBrakes( Data::get()->controls.brake_l,
                              Data::get()->controls.brake_r );

        _dockCtrl->setFlaps( Data::get()->controls.flaps );

        _dockCtrl->setThrottle( Data::get()->propulsion.engine.throttle );
        _dockCtrl->setMixture( Data::get()->propulsion.engine.mixture );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateDockData()
{
    if ( _dockData->isVisible() )
    {
        if ( _stateOut == fdm::DataOut::Idle )
        {
            _dockData->reset();
        }
        else
        {
            _dockData->setAltitudeASL( Data::get()->ownship.altitude_asl );
            _dockData->setAltitudeAGL( Data::get()->ownship.altitude_agl );

            _dockData->setAirspeed( Data::get()->ownship.airspeed );
            _dockData->setIAS( Data::get()->ownship.ias );
            _dockData->setClimbRate( Data::get()->ownship.climbRate );
            _dockData->setMachNumber( Data::get()->ownship.machNumber );

            _dockData->setRollAngle( Data::get()->ownship.roll );
            _dockData->setPitchAngle( Data::get()->ownship.pitch );
            _dockData->setHeading( Data::get()->ownship.heading );

            _dockData->setAngleOfAttack( Data::get()->ownship.angleOfAttack );
            _dockData->setSideslipAngle( Data::get()->ownship.sideslipAngle );
            _dockData->setClimbAngle( Data::get()->ownship.climbAngle );
            _dockData->setTrackAngle( Data::get()->ownship.trackAngle );

            _dockData->setRollRate( Data::get()->ownship.rollRate );
            _dockData->setPitchRate( Data::get()->ownship.pitchRate );
            _dockData->setYawRate( Data::get()->ownship.yawRate );
            _dockData->setTurnRate( Data::get()->ownship.turnRate );

            _dockData->setGx( Data::get()->ownship.g_force_x );
            _dockData->setGy( Data::get()->ownship.g_force_y );
            _dockData->setGz( Data::get()->ownship.g_force_z );
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateDockMain()
{
    if ( _dockMain->isVisible() )
    {
        _dockMain->setStateInp( _stateInp );
        _dockMain->setStateOut( _stateOut );

        if ( _stateOut == fdm::DataOut::Working )
        {
            _dockMain->setTimeStep( Data::get()->timeStep );
        }
        else
        {
            _dockMain->setTimeStep( FDM_TIME_STEP );
        }

        _dockMain->setFlightTime( _flightTime );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateDockProp()
{
    if ( _dockProp->isVisible() )
    {
        _dockProp->setState ( Data::get()->propulsion.engine.state );
        _dockProp->setRPM   ( M_PI * Data::get()->propulsion.engine.rpm  / 30.0f );
        _dockProp->setMAP   ( Data::get()->propulsion.engine.map );
        _dockProp->setEGT   ( fdm::Units::c2k( Data::get()->propulsion.engine.egt ) );
        _dockProp->setFF    ( Data::get()->propulsion.engine.fuelFlow );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateMenu()
{
    switch ( _stateOut )
    {
    default:
    case fdm::DataOut::Idle:
        _ui->actionStateInpIdle   ->setEnabled( true  );
        _ui->actionStateInpInit   ->setEnabled( true  );
        _ui->actionStateInpWork   ->setEnabled( false );
        _ui->actionStateInpFreeze ->setEnabled( false );
        _ui->actionStateInpPause  ->setEnabled( false );
        _ui->actionStateInpStop   ->setEnabled( false );
        break;

    case fdm::DataOut::Ready:
        _ui->actionStateInpIdle   ->setEnabled( false );
        _ui->actionStateInpInit   ->setEnabled( true  );
        _ui->actionStateInpWork   ->setEnabled( true  );
        _ui->actionStateInpFreeze ->setEnabled( true  );
        _ui->actionStateInpPause  ->setEnabled( true  );
        _ui->actionStateInpStop   ->setEnabled( true  );
        break;

    case fdm::DataOut::Working:
        _ui->actionStateInpIdle   ->setEnabled( false );
        _ui->actionStateInpInit   ->setEnabled( false );
        _ui->actionStateInpWork   ->setEnabled( true  );
        _ui->actionStateInpFreeze ->setEnabled( true  );
        _ui->actionStateInpPause  ->setEnabled( true  );
        _ui->actionStateInpStop   ->setEnabled( true  );
        break;

    case fdm::DataOut::Frozen:
        _ui->actionStateInpIdle   ->setEnabled( false );
        _ui->actionStateInpInit   ->setEnabled( false );
        _ui->actionStateInpWork   ->setEnabled( true  );
        _ui->actionStateInpFreeze ->setEnabled( true  );
        _ui->actionStateInpPause  ->setEnabled( true  );
        _ui->actionStateInpStop   ->setEnabled( true  );
        break;

    case fdm::DataOut::Paused:
        _ui->actionStateInpIdle   ->setEnabled( false );
        _ui->actionStateInpInit   ->setEnabled( false );
        _ui->actionStateInpWork   ->setEnabled( true  );
        _ui->actionStateInpFreeze ->setEnabled( true  );
        _ui->actionStateInpPause  ->setEnabled( true  );
        _ui->actionStateInpStop   ->setEnabled( true  );
        break;

    case fdm::DataOut::Stopped:
        _ui->actionStateInpIdle   ->setEnabled( true  );
        _ui->actionStateInpInit   ->setEnabled( false );
        _ui->actionStateInpWork   ->setEnabled( false );
        _ui->actionStateInpFreeze ->setEnabled( false );
        _ui->actionStateInpPause  ->setEnabled( false );
        _ui->actionStateInpStop   ->setEnabled( true  );
        break;
    }

    if ( _stateInp == fdm::DataInp::Idle && _stateOut == fdm::DataOut::Idle )
    {
        _ui->actionDialogInit->setEnabled( true );
    }
    else
    {
        _ui->actionDialogInit->setEnabled( false );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateStatusBar()
{
    double frameRate = 1.0 / FDM_TIME_STEP;

    if ( _stateOut == fdm::DataOut::Working || _stateOut == fdm::DataOut::Frozen )
    {
        frameRate = 1.0 / Data::get()->timeStep;
    }

    QString text = "";

    text += tr( "Frame Rate: " ) + QString::number( frameRate, 'd', 2 );

    _ui->statusBar->showMessage( text );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateOutputData()
{
    // CGI - camera
    Data::get()->cgi.camera.offset_x = -0.3;
    Data::get()->cgi.camera.offset_y = -0.3;
    Data::get()->cgi.camera.offset_z = -0.3;

    // initial conditions
    Data::get()->initial.latitude     = _dialogInit->getLat();
    Data::get()->initial.longitude    = _dialogInit->getLon();
    Data::get()->initial.altitude_agl = _dialogInit->getAlt();
    Data::get()->initial.heading      = _dialogInit->getPsi();
    Data::get()->initial.airspeed     = _dialogInit->getIAS();
    Data::get()->initial.engineOn     = true;

    Data::get()->propulsion.engine.fuel     = _dockProp->getFuel();
    Data::get()->propulsion.engine.ignition = _dockProp->getIgnition();
    Data::get()->propulsion.engine.starter  = _dockProp->getStarter();

    // FDM (input state)
    Data::get()->stateInp = _stateInp;
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDialogConf_triggered()
{
    _dialogConf->readData();

    if ( _dialogConf->exec() == QDialog::Accepted )
    {
        _dialogConf->saveData();
        _dialogConf->updateAssignments();
    }
    else
    {
        _dialogConf->readData();
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDialogInit_triggered()
{
    _dialogInit->readData();

    if ( _dialogInit->exec() == QDialog::Accepted )
    {
        _dialogInit->saveData();
    }
    else
    {
        _dialogInit->readData();
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDockAuto_toggled( bool checked )
{
    _dockAuto->setVisible( checked );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDockCtrl_toggled( bool checked )
{
    _dockCtrl->setVisible( checked );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDockData_toggled( bool checked )
{
    _dockData->setVisible( checked );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDockMain_toggled( bool checked )
{
    _dockMain->setVisible( checked );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDockProp_toggled( bool checked )
{
    _dockProp->setVisible( checked );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDialogPFD_triggered()
{
    if ( _pfd ) _pfd->show();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionStateInpIdle_triggered()
{
    setStateIdle();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionStateInpInit_triggered()
{
    setStateInit();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionStateInpWork_triggered()
{
    setStateWork();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionStateInpFreeze_triggered()
{
    setStateFreeze();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionStateInpPause_triggered()
{
    setStatePause();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionStateInpStop_triggered()
{
    setStateStop();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionQuit_triggered()
{
    close();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::dockMain_stateInpChanged( fdm::DataInp::StateInp stateInp )
{
    switch ( stateInp )
    {
        case fdm::DataInp::Idle:   setStateIdle();   break;
        case fdm::DataInp::Init:   setStateInit();   break;
        case fdm::DataInp::Work:   setStateWork();   break;
        case fdm::DataInp::Freeze: setStateFreeze(); break;
        case fdm::DataInp::Pause:  setStatePause();  break;
        case fdm::DataInp::Stop:   setStateStop();   break;
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::dockAuto_closed()
{
    _ui->actionDockAuto->setChecked( false );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::dockCtrl_closed()
{
    _ui->actionDockCtrl->setChecked( false );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::dockData_closed()
{
    _ui->actionDockData->setChecked( false );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::dockMain_closed()
{
    _ui->actionDockMain->setChecked( false );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::dockProp_closed()
{
    _ui->actionDockProp->setChecked( false );
}
