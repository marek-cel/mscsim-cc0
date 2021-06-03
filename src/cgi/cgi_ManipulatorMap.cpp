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

#include <cgi/cgi_ManipulatorMap.h>

#include <limits>

#include <defs.h>

#include <cgi/cgi_Mercator.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

ManipulatorMap::ManipulatorMap() :
    inherited(),

    _scaleChangeCallback ( NULLPTR ),

    _map_height ( 1.0 ),

    _map_min_x ( -1.0 ),
    _map_min_y ( -1.0 ),
    _map_max_x (  1.0 ),
    _map_max_y (  1.0 ),

    _scale ( 1.0 ),
    _scale_min ( 0.0 ),
    _scale_max ( std::numeric_limits< double >::max() ),

    _mouse_lat ( 0.0 ),
    _mouse_lon ( 0.0 ),

    _map_left   ( -1.0 ),
    _map_right  (  1.0 ),
    _map_bottom ( -1.0 ),
    _map_top    (  1.0 ),

    _thrown ( false ),
    _allowThrow ( true ),

    _delta_frame_time ( 0.01 ),
    _last_frame_time  ( 0.0 ),

    _wheelZoomFactor ( 0.1 )
{}

////////////////////////////////////////////////////////////////////////////////

ManipulatorMap::~ManipulatorMap() {}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::init( const osgGA::GUIEventAdapter &/*ea*/, osgGA::GUIActionAdapter &us )
{
    flushMouseEventStack();

    _thrown = false;
    us.requestContinuousUpdate( false );
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::handle( const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &us )
{
    switch ( ea.getEventType() )
    {

    case osgGA::GUIEventAdapter::FRAME:
        return handleFrame( ea, us );

    case osgGA::GUIEventAdapter::RESIZE:
        return handleResize( ea, us );

    default:
        break;
   }

    if ( ea.getHandled() )
    {
        return false;
    }

    switch ( ea.getEventType() )
    {
    case osgGA::GUIEventAdapter::MOVE:
        return handleMouseMove( ea, us );

    case osgGA::GUIEventAdapter::DRAG:
        return handleMouseDrag( ea, us );

    case osgGA::GUIEventAdapter::PUSH:
        return handleMousePush( ea, us );

    case osgGA::GUIEventAdapter::RELEASE:
        return handleMouseRelease( ea, us );

    case osgGA::GUIEventAdapter::SCROLL:
        return handleMouseWheel( ea, us );

    default:
        return false;
    }
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::updateCamera( osg::Camera &camera )
{
    //////////////////////////////////
    inherited::updateCamera( camera );
    //////////////////////////////////

    double w2h = (double)(camera.getGraphicsContext()->getTraits()->width)
               / (double)(camera.getGraphicsContext()->getTraits()->height);

    updateCenterAndEdges( w2h );

    camera.setProjectionMatrixAsOrtho2D( _map_left, _map_right,
                                         _map_bottom, _map_top );
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setByMatrix( const osg::Matrixd &/*matrix*/ ) {}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setByInverseMatrix( const osg::Matrixd &/*matrix*/ ) {}

////////////////////////////////////////////////////////////////////////////////

osg::Matrixd ManipulatorMap::getMatrix() const
{
    return osg::Matrixd::identity();
}

////////////////////////////////////////////////////////////////////////////////

osg::Matrixd ManipulatorMap::getInverseMatrix() const
{
    return osg::Matrixd::identity();
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::registerScaleChangeCallback( void(*fun)(double) )
{
    _scaleChangeCallback = fun;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setCenterX( double x )
{
    _center.x() = x;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setCenterY( double y )
{
    _center.y() = y;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setMapHeight( double map_height )
{
    if ( map_height > 0.0 )
    {
        _map_height = map_height;
    }
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setMapMinX( double min )
{
    if ( min < _map_max_x )
    {
        _map_min_x = min;
    }

    _map_left = _map_min_x;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setMapMinY( double min )
{
    if ( min < _map_max_y )
    {
        _map_min_y = min;
    }

    _map_bottom = _map_min_y;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setMapMaxX( double max )
{
    if ( max > _map_min_x )
    {
        _map_max_x = max;
    }

    _map_right = _map_max_x;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setMapMaxY( double max )
{
    if ( max > _map_min_y )
    {
        _map_max_y = max;
    }

    _map_top = _map_max_y;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setScale( double scale )
{
    _scale = scale;

    if ( _scale > _scale_max ) _scale = _scale_max;
    if ( _scale < _scale_min ) _scale = _scale_min;

    if ( _scaleChangeCallback )
    {
        (*_scaleChangeCallback)( _scale );
    }
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setScaleMin( double min )
{
    if ( min >= 0.0 && min < _scale_max )
    {
        _scale_min = min;
    }
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setScaleMax( double max )
{
    if ( max >= 0.0 && max > _scale_min )
    {
        _scale_max = max;
    }
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setAllowThrow( bool allowThrow )
{
    _allowThrow = allowThrow;
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::handleFrame( const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &us )
{
    double current_frame_time = ea.getTime();

    _delta_frame_time = current_frame_time - _last_frame_time;
    _last_frame_time = current_frame_time;

    if ( _thrown && performMovement() )
    {
        us.requestRedraw();
    }

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::handleResize( const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &us )
{
    init( ea, us );
    us.requestRedraw();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::handleMouseMove( const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &/*us*/ )
{
    updateMousePosition( ea );
    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::handleMouseDrag( const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &us )
{
    updateMousePosition( ea );
    addMouseEvent( ea );

    if ( performMovement() ) us.requestRedraw();

    us.requestContinuousUpdate( false );
    _thrown = false;

    return true;
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::handleMousePush( const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &us )
{
    updateMousePosition( ea );
    flushMouseEventStack();
    addMouseEvent( ea );

    if ( performMovement() ) us.requestRedraw();

    us.requestContinuousUpdate( false );
    _thrown = false;

    return true;
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::handleMouseRelease( const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &us )
{
    updateMousePosition( ea );

    if ( ea.getButtonMask() == 0 )
    {
        double timeSinceLastRecordEvent = _ga_t0.valid() ? ( ea.getTime() - _ga_t0->getTime() ) : DBL_MAX;

        if( timeSinceLastRecordEvent > 0.02 ) flushMouseEventStack();

        if ( isMouseMoving() )
        {
            if ( performMovement() && _allowThrow )
            {
                us.requestRedraw();
                us.requestContinuousUpdate( true );
                _thrown = true;
            }

            return true;
        }
    }

    flushMouseEventStack();
    addMouseEvent( ea );

    if ( performMovement() ) us.requestRedraw();

    us.requestContinuousUpdate( false );
    _thrown = false;

    return true;
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::handleMouseWheel( const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &us )
{
    updateMousePosition( ea );

    osgGA::GUIEventAdapter::ScrollingMotion sm = ea.getScrollingMotion();

    switch ( sm )
    {
    case osgGA::GUIEventAdapter::SCROLL_UP:
        zoomModel( -_wheelZoomFactor );
        us.requestRedraw();
        return true;

    case osgGA::GUIEventAdapter::SCROLL_DOWN:
        zoomModel(  _wheelZoomFactor );
        us.requestRedraw();
        return true;

    default:
        return false;
   }
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::performMovement()
{
    if ( _ga_t0.valid() && _ga_t1.valid() )
    {
        // get delta time
        double delta_t = std::max( 0.0, _ga_t0->getTime() - _ga_t1->getTime() );

        float dx = _ga_t0->getXnormalized() - _ga_t1->getXnormalized();
        float dy = _ga_t0->getYnormalized() - _ga_t1->getYnormalized();

        if ( _ga_t1->getButtonMask() & osgGA::GUIEventAdapter::LEFT_MOUSE_BUTTON ) // due to contex menu issues
        {
            return performMovementLeftMouseButton( delta_t, dx, dy );
        }
    }

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::performMovementLeftMouseButton( double delta_t, float dx, float dy )
{
    float scale = -0.5 * ( 0.5 * _map_height * _scale ) * getThrowScale( delta_t );;
    panModel( dx*scale, dy*scale );
    return true;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::panModel( float dx, float dy, float dz )
{
    osg::Matrix rotation_matrix;
    rotation_matrix.makeRotate( _rotation );

    osg::Vec3d dv( dx, dy, dz );

    _center += dv * rotation_matrix;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::zoomModel( const float dy )
{
    setScale( _scale * ( 1.0 + dy ) );
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::addMouseEvent( const osgGA::GUIEventAdapter& ea )
{
    _ga_t1 = _ga_t0;
    _ga_t0 = &ea;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::flushMouseEventStack()
{
    _ga_t1 = 0;
    _ga_t0 = 0;
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::isMouseMoving() const
{
    if ( _ga_t0.valid() && _ga_t1.valid() )
    {
        static const float velocity = 0.1f;

        float dx = _ga_t0->getXnormalized() - _ga_t1->getXnormalized();
        float dy = _ga_t0->getYnormalized() - _ga_t1->getYnormalized();
        float len = sqrt( dx*dx + dy*dy );
        float dt = _ga_t0->getTime() - _ga_t1->getTime();

        return ( len > dt*velocity );
    }

    return false;
}

////////////////////////////////////////////////////////////////////////////////

float ManipulatorMap::getThrowScale( double delta_t ) const
{
    if ( _thrown )
    {
        if ( delta_t == 0.0 )
        {
            return 0.0f;
        }

        return (float)( _delta_frame_time / delta_t );
    }

    return 1.0f;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::updateCenterAndEdges( double w2h )
{
    double delta_y_2 = 0.5 * _map_height * _scale;
    double delta_x_2 = delta_y_2 * w2h;

    if ( _center.x() - delta_x_2 < _map_min_x )
    {
        _thrown = false;
        _center.x() = _map_min_x + delta_x_2;
    }

    if ( _center.x() + delta_x_2 > _map_max_x )
    {
        _thrown = false;
        _center.x() = _map_max_x - delta_x_2;
    }

    if ( _center.y() - delta_y_2 < _map_min_y )
    {
        _thrown = false;
        _center.y() = _map_min_y + delta_y_2;
    }

    if ( _center.y() + delta_y_2 > _map_max_y )
    {
        _thrown = false;
        _center.y() = _map_max_y - delta_y_2;
    }

    _map_left   = _center.x() - delta_x_2;
    _map_right  = _center.x() + delta_x_2;
    _map_bottom = _center.y() - delta_y_2;
    _map_top    = _center.y() + delta_y_2;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::updateMousePosition( const osgGA::GUIEventAdapter &ea )
{
    double x_norm = std::max( 0.0f, std::min( 1.0f, ea.getX() / ea.getWindowWidth()  ) );
    double y_norm = std::max( 0.0f, std::min( 1.0f, ea.getY() / ea.getWindowHeight() ) );

    double x_merc = ( _map_right - _map_left ) * x_norm + _map_left;
    double y_merc = ( _map_top - _map_bottom ) * y_norm + _map_bottom;

    _mouse_lat = Mercator::lat( y_merc );
    _mouse_lon = Mercator::lon( x_merc );
}
