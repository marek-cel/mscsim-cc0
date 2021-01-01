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

#include <gui/GraphicsEADI.h>

#ifdef WIN32
#   include <float.h>
#endif

#include <cmath>

#include <gui/Colors.h>
#include <gui/Fonts.h>

////////////////////////////////////////////////////////////////////////////////

GraphicsEADI::GraphicsEADI( QWidget *parent ) :
    QGraphicsView ( parent ),

    _timerId ( 0 ),

    _scene ( NULLPTR ),

    _adi ( NULLPTR ),
    _alt ( NULLPTR ),
    _asi ( NULLPTR ),
    _hdg ( NULLPTR ),
    _vsi ( NULLPTR ),

    _itemBack ( NULLPTR ),
    _itemMask ( NULLPTR ),

    _itemFMA ( NULLPTR ),
    _itemSPD ( NULLPTR ),

    _itemLNAV ( NULLPTR ),
    _itemVNAV ( NULLPTR ),

    _itemLNAV_ARM ( NULLPTR ),
    _itemVNAV_ARM ( NULLPTR ),

    _flightMode ( FM_OFF ),
    _speedMode  ( SM_OFF ),

    _lnav ( LNAV_OFF ),
    _vnav ( VNAV_OFF ),

    _scaleX ( 1.0f ),
    _scaleY ( 1.0f ),

    _originalFMA ( 150.0f, 42.0f ),
    _originalSPD ( 100.0f, 12.0f ),

    _originalLNAV ( 150.0f, 12.0f ),
    _originalVNAV ( 200.0f, 12.0f ),

    _originalLNAV_ARM ( 150.0f, 22.0f ),
    _originalVNAV_ARM ( 200.0f, 22.0f ),

    _originalHeight ( 300 ),
    _originalWidth  ( 300 ),

    _backZ (   0 ),
    _maskZ ( 100 ),
    _textZ ( 120 )
{
    reset();

    _scene = new QGraphicsScene( this );
    setScene( _scene );

    _scene->clear();

    _adi = new GraphicsEADI::ADI( _scene );
    _alt = new GraphicsEADI::ALT( _scene );
    _asi = new GraphicsEADI::ASI( _scene );
    _hdg = new GraphicsEADI::HDG( _scene );
    _vsi = new GraphicsEADI::VSI( _scene );

    init();

    _timerId = startTimer( 50 );
}

////////////////////////////////////////////////////////////////////////////////

GraphicsEADI::~GraphicsEADI()
{
    if ( _timerId ) killTimer( _timerId );

    if ( _scene )
    {
        _scene->clear();
        delete _scene;
        _scene = NULLPTR;
    }

    reset();

    DELPTR( _adi );
    DELPTR( _alt );
    DELPTR( _asi );
    DELPTR( _hdg );
    DELPTR( _vsi );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::reinit()
{
    if ( _scene )
    {
        _scene->clear();

        init();
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::resizeEvent( QResizeEvent *event )
{
    ////////////////////////////////////
    QGraphicsView::resizeEvent( event );
    ////////////////////////////////////

    reinit();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::timerEvent( QTimerEvent *event )
{
    ///////////////////////////////////
    QGraphicsView::timerEvent( event );
    ///////////////////////////////////

    if ( isVisible() )
    {
        updateView();
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::init()
{
    _scaleX = (float)width()  / (float)_originalWidth;
    _scaleY = (float)height() / (float)_originalHeight;

    reset();

    _adi->init( _scaleX, _scaleY );
    _alt->init( _scaleX, _scaleY );
    _asi->init( _scaleX, _scaleY );
    _hdg->init( _scaleX, _scaleY );
    _vsi->init( _scaleX, _scaleY );

    _itemBack = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_back.svg" );
    _itemBack->setCacheMode( QGraphicsItem::NoCache );
    _itemBack->setZValue( _backZ );
    _itemBack->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _scene->addItem( _itemBack );

    _itemMask = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_mask.svg" );
    _itemMask->setCacheMode( QGraphicsItem::NoCache );
    _itemMask->setZValue( _maskZ );
    _itemMask->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _scene->addItem( _itemMask );

    _itemFMA = new QGraphicsTextItem( QString( "  CMD  " ) );
    _itemFMA->setCacheMode( QGraphicsItem::NoCache );
    _itemFMA->setZValue( _textZ );
    _itemFMA->setTextInteractionFlags( Qt::NoTextInteraction );
    _itemFMA->setDefaultTextColor( Colors::_lime );
    _itemFMA->setFont( Fonts::medium() );
    _itemFMA->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemFMA->moveBy( _scaleX * ( _originalFMA.x() - _itemFMA->boundingRect().width()  / 2.0f ),
                      _scaleY * ( _originalFMA.y() - _itemFMA->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemFMA );

    _itemSPD = new QGraphicsTextItem( QString( "FMC SPD" ) );
    _itemSPD->setCacheMode( QGraphicsItem::NoCache );
    _itemSPD->setZValue( _textZ );
    _itemSPD->setTextInteractionFlags( Qt::NoTextInteraction );
    _itemSPD->setDefaultTextColor( Colors::_lime );
    _itemSPD->setFont( Fonts::xsmall() );
    _itemSPD->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemSPD->moveBy( _scaleX * ( _originalSPD.x() - _itemSPD->boundingRect().width()  / 2.0f ),
                      _scaleY * ( _originalSPD.y() - _itemSPD->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemSPD );

    _itemLNAV = new QGraphicsTextItem( QString( "HDG SEL" ) );
    _itemLNAV->setCacheMode( QGraphicsItem::NoCache );
    _itemLNAV->setZValue( _textZ );
    _itemLNAV->setTextInteractionFlags( Qt::NoTextInteraction );
    _itemLNAV->setDefaultTextColor( Colors::_lime );
    _itemLNAV->setFont( Fonts::xsmall() );
    _itemLNAV->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemLNAV->moveBy( _scaleX * ( _originalLNAV.x() - _itemLNAV->boundingRect().width()  / 2.0f ),
                       _scaleY * ( _originalLNAV.y() - _itemLNAV->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemLNAV );

    _itemVNAV = new QGraphicsTextItem( QString( "ALT SEL" ) );
    _itemVNAV->setCacheMode( QGraphicsItem::NoCache );
    _itemVNAV->setZValue( _textZ );
    _itemVNAV->setTextInteractionFlags( Qt::NoTextInteraction );
    _itemVNAV->setDefaultTextColor( Colors::_lime );
    _itemVNAV->setFont( Fonts::xsmall() );
    _itemVNAV->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemVNAV->moveBy( _scaleX * ( _originalVNAV.x() - _itemVNAV->boundingRect().width()  / 2.0f ),
                       _scaleY * ( _originalVNAV.y() - _itemVNAV->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemVNAV );

    _itemLNAV_ARM = new QGraphicsTextItem( QString( "VOR/LOC" ) );
    _itemLNAV_ARM->setCacheMode( QGraphicsItem::NoCache );
    _itemLNAV_ARM->setZValue( _textZ );
    _itemLNAV_ARM->setTextInteractionFlags( Qt::NoTextInteraction );
    _itemLNAV_ARM->setDefaultTextColor( Colors::_white );
    _itemLNAV_ARM->setFont( Fonts::xsmall() );
    _itemLNAV_ARM->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemLNAV_ARM->moveBy( _scaleX * ( _originalLNAV_ARM.x() - _itemLNAV_ARM->boundingRect().width()  / 2.0f ),
                           _scaleY * ( _originalLNAV_ARM.y() - _itemLNAV_ARM->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemLNAV_ARM );

    _itemVNAV_ARM = new QGraphicsTextItem( QString( "GS PATH" ) );
    _itemVNAV_ARM->setCacheMode( QGraphicsItem::NoCache );
    _itemVNAV_ARM->setZValue( _textZ );
    _itemVNAV_ARM->setTextInteractionFlags( Qt::NoTextInteraction );
    _itemVNAV_ARM->setDefaultTextColor( Colors::_white );
    _itemVNAV_ARM->setFont( Fonts::xsmall() );
    _itemVNAV_ARM->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemVNAV_ARM->moveBy( _scaleX * ( _originalVNAV_ARM.x() - _itemVNAV_ARM->boundingRect().width()  / 2.0f ),
                           _scaleY * ( _originalVNAV_ARM.y() - _itemVNAV_ARM->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemVNAV_ARM );

    updateView();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::reset()
{
    _itemBack = NULLPTR;
    _itemMask = NULLPTR;

    _itemFMA = NULLPTR;
    _itemSPD = NULLPTR;

    _itemLNAV = NULLPTR;
    _itemVNAV = NULLPTR;

    _itemLNAV_ARM = NULLPTR;
    _itemVNAV_ARM = NULLPTR;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::updateView()
{
    _scaleX = (float)width()  / (float)_originalWidth;
    _scaleY = (float)height() / (float)_originalHeight;

    _adi->update( _scaleX, _scaleY );
    _alt->update( _scaleX, _scaleY );
    _vsi->update( _scaleX, _scaleY );
    _asi->update( _scaleX, _scaleY );
    _hdg->update( _scaleX, _scaleY );

    switch ( _flightMode )
    {
        case FM_FD:  _itemFMA->setPlainText( "  FD   " ); break;
        case FM_CMD: _itemFMA->setPlainText( "  CMD  " ); break;
        default:     _itemFMA->setPlainText( "       " ); break;
    }

    switch ( _speedMode )
    {
        case SM_FMC_SPD: _itemSPD->setPlainText( "FMC SPD" ); break;
        default:         _itemSPD->setPlainText( "       " ); break;
    }

    switch ( _lnav )
    {
        case LNAV_HDG:     _itemLNAV->setPlainText( "HDG SEL" ); _itemLNAV_ARM->setPlainText( "       " ); break;
        case LNAV_NAV:     _itemLNAV->setPlainText( "VOR/LOC" ); _itemLNAV_ARM->setPlainText( "       " ); break;
        case LNAV_NAV_ARM: _itemLNAV->setPlainText( "HDG SEL" ); _itemLNAV_ARM->setPlainText( "VOR/LOC" ); break;
        case LNAV_APR:     _itemLNAV->setPlainText( "  APR  " ); _itemLNAV_ARM->setPlainText( "       " ); break;
        case LNAV_APR_ARM: _itemLNAV->setPlainText( "  APR  " ); _itemLNAV_ARM->setPlainText( "  APR  " ); break;
        case LNAV_BC:      _itemLNAV->setPlainText( "  BC   " ); _itemLNAV_ARM->setPlainText( "       " ); break;
        case LNAV_BC_ARM:  _itemLNAV->setPlainText( "  BC   " ); _itemLNAV_ARM->setPlainText( "  BC   " ); break;
        default:           _itemLNAV->setPlainText( "       " ); _itemLNAV_ARM->setPlainText( "       " ); break;
    }

    switch ( _vnav )
    {
        case VNAV_ALT:     _itemVNAV->setPlainText( "  ALT  " ); _itemVNAV_ARM->setPlainText( "       " ); break;
        case VNAV_IAS:     _itemVNAV->setPlainText( "  IAS  " ); _itemVNAV_ARM->setPlainText( "       " ); break;
        case VNAV_VS:      _itemVNAV->setPlainText( "  VS   " ); _itemVNAV_ARM->setPlainText( "       " ); break;
        case VNAV_ALT_SEL: _itemVNAV->setPlainText( "ALT SEL" ); _itemVNAV_ARM->setPlainText( "       " ); break;
        case VNAV_GS:      _itemVNAV->setPlainText( "GS PATH" ); _itemVNAV_ARM->setPlainText( "       " ); break;
        case VNAV_GS_ARM:  _itemVNAV->setPlainText( "GS PATH" ); _itemVNAV_ARM->setPlainText( "GS PATH" ); break;
        default:           _itemVNAV->setPlainText( "       " ); _itemVNAV_ARM->setPlainText( "       " ); break;
    }

    _scene->update();

    centerOn( width() / 2.0f , height() / 2.0f );
}

////////////////////////////////////////////////////////////////////////////////

GraphicsEADI::ADI::ADI( QGraphicsScene *scene ) :
    _scene ( scene ),

    _itemBack   ( NULLPTR ),
    _itemLadd   ( NULLPTR ),
    _itemRoll   ( NULLPTR ),
    _itemSlip   ( NULLPTR ),
    _itemTurn   ( NULLPTR ),
    _itemDotH   ( NULLPTR ),
    _itemDotV   ( NULLPTR ),
    _itemFD     ( NULLPTR ),
    _itemStall  ( NULLPTR ),
    _itemMask   ( NULLPTR ),
    _itemScaleH ( NULLPTR ),
    _itemScaleV ( NULLPTR ),

    _roll     ( 0.0f ),
    _pitch    ( 0.0f ),
    _slipSkid ( 0.0f ),
    _turnRate ( 0.0f ),
    _dotH     ( 0.0f ),
    _dotV     ( 0.0f ),
    _fdRoll   ( 0.0f ),
    _fdPitch  ( 0.0f ),

    _dotVisibleH ( false ),
    _dotVisibleV ( false ),
    _fdVisible   ( false ),

    _stall ( false ),

    _laddDeltaX_new     ( 0.0f ),
    _laddDeltaX_old     ( 0.0f ),
    _laddDeltaY_new     ( 0.0f ),
    _laddDeltaY_old     ( 0.0f ),
    _laddBackDeltaX_new ( 0.0f ),
    _laddBackDeltaX_old ( 0.0f ),
    _laddBackDeltaY_new ( 0.0f ),
    _laddBackDeltaY_old ( 0.0f ),
    _slipDeltaX_new     ( 0.0f ),
    _slipDeltaX_old     ( 0.0f ),
    _slipDeltaY_new     ( 0.0f ),
    _slipDeltaY_old     ( 0.0f ),
    _turnDeltaX_new     ( 0.0f ),
    _turnDeltaX_old     ( 0.0f ),
    _dotHDeltaX_new     ( 0.0f ),
    _dotHDeltaX_old     ( 0.0f ),
    _dotVDeltaY_new     ( 0.0f ),
    _dotVDeltaY_old     ( 0.0f ),
    _fdDeltaX_new       ( 0.0f ),
    _fdDeltaX_old       ( 0.0f ),
    _fdDeltaY_new       ( 0.0f ),
    _fdDeltaY_old       ( 0.0f ),

    _scaleX ( 1.0f ),
    _scaleY ( 1.0f ),

    _originalPixPerDeg (   3.0f ),
    _deltaLaddBack_max (  52.5f ),
    _deltaLaddBack_min ( -52.5f ),
    _maxSlipDeflection (  20.0f ),
    _maxTurnDeflection (  55.0f ),
    _maxDotsDeflection (  50.0f ),

    _originalAdiCtr    ( 150.0f ,  125.0f ),
    _originalBackPos   (  45.0f ,  -85.0f ),
    _originalLaddPos   ( 110.0f , -175.0f ),
    _originalRollPos   (  45.0f ,   20.0f ),
    _originalSlipPos   ( 145.5f ,   68.0f ),
    _originalTurnPos   ( 142.5f ,  206.0f ),
    _originalDotHPos   ( 145.0f ,  188.0f ),
    _originalDotVPos   ( 213.0f ,  120.0f ),
    _originalFdPos     ( 107.0f ,  124.5f ),
    _originalStallPos  ( 122.0f ,   91.0f ),
    _originalScaleHPos (   0.0f ,    0.0f ),
    _originalScaleVPos (   0.0f ,    0.0f ),

    _backZ   ( 10 ),
    _laddZ   ( 20 ),
    _rollZ   ( 30 ),
    _slipZ   ( 40 ),
    _dotsZ   ( 50 ),
    _fdZ     ( 50 ),
    _scalesZ ( 51 ),
    _maskZ   ( 60 ),
    _turnZ   ( 70 ),
    _stallZ  ( 80 )
{
    reset();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::init( float scaleX, float scaleY )
{
    _scaleX = scaleX;
    _scaleY = scaleY;

    reset();

    _itemBack = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_adi_back.svg" );
    _itemBack->setCacheMode( QGraphicsItem::NoCache );
    _itemBack->setZValue( _backZ );
    _itemBack->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemBack->setTransformOriginPoint( _originalAdiCtr - _originalBackPos );
    _itemBack->moveBy( _scaleX * _originalBackPos.x(), _scaleY * _originalBackPos.y() );
    _scene->addItem( _itemBack );

    _itemLadd = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_adi_ladd.svg" );
    _itemLadd->setCacheMode( QGraphicsItem::NoCache );
    _itemLadd->setZValue( _laddZ );
    _itemLadd->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemLadd->setTransformOriginPoint( _originalAdiCtr - _originalLaddPos );
    _itemLadd->moveBy( _scaleX * _originalLaddPos.x(), _scaleY * _originalLaddPos.y() );
    _scene->addItem( _itemLadd );

    _itemRoll = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_adi_roll.svg" );
    _itemRoll->setCacheMode( QGraphicsItem::NoCache );
    _itemRoll->setZValue( _rollZ );
    _itemRoll->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemRoll->setTransformOriginPoint( _originalAdiCtr - _originalRollPos );
    _itemRoll->moveBy( _scaleX * _originalRollPos.x(), _scaleY * _originalRollPos.y() );
    _scene->addItem( _itemRoll );

    _itemSlip = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_adi_slip.svg" );
    _itemSlip->setCacheMode( QGraphicsItem::NoCache );
    _itemSlip->setZValue( _slipZ );
    _itemSlip->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemSlip->setTransformOriginPoint( _originalAdiCtr - _originalSlipPos );
    _itemSlip->moveBy( _scaleX * _originalSlipPos.x(), _scaleY * _originalSlipPos.y() );
    _scene->addItem( _itemSlip );

    _itemTurn = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_adi_turn.svg" );
    _itemTurn->setCacheMode( QGraphicsItem::NoCache );
    _itemTurn->setZValue( _turnZ );
    _itemTurn->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemTurn->moveBy( _scaleX * _originalTurnPos.x(), _scaleY * _originalTurnPos.y() );
    _scene->addItem( _itemTurn );

    _itemDotH = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_adi_doth.svg" );
    _itemDotH->setCacheMode( QGraphicsItem::NoCache );
    _itemDotH->setZValue( _dotsZ - 1 );
    _itemDotH->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemDotH->moveBy( _scaleX * _originalDotHPos.x(), _scaleY * _originalDotHPos.y() );
    _scene->addItem( _itemDotH );

    _itemDotV = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_adi_dotv.svg" );
    _itemDotV->setCacheMode( QGraphicsItem::NoCache );
    _itemDotV->setZValue( _dotsZ - 1 );
    _itemDotV->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemDotV->moveBy( _scaleX * _originalDotVPos.x(), _scaleY * _originalDotVPos.y() );
    _scene->addItem( _itemDotV );

    _itemFD = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_adi_fd.svg" );
    _itemFD->setCacheMode( QGraphicsItem::NoCache );
    _itemFD->setZValue( _fdZ );
    _itemFD->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemFD->setTransformOriginPoint( _originalAdiCtr - _originalFdPos );
    _itemFD->moveBy( _scaleX * _originalFdPos.x(), _scaleY * _originalFdPos.y() );
    _scene->addItem( _itemFD );

    _itemStall = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_adi_stall.svg" );
    _itemStall->setCacheMode( QGraphicsItem::NoCache );
    _itemStall->setZValue( _stallZ );
    _itemStall->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemStall->moveBy( _scaleX * _originalStallPos.x(), _scaleY * _originalStallPos.y() );
    _scene->addItem( _itemStall );

    _itemScaleH = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_adi_scaleh.svg" );
    _itemScaleH->setCacheMode( QGraphicsItem::NoCache );
    _itemScaleH->setZValue( _scalesZ );
    _itemScaleH->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemScaleH->moveBy( _scaleX * _originalScaleHPos.x(), _scaleY * _originalScaleHPos.y() );
    _scene->addItem( _itemScaleH );

    _itemScaleV = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_adi_scalev.svg" );
    _itemScaleV->setCacheMode( QGraphicsItem::NoCache );
    _itemScaleV->setZValue( _scalesZ );
    _itemScaleV->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemScaleV->moveBy( _scaleX * _originalScaleVPos.x(), _scaleY * _originalScaleVPos.y() );
    _scene->addItem( _itemScaleV );

    _itemMask = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_adi_mask.svg" );
    _itemMask->setCacheMode( QGraphicsItem::NoCache );
    _itemMask->setZValue( _maskZ );
    _itemMask->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _scene->addItem( _itemMask );

    update( scaleX, scaleY );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::update( float scaleX, float scaleY )
{
    _scaleX = scaleX;
    _scaleY = scaleY;

    float delta = _originalPixPerDeg * _pitch;

#   ifndef M_PI
    float roll_rad = 3.14159265358979323846 * _roll / 180.0f;
#   else
    float roll_rad = M_PI * _roll / 180.0f;
#   endif

    float sinRoll = sin( roll_rad );
    float cosRoll = cos( roll_rad );

    updateLadd( delta, sinRoll, cosRoll );
    updateLaddBack( delta, sinRoll, cosRoll );
    updateRoll();
    updateSlipSkid( sinRoll, cosRoll );
    updateTurnRate();
    updateDots();
    updateFD( sinRoll, cosRoll );
    updateStall();

    _laddDeltaX_old     = _laddDeltaX_new;
    _laddDeltaY_old     = _laddDeltaY_new;
    _laddBackDeltaX_old = _laddBackDeltaX_new;
    _laddBackDeltaY_old = _laddBackDeltaY_new;
    _slipDeltaX_old     = _slipDeltaX_new;
    _slipDeltaY_old     = _slipDeltaY_new;
    _turnDeltaX_old     = _turnDeltaX_new;
    _dotHDeltaX_old     = _dotHDeltaX_new;
    _dotVDeltaY_old     = _dotVDeltaY_new;
    _fdDeltaX_old       = _fdDeltaX_new;
    _fdDeltaY_old       = _fdDeltaY_new;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::setRoll( float roll )
{
    _roll = roll;

    if      ( _roll < -180.0f ) _roll = -180.0f;
    else if ( _roll >  180.0f ) _roll =  180.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::setPitch( float pitch )
{
    _pitch = pitch;

    if      ( _pitch < -90.0f ) _pitch = -90.0f;
    else if ( _pitch >  90.0f ) _pitch =  90.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::setSlipSkid( float slipSkid )
{
    _slipSkid = slipSkid;

    if      ( _slipSkid < -1.0f ) _slipSkid = -1.0f;
    else if ( _slipSkid >  1.0f ) _slipSkid =  1.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::setTurnRate( float turnRate )
{
    _turnRate = turnRate;

    if      ( _turnRate < -1.0f ) _turnRate = -1.0f;
    else if ( _turnRate >  1.0f ) _turnRate =  1.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::setDots( float dotH, float dotV, bool visibleH, bool visibleV )
{
    _dotH = dotH;
    _dotV = dotV;

    if      ( _dotH < -1.0f ) _dotH = -1.0f;
    else if ( _dotH >  1.0f ) _dotH =  1.0f;

    if      ( _dotV < -1.0f ) _dotV = -1.0f;
    else if ( _dotV >  1.0f ) _dotV =  1.0f;

    _dotVisibleH = visibleH;
    _dotVisibleV = visibleV;
}


////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::setFD( float roll, float pitch, bool visible )
{
    _fdRoll  = roll;
    _fdPitch = pitch;

    if      ( _fdRoll < -180.0f ) _fdRoll = -180.0f;
    else if ( _fdRoll >  180.0f ) _fdRoll =  180.0f;

    if      ( _fdPitch < -90.0f ) _fdPitch = -90.0f;
    else if ( _fdPitch >  90.0f ) _fdPitch =  90.0f;

    _fdVisible = visible;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::setStall( bool stall )
{
    _stall = stall;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::reset()
{
    _itemBack   = NULLPTR;
    _itemLadd   = NULLPTR;
    _itemRoll   = NULLPTR;
    _itemSlip   = NULLPTR;
    _itemTurn   = NULLPTR;
    _itemDotH   = NULLPTR;
    _itemDotV   = NULLPTR;
    _itemFD     = NULLPTR;
    _itemMask   = NULLPTR;
    _itemScaleH = NULLPTR;
    _itemScaleV = NULLPTR;

    _roll     = 0.0f;
    _pitch    = 0.0f;
    _slipSkid = 0.0f;
    _turnRate = 0.0f;
    _dotH     = 0.0f;
    _dotV     = 0.0f;
    _fdRoll   = 0.0f;
    _fdPitch  = 0.0f;

    _dotVisibleH  = false;
    _dotVisibleV  = false;
    _fdVisible    = false;

    _stall = false;

    _laddDeltaX_new     = 0.0f;
    _laddDeltaX_old     = 0.0f;
    _laddDeltaY_new     = 0.0f;
    _laddDeltaY_old     = 0.0f;
    _laddBackDeltaX_new = 0.0f;
    _laddBackDeltaX_old = 0.0f;
    _laddBackDeltaY_new = 0.0f;
    _laddBackDeltaY_old = 0.0f;
    _slipDeltaX_new     = 0.0f;
    _slipDeltaX_old     = 0.0f;
    _slipDeltaY_new     = 0.0f;
    _slipDeltaY_old     = 0.0f;
    _turnDeltaX_new     = 0.0f;
    _turnDeltaX_old     = 0.0f;
    _dotHDeltaX_new     = 0.0f;
    _dotHDeltaX_old     = 0.0f;
    _dotVDeltaY_new     = 0.0f;
    _dotVDeltaY_old     = 0.0f;
    _fdDeltaX_new       = 0.0f;
    _fdDeltaX_old       = 0.0f;
    _fdDeltaY_new       = 0.0f;
    _fdDeltaY_old       = 0.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::updateLadd( float delta, float sinRoll, float cosRoll )
{
    _itemLadd->setRotation( -_roll );

    _laddDeltaX_new = _scaleX * delta * sinRoll;
    _laddDeltaY_new = _scaleY * delta * cosRoll;

    _itemLadd->moveBy( _laddDeltaX_new - _laddDeltaX_old, _laddDeltaY_new - _laddDeltaY_old );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::updateLaddBack( float delta, float sinRoll, float cosRoll )
{
    _itemBack->setRotation( -_roll );

    float deltaLaddBack = 0.0;

    if ( delta > _deltaLaddBack_max )
    {
        deltaLaddBack = _deltaLaddBack_max;
    }
    else if ( delta < _deltaLaddBack_min )
    {
        deltaLaddBack = _deltaLaddBack_min;
    }
    else
    {
        deltaLaddBack = delta;
    }

    _laddBackDeltaX_new = _scaleX * deltaLaddBack * sinRoll;
    _laddBackDeltaY_new = _scaleY * deltaLaddBack * cosRoll;

    _itemBack->moveBy( _laddBackDeltaX_new - _laddBackDeltaX_old, _laddBackDeltaY_new - _laddBackDeltaY_old );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::updateRoll()
{
    _itemRoll->setRotation( -_roll );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::updateSlipSkid( float sinRoll, float cosRoll )
{
    _itemSlip->setRotation( -_roll );

    float deltaSlip = -_maxSlipDeflection * _slipSkid;

    _slipDeltaX_new =  _scaleX * deltaSlip * cosRoll;
    _slipDeltaY_new = -_scaleY * deltaSlip * sinRoll;

    _itemSlip->moveBy( _slipDeltaX_new - _slipDeltaX_old, _slipDeltaY_new - _slipDeltaY_old );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::updateTurnRate()
{
    _turnDeltaX_new = _scaleX * _maxTurnDeflection * _turnRate;

    _itemTurn->moveBy( _turnDeltaX_new - _turnDeltaX_old, 0.0 );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::updateDots()
{
    if ( _dotVisibleH )
    {
        _itemDotH->setVisible( true );
        _itemScaleH->setVisible( true );

        _dotHDeltaX_new = _scaleX * _maxDotsDeflection * _dotH;

        _itemDotH->moveBy( _dotHDeltaX_new - _dotHDeltaX_old, 0.0f );
    }
    else
    {
        _itemDotH->setVisible( false );
        _itemScaleH->setVisible( false );

        _dotHDeltaX_new = _dotHDeltaX_old;
    }

    if ( _dotVisibleV )
    {
        _itemDotV->setVisible( true );
        _itemScaleV->setVisible( true );

        _dotVDeltaY_new = _scaleY * _maxDotsDeflection * _dotV;

        _itemDotV->moveBy( 0.0f, _dotVDeltaY_old - _dotVDeltaY_new );
    }
    else
    {
        _itemDotV->setVisible( false );
        _itemScaleV->setVisible( false );

        _dotVDeltaY_new = _dotVDeltaY_old;
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::updateFD( float sinRoll, float cosRoll )
{
    if ( _fdVisible )
    {
        _itemFD->setVisible( true );

        _itemFD->setRotation( _fdRoll - _roll );

        float pitch = _pitch - _fdPitch;

        if      ( pitch < -17.0f ) pitch = -17.0f;
        else if ( pitch >  17.0f ) pitch =  17.0f;

        float delta = _originalPixPerDeg * pitch;

        _fdDeltaX_new = _scaleX * delta * sinRoll;
        _fdDeltaY_new = _scaleY * delta * cosRoll;

        _itemFD->moveBy( _fdDeltaX_new - _fdDeltaX_old,
                         _fdDeltaY_new - _fdDeltaY_old );
    }
    else
    {
        _itemFD->setVisible( false );
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ADI::updateStall()
{
    if ( _stall )
    {
        _itemStall->setVisible( true );
    }
    else
    {
        _itemStall->setVisible( false );
    }
}

////////////////////////////////////////////////////////////////////////////////

GraphicsEADI::ALT::ALT( QGraphicsScene *scene ) :
    _scene ( scene ),

    _itemBack     ( NULLPTR ),
    _itemScale1   ( NULLPTR ),
    _itemScale2   ( NULLPTR ),
    _itemLabel1   ( NULLPTR ),
    _itemLabel2   ( NULLPTR ),
    _itemLabel3   ( NULLPTR ),
    _itemGround   ( NULLPTR ),
    _itemBugAlt   ( NULLPTR ),
    _itemFrame    ( NULLPTR ),
    _itemAltitude ( NULLPTR ),
    _itemPressure ( NULLPTR ),
    _itemSetpoint ( NULLPTR ),

    _altitude ( 0.0f ),
    _altitude_sel ( 0.0f ),

    _scale1DeltaY_new ( 0.0f ),
    _scale1DeltaY_old ( 0.0f ),
    _scale2DeltaY_new ( 0.0f ),
    _scale2DeltaY_old ( 0.0f ),
    _groundDeltaY_new ( 0.0f ),
    _groundDeltaY_old ( 0.0f ),
    _labelsDeltaY_new ( 0.0f ),
    _labelsDeltaY_old ( 0.0f ),
    _bugDeltaY_new    ( 0.0f ),
    _bugDeltaY_old    ( 0.0f ),

    _scaleX ( 1.0f ),
    _scaleY ( 1.0f ),

    _originalPixPerAlt   ( 0.150f ),
    _originalScaleHeight ( 300.0f ),
    _originalLabelsX     ( 253.0f ),
    _originalLabel1Y     (  50.0f ),
    _originalLabel2Y     ( 125.0f ),
    _originalLabel3Y     ( 200.0f ),

    _originalBackPos     ( 231.0f ,   37.5f ),
    _originalScale1Pos   ( 231.0f , -174.5f ),
    _originalScale2Pos   ( 231.0f , -474.5f ),
    _originalGroundPos   ( 231.5f ,  124.5f ),
    _originalFramePos    ( 225.0f ,  110.0f ),
    _originalAltitudeCtr ( 256.0f ,  126.0f ),
    _originalPressureCtr ( 254.0f ,  225.0f ),
    _originalAltitudeSet ( 250.0f ,   27.0f ),

    _backZ      (  70 ),
    _scaleZ     (  77 ),
    _labelsZ    (  78 ),
    _groundZ    (  79 ),
    _altBugZ    ( 100 ),
    _frameZ     ( 110 ),
    _frameTextZ ( 120 )
{
    reset();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ALT::init( float scaleX, float scaleY )
{
    _scaleX = scaleX;
    _scaleY = scaleY;

    reset();

    _itemBack = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_alt_back.svg" );
    _itemBack->setCacheMode( QGraphicsItem::NoCache );
    _itemBack->setZValue( _backZ );
    _itemBack->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemBack->moveBy( _scaleX * _originalBackPos.x(), _scaleY * _originalBackPos.y() );
    _scene->addItem( _itemBack );

    _itemScale1 = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_alt_scale.svg" );
    _itemScale1->setCacheMode( QGraphicsItem::NoCache );
    _itemScale1->setZValue( _scaleZ );
    _itemScale1->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemScale1->moveBy( _scaleX * _originalScale1Pos.x(), _scaleY * _originalScale1Pos.y() );
    _scene->addItem( _itemScale1 );

    _itemScale2 = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_alt_scale.svg" );
    _itemScale2->setCacheMode( QGraphicsItem::NoCache );
    _itemScale2->setZValue( _scaleZ );
    _itemScale2->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemScale2->moveBy( _scaleX * _originalScale2Pos.x(), _scaleY * _originalScale2Pos.y() );
    _scene->addItem( _itemScale2 );

    _itemLabel1 = new QGraphicsTextItem( QString( "99999" ) );
    _itemLabel1->setCacheMode( QGraphicsItem::NoCache );
    _itemLabel1->setZValue( _labelsZ );
    _itemLabel1->setDefaultTextColor( Colors::_white );
    _itemLabel1->setFont( Fonts::small() );
    _itemLabel1->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemLabel1->moveBy( _scaleX * ( _originalLabelsX - _itemLabel1->boundingRect().width()  / 2.0f ),
                         _scaleY * ( _originalLabel1Y - _itemLabel1->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemLabel1 );

    _itemLabel2 = new QGraphicsTextItem( QString( "99999" ) );
    _itemLabel2->setCacheMode( QGraphicsItem::NoCache );
    _itemLabel2->setZValue( _labelsZ );
    _itemLabel2->setDefaultTextColor( Colors::_white );
    _itemLabel2->setFont( Fonts::small() );
    _itemLabel2->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemLabel2->moveBy( _scaleX * ( _originalLabelsX - _itemLabel2->boundingRect().width()  / 2.0f ),
                         _scaleY * ( _originalLabel2Y - _itemLabel2->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemLabel2 );

    _itemLabel3 = new QGraphicsTextItem( QString( "99999" ) );
    _itemLabel3->setCacheMode( QGraphicsItem::NoCache );
    _itemLabel3->setZValue( _labelsZ );
    _itemLabel3->setDefaultTextColor( Colors::_white );
    _itemLabel3->setFont( Fonts::small() );
    _itemLabel3->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemLabel3->moveBy( _scaleX * ( _originalLabelsX - _itemLabel3->boundingRect().width()  / 2.0f ),
                         _scaleY * ( _originalLabel3Y - _itemLabel3->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemLabel3 );

    _itemGround = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_alt_ground.svg" );
    _itemGround->setCacheMode( QGraphicsItem::NoCache );
    _itemGround->setZValue( _groundZ );
    _itemGround->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemGround->moveBy( _scaleX * _originalGroundPos.x(), _scaleY * _originalGroundPos.y() );
    _scene->addItem( _itemGround );

    _itemBugAlt = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_alt_bug.svg" );
    _itemBugAlt->setCacheMode( QGraphicsItem::NoCache );
    _itemBugAlt->setZValue( _altBugZ );
    _itemBugAlt->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemBugAlt->moveBy( _scaleX * _originalFramePos.x(), _scaleY * _originalFramePos.y() );
    _scene->addItem( _itemBugAlt );

    _itemFrame = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_alt_frame.svg" );
    _itemFrame->setCacheMode( QGraphicsItem::NoCache );
    _itemFrame->setZValue( _frameZ );
    _itemFrame->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemFrame->moveBy( _scaleX * _originalFramePos.x(), _scaleY * _originalFramePos.y() );
    _scene->addItem( _itemFrame );

    _itemAltitude = new QGraphicsTextItem( QString( "    0" ) );
    _itemAltitude->setCacheMode( QGraphicsItem::NoCache );
    _itemAltitude->setZValue( _frameTextZ );
    _itemAltitude->setDefaultTextColor( Colors::_white );
    _itemAltitude->setFont( Fonts::medium() );
    _itemAltitude->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemAltitude->moveBy( _scaleX * ( _originalAltitudeCtr.x() - _itemAltitude->boundingRect().width()  / 2.0f ),
                           _scaleY * ( _originalAltitudeCtr.y() - _itemAltitude->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemAltitude );

    _itemPressure = new QGraphicsTextItem( QString( "  STD  " ) );
    _itemPressure->setCacheMode( QGraphicsItem::NoCache );
    _itemPressure->setZValue( _frameTextZ );
    _itemPressure->setDefaultTextColor( Colors::_lime );
    _itemPressure->setFont( Fonts::medium() );
    _itemPressure->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemPressure->moveBy( _scaleX * ( _originalPressureCtr.x() - _itemPressure->boundingRect().width()  / 2.0f ),
                           _scaleY * ( _originalPressureCtr.y() - _itemPressure->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemPressure );

    _itemSetpoint = new QGraphicsTextItem( QString( "    0" ) );
    _itemSetpoint->setCacheMode( QGraphicsItem::NoCache );
    _itemSetpoint->setZValue( _frameTextZ );
    _itemSetpoint->setDefaultTextColor( Colors::_magenta );
    _itemSetpoint->setFont( Fonts::medium() );
    _itemSetpoint->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemSetpoint->moveBy( _scaleX * ( _originalAltitudeSet.x() - _itemAltitude->boundingRect().width()  / 2.0f ),
                           _scaleY * ( _originalAltitudeSet.y() - _itemAltitude->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemSetpoint );

    update( scaleX, scaleY );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ALT::update( float scaleX, float scaleY )
{
    _scaleX = scaleX;
    _scaleY = scaleY;

    updateAltitude();

    _scale1DeltaY_old = _scale1DeltaY_new;
    _scale2DeltaY_old = _scale2DeltaY_new;
    _groundDeltaY_old = _groundDeltaY_new;
    _labelsDeltaY_old = _labelsDeltaY_new;
    _bugDeltaY_old    = _bugDeltaY_new;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ALT::setAltitude( float altitude )
{
    _altitude = altitude;

    if      ( _altitude <     0.0f ) _altitude =     0.0f;
    else if ( _altitude > 99999.0f ) _altitude = 99999.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ALT::setAltitudeSel( double altitude )
{
    _altitude_sel = altitude;

    if      ( _altitude_sel <     0.0f ) _altitude_sel =     0.0f;
    else if ( _altitude_sel > 99999.0f ) _altitude_sel = 99999.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ALT::reset()
{
    _itemBack     = NULLPTR;
    _itemScale1   = NULLPTR;
    _itemScale2   = NULLPTR;
    _itemLabel1   = NULLPTR;
    _itemLabel2   = NULLPTR;
    _itemLabel3   = NULLPTR;
    _itemGround   = NULLPTR;
    _itemBugAlt   = NULLPTR;
    _itemFrame    = NULLPTR;
    _itemAltitude = NULLPTR;
    _itemPressure = NULLPTR;
    _itemSetpoint = NULLPTR;

    _altitude = 0.0f;
    _altitude_sel = 0.0f;

    _scale1DeltaY_new = 0.0f;
    _scale1DeltaY_old = 0.0f;
    _scale2DeltaY_new = 0.0f;
    _scale2DeltaY_old = 0.0f;
    _groundDeltaY_new = 0.0f;
    _groundDeltaY_old = 0.0f;
    _labelsDeltaY_new = 0.0f;
    _labelsDeltaY_old = 0.0f;
    _bugDeltaY_new    = 0.0f;
    _bugDeltaY_old    = 0.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ALT::updateAltitude()
{
    _itemAltitude->setPlainText( QString("%1").arg(_altitude     , 5, 'f', 0, QChar(' ')) );
    _itemSetpoint->setPlainText( QString("%1").arg(_altitude_sel , 5, 'f', 0, QChar(' ')) );

    updateScale();
    updateScaleLabels();
    updateAltitudeBug();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ALT::updateAltitudeBug()
{
    _bugDeltaY_new = _scaleY * _originalPixPerAlt * ( _altitude - _altitude_sel );

    if      ( _bugDeltaY_new < -_scaleY * 85.0 ) _bugDeltaY_new = -_scaleY * 85.0;
    else if ( _bugDeltaY_new >  _scaleY * 85.0 ) _bugDeltaY_new =  _scaleY * 85.0;

    _itemBugAlt->moveBy( 0.0f, _bugDeltaY_new - _bugDeltaY_old );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ALT::updateScale()
{
    _scale1DeltaY_new = _scaleY * _originalPixPerAlt * _altitude;
    _scale2DeltaY_new = _scale1DeltaY_new;
    _groundDeltaY_new = _scale1DeltaY_new;

    float scaleSingleHeight = _scaleY * _originalScaleHeight;
    float scaleDoubleHeight = _scaleY * _originalScaleHeight * 2.0f;

    while ( _scale1DeltaY_new > scaleSingleHeight + _scaleY * 74.5f )
    {
        _scale1DeltaY_new = _scale1DeltaY_new - scaleDoubleHeight;
    }

    while ( _scale2DeltaY_new > scaleDoubleHeight + _scaleY * 74.5f )
    {
        _scale2DeltaY_new = _scale2DeltaY_new - scaleDoubleHeight;
    }

    if ( _groundDeltaY_new > _scaleY * 100.0f ) _groundDeltaY_new = _scaleY * 100.0f;

    _itemScale1->moveBy( 0.0f, _scale1DeltaY_new - _scale1DeltaY_old );
    _itemScale2->moveBy( 0.0f, _scale2DeltaY_new - _scale2DeltaY_old );
    _itemGround->moveBy( 0.0f, _groundDeltaY_new - _groundDeltaY_old );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ALT::updateScaleLabels()
{
    int tmp = floor( _altitude + 0.5f );
    int alt = tmp - ( tmp % 500 );

    float alt1 = (float)alt + 500.0f;
    float alt2 = (float)alt;
    float alt3 = (float)alt - 500.0f;

    _labelsDeltaY_new = _scaleY * _originalPixPerAlt * _altitude;

    while ( _labelsDeltaY_new > _scaleY * 37.5f )
    {
        _labelsDeltaY_new = _labelsDeltaY_new - _scaleY * 75.0f;
    }

    if ( _labelsDeltaY_new < 0.0f && _altitude > alt2 )
    {
        alt1 += 500.0f;
        alt2 += 500.0f;
        alt3 += 500.0f;
    }

    _itemLabel1->moveBy( 0.0f, _labelsDeltaY_new - _labelsDeltaY_old );
    _itemLabel2->moveBy( 0.0f, _labelsDeltaY_new - _labelsDeltaY_old );
    _itemLabel3->moveBy( 0.0f, _labelsDeltaY_new - _labelsDeltaY_old );

    if ( alt1 > 0.0f && alt1 <= 100000.0f )
    {
        _itemLabel1->setVisible( true );
        _itemLabel1->setPlainText( QString("%1").arg(alt1, 5, 'f', 0, QChar(' ')) );
    }
    else
    {
        _itemLabel1->setVisible( false );
    }

    if ( alt2 > 0.0f && alt2 <= 100000.0f )
    {
        _itemLabel2->setVisible( true );
        _itemLabel2->setPlainText( QString("%1").arg(alt2, 5, 'f', 0, QChar(' ')) );
    }
    else
    {
        _itemLabel2->setVisible( false );
    }

    if ( alt3 > 0.0f && alt3 <= 100000.0f )
    {
        _itemLabel3->setVisible( true );
        _itemLabel3->setPlainText( QString("%1").arg(alt3, 5, 'f', 0, QChar(' ')) );
    }
    else
    {
        _itemLabel3->setVisible( false );
    }
}

////////////////////////////////////////////////////////////////////////////////

GraphicsEADI::ASI::ASI( QGraphicsScene *scene ) :
    _scene ( scene ),

    _itemBack     ( NULLPTR ),
    _itemScale1   ( NULLPTR ),
    _itemScale2   ( NULLPTR ),
    _itemLabel1   ( NULLPTR ),
    _itemLabel2   ( NULLPTR ),
    _itemLabel3   ( NULLPTR ),
    _itemLabel4   ( NULLPTR ),
    _itemLabel5   ( NULLPTR ),
    _itemLabel6   ( NULLPTR ),
    _itemLabel7   ( NULLPTR ),
    _itemBugIAS   ( NULLPTR ),
    _itemFrame    ( NULLPTR ),
    _itemVfe      ( NULLPTR ),
    _itemVne      ( NULLPTR ),
    _itemAirspeed ( NULLPTR ),
    _itemMachNo   ( NULLPTR ),
    _itemSetpoint ( NULLPTR ),

    _vfeBrush ( QColor( 0xff, 0xff, 0xff ), Qt::SolidPattern ),
    _vfePen( _vfeBrush, 1 ),

    _airspeed ( 0.0f ),
    _machNo   ( 0.0f ),

    _airspeed_sel ( 0.0f ),

    _vfe ( 0.0f ),
    _vne ( 0.0f ),

    _scale1DeltaY_new ( 0.0f ),
    _scale1DeltaY_old ( 0.0f ),
    _scale2DeltaY_new ( 0.0f ),
    _scale2DeltaY_old ( 0.0f ),
    _labelsDeltaY_new ( 0.0f ),
    _labelsDeltaY_old ( 0.0f ),
    _bugDeltaY_new    ( 0.0f ),
    _bugDeltaY_old    ( 0.0f ),
    _vneDeltaY_new    ( 0.0f ),
    _vneDeltaY_old    ( 0.0f ),

    _scaleX ( 1.0f ),
    _scaleY ( 1.0f ),

    _originalPixPerSpd   (   1.5f ),
    _originalScaleHeight ( 300.0f ),
    _originalLabelsX     (  40.0f ),
    _originalLabel1Y     (  35.0f ),
    _originalLabel2Y     (  65.0f ),
    _originalLabel3Y     (  95.0f ),
    _originalLabel4Y     ( 125.0f ),
    _originalLabel5Y     ( 155.0f ),
    _originalLabel6Y     ( 185.0f ),
    _originalLabel7Y     ( 215.0f ),
    _originalVfeWidth    (   1.0f ),

    _originalBackPos     ( 25.0f ,   37.5f ),
    _originalScale1Pos   ( 56.0f , -174.5f ),
    _originalScale2Pos   ( 56.0f , -474.5f ),
    _originalFramePos    (  0.0f ,  110.0f ),
    _originalAirspeedCtr ( 40.0f ,  126.0f ),
    _originalMachNoCtr   ( 43.0f ,  225.0f ),
    _originalAirspeedSet ( 47.0f ,   27.0f ),
    _originalVfePos      ( 59.5f ,  124.5f ),

    _backZ      (  70 ),
    _scaleZ     (  80 ),
    _labelsZ    (  90 ),
    _iasBugZ    ( 110 ),
    _iasVfeZ    (  90 ),
    _iasVneZ    (  90 ),
    _frameZ     ( 110 ),
    _frameTextZ ( 120 )
{
    reset();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::init( float scaleX, float scaleY )
{
    _scaleX = scaleX;
    _scaleY = scaleY;

    reset();

    _itemBack = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_asi_back.svg" );
    _itemBack->setCacheMode( QGraphicsItem::NoCache );
    _itemBack->setZValue( _backZ );
    _itemBack->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemBack->moveBy( _scaleX * _originalBackPos.x(), _scaleY * _originalBackPos.y() );
    _scene->addItem( _itemBack );

    _itemScale1 = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_asi_scale.svg" );
    _itemScale1->setCacheMode( QGraphicsItem::NoCache );
    _itemScale1->setZValue( _scaleZ );
    _itemScale1->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemScale1->moveBy( _scaleX * _originalScale1Pos.x(), _scaleY * _originalScale1Pos.y() );
    _scene->addItem( _itemScale1 );

    _itemScale2 = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_asi_scale.svg" );
    _itemScale2->setCacheMode( QGraphicsItem::NoCache );
    _itemScale2->setZValue( _scaleZ );
    _itemScale2->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemScale2->moveBy( _scaleX * _originalScale2Pos.x(), _scaleY * _originalScale2Pos.y() );
    _scene->addItem( _itemScale2 );

    _itemLabel1 = new QGraphicsTextItem( QString( "999" ) );
    _itemLabel1->setCacheMode( QGraphicsItem::NoCache );
    _itemLabel1->setZValue( _labelsZ );
    _itemLabel1->setDefaultTextColor( Colors::_white );
    _itemLabel1->setFont( Fonts::small() );
    _itemLabel1->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemLabel1->moveBy( _scaleX * ( _originalLabelsX - _itemLabel1->boundingRect().width()  / 2.0f ),
                         _scaleY * ( _originalLabel1Y - _itemLabel1->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemLabel1 );

    _itemLabel2 = new QGraphicsTextItem( QString( "999" ) );
    _itemLabel2->setCacheMode( QGraphicsItem::NoCache );
    _itemLabel2->setZValue( _labelsZ );
    _itemLabel2->setDefaultTextColor( Colors::_white );
    _itemLabel2->setFont( Fonts::small() );
    _itemLabel2->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemLabel2->moveBy( _scaleX * ( _originalLabelsX - _itemLabel2->boundingRect().width()  / 2.0f ),
                         _scaleY * ( _originalLabel2Y - _itemLabel2->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemLabel2 );

    _itemLabel3 = new QGraphicsTextItem( QString( "999" ) );
    _itemLabel3->setCacheMode( QGraphicsItem::NoCache );
    _itemLabel3->setZValue( _labelsZ );
    _itemLabel3->setDefaultTextColor( Colors::_white );
    _itemLabel3->setFont( Fonts::small() );
    _itemLabel3->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemLabel3->moveBy( _scaleX * ( _originalLabelsX - _itemLabel3->boundingRect().width()  / 2.0f ),
                         _scaleY * ( _originalLabel3Y - _itemLabel3->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemLabel3 );

    _itemLabel4 = new QGraphicsTextItem( QString( "999" ) );
    _itemLabel4->setCacheMode( QGraphicsItem::NoCache );
    _itemLabel4->setZValue( _labelsZ );
    _itemLabel4->setDefaultTextColor( Colors::_white );
    _itemLabel4->setFont( Fonts::small() );
    _itemLabel4->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemLabel4->moveBy( _scaleX * ( _originalLabelsX - _itemLabel4->boundingRect().width()  / 2.0f ),
                         _scaleY * ( _originalLabel4Y - _itemLabel4->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemLabel4 );

    _itemLabel5 = new QGraphicsTextItem( QString( "999" ) );
    _itemLabel5->setCacheMode( QGraphicsItem::NoCache );
    _itemLabel5->setZValue( _labelsZ );
    _itemLabel5->setDefaultTextColor( Colors::_white );
    _itemLabel5->setFont( Fonts::small() );
    _itemLabel5->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemLabel5->moveBy( _scaleX * ( _originalLabelsX - _itemLabel5->boundingRect().width()  / 2.0f ),
                         _scaleY * ( _originalLabel5Y - _itemLabel5->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemLabel5 );

    _itemLabel6 = new QGraphicsTextItem( QString( "999" ) );
    _itemLabel6->setCacheMode( QGraphicsItem::NoCache );
    _itemLabel6->setZValue( _labelsZ );
    _itemLabel6->setDefaultTextColor( Colors::_white );
    _itemLabel6->setFont( Fonts::small() );
    _itemLabel6->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemLabel6->moveBy( _scaleX * ( _originalLabelsX - _itemLabel6->boundingRect().width()  / 2.0f ),
                         _scaleY * ( _originalLabel6Y - _itemLabel6->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemLabel6 );

    _itemLabel7 = new QGraphicsTextItem( QString( "999" ) );
    _itemLabel7->setCacheMode( QGraphicsItem::NoCache );
    _itemLabel7->setZValue( _labelsZ );
    _itemLabel7->setDefaultTextColor( Colors::_white );
    _itemLabel7->setFont( Fonts::small() );
    _itemLabel7->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemLabel7->moveBy( _scaleX * ( _originalLabelsX - _itemLabel7->boundingRect().width()  / 2.0f ),
                         _scaleY * ( _originalLabel7Y - _itemLabel7->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemLabel7 );

    _itemBugIAS = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_asi_bug.svg" );
    _itemBugIAS->setCacheMode( QGraphicsItem::NoCache );
    _itemBugIAS->setZValue( _iasBugZ );
    _itemBugIAS->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemBugIAS->moveBy( _scaleX * _originalFramePos.x(), _scaleY * _originalFramePos.y() );
    _scene->addItem( _itemBugIAS );

    _itemFrame = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_asi_frame.svg" );
    _itemFrame->setCacheMode( QGraphicsItem::NoCache );
    _itemFrame->setZValue( _frameZ );
    _itemFrame->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemFrame->moveBy( _scaleX * _originalFramePos.x(), _scaleY * _originalFramePos.y() );
    _scene->addItem( _itemFrame );

    _itemVfe = _scene->addRect( _scaleX * _originalVfePos.x(),
                                _scaleY * _originalVfePos.y(),
                                _scaleX * _originalVfeWidth,
                                _scaleY * 10,
                                _vfePen, _vfeBrush );
    _itemVfe->setZValue( _iasVfeZ );

    _itemVne = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_asi_vne.svg" );
    _itemVne->setCacheMode( QGraphicsItem::NoCache );
    _itemVne->setZValue( _iasVneZ );
    _itemVne->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemVne->moveBy( _scaleX * _originalScale1Pos.x(), _scaleY * _originalScale1Pos.y() );
    _scene->addItem( _itemVne );

    _itemAirspeed = new QGraphicsTextItem( QString( "000" ) );
    _itemAirspeed->setCacheMode( QGraphicsItem::NoCache );
    _itemAirspeed->setZValue( _frameTextZ );
    _itemAirspeed->setTextInteractionFlags( Qt::NoTextInteraction );
    _itemAirspeed->setDefaultTextColor( Colors::_white );
    _itemAirspeed->setFont( Fonts::medium() );
    _itemAirspeed->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemAirspeed->moveBy( _scaleX * ( _originalAirspeedCtr.x() - _itemAirspeed->boundingRect().width()  / 2.0f ),
                           _scaleY * ( _originalAirspeedCtr.y() - _itemAirspeed->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemAirspeed );

    _itemMachNo = new QGraphicsTextItem( QString( ".000" ) );
    _itemMachNo->setCacheMode( QGraphicsItem::NoCache );
    _itemMachNo->setZValue( _frameTextZ );
    _itemMachNo->setTextInteractionFlags( Qt::NoTextInteraction );
    _itemMachNo->setDefaultTextColor( Colors::_white );
    _itemMachNo->setFont( Fonts::medium() );
    _itemMachNo->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemMachNo->moveBy( _scaleX * ( _originalMachNoCtr.x() - _itemMachNo->boundingRect().width()  / 2.0f ),
                         _scaleY * ( _originalMachNoCtr.y() - _itemMachNo->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemMachNo );

    _itemSetpoint = new QGraphicsTextItem( QString( "000" ) );
    _itemSetpoint->setCacheMode( QGraphicsItem::NoCache );
    _itemSetpoint->setZValue( _frameTextZ );
    _itemSetpoint->setTextInteractionFlags( Qt::NoTextInteraction );
    _itemSetpoint->setDefaultTextColor( Colors::_magenta );
    _itemSetpoint->setFont( Fonts::medium() );
    _itemSetpoint->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemSetpoint->moveBy( _scaleX * ( _originalAirspeedSet.x() - _itemMachNo->boundingRect().width()  / 2.0f ),
                           _scaleY * ( _originalAirspeedSet.y() - _itemMachNo->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemSetpoint );

    update( scaleX, scaleY );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::update( float scaleX, float scaleY )
{
    _scaleX = scaleX;
    _scaleY = scaleY;

    updateAirspeed();

    _scale1DeltaY_old = _scale1DeltaY_new;
    _scale2DeltaY_old = _scale2DeltaY_new;
    _labelsDeltaY_old = _labelsDeltaY_new;
    _bugDeltaY_old    = _bugDeltaY_new;
    _vneDeltaY_old    = _vneDeltaY_new;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::setAirspeed( float airspeed )
{
    _airspeed = airspeed;

    if      ( _airspeed <    0.0f ) _airspeed =    0.0f;
    else if ( _airspeed > 9999.0f ) _airspeed = 9999.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::setMachNo( float machNo )
{
    _machNo = machNo;

    if      ( _machNo <  0.0f ) _machNo =  0.0f;
    else if ( _machNo > 99.9f ) _machNo = 99.9f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::setAirspeedSel( double airspeed )
{
    _airspeed_sel = airspeed;

    if      ( _airspeed_sel < 0.0f    ) _airspeed_sel = 0.0;
    else if ( _airspeed_sel > 9999.0f ) _airspeed_sel = 9999.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::setVfe( double vfe )
{
    _vfe = vfe;

    if      ( _vfe < 0.0f    ) _vfe = 0.0;
    else if ( _vfe > 9999.0f ) _vfe = 9999.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::setVne( double vne )
{
    _vne = vne;

    if      ( _vne < 0.0f    ) _vne = 0.0;
    else if ( _vne > 9999.0f ) _vne = 9999.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::reset()
{
    _itemBack     = NULLPTR;
    _itemScale1   = NULLPTR;
    _itemScale2   = NULLPTR;
    _itemLabel1   = NULLPTR;
    _itemLabel2   = NULLPTR;
    _itemLabel3   = NULLPTR;
    _itemLabel4   = NULLPTR;
    _itemLabel5   = NULLPTR;
    _itemLabel6   = NULLPTR;
    _itemLabel7   = NULLPTR;
    _itemBugIAS   = NULLPTR;
    _itemFrame    = NULLPTR;
    _itemVfe      = NULLPTR;
    _itemVne      = NULLPTR;
    _itemAirspeed = NULLPTR;
    _itemMachNo   = NULLPTR;
    _itemSetpoint = NULLPTR;

    _airspeed = 0.0f;
    _machNo   = 0.0f;

    _airspeed_sel = 0.0f;

    _vfe = 0.0f;
    _vne = 0.0f;

    _scale1DeltaY_new = 0.0f;
    _scale1DeltaY_old = 0.0f;
    _scale2DeltaY_new = 0.0f;
    _scale2DeltaY_old = 0.0f;
    _labelsDeltaY_new = 0.0f;
    _labelsDeltaY_old = 0.0f;
    _bugDeltaY_new    = 0.0f;
    _bugDeltaY_old    = 0.0f;
    _vneDeltaY_new    = 0.0f;
    _vneDeltaY_old    = 0.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::updateAirspeed()
{
    _itemAirspeed->setPlainText( QString("%1").arg(_airspeed     , 3, 'f', 0, QChar(' ')) );
    _itemSetpoint->setPlainText( QString("%1").arg(_airspeed_sel , 3, 'f', 0, QChar(' ')) );

    if ( _machNo < 1.0f )
    {
        float machNo = 1000.0f * _machNo;
        _itemMachNo->setPlainText( QString(".%1").arg(machNo, 3, 'f', 0, QChar('0')) );
    }
    else
    {
        if ( _machNo < 10.0f )
        {
            _itemMachNo->setPlainText( QString::number( _machNo, 'f', 2 ) );
        }
        else
        {
            _itemMachNo->setPlainText( QString::number( _machNo, 'f', 1 ) );
        }
    }

    updateScale();
    updateScaleLabels();
    updateAirspeedBug();
    updateVfe();
    updateVne();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::updateAirspeedBug()
{
    _bugDeltaY_new = _scaleY * _originalPixPerSpd * ( _airspeed - _airspeed_sel );

    if      ( _bugDeltaY_new < -_scaleY * 85.0 ) _bugDeltaY_new = -_scaleY * 85.0;
    else if ( _bugDeltaY_new >  _scaleY * 85.0 ) _bugDeltaY_new =  _scaleY * 85.0;

    _itemBugIAS->moveBy( 0.0f, _bugDeltaY_new - _bugDeltaY_old );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::updateScale()
{
    _scale1DeltaY_new = _scaleY * _originalPixPerSpd * _airspeed;
    _scale2DeltaY_new = _scale1DeltaY_new;

    float scaleSingleHeight = _scaleY * _originalScaleHeight;
    float scaleDoubleHeight = _scaleY * _originalScaleHeight * 2.0f;

    while ( _scale1DeltaY_new > scaleSingleHeight + _scaleY * 74.5f )
    {
        _scale1DeltaY_new = _scale1DeltaY_new - scaleDoubleHeight;
    }

    while ( _scale2DeltaY_new > scaleDoubleHeight + _scaleY * 74.5f )
    {
        _scale2DeltaY_new = _scale2DeltaY_new - scaleDoubleHeight;
    }

    _itemScale1->moveBy( 0.0f, _scale1DeltaY_new - _scale1DeltaY_old );
    _itemScale2->moveBy( 0.0f, _scale2DeltaY_new - _scale2DeltaY_old );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::updateScaleLabels()
{
    _labelsDeltaY_new = _scaleY * _originalPixPerSpd * _airspeed;

    int tmp = floor( _airspeed + 0.5f );
    int spd = tmp - ( tmp % 20 );

    float spd1 = (float)spd + 60.0f;
    float spd2 = (float)spd + 40.0f;
    float spd3 = (float)spd + 20.0f;
    float spd4 = (float)spd;
    float spd5 = (float)spd - 20.0f;
    float spd6 = (float)spd - 40.0f;
    float spd7 = (float)spd - 60.0f;

    while ( _labelsDeltaY_new > _scaleY * 15.0f )
    {
        _labelsDeltaY_new = _labelsDeltaY_new - _scaleY * 30.0f;
    }

    if ( _labelsDeltaY_new < 0.0 && _airspeed > spd4 )
    {
        spd1 += 20.0f;
        spd2 += 20.0f;
        spd3 += 20.0f;
        spd4 += 20.0f;
        spd5 += 20.0f;
        spd6 += 20.0f;
        spd7 += 20.0f;
    }

    _itemLabel1->moveBy( 0.0f, _labelsDeltaY_new - _labelsDeltaY_old );
    _itemLabel2->moveBy( 0.0f, _labelsDeltaY_new - _labelsDeltaY_old );
    _itemLabel3->moveBy( 0.0f, _labelsDeltaY_new - _labelsDeltaY_old );
    _itemLabel4->moveBy( 0.0f, _labelsDeltaY_new - _labelsDeltaY_old );
    _itemLabel5->moveBy( 0.0f, _labelsDeltaY_new - _labelsDeltaY_old );
    _itemLabel6->moveBy( 0.0f, _labelsDeltaY_new - _labelsDeltaY_old );
    _itemLabel7->moveBy( 0.0f, _labelsDeltaY_new - _labelsDeltaY_old );

    if ( spd1 >= 0.0f && spd1 <= 10000.0f )
    {
        _itemLabel1->setVisible( true );
        _itemLabel1->setPlainText( QString("%1").arg(spd1, 3, 'f', 0, QChar(' ')) );
    }
    else
    {
        _itemLabel1->setVisible( false );
    }

    if ( spd2 >= 0.0f && spd2 <= 10000.0f )
    {
        _itemLabel2->setVisible( true );
        _itemLabel2->setPlainText( QString("%1").arg(spd2, 3, 'f', 0, QChar(' ')) );
    }
    else
    {
        _itemLabel2->setVisible( false );
    }

    if ( spd3 >= 0.0f && spd3 <= 10000.0f )
    {
        _itemLabel3->setVisible( true );
        _itemLabel3->setPlainText( QString("%1").arg(spd3, 3, 'f', 0, QChar(' ')) );
    }
    else
    {
        _itemLabel3->setVisible( false );
    }

    if ( spd4 >= 0.0f && spd4 <= 10000.0f )
    {
        _itemLabel4->setVisible( true );
        _itemLabel4->setPlainText( QString("%1").arg(spd4, 3, 'f', 0, QChar(' ')) );
    }
    else
    {
        _itemLabel4->setVisible( false );
    }

    if ( spd5 >= 0.0f && spd5 <= 10000.0f )
    {
        _itemLabel5->setVisible( true );
        _itemLabel5->setPlainText( QString("%1").arg(spd5, 3, 'f', 0, QChar(' ')) );
    }
    else
    {
        _itemLabel5->setVisible( false );
    }

    if ( spd6 >= 0.0f && spd6 <= 10000.0f )
    {
        _itemLabel6->setVisible( true );
        _itemLabel6->setPlainText( QString("%1").arg(spd6, 3, 'f', 0, QChar(' ')) );
    }
    else
    {
        _itemLabel6->setVisible( false );
    }

    if ( spd7 >= 0.0f && spd7 <= 10000.0f )
    {
        _itemLabel7->setVisible( true );
        _itemLabel7->setPlainText( QString("%1").arg(spd7, 3, 'f', 0, QChar(' ')) );
    }
    else
    {
        _itemLabel7->setVisible( false );
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::updateVfe()
{
    double height = _scaleY * _originalPixPerSpd * _vfe;
    double offset = _scaleY * _originalPixPerSpd * _airspeed;

    _itemVfe->setRect( _scaleX * _originalVfePos.x(),
                       _scaleY * _originalVfePos.y() - height + offset,
                       _scaleX * _originalVfeWidth,
                       height );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::updateVne()
{
    _vneDeltaY_new = _scaleY * _originalPixPerSpd * ( _airspeed - _vne );

    _itemVne->moveBy( 0.0f, _vneDeltaY_new - _vneDeltaY_old );
}

////////////////////////////////////////////////////////////////////////////////

GraphicsEADI::HDG::HDG( QGraphicsScene *scene ) :
    _scene ( scene ),

    _itemBack      ( NULLPTR ),
    _itemFace      ( NULLPTR ),
    _itemHdgBug    ( NULLPTR ),
    _itemMarks     ( NULLPTR ),
    _itemFrameText ( NULLPTR ),

    _heading ( 0.0f ),
    _heading_sel ( 0.0f ),

    _scaleX ( 1.0f ),
    _scaleY ( 1.0f ),

    _originalHsiCtr       ( 150.0f , 345.0f ),
    _originalBackPos      (   0.0f,  210.0f ),
    _originalFacePos      (  38.0f , 233.0f ),
    _originalMarksPos     ( 134.0f , 217.0f ),
    _originalFrameTextCtr ( 149.5f , 225.5f ),

    _backZ      (  80 ),
    _faceZ      (  90 ),
    _hdgBugZ    ( 100 ),
    _marksZ     ( 110 ),
    _frameTextZ ( 120 )
{
    reset();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::HDG::init( float scaleX, float scaleY )
{
    _scaleX = scaleX;
    _scaleY = scaleY;

    reset();

    _itemBack = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_hsi_back.svg" );
    _itemBack->setCacheMode( QGraphicsItem::NoCache );
    _itemBack->setZValue( _backZ );
    _itemBack->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemBack->moveBy( _scaleX * _originalBackPos.x(), _scaleY * _originalBackPos.y() );
    _scene->addItem( _itemBack );

    _itemFace = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_hsi_face.svg" );
    _itemFace->setCacheMode( QGraphicsItem::NoCache );
    _itemFace->setZValue( _faceZ );
    _itemFace->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemFace->setTransformOriginPoint( _originalHsiCtr - _originalFacePos );
    _itemFace->moveBy( _scaleX * _originalFacePos.x(), _scaleY * _originalFacePos.y() );
    _scene->addItem( _itemFace );

    _itemHdgBug = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_hsi_bug.svg" );
    _itemHdgBug->setCacheMode( QGraphicsItem::NoCache );
    _itemHdgBug->setZValue( _hdgBugZ );
    _itemHdgBug->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemHdgBug->setTransformOriginPoint( _originalHsiCtr - _originalFacePos );
    _itemHdgBug->moveBy( _scaleX * _originalFacePos.x(), _scaleY * _originalFacePos.y() );
    _scene->addItem( _itemHdgBug );

    _itemMarks = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_hsi_marks.svg" );
    _itemMarks->setCacheMode( QGraphicsItem::NoCache );
    _itemMarks->setZValue( _marksZ );
    _itemMarks->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemMarks->moveBy( _scaleX * _originalMarksPos.x(), _scaleY * _originalMarksPos.y() );
    _scene->addItem( _itemMarks );

    _itemFrameText = new QGraphicsTextItem( QString( "000" ) );
    _itemFrameText->setCacheMode( QGraphicsItem::NoCache );
    _itemFrameText->setZValue( _frameTextZ );
    _itemFrameText->setTextInteractionFlags( Qt::NoTextInteraction );
    _itemFrameText->setDefaultTextColor( Colors::_white );
    _itemFrameText->setFont( Fonts::medium() );
    _itemFrameText->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemFrameText->moveBy( _scaleX * ( _originalFrameTextCtr.x() - _itemFrameText->boundingRect().width()  / 2.0f ),
                            _scaleY * ( _originalFrameTextCtr.y() - _itemFrameText->boundingRect().height() / 2.0f ) );
    _scene->addItem( _itemFrameText );

    update( scaleX, scaleY );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::HDG::update( float scaleX, float scaleY )
{
    _scaleX = scaleX;
    _scaleY = scaleY;

    updateHeading();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::HDG::setHeading( float heading )
{
    _heading = heading;

    while ( _heading < 0.0f ) _heading += 360.0f;
    while ( _heading > 360.0f ) _heading -= 360.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::HDG::setHeadingSel( float heading )
{
    _heading_sel = heading;

    while ( _heading_sel <   0.0f ) _heading_sel += 360.0f;
    while ( _heading_sel > 360.0f ) _heading_sel -= 360.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::HDG::reset()
{
    _itemBack      = NULLPTR;
    _itemFace      = NULLPTR;
    _itemHdgBug    = NULLPTR;
    _itemMarks     = NULLPTR;
    _itemFrameText = NULLPTR;

    _heading = 0.0f;
    _heading_sel = 0.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::HDG::updateHeading()
{
    _itemFace->setRotation( -_heading );
    _itemHdgBug->setRotation( -_heading + _heading_sel );

    float fHeading = floor( _heading + 0.5f );

    _itemFrameText->setPlainText( QString("%1").arg(fHeading, 3, 'f', 0, QChar('0')) );
}

////////////////////////////////////////////////////////////////////////////////

GraphicsEADI::VSI::VSI( QGraphicsScene *scene ) :
    _scene ( scene ),

    _itemScale  ( NULLPTR ),
    _itemMarker ( NULLPTR ),

    _climbRate ( 0.0f ),

    _scaleX ( 1.0f ),
    _scaleY ( 1.0f ),

    _originalMarkerWidth (  4.0f ),
    _originalPixPerSpd1  ( 30.0f ),
    _originalPixPerSpd2  ( 20.0f ),
    _originalPixPerSpd4  (  5.0f ),

    _originalScalePos  ( 275.0f ,  50.0f ),
    _originalMarkerPos ( 285.0f , 124.5f ),

    _markerBrush ( QColor( 0xff, 0xff, 0xff ), Qt::SolidPattern ),
    _markerPen ( _markerBrush, 0 ),

    _scaleZ  ( 70 ),
    _markerZ ( 8000 )
{
    reset();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::VSI::init( float scaleX, float scaleY )
{
    _scaleX = scaleX;
    _scaleY = scaleY;

    reset();

    _itemScale = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_vsi_scale.svg" );
    _itemScale->setCacheMode( QGraphicsItem::NoCache );
    _itemScale->setZValue( _scaleZ );
    _itemScale->setTransform( QTransform::fromScale( _scaleX, _scaleY ), true );
    _itemScale->moveBy( _scaleX * _originalScalePos.x(), _scaleY * _originalScalePos.y() );
    _scene->addItem( _itemScale );

    _itemMarker = _scene->addRect( _scaleX * _originalMarkerPos.x(),
                                   _scaleY * _originalMarkerPos.y(),
                                   _scaleX * _originalMarkerWidth,
                                   _scaleY * 10,
                                   _markerPen, _markerBrush );
    _itemMarker->setZValue( _markerZ );

    update( scaleX, scaleY );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::VSI::update( float scaleX, float scaleY )
{
    _scaleX = scaleX;
    _scaleY = scaleY;

    updateVSI();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::VSI::setClimbRate( float climbRate )
{
    _climbRate = climbRate;

    if      ( _climbRate >  6.8f ) _climbRate =  6.8f;
    else if ( _climbRate < -6.8f ) _climbRate = -6.8f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::VSI::reset()
{
    _itemScale = NULLPTR;
    _climbRate = 0.0;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::VSI::updateVSI()
{
    //m_scene->clear();

    float climbRateAbs = fabs( _climbRate );
    float arrowDeltaY = 0.0;

    if ( climbRateAbs <= 1.0f )
    {
        arrowDeltaY = _originalPixPerSpd1 * climbRateAbs;
    }
    else if ( climbRateAbs <= 2.0f )
    {
        arrowDeltaY = _originalPixPerSpd1 + _originalPixPerSpd2 * ( climbRateAbs - 1.0f );
    }
    else
    {
        arrowDeltaY = _originalPixPerSpd1 + _originalPixPerSpd2 + _originalPixPerSpd4 * ( climbRateAbs - 2.0f );
    }

    if ( _climbRate > 0.0f )
    {
        _itemMarker->setRect( _scaleX * _originalMarkerPos.x(),
                              _scaleY * _originalMarkerPos.y() - _scaleY * arrowDeltaY,
                              _scaleX * _originalMarkerWidth,
                              _scaleY * arrowDeltaY );
    }
    else
    {
        _itemMarker->setRect( _scaleX * _originalMarkerPos.x(),
                              _scaleY * _originalMarkerPos.y(),
                              _scaleX * _originalMarkerWidth,
                              _scaleY * arrowDeltaY );
    }
}
