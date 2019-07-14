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

#include <gui/MainWindow.h>
#include <ui_MainWindow.h>

#include <QCloseEvent>
#include <QFile>
#include <QMessageBox>

#include <fdm/utils/fdm_Units.h>

#include <Data.h>

#include <gui/Aircrafts.h>

#include <hid/hid_Manager.h>
#include <gui/gui_Defines.h>

#include <gui/Keys.h>

////////////////////////////////////////////////////////////////////////////////

MainWindow::MainWindow( QWidget *parent ) :
    QMainWindow ( parent ),
    m_ui ( new Ui::MainWindow ),

    m_dateTime( QDateTime::currentDateTimeUtc() ),
    
    m_dialogConf ( 0 ),
    m_dialogEnvr ( 0 ),
    m_dialogInit ( 0 ),
    m_dialogMass ( 0 ),

    m_dockAuto ( 0 ),
    m_dockCtrl ( 0 ),
    m_dockData ( 0 ),
    m_dockEFIS ( 0 ),
    m_dockMain ( 0 ),
    m_dockProp ( 0 ),

    m_scTimeFaster ( 0 ),
    m_scTimeSlower ( 0 ),

    m_viewChase ( false ),
    m_viewOrbit ( false ),
    m_viewPilot ( true  ),
    m_viewWorld ( false ),
    m_showHUD   ( true  ),

    m_timeCoef ( 1.0 ),

    m_timerId ( 0 ),

    m_typeIndex ( 0 ),

    m_phaseInp ( fdm::DataInp::Idle ),
    m_stateOut ( fdm::DataOut::Idle )
{
    m_ui->setupUi( this );

    m_dialogConf = new DialogConf( this );
    m_dialogEnvr = new DialogEnvr( this );
    m_dialogInit = new DialogInit( this );
    m_dialogMass = new DialogMass( this );

    setWidescreenDockLayout( m_dialogConf->getWidescreen() );

    m_dockAuto = new DockWidgetAuto( this );
    m_dockCtrl = new DockWidgetCtrl( this );
    m_dockData = new DockWidgetData( this );
    m_dockEFIS = new DockWidgetEFIS( this );
    m_dockMain = new DockWidgetMain( this );
    m_dockProp = new DockWidgetProp( this );

    m_dockCtrl->setObjectName( "DockCtrl" );
    m_dockData->setObjectName( "DockData" );
    m_dockEFIS->setObjectName( "DockEFIS" );
    m_dockMain->setObjectName( "DockMain" );
    m_dockProp->setObjectName( "DockProp" );

    addDockWidget( Qt::BottomDockWidgetArea , m_dockAuto );
    addDockWidget( Qt::BottomDockWidgetArea , m_dockCtrl );
    addDockWidget( Qt::RightDockWidgetArea  , m_dockData );
    addDockWidget( Qt::BottomDockWidgetArea , m_dockEFIS );
    addDockWidget( Qt::LeftDockWidgetArea   , m_dockMain );
    addDockWidget( Qt::LeftDockWidgetArea   , m_dockProp );

    m_dockCtrl->setVisible( false );
    m_dockData->setVisible( false );
    m_dockEFIS->setVisible( false );
    m_dockMain->setVisible( false );
    m_dockProp->setVisible( false );

    m_scTimeFaster = new QShortcut( QKeySequence(Qt::CTRL + Qt::Key_Equal), this, SLOT(on_actionTimeFaster_triggered()) );
    m_scTimeSlower = new QShortcut( QKeySequence(Qt::CTRL + Qt::Key_Minus), this, SLOT(on_actionTimeSlower_triggered()) );

    connect( m_dialogInit, SIGNAL(typeIndexChanged(int)), this, SLOT(dialogInit_typeIndexChanged(int)) );
    connect( m_dockMain, SIGNAL(phaseInpChanged(fdm::DataInp::PhaseInp)), this, SLOT(dockMain_phaseInpChanged(fdm::DataInp::PhaseInp)) );

    settingsRead();

    setAircraftType( m_dialogInit->getTypeIndex() );

    setPhaseIdle();
}

////////////////////////////////////////////////////////////////////////////////

MainWindow::~MainWindow()
{
    if ( m_timerId ) killTimer( m_timerId );

    settingsSave();

    if ( m_dialogConf ) delete m_dialogConf;
    m_dialogConf = 0;

    if ( m_dialogEnvr ) delete m_dialogEnvr;
    m_dialogEnvr = 0;

    if ( m_dialogInit ) delete m_dialogInit;
    m_dialogInit = 0;

    if ( m_dialogMass ) delete m_dialogMass;
    m_dialogMass = 0;

    if ( m_dockAuto ) delete m_dockAuto;
    m_dockAuto = 0;

    if ( m_dockCtrl ) delete m_dockCtrl;
    m_dockCtrl = 0;

    if ( m_dockData ) delete m_dockData;
    m_dockData = 0;

    if ( m_dockEFIS ) delete m_dockEFIS;
    m_dockEFIS = 0;

    if ( m_dockMain ) delete m_dockMain;
    m_dockMain = 0;

    if ( m_dockProp ) delete m_dockProp;
    m_dockProp = 0;

    if ( m_scTimeFaster ) delete m_scTimeFaster;
    m_scTimeFaster = 0;

    if ( m_scTimeSlower ) delete m_scTimeSlower;
    m_scTimeSlower = 0;
    
    if ( m_ui ) delete m_ui;
    m_ui = 0;
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::init()
{
    m_dialogConf->readData();
    m_dialogInit->readData();
    m_dialogMass->readData();

    m_dialogConf->updateAssignments();

    updateOutputData();

    m_timerId = startTimer( GUI_TIME_STEP );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::keyPressEvent( QKeyEvent *event )
{
    ////////////////////////////////////
    QMainWindow::keyPressEvent( event );
    ////////////////////////////////////

    if ( !event->isAutoRepeat() )
    {
        m_ui->widgetCGI->keyDn( Keys::getKey( event->key() ) );
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
        m_ui->widgetCGI->keyUp( Keys::getKey( event->key() ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::closeEvent( QCloseEvent *event )
{
    QString title = windowTitle();
    QString text = "Do you really want to quit?";

    QMessageBox::StandardButton result = QMessageBox::question( this, title, text,
                                                                QMessageBox::Yes | QMessageBox::No,
                                                                QMessageBox::No );

    if ( result == QMessageBox::Yes )
    {
        /////////////////////////////////
        QMainWindow::closeEvent( event );
        /////////////////////////////////
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

    m_stateOut = Data::get()->stateOut;

    if ( m_stateOut == fdm::DataOut::Stopped )
    {
        if ( m_phaseInp != fdm::DataInp::Idle && m_phaseInp != fdm::DataInp::Stop )
        {
            setPhaseStop();
        }
    }

    updateDateTime();

    updateDockMain();
    updateDockData();
    updateDockCtrl();
    updateDockProp();
    updateDockEFIS();
    updateDockAuto();

    updateMenu();
    updateStatusBar();

    updateOutputData();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::setPhaseIdle()
{
    m_ui->actionPhaseInpIdle->setChecked( true );
    m_ui->actionPhaseInpInit->setChecked( false );
    m_ui->actionPhaseInpWork->setChecked( false );
    m_ui->actionPhaseInpPause->setChecked( false );
    m_ui->actionPhaseInpStop->setChecked( false );

    m_phaseInp = fdm::DataInp::Idle;
    m_dockMain->setPhaseInp( m_phaseInp );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::setPhaseInit()
{
    m_ui->actionPhaseInpIdle->setChecked( false );
    m_ui->actionPhaseInpInit->setChecked( true );
    m_ui->actionPhaseInpWork->setChecked( false );
    m_ui->actionPhaseInpPause->setChecked( false );
    m_ui->actionPhaseInpStop->setChecked( false );

    m_phaseInp = fdm::DataInp::Init;
    m_dockMain->setPhaseInp( m_phaseInp );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::setPhaseWork()
{
    m_ui->actionPhaseInpIdle->setChecked( false );
    m_ui->actionPhaseInpInit->setChecked( false );
    m_ui->actionPhaseInpWork->setChecked( true );
    m_ui->actionPhaseInpPause->setChecked( false );
    m_ui->actionPhaseInpStop->setChecked( false );

    m_phaseInp = fdm::DataInp::Work;
    m_dockMain->setPhaseInp( m_phaseInp );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::setPhasePause()
{
    m_ui->actionPhaseInpIdle->setChecked( false );
    m_ui->actionPhaseInpInit->setChecked( false );
    m_ui->actionPhaseInpWork->setChecked( false );
    m_ui->actionPhaseInpPause->setChecked( true );
    m_ui->actionPhaseInpStop->setChecked( false );

    m_phaseInp = fdm::DataInp::Pause;
    m_dockMain->setPhaseInp( m_phaseInp );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::setPhaseStop()
{
    m_ui->actionPhaseInpIdle->setChecked( false );
    m_ui->actionPhaseInpInit->setChecked( false );
    m_ui->actionPhaseInpWork->setChecked( false );
    m_ui->actionPhaseInpPause->setChecked( false );
    m_ui->actionPhaseInpStop->setChecked( true );

    m_phaseInp = fdm::DataInp::Stop;
    m_dockMain->setPhaseInp( m_phaseInp );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::setAircraftType( int typeIndex )
{
    m_typeIndex = typeIndex;

    m_dialogMass->setAircraftType( typeIndex );

    m_dockCtrl->setAircraftType( typeIndex );
    m_dockProp->setAircraftType( typeIndex );

    m_ui->widgetCGI->setDistanceDef( Aircrafts::instance()->getAircraft( typeIndex ).distance_def );
    m_ui->widgetCGI->setDistanceMin( Aircrafts::instance()->getAircraft( typeIndex ).distance_min );
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

void MainWindow::setWidescreenDockLayout( bool enabled )
{
    setSideDockAreasFullHeight( enabled, enabled );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::settingsRead()
{
    QSettings settings( GUI_ORG_NAME, GUI_APP_NAME );
    
    settings.beginGroup( "main_window" );

    restoreState( settings.value( "state" ).toByteArray() );
    restoreGeometry( settings.value( "geometry" ).toByteArray() );

    settingsRead_Airport( settings );
    settingsRead_View( settings );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::settingsRead_Airport( QSettings &settings )
{
    settings.beginGroup( "airport" );

    bool lightsHELI = settings.value( "lightsHELI", 1 ).toInt();
    bool lightsRALS = settings.value( "lightsRALS", 1 ).toInt();
    bool lightsRCLS = settings.value( "lightsRCLS", 1 ).toInt();
    bool lightsRELS = settings.value( "lightsRELS", 1 ).toInt();
    bool lightsTDZL = settings.value( "lightsTDZL", 1 ).toInt();
    bool lightsTELS = settings.value( "lightsTELS", 1 ).toInt();
    bool lightsTWRL = settings.value( "lightsTWRL", 1 ).toInt();
    bool lightsVGSI = settings.value( "lightsVGSI", 1 ).toInt();
    bool gatesRwy18 = settings.value( "gatesRwy18", 0 ).toInt();
    bool gatesRwy36 = settings.value( "gatesRwy36", 0 ).toInt();

    m_ui->actionAirportLightsHELI->setChecked( lightsHELI );
    m_ui->actionAirportLightsRALS->setChecked( lightsRALS );
    m_ui->actionAirportLightsRCLS->setChecked( lightsRCLS );
    m_ui->actionAirportLightsRELS->setChecked( lightsRELS );
    m_ui->actionAirportLightsTDZL->setChecked( lightsTDZL );
    m_ui->actionAirportLightsTELS->setChecked( lightsTELS );
    m_ui->actionAirportLightsTWRL->setChecked( lightsTWRL );
    m_ui->actionAirportLightsVGSI->setChecked( lightsVGSI );
    m_ui->actionAirportGatesRwy18->setChecked( gatesRwy18 );
    m_ui->actionAirportGatesRwy36->setChecked( gatesRwy36 );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::settingsRead_View( QSettings &settings )
{
    settings.beginGroup( "view" );

    m_viewChase = settings.value( "view_chase", 0 ).toInt();
    m_viewOrbit = settings.value( "view_orbit", 0 ).toInt();
    m_viewPilot = settings.value( "view_pilot", 1 ).toInt();
    m_viewWorld = settings.value( "view_world", 0 ).toInt();

    m_showHUD = settings.value( "show_hud", 1 ).toInt();

    if ( m_viewChase || m_viewOrbit || m_viewPilot || m_viewWorld )
    {
        m_ui->stackedMain->setCurrentIndex( 1 );

        if ( m_viewChase )
        {
            m_viewOrbit = false;
            m_viewPilot = false;
            m_viewWorld = false;

            m_ui->widgetCGI->setCameraManipulatorChase();
        }
        else if ( m_viewOrbit )
        {
            m_viewChase = false;
            m_viewPilot = false;
            m_viewWorld = false;

            m_ui->widgetCGI->setCameraManipulatorOrbit();
        }
        else if ( m_viewPilot )
        {
            m_viewChase = false;
            m_viewOrbit = false;
            m_viewWorld = false;

            m_ui->widgetCGI->setCameraManipulatorPilot();
        }
        else if ( m_viewWorld )
        {
            m_viewChase = false;
            m_viewOrbit = false;
            m_viewPilot = false;

            m_ui->widgetCGI->setCameraManipulatorWorld();
        }
    }
    else
    {
        m_viewOrbit = false;
        m_viewPilot = true;
        m_viewWorld = false;

        m_ui->widgetCGI->setCameraManipulatorPilot();
    }

    m_ui->actionViewChase->setChecked( m_viewChase );
    m_ui->actionViewOrbit->setChecked( m_viewOrbit );
    m_ui->actionViewPilot->setChecked( m_viewPilot );
    m_ui->actionViewWorld->setChecked( m_viewWorld );

    m_ui->actionShowHUD->setChecked( m_showHUD );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::settingsSave()
{
    QSettings settings( GUI_ORG_NAME, GUI_APP_NAME );
    
    settings.beginGroup( "main_window" );

    settings.setValue( "state", saveState() );
    settings.setValue( "geometry", saveGeometry() );

    settingsSave_Airport( settings );
    settingsSave_View( settings );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::settingsSave_Airport( QSettings &settings )
{
    settings.beginGroup( "airport" );

    settings.setValue( "lightsHELI", (int)m_ui->actionAirportLightsHELI->isChecked() );
    settings.setValue( "lightsRALS", (int)m_ui->actionAirportLightsRALS->isChecked() );
    settings.setValue( "lightsRCLS", (int)m_ui->actionAirportLightsRCLS->isChecked() );
    settings.setValue( "lightsRELS", (int)m_ui->actionAirportLightsRELS->isChecked() );
    settings.setValue( "lightsTDZL", (int)m_ui->actionAirportLightsTDZL->isChecked() );
    settings.setValue( "lightsTELS", (int)m_ui->actionAirportLightsTELS->isChecked() );
    settings.setValue( "lightsTWRL", (int)m_ui->actionAirportLightsTWRL->isChecked() );
    settings.setValue( "lightsVGSI", (int)m_ui->actionAirportLightsVGSI->isChecked() );
    settings.setValue( "gatesRwy18", (int)m_ui->actionAirportGatesRwy18->isChecked() );
    settings.setValue( "gatesRwy36", (int)m_ui->actionAirportGatesRwy36->isChecked() );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::settingsSave_View( QSettings &settings )
{
    settings.beginGroup( "view" );

    settings.setValue( "view_chase", (int)m_viewChase );
    settings.setValue( "view_orbit", (int)m_viewOrbit );
    settings.setValue( "view_pilot", (int)m_viewPilot );
    settings.setValue( "view_world", (int)m_viewWorld );

    settings.setValue( "show_hud", (int)m_showHUD );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateDateTime()
{
    if ( m_stateOut == fdm::DataOut::Idle )
    {
        m_dateTime = m_dialogInit->getDateTime();
        m_flightTime.setHMS( 0, 0, 0 );
    }

    if ( m_stateOut == fdm::DataOut::Working )
    {
        m_dateTime   = m_dateTime.addMSecs( m_timeCoef * GUI_TIME_STEP );
        m_flightTime = m_flightTime.addMSecs( m_timeCoef * GUI_TIME_STEP );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateDockAuto() {}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateDockCtrl()
{
    if ( m_dockCtrl->isVisible() )
    {
        m_dockCtrl->setCollective( hid::Manager::instance()->getCollective() );

        m_dockCtrl->setCtrlStick( hid::Manager::instance()->getCtrlRoll(),
                                  hid::Manager::instance()->getCtrlPitch() );

        m_dockCtrl->setTrimStick( hid::Manager::instance()->getTrimRoll(),
                                  hid::Manager::instance()->getTrimPitch() );

        m_dockCtrl->setCtrlPedals( hid::Manager::instance()->getCtrlYaw() );
        m_dockCtrl->setTrimPedals( hid::Manager::instance()->getTrimYaw() );

        m_dockCtrl->setBrakes( hid::Manager::instance()->getBrakeLeft(),
                               hid::Manager::instance()->getBrakeRight() );

        m_dockCtrl->setGear( hid::Manager::instance()->getLandingGear() );
        m_dockCtrl->setFlaps( hid::Manager::instance()->getFlaps() );

        m_dockCtrl->setThrottle( hid::Manager::instance()->getThrottle( 0 ),
                                 hid::Manager::instance()->getThrottle( 1 ),
                                 hid::Manager::instance()->getThrottle( 2 ),
                                 hid::Manager::instance()->getThrottle( 3 ) );

        m_dockCtrl->setMixture( hid::Manager::instance()->getMixture( 0 ),
                                hid::Manager::instance()->getMixture( 1 ),
                                hid::Manager::instance()->getMixture( 2 ),
                                hid::Manager::instance()->getMixture( 3 ) );

        m_dockCtrl->setPropeller( hid::Manager::instance()->getPropeller( 0 ),
                                  hid::Manager::instance()->getPropeller( 1 ),
                                  hid::Manager::instance()->getPropeller( 2 ),
                                  hid::Manager::instance()->getPropeller( 3 ) );

        m_dockCtrl->setAirbrake( hid::Manager::instance()->getAirbrake() );
        m_dockCtrl->setSpoilers( hid::Manager::instance()->getSpoilers() );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateDockData()
{
    if ( m_dockData->isVisible() )
    {
        if ( m_stateOut == fdm::DataOut::Idle )
        {
            m_dockData->reset();
        }
        else
        {
            m_dockData->setAltitudeASL( Data::get()->ownship.altitude_asl );
            m_dockData->setAltitudeAGL( Data::get()->ownship.altitude_agl );

            m_dockData->setAirspeed( Data::get()->ownship.airspeed );
            m_dockData->setClimbRate( Data::get()->ownship.climbRate );
            m_dockData->setMachNumber( Data::get()->ownship.machNumber );

            m_dockData->setRollAngle( Data::get()->ownship.roll );
            m_dockData->setPitchAngle( Data::get()->ownship.pitch );
            m_dockData->setHeading( Data::get()->ownship.heading );

            m_dockData->setAngleOfAttack( Data::get()->ownship.angleOfAttack );
            m_dockData->setSideslipAngle( Data::get()->ownship.sideslipAngle );
            m_dockData->setCourse( Data::get()->ownship.course );
            m_dockData->setPathAngle( Data::get()->ownship.pathAngle );

            m_dockData->setRollRate( Data::get()->ownship.rollRate );
            m_dockData->setPitchRate( Data::get()->ownship.pitchRate );
            m_dockData->setYawRate( Data::get()->ownship.yawRate );

            m_dockData->setGx( Data::get()->ownship.g_force_x );
            m_dockData->setGy( Data::get()->ownship.g_force_y );
            m_dockData->setGz( Data::get()->ownship.g_force_z );
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateDockEFIS()
{
    if ( m_dockEFIS->isVisible() )
    {
        m_dockEFIS->setRoll( fdm::Units::rad2deg( Data::get()->ownship.roll ) );
        m_dockEFIS->setPitch( fdm::Units::rad2deg( Data::get()->ownship.pitch ) );

        m_dockEFIS->setSlipSkid( Data::get()->ownship.slipSkidAngle / fdm::Units::deg2rad( 9.0 ) );
        m_dockEFIS->setTurnRate( Data::get()->ownship.yawRate       / fdm::Units::deg2rad( 6.0 ) );

        m_dockEFIS->setDots( Data::get()->navigation.ils_lc_deviation,
                             Data::get()->navigation.ils_gs_deviation,
                             Data::get()->navigation.ils_lc_visible,
                             Data::get()->navigation.ils_gs_visible );

        m_dockEFIS->setFD( 0.0, 0.0, false );

        m_dockEFIS->setStall( Data::get()->ownship.stall );

        m_dockEFIS->setAltitude( fdm::Units::m2ft( Data::get()->ownship.altitude_asl ) );
        m_dockEFIS->setAirspeed( fdm::Units::mps2kts( Data::get()->ownship.airspeed ) );

        m_dockEFIS->setMachNo( Data::get()->ownship.machNumber );

        m_dockEFIS->setHeading( fdm::Units::rad2deg( Data::get()->ownship.heading ) );

        m_dockEFIS->setClimbRate( fdm::Units::mps2fpm( Data::get()->ownship.climbRate ) / 1000.0 );

        m_dockEFIS->setDistance( fdm::Units::m2nmi( Data::get()->navigation.nav_distance ),
                                 Data::get()->navigation.nav_visible );
        m_dockEFIS->setBearing( fdm::Units::rad2deg( Data::get()->navigation.adf_bearing ),
                                Data::get()->navigation.adf_visible );
        m_dockEFIS->setDeviation( Data::get()->navigation.nav_deviation,
                                  Data::get()->navigation.nav_visible );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateDockMain()
{
    if ( m_dockMain->isVisible() )
    {
        m_dockMain->setPhaseInp( m_phaseInp );
        m_dockMain->setStateOut( m_stateOut );

        if ( m_stateOut == fdm::DataOut::Working )
        {
            m_dockMain->setTimeStep( Data::get()->timeStep );
        }
        else
        {
            m_dockMain->setTimeStep( FDM_TIME_STEP );
        }

        m_dockMain->setFlightTime( m_flightTime );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateDockProp()
{
    if ( m_dockProp->isVisible() )
    {
        for ( unsigned int i = 0; i < FDM_MAX_ENGINES; i++ )
        {
            m_dockProp->setState ( i, Data::get()->propulsion.engine[ i ].state );
            m_dockProp->setAB    ( i, Data::get()->propulsion.engine[ i ].afterburner );
            m_dockProp->setRPM   ( i, M_PI * Data::get()->propulsion.engine[ i ].rpm  / 30.0f );
            m_dockProp->setPROP  ( i, M_PI * Data::get()->propulsion.engine[ i ].prop / 30.0f );
            m_dockProp->setNG    ( i, Data::get()->propulsion.engine[ i ].ng  / 100.0f );
            m_dockProp->setN1    ( i, Data::get()->propulsion.engine[ i ].n1  / 100.0f );
            m_dockProp->setN2    ( i, Data::get()->propulsion.engine[ i ].n2  / 100.0f );
            m_dockProp->setTRQ   ( i, Data::get()->propulsion.engine[ i ].trq / 100.0f );
            m_dockProp->setEPR   ( i, Data::get()->propulsion.engine[ i ].epr );
            m_dockProp->setMAP   ( i, Data::get()->propulsion.engine[ i ].map );
            m_dockProp->setEGT   ( i, fdm::Units::c2k( Data::get()->propulsion.engine[ i ].egt ) );
            m_dockProp->setTIT   ( i, fdm::Units::c2k( Data::get()->propulsion.engine[ i ].tit ) );
            m_dockProp->setTOT   ( i, fdm::Units::c2k( Data::get()->propulsion.engine[ i ].egt ) );
            m_dockProp->setITT   ( i, fdm::Units::c2k( Data::get()->propulsion.engine[ i ].itt ) );
            m_dockProp->setFF    ( i, Data::get()->propulsion.engine[ i ].ff );
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateMenu()
{
    switch ( m_stateOut )
    {
    default:
    case fdm::DataOut::Idle:
        m_ui->actionPhaseInpIdle->setEnabled( true );
        m_ui->actionPhaseInpInit->setEnabled( true );
        m_ui->actionPhaseInpWork->setEnabled( false );
        m_ui->actionPhaseInpPause->setEnabled( false );
        m_ui->actionPhaseInpStop->setEnabled( false );
        break;

    case fdm::DataOut::Ready:
        m_ui->actionPhaseInpIdle->setEnabled( false );
        m_ui->actionPhaseInpInit->setEnabled( true );
        m_ui->actionPhaseInpWork->setEnabled( true );
        m_ui->actionPhaseInpPause->setEnabled( true );
        m_ui->actionPhaseInpStop->setEnabled( true );
        break;

    case fdm::DataOut::Working:
        m_ui->actionPhaseInpIdle->setEnabled( false );
        m_ui->actionPhaseInpInit->setEnabled( false );
        m_ui->actionPhaseInpWork->setEnabled( true );
        m_ui->actionPhaseInpPause->setEnabled( true );
        m_ui->actionPhaseInpStop->setEnabled( true );
        break;

    case fdm::DataOut::Paused:
        m_ui->actionPhaseInpIdle->setEnabled( false );
        m_ui->actionPhaseInpInit->setEnabled( false );
        m_ui->actionPhaseInpWork->setEnabled( true );
        m_ui->actionPhaseInpPause->setEnabled( true );
        m_ui->actionPhaseInpStop->setEnabled( true );
        break;

    case fdm::DataOut::Stopped:
        m_ui->actionPhaseInpIdle->setEnabled( true );
        m_ui->actionPhaseInpInit->setEnabled( false );
        m_ui->actionPhaseInpWork->setEnabled( false );
        m_ui->actionPhaseInpPause->setEnabled( false );
        m_ui->actionPhaseInpStop->setEnabled( true );
        break;
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateStatusBar()
{
    double frameRate = 1.0 / FDM_TIME_STEP;

    if ( m_stateOut == fdm::DataOut::Working )
    {
        frameRate = 1.0 / Data::get()->timeStep;
    }

    QString text = "";

    text += "Time Coef: " + QString::number( m_timeCoef, 'd', 1 );
    text += "   ";
    text += "Frame Rate: " + QString::number( frameRate, 'd', 2 );

    m_ui->statusBar->showMessage( text );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateOutputData()
{
    // airport
    Data::get()->airport.lightsHELI = m_ui->actionAirportLightsHELI->isChecked();
    Data::get()->airport.lightsRALS = m_ui->actionAirportLightsRALS->isChecked();
    Data::get()->airport.lightsRCLS = m_ui->actionAirportLightsRCLS->isChecked();
    Data::get()->airport.lightsRELS = m_ui->actionAirportLightsRELS->isChecked();
    Data::get()->airport.lightsTDZL = m_ui->actionAirportLightsTDZL->isChecked();
    Data::get()->airport.lightsTELS = m_ui->actionAirportLightsTELS->isChecked();
    Data::get()->airport.lightsTWRL = m_ui->actionAirportLightsTWRL->isChecked();
    Data::get()->airport.lightsVGSI = m_ui->actionAirportLightsVGSI->isChecked();
    Data::get()->airport.gatesRwy18 = m_ui->actionAirportGatesRwy18->isChecked();
    Data::get()->airport.gatesRwy36 = m_ui->actionAirportGatesRwy36->isChecked();

    // date time
    Data::get()->dateTime.year   = (unsigned short)m_dateTime.date().year();
    Data::get()->dateTime.month  = (unsigned short)m_dateTime.date().month();
    Data::get()->dateTime.day    = (unsigned short)m_dateTime.date().day();
    Data::get()->dateTime.hour   = (unsigned short)m_dateTime.time().hour();
    Data::get()->dateTime.minute = (unsigned short)m_dateTime.time().minute();
    Data::get()->dateTime.second = (unsigned short)m_dateTime.time().second();

    // environment
    Data::get()->environment.visibility     = m_dialogEnvr->getVisibility();
    Data::get()->environment.temperature_0  = m_dialogEnvr->getTemperatureSL();
    Data::get()->environment.pressure_0     = m_dialogEnvr->getPressureSL();
    Data::get()->environment.wind_direction = m_dialogEnvr->getWindDirection();
    Data::get()->environment.wind_speed     = m_dialogEnvr->getWindSpeed();
    Data::get()->environment.turbulence     = m_dialogEnvr->getTurbulence();
    Data::get()->environment.windShear      = m_dialogEnvr->getWindShear();

    // HUD
    Data::get()->hud.enabled = m_showHUD;
    Data::get()->hud.color_r = m_dialogConf->getHudColorR();
    Data::get()->hud.color_g = m_dialogConf->getHudColorG();
    Data::get()->hud.color_b = m_dialogConf->getHudColorB();
    Data::get()->hud.opacity = (double)m_dialogConf->getHudOpacity() / 100.0f;

    // initial conditions
    Data::get()->initial.latitude     = m_dialogInit->getLat();
    Data::get()->initial.longitude    = m_dialogInit->getLon();
    Data::get()->initial.altitude_agl = m_dialogInit->getAlt();
    Data::get()->initial.heading      = m_dialogInit->getPsi();
    Data::get()->initial.airspeed     = m_dialogInit->getIAS();
    Data::get()->initial.engineOn     = m_dialogInit->getEngine();

    Aircrafts::Aircraft aircraft = Aircrafts::instance()->getAircraft( m_dialogInit->getTypeIndex() );

    // ownship
    strcpy( Data::get()->ownship.aircraftFile, aircraft.file.toStdString().c_str() );

    Data::get()->ownship.mainRotor_coef = aircraft.mainRotorCoef;
    Data::get()->ownship.tailRotor_coef = aircraft.tailRotorCoef;

    // propulsion
    for ( unsigned int i = 0; i < FDM_MAX_ENGINES; i++ )
    {
        Data::get()->propulsion.engine[ i ].fuel     = m_dockProp->getFuel( i );
        Data::get()->propulsion.engine[ i ].ignition = m_dockProp->getIgnition( i );
        Data::get()->propulsion.engine[ i ].starter  = m_dockProp->getStarter( i );
    }

    // masses
    Data::get()->masses.pilot_1     = m_dialogMass->getPilot1();
    Data::get()->masses.pilot_2     = m_dialogMass->getPilot2();
    Data::get()->masses.fuel_tank_1 = m_dialogMass->getFuelTank1();
    Data::get()->masses.fuel_tank_2 = m_dialogMass->getFuelTank2();
    Data::get()->masses.fuel_tank_3 = m_dialogMass->getFuelTank3();
    Data::get()->masses.fuel_tank_4 = m_dialogMass->getFuelTank4();
    Data::get()->masses.cabin       = m_dialogMass->getCabin();
    Data::get()->masses.trunk       = m_dialogMass->getTrunk();

    // aircraft type
    Data::get()->aircraftType = (fdm::DataInp::AircraftType)aircraft.type;

    // FDM (input phase)
    Data::get()->phaseInp = m_phaseInp;

    // time coefficient
    Data::get()->timeCoef = m_timeCoef;
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDialogConf_triggered()
{
    m_dialogConf->readData();

    if ( m_dialogConf->exec() == QDialog::Accepted )
    {
        m_dialogConf->saveData();
        m_dialogConf->updateAssignments();
        setWidescreenDockLayout( m_dialogConf->getWidescreen() );
    }
    else
    {
        m_dialogConf->readData();
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDialogEnvr_triggered()
{
    m_dialogEnvr->readData();

    if ( m_dialogEnvr->exec() == QDialog::Accepted )
    {
        m_dialogEnvr->saveData();
    }
    else
    {
        m_dialogEnvr->readData();
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDialogInit_triggered()
{
    m_dialogInit->readData();

    if ( m_dialogInit->exec() == QDialog::Accepted )
    {
        m_dialogInit->saveData();
    }
    else
    {
        m_dialogInit->readData();
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDialogMass_triggered()
{
    m_dialogMass->readData();

    if ( m_dialogMass->exec() == QDialog::Accepted )
    {
        m_dialogMass->saveData();
    }
    else
    {
        m_dialogMass->readData();
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDockAuto_triggered()
{
    m_dockAuto->setVisible( true );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDockCtrl_triggered()
{
    m_dockCtrl->setVisible( true );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDockData_triggered()
{
    m_dockData->setVisible( true );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDockEFIS_triggered()
{
    m_dockEFIS->setVisible( true );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDockMain_triggered()
{
    m_dockMain->setVisible( true );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionDockProp_triggered()
{
    m_dockProp->setVisible( true );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionPhaseInpIdle_triggered()
{
    setPhaseIdle();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionPhaseInpInit_triggered()
{
    setPhaseInit();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionPhaseInpWork_triggered()
{
    setPhaseWork();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionPhaseInpPause_triggered()
{
    setPhasePause();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionPhaseInpStop_triggered()
{
    setPhaseStop();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionQuit_triggered()
{
    close();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionViewChase_triggered()
{
    m_viewChase = true;
    m_viewOrbit = false;
    m_viewPilot = false;
    m_viewWorld = false;

    m_ui->actionViewChase->setChecked( true  );
    m_ui->actionViewOrbit->setChecked( false );
    m_ui->actionViewPilot->setChecked( false );
    m_ui->actionViewWorld->setChecked( false );

    m_ui->stackedMain->setCurrentIndex( 1 );

    m_ui->widgetCGI->setCameraManipulatorChase();
    m_ui->widgetCGI->setDistanceDef( Aircrafts::instance()->getAircraft( m_typeIndex ).distance_def );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionViewOrbit_triggered()
{
    m_viewChase = false;
    m_viewOrbit = true;
    m_viewPilot = false;
    m_viewWorld = false;

    m_ui->actionViewChase->setChecked( false );
    m_ui->actionViewOrbit->setChecked( true  );
    m_ui->actionViewPilot->setChecked( false );
    m_ui->actionViewWorld->setChecked( false );

    m_ui->stackedMain->setCurrentIndex( 1 );

    m_ui->widgetCGI->setCameraManipulatorOrbit();
    m_ui->widgetCGI->setDistanceDef( Aircrafts::instance()->getAircraft( m_typeIndex ).distance_def );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionViewPilot_triggered()
{
    m_viewChase = false;
    m_viewOrbit = false;
    m_viewPilot = true;
    m_viewWorld = false;

    m_ui->actionViewChase->setChecked( false );
    m_ui->actionViewOrbit->setChecked( false );
    m_ui->actionViewPilot->setChecked( true  );
    m_ui->actionViewWorld->setChecked( false );

    m_ui->stackedMain->setCurrentIndex( 1 );

    m_ui->widgetCGI->setCameraManipulatorPilot();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionViewWorld_triggered()
{
    m_viewChase = false;
    m_viewOrbit = false;
    m_viewPilot = false;
    m_viewWorld = true;

    m_ui->actionViewChase->setChecked( false );
    m_ui->actionViewOrbit->setChecked( false );
    m_ui->actionViewPilot->setChecked( false );
    m_ui->actionViewWorld->setChecked( true  );

    m_ui->stackedMain->setCurrentIndex( 1 );

    m_ui->widgetCGI->setCameraManipulatorWorld();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionShowHUD_triggered( bool checked )
{
    m_showHUD = checked;
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionTimeFaster_triggered()
{
    if ( m_timeCoef > 0.9 )
    {
        if ( m_timeCoef < 10.0 )
        {
            m_timeCoef += 1.0;
        }
        else
        {
            m_timeCoef = 10.0;
        }
    }
    else
    {
        m_timeCoef += 0.1;
    }

    if ( m_timeCoef > 10.0 ) m_timeCoef = 10.0;
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionTimeSlower_triggered()
{
    if ( m_timeCoef > 1.0 )
    {
        m_timeCoef -= 1.0;
    }
    else
    {
        if ( m_timeCoef > 0.1 )
        {
            m_timeCoef -= 0.1;
        }
        else
        {
            m_timeCoef = 0.0;
        }
    }

    if ( m_timeCoef < 0.1 ) m_timeCoef = 0.1;
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::dialogInit_typeIndexChanged( int typeIndex )
{
    setAircraftType( typeIndex );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::dockMain_phaseInpChanged( fdm::DataInp::PhaseInp phaseInp )
{
    switch ( phaseInp )
    {
        case fdm::DataInp::Idle:  setPhaseIdle();  break;
        case fdm::DataInp::Init:  setPhaseInit();  break;
        case fdm::DataInp::Work:  setPhaseWork();  break;
        case fdm::DataInp::Pause: setPhasePause(); break;
        case fdm::DataInp::Stop:  setPhaseStop();  break;
    }
}
