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

#include <cgi/cgi_ManipulatorMap.h>

#include <limits>

#include <cgi/cgi_Mercator.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

ManipulatorMap::ManipulatorMap() :
    inherited(),

    m_scaleChangeCallback ( 0 ),

    m_map_height ( 1.0 ),

    m_map_min_x ( -1.0 ),
    m_map_min_y ( -1.0 ),
    m_map_max_x (  1.0 ),
    m_map_max_y (  1.0 ),

    m_scale ( 1.0 ),
    m_scale_min ( 0.0 ),
    m_scale_max ( std::numeric_limits< double >::max() ),

    m_mouse_lat ( 0.0 ),
    m_mouse_lon ( 0.0 ),

    m_map_left   ( -1.0 ),
    m_map_right  (  1.0 ),
    m_map_bottom ( -1.0 ),
    m_map_top    (  1.0 ),

    m_thrown ( false ),
    m_allowThrow ( true ),

    m_delta_frame_time ( 0.01 ),
    m_last_frame_time  ( 0.0 ),

    m_wheelZoomFactor ( 0.1 )
{}

////////////////////////////////////////////////////////////////////////////////

ManipulatorMap::~ManipulatorMap() {}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::init( const osgGA::GUIEventAdapter &/*ea*/, osgGA::GUIActionAdapter &us )
{
    flushMouseEventStack();

    m_thrown = false;
    us.requestContinuousUpdate( false );
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::handle( const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &us )
{
    double y_norm = std::max( 0.0f, std::min( 1.0f, ea.getY() / ea.getWindowHeight() ) );
    double x_norm = std::max( 0.0f, std::min( 1.0f, ea.getX() / ea.getWindowWidth()  ) );

    double y_merc = ( m_map_top - m_map_bottom ) * y_norm + m_map_bottom;
    double x_merc = ( m_map_right - m_map_left ) * x_norm + m_map_left;

    m_mouse_lat = Mercator::getLat( y_merc );
    m_mouse_lon = Mercator::getLon( x_merc );

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

    double delta_y_2 = 0.5 * m_map_height * m_scale;
    double delta_x_2 = delta_y_2 * w2h;

    if ( m_center.x() - delta_x_2 < m_map_min_x ) m_center.x() = m_map_min_x + delta_x_2;
    if ( m_center.x() + delta_x_2 > m_map_max_x ) m_center.x() = m_map_max_x - delta_x_2;
    if ( m_center.y() - delta_y_2 < m_map_min_y ) m_center.y() = m_map_min_y + delta_y_2;
    if ( m_center.y() + delta_y_2 > m_map_max_y ) m_center.y() = m_map_max_y - delta_y_2;

    m_map_left   = m_center.x() - delta_x_2;
    m_map_right  = m_center.x() + delta_x_2;
    m_map_bottom = m_center.y() - delta_y_2;
    m_map_top    = m_center.y() + delta_y_2;

    camera.setProjectionMatrixAsOrtho2D( m_map_left, m_map_right,
                                         m_map_bottom, m_map_top );
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
    m_scaleChangeCallback = fun;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setMapHeight( double map_height )
{
    if ( map_height > 0.0 )
    {
        m_map_height = map_height;
    }
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setMapMinX( double min )
{
    if ( min < m_map_max_x )
    {
        m_map_min_x = min;
    }

    m_map_left = m_map_min_x;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setMapMinY( double min )
{
    if ( min < m_map_max_y )
    {
        m_map_min_y = min;
    }

    m_map_bottom = m_map_min_y;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setMapMaxX( double max )
{
    if ( max > m_map_min_x )
    {
        m_map_max_x = max;
    }

    m_map_right = m_map_max_x;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setMapMaxY( double max )
{
    if ( max > m_map_min_y )
    {
        m_map_max_y = max;
    }

    m_map_top = m_map_max_y;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setScaleMin( double min )
{
    if ( min >= 0.0 && min < m_scale_max )
    {
        m_scale_min = min;
    }
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setScaleMax( double max )
{
    if ( max >= 0.0 && max > m_scale_min )
    {
        m_scale_max = max;
    }
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::setAllowThrow( bool allowThrow )
{
    m_allowThrow = allowThrow;
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::handleFrame( const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &us )
{
    double current_frame_time = ea.getTime();

    m_delta_frame_time = current_frame_time - m_last_frame_time;
    m_last_frame_time = current_frame_time;

    if ( m_thrown && performMovement() )
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

bool ManipulatorMap::handleMouseMove( const osgGA::GUIEventAdapter &/*ea*/, osgGA::GUIActionAdapter &/*us*/ )
{
    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::handleMouseDrag( const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &us )
{
    addMouseEvent( ea );

    if ( performMovement() ) us.requestRedraw();

    us.requestContinuousUpdate( false );
    m_thrown = false;

    return true;
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::handleMousePush( const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &us )
{
    flushMouseEventStack();
    addMouseEvent( ea );

    if ( performMovement() ) us.requestRedraw();

    us.requestContinuousUpdate( false );
    m_thrown = false;

    return true;
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::handleMouseRelease( const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &us )
{
    if ( ea.getButtonMask() == 0 )
    {
        double timeSinceLastRecordEvent = m_ga_t0.valid() ? ( ea.getTime() - m_ga_t0->getTime() ) : DBL_MAX;

        if( timeSinceLastRecordEvent > 0.02 ) flushMouseEventStack();

        if ( isMouseMoving() )
        {
            if ( performMovement() && m_allowThrow )
            {
                us.requestRedraw();
                us.requestContinuousUpdate( true );
                m_thrown = true;
            }

            return true;
        }
    }

    flushMouseEventStack();
    addMouseEvent( ea );

    if ( performMovement() ) us.requestRedraw();

    us.requestContinuousUpdate( false );
    m_thrown = false;

    return true;
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::handleMouseWheel( const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter &us )
{
    osgGA::GUIEventAdapter::ScrollingMotion sm = ea.getScrollingMotion();

    switch ( sm )
    {
    case osgGA::GUIEventAdapter::SCROLL_UP:
        zoomModel( -m_wheelZoomFactor );
        us.requestRedraw();
        return true;

    case osgGA::GUIEventAdapter::SCROLL_DOWN:
        zoomModel(  m_wheelZoomFactor );
        us.requestRedraw();
        return true;

    default:
        return false;
   }
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::performMovement()
{
    if ( m_ga_t0.valid() && m_ga_t1.valid() )
    {
        // get delta time
        double delta_t = std::max( 0.0, m_ga_t0->getTime() - m_ga_t1->getTime() );

        float dx = m_ga_t0->getXnormalized() - m_ga_t1->getXnormalized();
        float dy = m_ga_t0->getYnormalized() - m_ga_t1->getYnormalized();

        if ( m_ga_t1->getButtonMask() & osgGA::GUIEventAdapter::LEFT_MOUSE_BUTTON ) // due to contex menu issues
        {
            return performMovementLeftMouseButton( delta_t, dx, dy );
        }
    }

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::performMovementLeftMouseButton( double delta_t, float dx, float dy )
{
    float scale = -0.5 * ( 0.5 * m_map_height * m_scale ) * getThrowScale( delta_t );;
    panModel( dx*scale, dy*scale );
    return true;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::panModel( float dx, float dy, float dz )
{
    osg::Matrix rotation_matrix;
    rotation_matrix.makeRotate( m_rotation );

    osg::Vec3d dv( dx, dy, dz );

    m_center += dv * rotation_matrix;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::zoomModel( const float dy )
{
    m_scale *= 1.0 + dy;

    if ( m_scale > m_scale_max ) m_scale = m_scale_max;
    if ( m_scale < m_scale_min ) m_scale = m_scale_min;

    if ( m_scaleChangeCallback )
    {
        (*m_scaleChangeCallback)( m_scale );
    }
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::addMouseEvent( const osgGA::GUIEventAdapter& ea )
{
    m_ga_t1 = m_ga_t0;
    m_ga_t0 = &ea;
}

////////////////////////////////////////////////////////////////////////////////

void ManipulatorMap::flushMouseEventStack()
{
    m_ga_t1 = 0;
    m_ga_t0 = 0;
}

////////////////////////////////////////////////////////////////////////////////

bool ManipulatorMap::isMouseMoving() const
{
    if ( m_ga_t0.valid() && m_ga_t1.valid() )
    {
        static const float velocity = 0.1f;

        float dx = m_ga_t0->getXnormalized() - m_ga_t1->getXnormalized();
        float dy = m_ga_t0->getYnormalized() - m_ga_t1->getYnormalized();
        float len = sqrt( dx*dx + dy*dy );
        float dt = m_ga_t0->getTime() - m_ga_t1->getTime();

        return ( len > dt*velocity );
    }

    return false;
}

////////////////////////////////////////////////////////////////////////////////

float ManipulatorMap::getThrowScale( double delta_t ) const
{
    if ( m_thrown )
    {
        if ( delta_t == 0.0 )
        {
            return 0.0f;
        }

        return (float)( m_delta_frame_time / delta_t );
    }

    return 1.0f;
}
