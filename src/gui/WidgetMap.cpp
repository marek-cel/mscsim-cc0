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

#include <gui/WidgetMap.h>

#include <QAction>
#include <QContextMenuEvent>
#include <QMenu>
#include <QSettings>

#include <osgGA/StateSetManipulator>

#include <osgViewer/Viewer>
#include <osgViewer/ViewerEventHandlers>

#include <cgi/cgi_Defines.h>
#include <cgi/cgi_Manager.h>
#include <cgi/cgi_Mercator.h>

#include <gui/gui_Defines.h>

////////////////////////////////////////////////////////////////////////////////

void scaleChangeCallback( double scale )
{
    cgi::Manager::instance()->setMapScale( scale );
}

////////////////////////////////////////////////////////////////////////////////

WidgetMap::WidgetMap( QWidget *parent ) :
    WidgetOSG ( parent ),
    _timerId ( 0 ),
    _camManipulatorInited ( false ),
    _viewCrops     ( false ),
    _viewGrassland ( false ),
    _viewWoodland  ( false ),
    _viewBuiltup   ( false ),
    _viewRailroads ( false ),
    _viewRoads     ( false ),
    _viewAirports  ( true  ),
    _viewSatellite ( false ),
    _viewBorders   ( false ),
    _viewTraces    ( true  )
{
    setMouseTracking( true );

    _manipulator = new cgi::ManipulatorMap();
    _manipulator->registerScaleChangeCallback( &scaleChangeCallback );
    _manipulator->setScaleMin( 1.0e-5 );//m_manipulator->setScaleMin( 5.0e-5 );
    _manipulator->setScaleMax( 1.0 );
    _manipulator->setMapHeight( 2.0 * CGI_MAP_Y_2 );
    _manipulator->setMapMinX( -cgi::Mercator::_max_x );
    _manipulator->setMapMaxX(  cgi::Mercator::_max_x );
    _manipulator->setMapMinY( -cgi::Mercator::_max_y );
    _manipulator->setMapMaxY(  cgi::Mercator::_max_y );
    _manipulator->setAllowThrow( true );
    _manipulator->setScale( 1.0e-3 );

#   ifdef USE_OSGQOPENGL
    QObject::connect( this, &osgQOpenGLWidget::initialized, [ this ]
    {
        getOsgViewer()->setThreadingModel( osgViewer::ViewerBase::SingleThreaded );
        //getOsgViewer()->setThreadingModel( osgViewer::ViewerBase::ThreadPerContext );

        createCameraMap();

        // add the state manipulator
        getOsgViewer()->addEventHandler( new osgGA::StateSetManipulator( getOsgViewer()->getCamera()->getOrCreateStateSet() ) );

        // add the thread model handler
        getOsgViewer()->addEventHandler( new osgViewer::ThreadingHandler );

        // add the window size toggle handler
        getOsgViewer()->addEventHandler( new osgViewer::WindowSizeHandler );

        // add the stats handler
        getOsgViewer()->addEventHandler( new osgViewer::StatsHandler );

        // add the record camera path handler
        getOsgViewer()->addEventHandler( new osgViewer::RecordCameraPathHandler );

        // add the LOD Scale handler
        getOsgViewer()->addEventHandler( new osgViewer::LODScaleHandler );

        // add the screen capture handler
        getOsgViewer()->addEventHandler( new osgViewer::ScreenCaptureHandler );

        getOsgViewer()->setKeyEventSetsDone( 0 );

        /////////////////////////////////////////////////
        getOsgViewer()->setSceneData( new osg::Group() );
        /////////////////////////////////////////////////

        getOsgViewer()->assignSceneDataToCameras();

        _initialized = true;
    });
#   else
    QWidget *widget = addViewWidget();

    _layout = new QGridLayout( this );
    _layout->setContentsMargins( 1, 1, 1, 1 );
    _layout->addWidget( widget, 0, 0 );

    setLayout( _layout );
#   endif

    settingsRead();

    cgi::Manager::instance()->setVisibilityCrops     ( _viewCrops     );
    cgi::Manager::instance()->setVisibilityGrassland ( _viewGrassland );
    cgi::Manager::instance()->setVisibilityWoodland  ( _viewWoodland  );
    cgi::Manager::instance()->setVisibilityBuiltup   ( _viewBuiltup   );
    cgi::Manager::instance()->setVisibilityRailroads ( _viewRailroads );
    cgi::Manager::instance()->setVisibilityRoads     ( _viewRoads     );
    cgi::Manager::instance()->setVisibilityAirports  ( _viewAirports  );
    cgi::Manager::instance()->setVisibilitySatellite ( _viewSatellite );
    cgi::Manager::instance()->setVisibilityBorders   ( _viewBorders   );
    cgi::Manager::instance()->setVisibilityTraces    ( _viewTraces    );

    _timerId = startTimer( 1000.0 * GUI_TIME_STEP );
}

////////////////////////////////////////////////////////////////////////////////

WidgetMap::~WidgetMap()
{
    if ( _timerId ) killTimer( _timerId );

    settingsSave();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::contextMenuEvent( QContextMenuEvent *event )
{
    QMenu menuContext( this );

    QMenu menuLayers( this );
    QMenu menuTraces( this );

    menuContext.addMenu( &menuLayers );
    menuContext.addMenu( &menuTraces );

    menuLayers.setTitle( "Layers" );
    menuTraces.setTitle( "Traces" );

    QAction actionViewCrops     ( this );
    QAction actionViewGrassland ( this );
    QAction actionViewWoodland  ( this );
    QAction actionViewBuiltup   ( this );
    QAction actionViewRailroads ( this );
    QAction actionViewRoads     ( this );
    QAction actionViewAirports  ( this );
    QAction actionViewSatellite ( this );
    QAction actionViewBorders   ( this );
    QAction actionViewTraces    ( this );
    QAction actionTracesReset   ( this );
    QAction actionCenterView    ( this );

    actionViewCrops     .setText( "Show/Hide Crops" );
    actionViewGrassland .setText( "Show/Hide Grass" );
    actionViewWoodland  .setText( "Show/Hide Forests" );
    actionViewBuiltup   .setText( "Show/Hide Cities" );
    actionViewRailroads .setText( "Show/Hide Railroads" );
    actionViewRoads     .setText( "Show/Hide Roads" );
    actionViewAirports  .setText( "Show/Hide Airports" );
    actionViewSatellite .setText( "Show/Hide Satellite" );
    actionViewBorders   .setText( "Show/Hide Borders" );
    actionViewTraces    .setText( "Show/Hide Traces" );
    actionTracesReset   .setText( "Reset Traces" );
    actionCenterView    .setText( "Center View" );

    actionViewCrops     .setCheckable( true );
    actionViewGrassland .setCheckable( true );
    actionViewWoodland  .setCheckable( true );
    actionViewBuiltup   .setCheckable( true );
    actionViewRailroads .setCheckable( true );
    actionViewRoads     .setCheckable( true );
    actionViewAirports  .setCheckable( true );
    actionViewSatellite .setCheckable( true );
    actionViewBorders   .setCheckable( true );
    actionViewTraces    .setCheckable( true );

    actionViewCrops     .setChecked( _viewCrops     );
    actionViewGrassland .setChecked( _viewGrassland );
    actionViewWoodland  .setChecked( _viewWoodland  );
    actionViewBuiltup   .setChecked( _viewBuiltup   );
    actionViewRailroads .setChecked( _viewRailroads );
    actionViewRoads     .setChecked( _viewRoads     );
    actionViewAirports  .setChecked( _viewAirports  );
    actionViewSatellite .setChecked( _viewSatellite );
    actionViewBorders   .setChecked( _viewBorders   );
    actionViewTraces    .setChecked( _viewTraces    );

    connect( &actionViewCrops     , SIGNAL( toggled(bool) ), this, SLOT( actionViewCrops_toggled     (bool) ) );
    connect( &actionViewGrassland , SIGNAL( toggled(bool) ), this, SLOT( actionViewGrassland_toggled (bool) ) );
    connect( &actionViewWoodland  , SIGNAL( toggled(bool) ), this, SLOT( actionViewWoodland_toggled  (bool) ) );
    connect( &actionViewBuiltup   , SIGNAL( toggled(bool) ), this, SLOT( actionViewBuiltup_toggled   (bool) ) );
    connect( &actionViewRailroads , SIGNAL( toggled(bool) ), this, SLOT( actionViewRailroads_toggled (bool) ) );
    connect( &actionViewRoads     , SIGNAL( toggled(bool) ), this, SLOT( actionViewRoads_toggled     (bool) ) );
    connect( &actionViewAirports  , SIGNAL( toggled(bool) ), this, SLOT( actionViewAirports_toggled  (bool) ) );
    connect( &actionViewSatellite , SIGNAL( toggled(bool) ), this, SLOT( actionViewSatellite_toggled (bool) ) );
    connect( &actionViewBorders   , SIGNAL( toggled(bool) ), this, SLOT( actionViewBorders_toggled   (bool) ) );
    connect( &actionViewTraces    , SIGNAL( toggled(bool) ), this, SLOT( actionViewTraces_toggled    (bool) ) );

    connect( &actionTracesReset, SIGNAL( triggered() ), this, SLOT( actionTracesReset_triggered() ) );

    connect( &actionCenterView, SIGNAL( triggered() ), this, SLOT( actionCenterView_triggered() ) );

//    menuLayers.addAction( &actionViewCrops     );
//    menuLayers.addAction( &actionViewGrassland );
//    menuLayers.addAction( &actionViewWoodland  );
//    menuLayers.addAction( &actionViewBuiltup   );
//    menuLayers.addAction( &actionViewRailroads );
//    menuLayers.addAction( &actionViewRoads     );
    menuLayers.addAction( &actionViewAirports  );
    menuLayers.addAction( &actionViewSatellite );
//    menuLayers.addAction( &actionViewBorders   );

    menuTraces.addAction( &actionViewTraces  );
    menuTraces.addAction( &actionTracesReset );

    menuContext.addAction( &actionCenterView );

    menuContext.exec( event->globalPos() );

    actionViewCrops     .disconnect();
    actionViewGrassland .disconnect();
    actionViewWoodland  .disconnect();
    actionViewBuiltup   .disconnect();
    actionViewRailroads .disconnect();
    actionViewRoads     .disconnect();
    actionViewAirports  .disconnect();
    actionViewSatellite .disconnect();
    actionViewBorders   .disconnect();
    actionViewTraces    .disconnect();
    actionTracesReset   .disconnect();
}

////////////////////////////////////////////////////////////////////////////////

bool WidgetMap::event( QEvent *event )
{
    ///////////////////////////////
    return QWidget::event( event );
    ///////////////////////////////
}

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::timerEvent( QTimerEvent *event )
{
    /////////////////////////////
    QWidget::timerEvent( event );
    /////////////////////////////

    update();

    cgi::Manager::instance()->updateMap();

    updateMouseGeoPositionStr( _manipulator->getMouseLat(),
                               _manipulator->getMouseLon() );

    emit mouseMoveGeoPosition( _mouseGeoPositionStr );
}

////////////////////////////////////////////////////////////////////////////////

#ifndef USE_OSGQOPENGL
QWidget* WidgetMap::addViewWidget()
{
    createCameraMap();

    setSceneData( cgi::Manager::instance()->getNodeMap() );
    addEventHandler( new osgViewer::StatsHandler );
    setCameraManipulator( _manipulator.get() );

    setKeyEventSetsDone( 0 );

    assignSceneDataToCameras();

    return _gwin->getGLWidget();
}
#endif

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::createCameraMap()
{
    osg::ref_ptr<osg::Camera> cameraMap = getOsgViewer()->getCamera();

#   ifndef USE_OSGQOPENGL
    cameraMap->setGraphicsContext( _gwin );
#   endif

    const osg::GraphicsContext::Traits *traits = cameraMap->getGraphicsContext()->getTraits();

    double w2h = (double)(traits->width) / (double)(traits->height);

    cameraMap->setClearColor( osg::Vec4( cgi::Map::_colorOceans, 1.0 ) );
    //cameraMap->setClearColor( osg::Vec4( 0.0, 0.0, 0.0, 1.0 ) );
    cameraMap->setViewport( new osg::Viewport( 0, 0, traits->width, traits->height ) );

    if ( 0 )
    {
        cameraMap->setProjectionMatrixAsPerspective( CGI_MAP_FOV_Y, w2h, 1.0, 10000.0 );
    }
    else
    {
        cameraMap->setViewport( new osg::Viewport( 0, 0, traits->width, traits->height ) );
        cameraMap->setProjectionMatrixAsOrtho2D( -CGI_MAP_Y_2 * w2h, CGI_MAP_Y_2 * w2h, -CGI_MAP_Y_2, CGI_MAP_Y_2 );
        cameraMap->setViewMatrix( osg::Matrix::identity() );
    }
}

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::updateMouseGeoPositionStr( double lat, double lon )
{
    double lat_deg = osg::RadiansToDegrees( fabs( lat ) );
    double lon_deg = osg::RadiansToDegrees( fabs( lon ) );

    int lat_d = floor( lat_deg );
    int lat_m = floor( 60.0 * ( lat_deg - lat_d ) );
    double lat_s = 3600.0 * ( lat_deg - lat_d - lat_m / 60.0 );

    int lon_d = floor( lon_deg );
    int lon_m = floor( 60.0 * ( lon_deg - lon_d ) );
    double lon_s = 3600.0 * ( lon_deg - lon_d - lon_m / 60.0 );

    _mouseGeoPositionStr.clear();

    _mouseGeoPositionStr += QString("%1").arg( lon_d, 3, 'f', 0, QChar(' ') );
    _mouseGeoPositionStr += QString::fromUtf8( "° " );
    _mouseGeoPositionStr += QString("%1").arg( lon_m, 2, 'f', 0, QChar('0') );
    _mouseGeoPositionStr += "' ";
    _mouseGeoPositionStr += QString("%1").arg( lon_s, 5, 'f', 2, QChar('0') );
    _mouseGeoPositionStr += "\"";
    _mouseGeoPositionStr += ( lon > 0.0 ) ? "E" : "W";

    _mouseGeoPositionStr += ",  ";

    _mouseGeoPositionStr += QString("%1").arg( lat_d, 2, 'f', 0, QChar(' ') );
    _mouseGeoPositionStr += QString::fromUtf8( "° " );
    _mouseGeoPositionStr += QString("%1").arg( lat_m, 2, 'f', 0, QChar('0') );
    _mouseGeoPositionStr += "' ";
    _mouseGeoPositionStr += QString("%1").arg( lat_s, 5, 'f', 2, QChar('0') );
    _mouseGeoPositionStr += "\"";
    _mouseGeoPositionStr += ( lat > 0.0 ) ? "N" : "S";
}

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::settingsRead()
{
    QSettings settings( SIM_ORG_NAME, SIM_APP_NAME );

    settings.beginGroup( "widget_map" );

    _viewCrops     = settings.value( "view_crops"     , _viewCrops     ).toBool();
    _viewGrassland = settings.value( "view_grassland" , _viewGrassland ).toBool();
    _viewWoodland  = settings.value( "view_woodland"  , _viewWoodland  ).toBool();
    _viewBuiltup   = settings.value( "view_builtup"   , _viewBuiltup   ).toBool();
    _viewRailroads = settings.value( "view_railroads" , _viewRailroads ).toBool();
    _viewRoads     = settings.value( "view_roads"     , _viewRoads     ).toBool();
    _viewAirports  = settings.value( "view_airports"  , _viewAirports  ).toBool();
    _viewSatellite = settings.value( "view_satellite" , _viewSatellite ).toBool();
    _viewBorders   = settings.value( "view_borders"   , _viewBorders   ).toBool();
    _viewTraces    = settings.value( "view_traces"    , _viewTraces    ).toBool();

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::settingsSave()
{
    QSettings settings( SIM_ORG_NAME, SIM_APP_NAME );

    settings.beginGroup( "widget_map" );

    settings.setValue( "view_crops"     , _viewCrops     ? 1 : 0 );
    settings.setValue( "view_grassland" , _viewGrassland ? 1 : 0 );
    settings.setValue( "view_woodland"  , _viewWoodland  ? 1 : 0 );
    settings.setValue( "view_builtup"   , _viewBuiltup   ? 1 : 0 );
    settings.setValue( "view_railroads" , _viewRailroads ? 1 : 0 );
    settings.setValue( "view_roads"     , _viewRoads     ? 1 : 0 );
    settings.setValue( "view_airports"  , _viewAirports  ? 1 : 0 );
    settings.setValue( "view_satellite" , _viewSatellite ? 1 : 0 );
    settings.setValue( "view_borders"   , _viewBorders   ? 1 : 0 );
    settings.setValue( "view_traces"    , _viewTraces    ? 1 : 0 );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::actionViewCrops_toggled( bool checked )
{
    _viewCrops = checked;
    cgi::Manager::instance()->setVisibilityCrops( checked );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::actionViewGrassland_toggled( bool checked )
{
    _viewGrassland = checked;
    cgi::Manager::instance()->setVisibilityGrassland( checked );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::actionViewWoodland_toggled( bool checked )
{
    _viewWoodland = checked;
    cgi::Manager::instance()->setVisibilityWoodland( checked );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::actionViewBuiltup_toggled( bool checked )
{
    _viewBuiltup = checked;
    cgi::Manager::instance()->setVisibilityBuiltup( checked );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::actionViewRailroads_toggled( bool checked )
{
    _viewRailroads = checked;
    cgi::Manager::instance()->setVisibilityRailroads( checked );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::actionViewRoads_toggled( bool checked )
{
    _viewRoads = checked;
    cgi::Manager::instance()->setVisibilityRoads( checked );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::actionViewAirports_toggled( bool checked )
{
    _viewAirports = checked;
    cgi::Manager::instance()->setVisibilityAirports( checked );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::actionViewSatellite_toggled( bool checked )
{
    _viewSatellite = checked;
    cgi::Manager::instance()->setVisibilitySatellite( checked );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::actionViewBorders_toggled( bool checked )
{
    _viewBorders = checked;
    cgi::Manager::instance()->setVisibilityBorders( checked );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::actionViewTraces_toggled( bool checked )
{
    _viewTraces = checked;
    cgi::Manager::instance()->setVisibilityTraces( checked );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::actionTracesReset_triggered()
{
    cgi::Manager::instance()->resetTraces();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetMap::actionCenterView_triggered()
{
    _manipulator->setCenterX( cgi::Mercator::x( Data::get()->ownship.longitude ) );
    _manipulator->setCenterY( cgi::Mercator::y( Data::get()->ownship.latitude  ) );
}
