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

#include <gui/WidgetOTW.h>

#include <osgGA/StateSetManipulator>

#include <osgViewer/Viewer>
#include <osgViewer/ViewerEventHandlers>

#include <cgi/cgi_Defines.h>
#include <cgi/cgi_Manager.h>
#include <cgi/cgi_WGS84.h>

#include <gui/gui_Defines.h>

////////////////////////////////////////////////////////////////////////////////

const double WidgetOTW::_zNear = 0.55;
const double WidgetOTW::_zFar  = CGI_SKYDOME_RADIUS + 0.1f * CGI_SKYDOME_RADIUS;

////////////////////////////////////////////////////////////////////////////////

WidgetOTW::WidgetOTW( QWidget *parent ) :
    WidgetOSG ( parent ),
    _timerId ( 0 ),
    _camManipulatorInited ( false )
{
    _keyHandler = new KeyHandler( this );

#   ifdef USE_OSGQOPENGL
    QObject::connect( this, &WidgetOTW::initialized, [ this ]
    {
        getOsgViewer()->setThreadingModel( osgViewer::ViewerBase::SingleThreaded );
        //getOsgViewer()->setThreadingModel( osgViewer::ViewerBase::ThreadPerContext );

        createCameraOTW();
        createCameraHUD();

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

        getOsgViewer()->getEventHandlers().push_front( _keyHandler.get() );

        getOsgViewer()->setKeyEventSetsDone( 0 );

        ///////////////////////////////////////////////////////////////////////
        getOsgViewer()->setSceneData( cgi::Manager::instance()->getNodeOTW() );
        ///////////////////////////////////////////////////////////////////////

        getOsgViewer()->assignSceneDataToCameras();

        _initialized = true;

        setCameraManipulatorPilot();
    });
#   else
    QWidget *widget = addViewWidget();

    _layout = new QGridLayout( this );
    _layout->setContentsMargins( 1, 1, 1, 1 );
    _layout->addWidget( widget, 0, 0 );

    setLayout( _layout );

    getEventHandlers().push_front( _keyHandler.get() );

    setCameraManipulatorPilot();
#   endif
}

////////////////////////////////////////////////////////////////////////////////

WidgetOTW::~WidgetOTW()
{
    if ( _timerId ) killTimer( _timerId );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetOTW::init()
{
    _timerId = startTimer( 1000.0 * CGI_TIME_STEP );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetOTW::setCameraManipulatorChase()
{
    if ( _initialized )
    {
        cgi::Manager::instance()->setCameraManipulatorChase();
        getOsgViewer()->setCameraManipulator( cgi::Manager::instance()->getCameraManipulator() );

        _camManipulatorInited = false;
    }
}

////////////////////////////////////////////////////////////////////////////////

void WidgetOTW::setCameraManipulatorOrbit()
{
    if ( _initialized )
    {
        cgi::Manager::instance()->setCameraManipulatorOrbit();
        getOsgViewer()->setCameraManipulator( cgi::Manager::instance()->getCameraManipulator() );

        _camManipulatorInited = false;
    }
}

////////////////////////////////////////////////////////////////////////////////

void WidgetOTW::setCameraManipulatorPilot()
{
    if ( _initialized )
    {
        cgi::Manager::instance()->setCameraManipulatorPilot();
        getOsgViewer()->setCameraManipulator( cgi::Manager::instance()->getCameraManipulator() );

        _camManipulatorInited = false;
    }
}

////////////////////////////////////////////////////////////////////////////////

void WidgetOTW::setCameraManipulatorWorld()
{
    if ( _initialized )
    {
        osg::Vec3d eye = cgi::Manager::instance()->getCameraManipulator()->getMatrix().getTrans();
        osg::Vec3d center( 0.0, 0.0, 0.0 );
        osg::Vec3d up( 0.0, 0.0, 1.0 );

        cgi::Manager::instance()->setCameraManipulatorWorld();
        getOsgViewer()->setCameraManipulator( cgi::Manager::instance()->getCameraManipulator() );

        if ( _camManipulatorInited )
        {
            cgi::WGS84 eye_wgs( eye );

            if ( eye_wgs.getAlt() < 10000.0 )
            {
                eye_wgs.setAlt( 10000.0 );
            }

            eye = eye_wgs.getPosition();
            up  = eye_wgs.getAttitude().inverse() * osg::Vec3( 1.0, 0.0, 0.0 );

            osg::ref_ptr<cgi::ManipulatorWorld> manipulator =
                    dynamic_cast<cgi::ManipulatorWorld*>( cgi::Manager::instance()->getCameraManipulator() );

            if ( manipulator.valid() )
            {
                manipulator->setTransformation( eye, center, up );
            }
        }

        _camManipulatorInited = false;
    }
}

////////////////////////////////////////////////////////////////////////////////

void WidgetOTW::setDistanceMin( double distance_min )
{
    cgi::Manager::instance()->setDistanceMin( distance_min );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetOTW::setDistanceDef( double distance_def )
{
    cgi::Manager::instance()->setDistanceDef( distance_def );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetOTW::timerEvent( QTimerEvent *event )
{
    /////////////////////////////
    QWidget::timerEvent( event );
    /////////////////////////////

    update();

    if ( !_camManipulatorInited )
    {
        osg::ref_ptr<cgi::ManipulatorOrbit> manipulator =
                dynamic_cast<cgi::ManipulatorOrbit*>( cgi::Manager::instance()->getCameraManipulator() );

        if ( manipulator.valid() )
        {
            manipulator->setDistance( 50.0 );
        }

        _camManipulatorInited = true;
    }

    cgi::Manager::instance()->updateHUD();
    cgi::Manager::instance()->updateOTW();

    _keyHandler->update();
}

////////////////////////////////////////////////////////////////////////////////

#ifndef USE_OSGQOPENGL
QWidget* WidgetOTW::addViewWidget()
{
    createCameraOTW();
    createCameraHUD();

    setSceneData( cgi::Manager::instance()->getNodeOTW() );
    addEventHandler( new osgViewer::StatsHandler );
    setCameraManipulator( cgi::Manager::instance()->getCameraManipulator() );

    setKeyEventSetsDone( 0 );

    assignSceneDataToCameras();

    return _gwin->getGLWidget();
}
#endif

////////////////////////////////////////////////////////////////////////////////

void WidgetOTW::createCameraOTW()
{
    osg::ref_ptr<osg::Camera> cameraOTW = getOsgViewer()->getCamera();

#   ifndef USE_OSGQOPENGL
    cameraOTW->setGraphicsContext( _gwin );
#   endif

    const osg::GraphicsContext::Traits *traits = cameraOTW->getGraphicsContext()->getTraits();

    double w2h = (double)(traits->width) / (double)(traits->height);

#   ifndef SIM_TEST_WORLD
    cameraOTW->setClearColor( osg::Vec4( 0.0, 0.0, 0.0, 1.0 ) );
#   endif
    cameraOTW->setViewport( new osg::Viewport( 0, 0, traits->width, traits->height ) );
    cameraOTW->setProjectionMatrixAsPerspective( CGI_FOV_Y, w2h, _zNear, _zFar );
    cameraOTW->setNearFarRatio( _zNear / _zFar );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetOTW::createCameraHUD()
{
    osg::ref_ptr<osg::Camera> cameraHUD = new osg::Camera();

#   ifndef USE_OSGQOPENGL
    cameraHUD->setGraphicsContext( _gwin );
#   endif

    osg::GraphicsContext* context = getOsgViewer()->getCamera()->getGraphicsContext();

    cameraHUD->setGraphicsContext( context );

    const osg::GraphicsContext::Traits *traits = context->getTraits();

    double w2h = (double)(traits->width) / (double)(traits->height);

    cameraHUD->setProjectionMatrixAsOrtho2D( -CGI_HUD_Y_2 * w2h, CGI_HUD_Y_2 * w2h, -CGI_HUD_Y_2, CGI_HUD_Y_2 );
    cameraHUD->setReferenceFrame( osg::Transform::ABSOLUTE_RF );
    cameraHUD->setViewMatrix( osg::Matrix::identity() );
    cameraHUD->setClearMask( GL_DEPTH_BUFFER_BIT );
    cameraHUD->setRenderOrder( osg::Camera::POST_RENDER );
    cameraHUD->setAllowEventFocus( false );
    cameraHUD->setProjectionResizePolicy( osg::Camera::HORIZONTAL );
    cameraHUD->addChild( cgi::Manager::instance()->getNodeHUD() );
    cameraHUD->setViewport( new osg::Viewport( 0, 0, traits->width, traits->height ) );

    getOsgViewer()->addSlave( cameraHUD, false );
}
