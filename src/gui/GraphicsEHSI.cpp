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

#include <gui/Colors.h>
#include <gui/Fonts.h>

////////////////////////////////////////////////////////////////////////////////

GraphicsEHSI::GraphicsEHSI( QWidget *parent ) :
    QGraphicsView ( parent ),

    _timerId ( 0 ),

    _scene ( NULLPTR ),

    _itemBack ( NULLPTR ),
    _itemMask ( NULLPTR ),
    _itemMark ( NULLPTR ),

    _itemBrgArrow ( NULLPTR ),
    _itemCrsArrow ( NULLPTR ),
    _itemDevBar   ( NULLPTR ),
    _itemDevScale ( NULLPTR ),
    _itemHdgBug   ( NULLPTR ),
    _itemHdgScale ( NULLPTR ),
    _itemCdiTo    ( NULLPTR ),
    _itemCdiFrom  ( NULLPTR ),

    _itemCrsText ( NULLPTR ),
    _itemHdgText ( NULLPTR ),
    _itemDmeText ( NULLPTR ),

    _heading   ( 0.0f ),
    _course    ( 0.0f ),
    _bearing   ( 0.0f ),
    _deviation ( 0.0f ),
    _distance  ( 0.0f ),

    _heading_set ( 0.0f ),

    _cdi ( NONE ),

    _bearingVisible   ( true ),
    _distanceVisible  ( true ),

    _devBarDeltaX_new ( 0.0f ),
    _devBarDeltaX_old ( 0.0f ),
    _devBarDeltaY_new ( 0.0f ),
    _devBarDeltaY_old ( 0.0f ),

    _scaleX ( 1.0f ),
    _scaleY ( 1.0f ),

    _originalPixPerDev ( 52.5f ),

    _originalNavCtr ( 150.0f, 150.0f ),

    _originalCrsTextCtr (  50.0f,  25.0f ),
    _originalHdgTextCtr ( 250.0f,  25.0f ),
    _originalDmeTextCtr ( 250.0f, 275.0f ),

    _originalHeight ( 300 ),
    _originalWidth  ( 300 ),

    _backZ (   0 ),
    _maskZ ( 100 ),
    _markZ ( 200 ),

    _brgArrowZ (  60 ),
    _crsArrowZ (  70 ),
    _crsTextZ  ( 130 ),
    _devBarZ   (  50 ),
    _devScaleZ (  10 ),
    _hdgBugZ   ( 120 ),
    _hdgScaleZ ( 110 ),
    _hdgTextZ  ( 130 ),
    _dmeTextZ  ( 130 )
{
    reset();

    _scene = new QGraphicsScene( this );
    setScene( _scene );

    _scene->clear();

    init();

    _timerId = startTimer( 50 );
}

////////////////////////////////////////////////////////////////////////////////

GraphicsEHSI::~GraphicsEHSI()
{
    if ( _timerId ) killTimer( _timerId );

    if ( _scene )
    {
        _scene->clear();
        delete _scene;
        _scene = NULLPTR;
    }

    reset();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::reinit()
{
    if ( _scene )
    {
        _scene->clear();

        init();
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::setHeading( float heading )
{
    _heading = heading;

    while ( _heading <   0.0f ) _heading += 360.0f;
    while ( _heading > 360.0f ) _heading -= 360.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::setCourse( float course )
{
    _course = course;

    while ( _course <   0.0f ) _course += 360.0f;
    while ( _course > 360.0f ) _course -= 360.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::setBearing( float bearing, bool visible )
{
    _bearing        = bearing;
    _bearingVisible = visible;

    while ( _bearing <   0.0f ) _bearing += 360.0f;
    while ( _bearing > 360.0f ) _bearing -= 360.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::setDeviation( float deviation, CDI cdi )
{
    _deviation = deviation;
    _cdi = cdi;

    if ( _deviation < -1.0f ) _deviation = -1.0f;
    if ( _deviation >  1.0f ) _deviation =  1.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::setDistance( float distance, bool visible )
{
    _distance        = fabs( distance );
    _distanceVisible = visible;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::setHeadingSet( float heading )
{
    _heading_set = heading;

    while ( _heading_set <   0.0f ) _heading_set += 360.0f;
    while ( _heading_set > 360.0f ) _heading_set -= 360.0f;
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

        _devBarDeltaX_old = _devBarDeltaX_new;
        _devBarDeltaY_old = _devBarDeltaY_new;
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::init()
{
    _scaleX = (float)width()  / (float)_originalWidth;
    _scaleY = (float)height() / (float)_originalHeight;

    reset();

    _itemBack = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_back.svg" );
    _itemBack->setCacheMode( QGraphicsItem::NoCache );
    _itemBack->setZValue( _backZ );
    _itemBack->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _scene->addItem( _itemBack );

    _itemMask = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_mask.svg" );
    _itemMask->setCacheMode( QGraphicsItem::NoCache );
    _itemMask->setZValue( _maskZ );
    _itemMask->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _scene->addItem( _itemMask );

    _itemMark = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_mark.svg" );
    _itemMark->setCacheMode( QGraphicsItem::NoCache );
    _itemMark->setZValue( _markZ );
    _itemMark->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _scene->addItem( _itemMark );

    _itemBrgArrow = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_brg_arrow.svg" );
    _itemBrgArrow->setCacheMode( QGraphicsItem::NoCache );
    _itemBrgArrow->setZValue( _brgArrowZ );
    _itemBrgArrow->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemBrgArrow->setTransformOriginPoint( _originalNavCtr );
    _scene->addItem( _itemBrgArrow );

    _itemCrsArrow = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_crs_arrow.svg" );
    _itemCrsArrow->setCacheMode( QGraphicsItem::NoCache );
    _itemCrsArrow->setZValue( _crsArrowZ );
    _itemCrsArrow->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemCrsArrow->setTransformOriginPoint( _originalNavCtr );
    _scene->addItem( _itemCrsArrow );

    _itemDevBar = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_dev_bar.svg" );
    _itemDevBar->setCacheMode( QGraphicsItem::NoCache );
    _itemDevBar->setZValue( _devBarZ );
    _itemDevBar->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemDevBar->setTransformOriginPoint( _originalNavCtr );
    _scene->addItem( _itemDevBar );

    _itemDevScale = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_dev_scale.svg" );
    _itemDevScale->setCacheMode( QGraphicsItem::NoCache );
    _itemDevScale->setZValue( _devScaleZ );
    _itemDevScale->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemDevScale->setTransformOriginPoint( _originalNavCtr );
    _scene->addItem( _itemDevScale );

    _itemHdgBug = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_hdg_bug.svg" );
    _itemHdgBug->setCacheMode( QGraphicsItem::NoCache );
    _itemHdgBug->setZValue( _hdgBugZ );
    _itemHdgBug->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemHdgBug->setTransformOriginPoint( _originalNavCtr );
    _scene->addItem( _itemHdgBug );

    _itemHdgScale = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_hdg_scale.svg" );
    _itemHdgScale->setCacheMode( QGraphicsItem::NoCache );
    _itemHdgScale->setZValue( _hdgScaleZ );
    _itemHdgScale->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemHdgScale->setTransformOriginPoint( _originalNavCtr );
    _scene->addItem( _itemHdgScale );

    _itemCdiTo = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_cdi_to.svg" );
    _itemCdiTo->setCacheMode( QGraphicsItem::NoCache );
    _itemCdiTo->setZValue( _crsArrowZ );
    _itemCdiTo->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemCdiTo->setTransformOriginPoint( _originalNavCtr );
    _scene->addItem( _itemCdiTo );

    _itemCdiFrom = new QGraphicsSvgItem( ":/gui/images/efis/ehsi/ehsi_cdi_from.svg" );
    _itemCdiFrom->setCacheMode( QGraphicsItem::NoCache );
    _itemCdiFrom->setZValue( _crsArrowZ );
    _itemCdiFrom->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemCdiFrom->setTransformOriginPoint( _originalNavCtr );
    _scene->addItem( _itemCdiFrom );

    _itemCrsText = 0;

    _itemCrsText = new QGraphicsTextItem( QString( "CRS 999" ) );
    _itemCrsText->setCacheMode( QGraphicsItem::NoCache );
    _itemCrsText->setZValue( _crsTextZ );
    _itemCrsText->setDefaultTextColor( Colors::_lime );
    _itemCrsText->setFont( Fonts::medium() );
    _itemCrsText->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemCrsText->moveBy( _scaleX * ( _originalCrsTextCtr.x() - _itemCrsText->boundingRect().width()  / 2.0f ),
                          _scaleY * ( _originalCrsTextCtr.y() - _itemCrsText->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemCrsText );

    _itemHdgText = new QGraphicsTextItem( QString( "HDG 999" ) );
    _itemHdgText->setCacheMode( QGraphicsItem::NoCache );
    _itemHdgText->setZValue( _hdgTextZ );
    _itemHdgText->setDefaultTextColor( Colors::_magenta );
    _itemHdgText->setFont( Fonts::medium() );
    _itemHdgText->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemHdgText->moveBy( _scaleX * ( _originalHdgTextCtr.x() - _itemHdgText->boundingRect().width()  / 2.0f ),
                          _scaleY * ( _originalHdgTextCtr.y() - _itemHdgText->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemHdgText );

    _itemDmeText = new QGraphicsTextItem( QString( "99.9 NM" ) );
    _itemDmeText->setCacheMode( QGraphicsItem::NoCache );
    _itemDmeText->setZValue( _dmeTextZ );
    _itemDmeText->setDefaultTextColor( Colors::_white );
    _itemDmeText->setFont( Fonts::medium() );
    _itemDmeText->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemDmeText->moveBy( _scaleX * ( _originalDmeTextCtr.x() - _itemDmeText->boundingRect().width()  / 2.0f ),
                          _scaleY * ( _originalDmeTextCtr.y() - _itemDmeText->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemDmeText );

    updateView();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::reset()
{
    _itemBrgArrow = NULLPTR;
    _itemCrsArrow = NULLPTR;
    _itemDevBar   = NULLPTR;
    _itemDevScale = NULLPTR;
    _itemHdgBug   = NULLPTR;
    _itemHdgScale = NULLPTR;
    _itemCdiTo    = NULLPTR;
    _itemCdiFrom  = NULLPTR;

    _itemCrsText = 0;
    _itemHdgText = 0;
    _itemDmeText = 0;

    _heading   = 0.0f;
    _course    = 0.0f;
    _bearing   = 0.0f;
    _deviation = 0.0f;
    _distance  = 0.0f;

    _heading_set = 0.0f;

    _cdi = NONE;

    _bearingVisible  = true;
    _distanceVisible = true;

    _devBarDeltaX_new = 0.0f;
    _devBarDeltaX_old = 0.0f;
    _devBarDeltaY_new = 0.0f;
    _devBarDeltaY_old = 0.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEHSI::updateView()
{
    _scaleX = (float)width()  / (float)_originalWidth;
    _scaleY = (float)height() / (float)_originalHeight;

    _itemCrsArrow->setRotation( -_heading + _course );
    _itemHdgBug->setRotation( -_heading + _heading_set );
    _itemHdgScale->setRotation( -_heading );

    if ( _bearingVisible )
    {
        _itemBrgArrow->setVisible( true );
        _itemBrgArrow->setRotation( -_heading + _bearing );
    }
    else
    {
        _itemBrgArrow->setVisible( false );
    }

    if ( _cdi != NONE )
    {
        _itemDevBar->setVisible( true );
        _itemDevScale->setVisible( true );

        float angle_deg = -_heading + _course;
#       ifndef M_PI
        float angle_rad = 3.14159265358979323846 * angle_deg / 180.0f;
#       else
        float angle_rad = M_PI * angle_deg / 180.0f;
#       endif


        float sinAngle = sin( angle_rad );
        float cosAngle = cos( angle_rad );

        _itemDevBar   ->setRotation( angle_deg );
        _itemDevScale ->setRotation( angle_deg );
        _itemCdiTo    ->setRotation( angle_deg );
        _itemCdiFrom  ->setRotation( angle_deg );

        if ( _cdi == TO )
        {
            _itemCdiTo   ->setVisible( true  );
            _itemCdiFrom ->setVisible( false );
        }
        else if ( _cdi == FROM )
        {
            _itemCdiTo   ->setVisible( false );
            _itemCdiFrom ->setVisible( true  );
        }
        else
        {
            _itemCdiTo   ->setVisible( false );
            _itemCdiFrom ->setVisible( false );
        }

        float delta  = _originalPixPerDev * _deviation;

        _devBarDeltaX_new = _scaleX * delta * cosAngle;
        _devBarDeltaY_new = _scaleY * delta * sinAngle;

        double x = _devBarDeltaX_new - _devBarDeltaX_old;
        double y = _devBarDeltaY_new - _devBarDeltaY_old;

        _itemDevBar  ->moveBy( x, y );
        _itemCdiTo   ->moveBy( x, y );
        _itemCdiFrom ->moveBy( x, y );
    }
    else
    {
        _itemDevBar   ->setVisible( false );
        _itemDevScale ->setVisible( false );
        _itemCdiTo    ->setVisible( false );
        _itemCdiFrom  ->setVisible( false );

        _devBarDeltaX_new = _devBarDeltaX_old;
        _devBarDeltaY_new = _devBarDeltaY_old;
    }

    _itemCrsText->setPlainText( QString("CRS %1").arg( _course      , 3, 'f', 0, QChar('0') ) );
    _itemHdgText->setPlainText( QString("HDG %1").arg( _heading_set , 3, 'f', 0, QChar('0') ) );

    if ( _distanceVisible )
    {
        _itemDmeText->setVisible( true );
        _itemDmeText->setPlainText( QString("%1 NM").arg( _distance, 5, 'f', 1, QChar(' ') ) );
    }
    else
    {
        _itemDmeText->setVisible( false );
    }

    _scene->update();

    centerOn( width() / 2.0f , height() / 2.0f );
}
