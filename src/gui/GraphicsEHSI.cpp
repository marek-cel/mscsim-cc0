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

#include <gui/GraphicsEHSI.h>

#ifdef WIN32
#   include <float.h>
#endif

#include <math.h>
#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////

GraphicsEHSI::GraphicsEHSI( QWidget *parent ) :
    QGraphicsView ( parent ),

    m_timerId ( 0 ),

    m_scene ( 0 ),

    m_itemBack ( 0 ),
    m_itemMask ( 0 ),
    m_itemMark ( 0 ),

    m_itemBrgArrow ( 0 ),
    m_itemCrsArrow ( 0 ),
    m_itemDevBar   ( 0 ),
    m_itemDevScale ( 0 ),
    m_itemHdgBug   ( 0 ),
    m_itemHdgScale ( 0 ),

    m_itemCrsText ( 0 ),
    m_itemHdgText ( 0 ),
    m_itemDmeText ( 0 ),

    m_crsTextColor (   0, 255,   0 ),
    m_hdgTextColor ( 255,   0, 255 ),
    m_dmeTextColor ( 255, 255, 255 ),

    m_heading    ( 0.0f ),
    m_headingBug ( 0.0f ),
    m_course     ( 0.0f ),
    m_bearing    ( 0.0f ),
    m_deviation  ( 0.0f ),
    m_distance   ( 0.0f ),

    m_bearingVisible   ( true ),
    m_deviationVisible ( true ),
    m_distanceVisible  ( true ),

    m_devBarDeltaX_new ( 0.0f ),
    m_devBarDeltaX_old ( 0.0f ),
    m_devBarDeltaY_new ( 0.0f ),
    m_devBarDeltaY_old ( 0.0f ),

    m_scaleX ( 1.0f ),
    m_scaleY ( 1.0f ),

    m_originalPixPerDev ( 52.5f ),

    m_originalNavCtr ( 150.0f, 150.0f ),

    m_originalCrsTextCtr (  50.0f,  25.0f ),
    m_originalHdgTextCtr ( 250.0f,  25.0f ),
    m_originalDmeTextCtr ( 250.0f, 275.0f ),

    m_originalHeight ( 300 ),
    m_originalWidth  ( 300 ),

    m_backZ (   0 ),
    m_maskZ ( 100 ),
    m_markZ ( 200 ),

    m_brgArrowZ (  60 ),
    m_crsArrowZ (  70 ),
    m_crsTextZ  ( 130 ),
    m_devBarZ   (  50 ),
    m_devScaleZ (  10 ),
    m_hdgBugZ   ( 120 ),
    m_hdgScaleZ ( 110 ),
    m_hdgTextZ  ( 130 ),
    m_dmeTextZ  ( 130 )
{
#   ifdef WIN32
    m_crsTextFont.setFamily( "Courier" );
    m_crsTextFont.setPointSizeF( 12.0f );
    m_crsTextFont.setStretch( QFont::Condensed );
    m_crsTextFont.setWeight( QFont::Bold );

    m_hdgTextFont.setFamily( "Courier" );
    m_hdgTextFont.setPointSizeF( 12.0f );
    m_hdgTextFont.setStretch( QFont::Condensed );
    m_hdgTextFont.setWeight( QFont::Bold );

    m_dmeTextFont.setFamily( "Courier" );
    m_dmeTextFont.setPointSizeF( 10.0f );
    m_dmeTextFont.setStretch( QFont::Condensed );
    m_dmeTextFont.setWeight( QFont::Bold );
#   else
    m_crsTextFont.setFamily( "courier" );
    m_crsTextFont.setPointSizeF( 12.0f );
    m_crsTextFont.setStretch( QFont::Condensed );
    m_crsTextFont.setWeight( QFont::Bold );

    m_hdgTextFont.setFamily( "courier" );
    m_hdgTextFont.setPointSizeF( 12.0f );
    m_hdgTextFont.setStretch( QFont::Condensed );
    m_hdgTextFont.setWeight( QFont::Bold );

    m_dmeTextFont.setFamily( "courier" );
    m_dmeTextFont.setPointSizeF( 10.0f );
    m_dmeTextFont.setStretch( QFont::Condensed );
    m_dmeTextFont.setWeight( QFont::Bold );
#   endif

    reset();

    m_scene = new QGraphicsScene( this );
    setScene( m_scene );

    m_scene->clear();

    init();

    m_timerId = startTimer( 50 );
}

////////////////////////////////////////////////////////////////////////////////

GraphicsEHSI::~GraphicsEHSI()
{
    if ( m_timerId ) killTimer( m_timerId );

    if ( m_scene )
    {
        m_scene->clear();
        delete m_scene;
        m_scene = 0;
    }

    reset();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::reinit()
{
    if ( m_scene )
    {
        m_scene->clear();

        init();
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::setHeading( float heading )
{
    m_heading = heading;

    while ( m_heading <   0.0f ) m_heading += 360.0f;
    while ( m_heading > 360.0f ) m_heading -= 360.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::setHeadingBug( float headingBug )
{
    m_headingBug = headingBug;

    while ( m_headingBug <   0.0f ) m_headingBug += 360.0f;
    while ( m_headingBug > 360.0f ) m_headingBug -= 360.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::setCourse( float course )
{
    m_course = course;

    while ( m_course <   0.0f ) m_course += 360.0f;
    while ( m_course > 360.0f ) m_course -= 360.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::setBearing( float bearing, bool visible )
{
    m_bearing        = bearing;
    m_bearingVisible = visible;

    while ( m_bearing <   0.0f ) m_bearing += 360.0f;
    while ( m_bearing > 360.0f ) m_bearing -= 360.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::setDeviation( float deviation, bool visible )
{
    m_deviation        = deviation;
    m_deviationVisible = visible;

    if ( m_deviation < -1.0f ) m_deviation = -1.0f;
    if ( m_deviation >  1.0f ) m_deviation =  1.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::setDistance( float distance, bool visible )
{
    m_distance        = fabs( distance );
    m_distanceVisible = visible;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::resizeEvent( QResizeEvent *event )
{
    ////////////////////////////////////
    QGraphicsView::resizeEvent( event );
    ////////////////////////////////////

    reinit();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::timerEvent( QTimerEvent *event )
{
    ///////////////////////////////////
    QGraphicsView::timerEvent( event );
    ///////////////////////////////////

    if ( isVisible() )
    {
        updateView();

        m_devBarDeltaX_old = m_devBarDeltaX_new;
        m_devBarDeltaY_old = m_devBarDeltaY_new;
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::init()
{
    m_scaleX = (float)width()  / (float)m_originalWidth;
    m_scaleY = (float)height() / (float)m_originalHeight;

    m_itemBack = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_back.svg" );
    m_itemBack->setCacheMode( QGraphicsItem::NoCache );
    m_itemBack->setZValue( m_backZ );
    m_itemBack->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_scene->addItem( m_itemBack );

    m_itemMask = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_mask.svg" );
    m_itemMask->setCacheMode( QGraphicsItem::NoCache );
    m_itemMask->setZValue( m_maskZ );
    m_itemMask->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_scene->addItem( m_itemMask );

    m_itemMark = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_mark.svg" );
    m_itemMark->setCacheMode( QGraphicsItem::NoCache );
    m_itemMark->setZValue( m_markZ );
    m_itemMark->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_scene->addItem( m_itemMark );

    m_itemBrgArrow = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_brg_arrow.svg" );
    m_itemBrgArrow->setCacheMode( QGraphicsItem::NoCache );
    m_itemBrgArrow->setZValue( m_brgArrowZ );
    m_itemBrgArrow->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemBrgArrow->setTransformOriginPoint( m_originalNavCtr );
    m_scene->addItem( m_itemBrgArrow );

    m_itemCrsArrow = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_crs_arrow.svg" );
    m_itemCrsArrow->setCacheMode( QGraphicsItem::NoCache );
    m_itemCrsArrow->setZValue( m_crsArrowZ );
    m_itemCrsArrow->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemCrsArrow->setTransformOriginPoint( m_originalNavCtr );
    m_scene->addItem( m_itemCrsArrow );

    m_itemDevBar = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_dev_bar.svg" );
    m_itemDevBar->setCacheMode( QGraphicsItem::NoCache );
    m_itemDevBar->setZValue( m_devBarZ );
    m_itemDevBar->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemDevBar->setTransformOriginPoint( m_originalNavCtr );
    m_scene->addItem( m_itemDevBar );

    m_itemDevScale = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_dev_scale.svg" );
    m_itemDevScale->setCacheMode( QGraphicsItem::NoCache );
    m_itemDevScale->setZValue( m_devScaleZ );
    m_itemDevScale->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemDevScale->setTransformOriginPoint( m_originalNavCtr );
    m_scene->addItem( m_itemDevScale );

    m_itemHdgBug = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_hdg_bug.svg" );
    m_itemHdgBug->setCacheMode( QGraphicsItem::NoCache );
    m_itemHdgBug->setZValue( m_hdgBugZ );
    m_itemHdgBug->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemHdgBug->setTransformOriginPoint( m_originalNavCtr );
    m_scene->addItem( m_itemHdgBug );

    m_itemHdgScale = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_hdg_scale.svg" );
    m_itemHdgScale->setCacheMode( QGraphicsItem::NoCache );
    m_itemHdgScale->setZValue( m_hdgScaleZ );
    m_itemHdgScale->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemHdgScale->setTransformOriginPoint( m_originalNavCtr );
    m_scene->addItem( m_itemHdgScale );

    m_itemCrsText = 0;

    m_itemCrsText = new QGraphicsTextItem( QString( "CRS 999" ) );
    m_itemCrsText->setCacheMode( QGraphicsItem::NoCache );
    m_itemCrsText->setZValue( m_crsTextZ );
    m_itemCrsText->setDefaultTextColor( m_crsTextColor );
    m_itemCrsText->setFont( m_crsTextFont );
    m_itemCrsText->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemCrsText->moveBy( m_scaleX * ( m_originalCrsTextCtr.x() - m_itemCrsText->boundingRect().width()  / 2.0f ),
                           m_scaleY * ( m_originalCrsTextCtr.y() - m_itemCrsText->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemCrsText );

    m_itemHdgText = new QGraphicsTextItem( QString( "HDG 999" ) );
    m_itemHdgText->setCacheMode( QGraphicsItem::NoCache );
    m_itemHdgText->setZValue( m_hdgTextZ );
    m_itemHdgText->setDefaultTextColor( m_hdgTextColor );
    m_itemHdgText->setFont( m_hdgTextFont );
    m_itemHdgText->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemHdgText->moveBy( m_scaleX * ( m_originalHdgTextCtr.x() - m_itemHdgText->boundingRect().width()  / 2.0f ),
                           m_scaleY * ( m_originalHdgTextCtr.y() - m_itemHdgText->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemHdgText );

    m_itemDmeText = new QGraphicsTextItem( QString( "99.9 NM" ) );
    m_itemDmeText->setCacheMode( QGraphicsItem::NoCache );
    m_itemDmeText->setZValue( m_dmeTextZ );
    m_itemDmeText->setDefaultTextColor( m_dmeTextColor );
    m_itemDmeText->setFont( m_dmeTextFont );
    m_itemDmeText->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemDmeText->moveBy( m_scaleX * ( m_originalDmeTextCtr.x() - m_itemDmeText->boundingRect().width()  / 2.0f ),
                           m_scaleY * ( m_originalDmeTextCtr.y() - m_itemDmeText->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemDmeText );

    updateView();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::reset()
{
    m_itemBrgArrow = 0;
    m_itemCrsArrow = 0;
    m_itemDevBar   = 0;
    m_itemDevScale = 0;
    m_itemHdgBug   = 0;
    m_itemHdgScale = 0;

    m_itemCrsText = 0;
    m_itemHdgText = 0;
    m_itemDmeText = 0;

    m_heading    = 0.0f;
    m_headingBug = 0.0f;
    m_course     = 0.0f;
    m_bearing    = 0.0f;
    m_deviation  = 0.0f;
    m_distance   = 0.0f;

    m_bearingVisible   = true;
    m_deviationVisible = true;
    m_distanceVisible  = true;

    m_devBarDeltaX_new = 0.0f;
    m_devBarDeltaX_old = 0.0f;
    m_devBarDeltaY_new = 0.0f;
    m_devBarDeltaY_old = 0.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::updateView()
{
    m_scaleX = (float)width()  / (float)m_originalWidth;
    m_scaleY = (float)height() / (float)m_originalHeight;

    m_itemCrsArrow->setRotation( -m_heading + m_course );
    m_itemHdgBug->setRotation( -m_heading + m_headingBug );
    m_itemHdgScale->setRotation( -m_heading );

    if ( m_bearingVisible )
    {
        m_itemBrgArrow->setVisible( true );
        m_itemBrgArrow->setRotation( -m_heading + m_bearing );
    }
    else
    {
        m_itemBrgArrow->setVisible( false );
    }

    if ( m_deviationVisible )
    {
        m_itemDevBar->setVisible( true );
        m_itemDevScale->setVisible( true );

        float angle_deg = -m_heading + m_course;
#       ifndef M_PI
        float angle_rad = 3.14159265358979323846 * angle_deg / 180.0f;
#       else
        float angle_rad = M_PI * angle_deg / 180.0f;
#       endif


        float sinAngle = sin( angle_rad );
        float cosAngle = cos( angle_rad );

        m_itemDevBar->setRotation( angle_deg );
        m_itemDevScale->setRotation( angle_deg );

        float delta  = m_originalPixPerDev * m_deviation;

        m_devBarDeltaX_new = m_scaleX * delta * cosAngle;
        m_devBarDeltaY_new = m_scaleY * delta * sinAngle;

        m_itemDevBar->moveBy( m_devBarDeltaX_new - m_devBarDeltaX_old, m_devBarDeltaY_new - m_devBarDeltaY_old );
    }
    else
    {
        m_itemDevBar->setVisible( false );
        m_itemDevScale->setVisible( false );

        m_devBarDeltaX_new = m_devBarDeltaX_old;
        m_devBarDeltaY_new = m_devBarDeltaY_old;
    }

    m_itemCrsText->setPlainText( QString("CRS %1").arg( m_course     , 3, 'f', 0, QChar('0') ) );
    m_itemHdgText->setPlainText( QString("HDG %1").arg( m_headingBug , 3, 'f', 0, QChar('0') ) );

    if ( m_distanceVisible )
    {
        m_itemDmeText->setVisible( true );
        m_itemDmeText->setPlainText( QString("%1 NM").arg( m_distance, 5, 'f', 1, QChar(' ') ) );
    }
    else
    {
        m_itemDmeText->setVisible( false );
    }

    m_scene->update();

    centerOn( width() / 2.0f , height() / 2.0f );
}
