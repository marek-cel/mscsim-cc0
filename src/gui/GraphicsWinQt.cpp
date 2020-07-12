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

#include <gui/GraphicsWinQt.h>

#include <Common.h>

#include <gui/KeyMap.h>

////////////////////////////////////////////////////////////////////////////////

GraphicsWinQt::GraphicsWinQt( osg::GraphicsContext::Traits *traits ) :
    _widget ( NULLPTR ),
    _realized ( false )
{
    _traits = traits;

    WinData *winData = _traits.get() ? dynamic_cast< WinData* >( _traits->inheritedWindowData.get() ) : NULLPTR;

    if ( !_widget )
    {
        _widget = winData ? winData->_widget : NULLPTR;
    }

    _ownsWidget = _widget == NULLPTR;

    if ( !_widget )
    {
        QGLWidget        *shareWidget   = NULLPTR;
        GraphicsWinQt *sharedContext = dynamic_cast< GraphicsWinQt* >( _traits->sharedContext.get() );

        if ( sharedContext )
        {
            shareWidget = sharedContext->getGLWidget();
        }

        Qt::WindowFlags flags_tmp = Qt::Window | Qt::CustomizeWindowHint;
        if ( _traits->windowDecoration )
        {
            flags_tmp |= Qt::WindowTitleHint
                      |  Qt::WindowMinMaxButtonsHint
                      |  Qt::WindowSystemMenuHint;

#           if (QT_VERSION_CHECK(4, 5, 0) <= QT_VERSION)
            flags_tmp |= Qt::WindowCloseButtonHint;
#           endif
        }

        QGLFormat format( QGLFormat::defaultFormat() );

        format.setAlphaBufferSize  ( _traits->alpha         );
        format.setRedBufferSize    ( _traits->red           );
        format.setGreenBufferSize  ( _traits->green         );
        format.setBlueBufferSize   ( _traits->blue          );
        format.setDepthBufferSize  ( _traits->depth         );
        format.setStencilBufferSize( _traits->stencil       );
        format.setSampleBuffers    ( _traits->sampleBuffers );
        format.setSamples          ( _traits->samples       );

        format.setAlpha   ( _traits->alpha   > 0 );
        format.setDepth   ( _traits->depth   > 0 );
        format.setStencil ( _traits->stencil > 0 );

        format.setDoubleBuffer ( _traits->doubleBuffer );
        format.setSwapInterval ( _traits->vsync            ? 1 : 0 );
        format.setStereo       ( _traits->quadBufferStereo ? 1 : 0 );

        _widget = new GLWidget( format, NULLPTR, shareWidget, flags_tmp );
    }

    if ( _ownsWidget )
    {
        _widget->setWindowTitle( _traits->windowName.c_str() );
        _widget->move( _traits->x, _traits->y );

        if ( !_traits->supportsResize )
            _widget->setFixedSize( _traits->width, _traits->height );
        else
            _widget->resize( _traits->width, _traits->height );
    }

    _widget->setAutoBufferSwap( false );
    _widget->setMouseTracking( true );
    _widget->setFocusPolicy( Qt::WheelFocus );
    _widget->setGraphicsWindow( this );

    useCursor( _traits->useCursor );

    setState( new osg::State );
    getState()->setGraphicsContext( this );

    if ( _traits.valid() && _traits->sharedContext.valid() )
    {
        getState()->setContextID( _traits->sharedContext->getState()->getContextID() );
        incrementContextIDUsageCount( getState()->getContextID() );
    }
    else
    {
        getState()->setContextID( osg::GraphicsContext::createNewContextID() );
    }

    //getEventQueue()->syncWindowRectangleWithGraphcisContext();
}

////////////////////////////////////////////////////////////////////////////////

GraphicsWinQt::~GraphicsWinQt()
{
    close();

    if ( _widget )
    {
        _widget->_gwin = NULLPTR;
        _widget = NULLPTR;
    }
}

////////////////////////////////////////////////////////////////////////////////

bool GraphicsWinQt::setWindowRectangleImplementation( int x, int y, int w, int h )
{
    if ( _widget == NULLPTR ) return false;

    _widget->setGeometry( x, y, w, h );

    return true;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::getWindowRectangle( int &x, int &y, int &w, int &h )
{
    if ( _widget )
    {
        const QRect &geom = _widget->geometry();

        x = geom.x();
        y = geom.y();
        w = geom.width();
        h = geom.height();
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::grabFocus()
{
    if ( _widget ) _widget->setFocus( Qt::ActiveWindowFocusReason );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::grabFocusIfPointerInWindow()
{
    if ( _widget->underMouse() ) _widget->setFocus( Qt::ActiveWindowFocusReason );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::raiseWindow()
{
    if ( _widget ) _widget->raise();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::useCursor( bool cursorOn )
{
    if ( _widget )
    {
        _traits->useCursor = cursorOn;

        if ( !cursorOn )
            _widget->setCursor( Qt::BlankCursor );
        else
            _widget->setCursor( _currentCursor );
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::setCursor( MouseCursor cursor )
{
    if ( cursor == InheritCursor && _widget )
    {
        _widget->unsetCursor();
    }

    switch ( cursor )
    {
        case NoCursor:          _currentCursor = Qt::BlankCursor;     break;
        case RightArrowCursor:
        case LeftArrowCursor:   _currentCursor = Qt::ArrowCursor;     break;
        case InfoCursor:        _currentCursor = Qt::SizeAllCursor;   break;
        case DestroyCursor:     _currentCursor = Qt::ForbiddenCursor; break;
        case HelpCursor:        _currentCursor = Qt::WhatsThisCursor; break;
        case CycleCursor:       _currentCursor = Qt::ForbiddenCursor; break;
        case SprayCursor:       _currentCursor = Qt::SizeAllCursor;   break;
        case WaitCursor:        _currentCursor = Qt::WaitCursor;      break;
        case TextCursor:        _currentCursor = Qt::IBeamCursor;     break;
        case CrosshairCursor:   _currentCursor = Qt::CrossCursor;     break;
        case HandCursor:        _currentCursor = Qt::OpenHandCursor;  break;
        case UpDownCursor:      _currentCursor = Qt::SizeVerCursor;   break;
        case LeftRightCursor:   _currentCursor = Qt::SizeHorCursor;   break;
        case TopSideCursor:
        case BottomSideCursor:  _currentCursor = Qt::UpArrowCursor;   break;
        case LeftSideCursor:
        case RightSideCursor:   _currentCursor = Qt::SizeHorCursor;   break;
        case TopLeftCorner:     _currentCursor = Qt::SizeBDiagCursor; break;
        case TopRightCorner:    _currentCursor = Qt::SizeFDiagCursor; break;
        case BottomRightCorner: _currentCursor = Qt::SizeBDiagCursor; break;
        case BottomLeftCorner:  _currentCursor = Qt::SizeFDiagCursor; break;
        default: break;
    };

    if ( _widget ) _widget->setCursor( _currentCursor );
}

////////////////////////////////////////////////////////////////////////////////

bool GraphicsWinQt::valid() const
{
    return _widget && _widget->isValid();
}

////////////////////////////////////////////////////////////////////////////////

bool GraphicsWinQt::realizeImplementation()
{
    const QGLContext *savedContext = QGLContext::currentContext();

    if ( !valid() )
    {
        _widget->glInit();
    }

    _realized = true;
    bool result = makeCurrent();
    _realized = false;

    if ( !result )
    {
        if ( savedContext )
        {
            const_cast< QGLContext* >( savedContext )->makeCurrent();
        }

        Log::w() << "Window realize: Can make context current." << std::endl;

        return false;
    }

    _realized = true;

    //getEventQueue()->syncWindowRectangleWithGraphcisContext();

    if ( !releaseContext() )
    {
        Log::w() << "Window realize: Can not release context." << std::endl;
    }

    if ( savedContext )
    {
        const_cast< QGLContext* >( savedContext )->makeCurrent();
    }

    return true;
}

////////////////////////////////////////////////////////////////////////////////

bool GraphicsWinQt::isRealizedImplementation() const
{
    return _realized;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::closeImplementation()
{
    if ( _widget ) _widget->close();

    _realized = false;
}

////////////////////////////////////////////////////////////////////////////////

bool GraphicsWinQt::makeCurrentImplementation()
{
    if ( _widget->getNumDeferredEvents() > 0 )
    {
        _widget->processDeferredEvents();
    }

    _widget->makeCurrent();

    return true;
}

////////////////////////////////////////////////////////////////////////////////

bool GraphicsWinQt::releaseContextImplementation()
{
    _widget->doneCurrent();
    return true;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::swapBuffersImplementation()
{
    _widget->swapBuffers();

    if ( _widget->getNumDeferredEvents() > 0 )
    {
        _widget->processDeferredEvents();
    }

    if ( QGLContext::currentContext() != _widget->context() )
    {
        _widget->makeCurrent();
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::runOperations()
{
    if ( _widget->getNumDeferredEvents() > 0 )
    {
        _widget->processDeferredEvents();
    }

    if ( QGLContext::currentContext() != _widget->context() )
    {
        _widget->makeCurrent();
    }

    GraphicsWindow::runOperations();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::requestWarpPointer( float x, float y )
{
    if ( _widget )
    {
        QCursor::setPos( _widget->mapToGlobal( QPoint( (int)x, (int)y ) ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

GraphicsWinQt::GLWidget::GLWidget( const QGLFormat &format,
                                   QWidget *parent, const QGLWidget *shareWidget,
                                   Qt::WindowFlags flags ) :
    QGLWidget ( format, parent, shareWidget, flags ),
    _gwin ( NULLPTR )
{}

////////////////////////////////////////////////////////////////////////////////

GraphicsWinQt::GLWidget::~GLWidget()
{
    if( _gwin )
    {
        _gwin->close();
        _gwin->_widget = NULLPTR;
        _gwin = NULLPTR;
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::GLWidget::setKeyboardModifiers( QInputEvent *event )
{
    int modkey = event->modifiers() & ( Qt::ShiftModifier | Qt::ControlModifier | Qt::AltModifier );

    unsigned int mask = 0;

    if ( modkey & Qt::ShiftModifier   ) mask |= osgGA::GUIEventAdapter::MODKEY_SHIFT;
    if ( modkey & Qt::ControlModifier ) mask |= osgGA::GUIEventAdapter::MODKEY_CTRL;
    if ( modkey & Qt::AltModifier     ) mask |= osgGA::GUIEventAdapter::MODKEY_ALT;

    _gwin->getEventQueue()->getCurrentEventState()->setModKeyMask( mask );
}

////////////////////////////////////////////////////////////////////////////////

bool GraphicsWinQt::GLWidget::event( QEvent *event )
{
    if      ( event->type() == QEvent::Hide )
    {
        enqueueDeferredEvent( QEvent::Hide, QEvent::Show );
        return true;
    }
    else if ( event->type() == QEvent::Show )
    {
        enqueueDeferredEvent( QEvent::Show, QEvent::Hide );
        return true;
    }
    else if ( event->type() == QEvent::ParentChange )
    {
        enqueueDeferredEvent( QEvent::ParentChange );
        return true;
    }

    return QGLWidget::event( event );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::GLWidget::keyPressEvent( QKeyEvent *event )
{
    setKeyboardModifiers( event );
    _gwin->getEventQueue()->keyPress( KeyMap::remapOSG( event->key() ) );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::GLWidget::keyReleaseEvent( QKeyEvent *event )
{
    if( event->isAutoRepeat() )
    {
        event->ignore();
    }
    else
    {
        setKeyboardModifiers( event );
        _gwin->getEventQueue()->keyRelease( KeyMap::remapOSG( event->key() ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::GLWidget::mousePressEvent( QMouseEvent *event )
{
    int button = 0;

    switch ( event->button() )
    {
        case Qt::LeftButton:  button = 1; break;
        case Qt::MidButton:   button = 2; break;
        case Qt::RightButton: button = 3; break;
        case Qt::NoButton:    button = 0; break;
        default:              button = 0; break;
    }

    setKeyboardModifiers( event );

    _gwin->getEventQueue()->mouseButtonPress( event->x(), event->y(), button );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::GLWidget::mouseReleaseEvent( QMouseEvent *event )
{
    int button = 0;

    switch ( event->button() )
    {
        case Qt::LeftButton:  button = 1; break;
        case Qt::MidButton:   button = 2; break;
        case Qt::RightButton: button = 3; break;
        case Qt::NoButton:    button = 0; break;
        default:              button = 0; break;
    }

    setKeyboardModifiers( event );

    _gwin->getEventQueue()->mouseButtonRelease( event->x(), event->y(), button );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::GLWidget::mouseDoubleClickEvent( QMouseEvent *event )
{
    int button = 0;

    switch ( event->button() )
    {
        case Qt::LeftButton:  button = 1; break;
        case Qt::MidButton:   button = 2; break;
        case Qt::RightButton: button = 3; break;
        case Qt::NoButton:    button = 0; break;
        default:              button = 0; break;
    }

    setKeyboardModifiers( event );

    _gwin->getEventQueue()->mouseDoubleButtonPress( event->x(), event->y(), button );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::GLWidget::mouseMoveEvent( QMouseEvent *event )
{
    setKeyboardModifiers( event );
    _gwin->getEventQueue()->mouseMotion( event->x(), event->y() );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::GLWidget::moveEvent( QMoveEvent *event )
{
    const QPoint &pos = event->pos();

    _gwin->resized( pos.x(), pos.y(), width(), height() );
    _gwin->getEventQueue()->windowResize( pos.x(), pos.y(), width(), height() );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::GLWidget::resizeEvent( QResizeEvent *event )
{
    const QSize &size = event->size();

    _gwin->resized( x(), y(), size.width(), size.height() );
    _gwin->getEventQueue()->windowResize( x(), y(), size.width(), size.height() );
    _gwin->requestRedraw();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::GLWidget::wheelEvent( QWheelEvent *event )
{
    setKeyboardModifiers( event );

    if ( event->orientation() == Qt::Vertical )
    {
        _gwin->getEventQueue()->mouseScroll( event->delta() > 0 ? osgGA::GUIEventAdapter::SCROLL_UP   : osgGA::GUIEventAdapter::SCROLL_DOWN  );
    }
    else
    {
        _gwin->getEventQueue()->mouseScroll( event->delta() > 0 ? osgGA::GUIEventAdapter::SCROLL_LEFT : osgGA::GUIEventAdapter::SCROLL_RIGHT );
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::GLWidget::glDraw()
{
    _gwin->requestRedraw();
}

////////////////////////////////////////////////////////////////////////////////

int GraphicsWinQt::GLWidget::getNumDeferredEvents()
{
    QMutexLocker lock( &_deferredEventQueueMutex );
    return _deferredEventQueue.count();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::GLWidget::enqueueDeferredEvent( QEvent::Type eventType,
                                                    QEvent::Type removeEventType )
{
    QMutexLocker lock( &_deferredEventQueueMutex );

    if ( removeEventType != QEvent::None )
    {
        if ( _deferredEventQueue.removeOne( removeEventType ) )
        {
            _eventCompressor.remove( eventType );
        }
    }

    if ( _eventCompressor.find( eventType ) == _eventCompressor.end() )
    {
        _deferredEventQueue.enqueue( eventType );
        _eventCompressor.insert( eventType );
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsWinQt::GLWidget::processDeferredEvents()
{
    QQueue< QEvent::Type > deferredEventQueueCopy;

    QMutexLocker lock( &_deferredEventQueueMutex );

    deferredEventQueueCopy = _deferredEventQueue;

    _eventCompressor.clear();
    _deferredEventQueue.clear();

    while (!deferredEventQueueCopy.isEmpty())
    {
        QEvent event( deferredEventQueueCopy.dequeue() );
        QGLWidget::event( &event );
    }
}
