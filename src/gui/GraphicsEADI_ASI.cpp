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

#include <gui/GraphicsEADI.h>

#ifdef WIN32
#   include <float.h>
#endif

#include <math.h>

////////////////////////////////////////////////////////////////////////////////

GraphicsEADI::ASI::ASI( QGraphicsScene *scene ) :
    m_scene ( scene ),

    m_itemBack     ( 0 ),
    m_itemScale1   ( 0 ),
    m_itemScale2   ( 0 ),
    m_itemLabel1   ( 0 ),
    m_itemLabel2   ( 0 ),
    m_itemLabel3   ( 0 ),
    m_itemLabel4   ( 0 ),
    m_itemLabel5   ( 0 ),
    m_itemLabel6   ( 0 ),
    m_itemLabel7   ( 0 ),
    m_itemFrame    ( 0 ),
    m_itemAirspeed ( 0 ),
    m_itemMachNo   ( 0 ),

    m_frameTextColor ( 255, 255, 255 ),
    m_labelsColor    ( 255, 255, 255 ),

    m_airspeed ( 0.0f ),
    m_machNo   ( 0.0f ),

    m_scale1DeltaY_new ( 0.0f ),
    m_scale1DeltaY_old ( 0.0f ),
    m_scale2DeltaY_new ( 0.0f ),
    m_scale2DeltaY_old ( 0.0f ),
    m_labelsDeltaY_new ( 0.0f ),
    m_labelsDeltaY_old ( 0.0f ),

    m_scaleX ( 1.0f ),
    m_scaleY ( 1.0f ),

    m_originalPixPerSpd   (   1.5f ),
    m_originalScaleHeight ( 300.0f ),
    m_originalLabelsX     (  43.0f ),
    m_originalLabel1Y     (  35.0f ),
    m_originalLabel2Y     (  65.0f ),
    m_originalLabel3Y     (  95.0f ),
    m_originalLabel4Y     ( 125.0f ),
    m_originalLabel5Y     ( 155.0f ),
    m_originalLabel6Y     ( 185.0f ),
    m_originalLabel7Y     ( 215.0f ),

    m_originalBackPos     ( 25.0f ,   37.5f ),
    m_originalScale1Pos   ( 56.0f , -174.5f ),
    m_originalScale2Pos   ( 56.0f , -474.5f ),
    m_originalFramePos    (  0.0f ,  110.0f ),
    m_originalAirspeedCtr ( 40.0f ,  126.0f ),
    m_originalMachNoCtr   ( 43.0f ,  225.0f ),

    m_backZ      (  70 ),
    m_scaleZ     (  80 ),
    m_labelsZ    (  90 ),
    m_frameZ     ( 110 ),
    m_frameTextZ ( 120 )
{
#   ifdef WIN32
    m_frameTextFont.setFamily( "Courier" );
    m_frameTextFont.setPointSizeF( 9.0f );
    m_frameTextFont.setStretch( QFont::Condensed );
    m_frameTextFont.setWeight( QFont::Bold );

    m_labelsFont.setFamily( "Courier" );
    m_labelsFont.setPointSizeF( 7.0f );
    m_labelsFont.setStretch( QFont::Condensed );
    m_labelsFont.setWeight( QFont::Bold );
#   else
    m_frameTextFont.setFamily( "courier" );
    m_frameTextFont.setPointSizeF( 10.0f );
    m_frameTextFont.setStretch( QFont::Condensed );
    m_frameTextFont.setWeight( QFont::Bold );

    m_labelsFont.setFamily( "courier" );
    m_labelsFont.setPointSizeF( 8.0f );
    m_labelsFont.setStretch( QFont::Condensed );
    m_labelsFont.setWeight( QFont::Bold );
#   endif

    reset();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::init( float scaleX, float scaleY )
{
    m_scaleX = scaleX;
    m_scaleY = scaleY;

    reset();

    m_itemBack = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_asi_back.svg" );
    m_itemBack->setCacheMode( QGraphicsItem::NoCache );
    m_itemBack->setZValue( m_backZ );
    m_itemBack->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemBack->moveBy( m_scaleX * m_originalBackPos.x(), m_scaleY * m_originalBackPos.y() );
    m_scene->addItem( m_itemBack );

    m_itemScale1 = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_asi_scale.svg" );
    m_itemScale1->setCacheMode( QGraphicsItem::NoCache );
    m_itemScale1->setZValue( m_scaleZ );
    m_itemScale1->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemScale1->moveBy( m_scaleX * m_originalScale1Pos.x(), m_scaleY * m_originalScale1Pos.y() );
    m_scene->addItem( m_itemScale1 );

    m_itemScale2 = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_asi_scale.svg" );
    m_itemScale2->setCacheMode( QGraphicsItem::NoCache );
    m_itemScale2->setZValue( m_scaleZ );
    m_itemScale2->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemScale2->moveBy( m_scaleX * m_originalScale2Pos.x(), m_scaleY * m_originalScale2Pos.y() );
    m_scene->addItem( m_itemScale2 );

    m_itemLabel1 = new QGraphicsTextItem( QString( "999" ) );
    m_itemLabel1->setCacheMode( QGraphicsItem::NoCache );
    m_itemLabel1->setZValue( m_labelsZ );
    m_itemLabel1->setDefaultTextColor( m_labelsColor );
    m_itemLabel1->setFont( m_labelsFont );
    m_itemLabel1->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemLabel1->moveBy( m_scaleX * ( m_originalLabelsX - m_itemLabel1->boundingRect().width()  / 2.0f ),
                         m_scaleY * ( m_originalLabel1Y - m_itemLabel1->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemLabel1 );

    m_itemLabel2 = new QGraphicsTextItem( QString( "999" ) );
    m_itemLabel2->setCacheMode( QGraphicsItem::NoCache );
    m_itemLabel2->setZValue( m_labelsZ );
    m_itemLabel2->setDefaultTextColor( m_labelsColor );
    m_itemLabel2->setFont( m_labelsFont );
    m_itemLabel2->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemLabel2->moveBy( m_scaleX * ( m_originalLabelsX - m_itemLabel2->boundingRect().width()  / 2.0f ),
                         m_scaleY * ( m_originalLabel2Y - m_itemLabel2->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemLabel2 );

    m_itemLabel3 = new QGraphicsTextItem( QString( "999" ) );
    m_itemLabel3->setCacheMode( QGraphicsItem::NoCache );
    m_itemLabel3->setZValue( m_labelsZ );
    m_itemLabel3->setDefaultTextColor( m_labelsColor );
    m_itemLabel3->setFont( m_labelsFont );
    m_itemLabel3->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemLabel3->moveBy( m_scaleX * ( m_originalLabelsX - m_itemLabel3->boundingRect().width()  / 2.0f ),
                         m_scaleY * ( m_originalLabel3Y - m_itemLabel3->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemLabel3 );

    m_itemLabel4 = new QGraphicsTextItem( QString( "999" ) );
    m_itemLabel4->setCacheMode( QGraphicsItem::NoCache );
    m_itemLabel4->setZValue( m_labelsZ );
    m_itemLabel4->setDefaultTextColor( m_labelsColor );
    m_itemLabel4->setFont( m_labelsFont );
    m_itemLabel4->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemLabel4->moveBy( m_scaleX * ( m_originalLabelsX - m_itemLabel4->boundingRect().width()  / 2.0f ),
                         m_scaleY * ( m_originalLabel4Y - m_itemLabel4->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemLabel4 );

    m_itemLabel5 = new QGraphicsTextItem( QString( "999" ) );
    m_itemLabel5->setCacheMode( QGraphicsItem::NoCache );
    m_itemLabel5->setZValue( m_labelsZ );
    m_itemLabel5->setDefaultTextColor( m_labelsColor );
    m_itemLabel5->setFont( m_labelsFont );
    m_itemLabel5->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemLabel5->moveBy( m_scaleX * ( m_originalLabelsX - m_itemLabel5->boundingRect().width()  / 2.0f ),
                         m_scaleY * ( m_originalLabel5Y - m_itemLabel5->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemLabel5 );

    m_itemLabel6 = new QGraphicsTextItem( QString( "999" ) );
    m_itemLabel6->setCacheMode( QGraphicsItem::NoCache );
    m_itemLabel6->setZValue( m_labelsZ );
    m_itemLabel6->setDefaultTextColor( m_labelsColor );
    m_itemLabel6->setFont( m_labelsFont );
    m_itemLabel6->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemLabel6->moveBy( m_scaleX * ( m_originalLabelsX - m_itemLabel6->boundingRect().width()  / 2.0f ),
                         m_scaleY * ( m_originalLabel6Y - m_itemLabel6->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemLabel6 );

    m_itemLabel7 = new QGraphicsTextItem( QString( "999" ) );
    m_itemLabel7->setCacheMode( QGraphicsItem::NoCache );
    m_itemLabel7->setZValue( m_labelsZ );
    m_itemLabel7->setDefaultTextColor( m_labelsColor );
    m_itemLabel7->setFont( m_labelsFont );
    m_itemLabel7->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemLabel7->moveBy( m_scaleX * ( m_originalLabelsX - m_itemLabel7->boundingRect().width()  / 2.0f ),
                         m_scaleY * ( m_originalLabel7Y - m_itemLabel7->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemLabel7 );

    m_itemFrame = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_asi_frame.svg" );
    m_itemFrame->setCacheMode( QGraphicsItem::NoCache );
    m_itemFrame->setZValue( m_frameZ );
    m_itemFrame->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemFrame->moveBy( m_scaleX * m_originalFramePos.x(), m_scaleY * m_originalFramePos.y() );
    m_scene->addItem( m_itemFrame );

    m_itemAirspeed = new QGraphicsTextItem( QString( "000" ) );
    m_itemAirspeed->setCacheMode( QGraphicsItem::NoCache );
    m_itemAirspeed->setZValue( m_frameTextZ );
    m_itemAirspeed->setTextInteractionFlags( Qt::NoTextInteraction );
    m_itemAirspeed->setDefaultTextColor( m_frameTextColor );
    m_itemAirspeed->setFont( m_frameTextFont );
    m_itemAirspeed->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemAirspeed->moveBy( m_scaleX * ( m_originalAirspeedCtr.x() - m_itemAirspeed->boundingRect().width()  / 2.0f ),
                           m_scaleY * ( m_originalAirspeedCtr.y() - m_itemAirspeed->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemAirspeed );

    m_itemMachNo = new QGraphicsTextItem( QString( ".000" ) );
    m_itemMachNo->setCacheMode( QGraphicsItem::NoCache );
    m_itemMachNo->setZValue( m_frameTextZ );
    m_itemMachNo->setTextInteractionFlags( Qt::NoTextInteraction );
    m_itemMachNo->setDefaultTextColor( m_frameTextColor );
    m_itemMachNo->setFont( m_frameTextFont );
    m_itemMachNo->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemMachNo->moveBy( m_scaleX * ( m_originalMachNoCtr.x() - m_itemMachNo->boundingRect().width()  / 2.0f ),
                         m_scaleY * ( m_originalMachNoCtr.y() - m_itemMachNo->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemMachNo );

    update( scaleX, scaleY );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::update( float scaleX, float scaleY )
{
    m_scaleX = scaleX;
    m_scaleY = scaleY;

    updateAirspeed();

    m_scale1DeltaY_old = m_scale1DeltaY_new;
    m_scale2DeltaY_old = m_scale2DeltaY_new;
    m_labelsDeltaY_old = m_labelsDeltaY_new;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::setAirspeed( float airspeed )
{
    m_airspeed = airspeed;

    if      ( m_airspeed <    0.0f ) m_airspeed =    0.0f;
    else if ( m_airspeed > 9999.0f ) m_airspeed = 9999.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::setMachNo( float machNo )
{
    m_machNo = machNo;

    if      ( m_machNo <  0.0f ) m_machNo =  0.0f;
    else if ( m_machNo > 99.9f ) m_machNo = 99.9f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::reset()
{
    m_itemBack     = 0;
    m_itemScale1   = 0;
    m_itemScale2   = 0;
    m_itemLabel1   = 0;
    m_itemLabel2   = 0;
    m_itemLabel3   = 0;
    m_itemLabel4   = 0;
    m_itemLabel5   = 0;
    m_itemLabel6   = 0;
    m_itemLabel7   = 0;
    m_itemFrame    = 0;
    m_itemAirspeed = 0;
    m_itemMachNo   = 0;

    m_airspeed = 0.0f;
    m_machNo   = 0.0f;

    m_scale1DeltaY_new = 0.0f;
    m_scale1DeltaY_old = 0.0f;
    m_scale2DeltaY_new = 0.0f;
    m_scale2DeltaY_old = 0.0f;
    m_labelsDeltaY_new = 0.0f;
    m_labelsDeltaY_old = 0.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::updateAirspeed()
{
    m_itemAirspeed->setPlainText( QString("%1").arg(m_airspeed, 3, 'f', 0, QChar('0')) );

    if ( m_machNo < 1.0f )
    {
        float machNo = 1000.0f * m_machNo;
        m_itemMachNo->setPlainText( QString(".%1").arg(machNo, 3, 'f', 0, QChar('0')) );
    }
    else
    {
        if ( m_machNo < 10.0f )
        {
            m_itemMachNo->setPlainText( QString::number( m_machNo, 'f', 2 ) );
        }
        else
        {
            m_itemMachNo->setPlainText( QString::number( m_machNo, 'f', 1 ) );
        }
    }

    updateScale();
    updateScaleLabels();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::updateScale()
{
    m_scale1DeltaY_new = m_scaleY * m_originalPixPerSpd * m_airspeed;
    m_scale2DeltaY_new = m_scale1DeltaY_new;

    float scaleSingleHeight = m_scaleY * m_originalScaleHeight;
    float scaleDoubleHeight = m_scaleY * m_originalScaleHeight * 2.0f;

    while ( m_scale1DeltaY_new > scaleSingleHeight + m_scaleY * 74.5f )
    {
        m_scale1DeltaY_new = m_scale1DeltaY_new - scaleDoubleHeight;
    }

    while ( m_scale2DeltaY_new > scaleDoubleHeight + m_scaleY * 74.5f )
    {
        m_scale2DeltaY_new = m_scale2DeltaY_new - scaleDoubleHeight;
    }

    m_itemScale1->moveBy( 0.0f, m_scale1DeltaY_new - m_scale1DeltaY_old );
    m_itemScale2->moveBy( 0.0f, m_scale2DeltaY_new - m_scale2DeltaY_old );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ASI::updateScaleLabels()
{
    m_labelsDeltaY_new = m_scaleY * m_originalPixPerSpd * m_airspeed;

    int tmp = floor( m_airspeed + 0.5f );
    int spd = tmp - ( tmp % 20 );

    float spd1 = (float)spd + 60.0f;
    float spd2 = (float)spd + 40.0f;
    float spd3 = (float)spd + 20.0f;
    float spd4 = (float)spd;
    float spd5 = (float)spd - 20.0f;
    float spd6 = (float)spd - 40.0f;
    float spd7 = (float)spd - 60.0f;

    while ( m_labelsDeltaY_new > m_scaleY * 15.0f )
    {
        m_labelsDeltaY_new = m_labelsDeltaY_new - m_scaleY * 30.0f;
    }

    if ( m_labelsDeltaY_new < 0.0 && m_airspeed > spd4 )
    {
        spd1 += 20.0f;
        spd2 += 20.0f;
        spd3 += 20.0f;
        spd4 += 20.0f;
        spd5 += 20.0f;
        spd6 += 20.0f;
        spd7 += 20.0f;
    }

    m_itemLabel1->moveBy( 0.0f, m_labelsDeltaY_new - m_labelsDeltaY_old );
    m_itemLabel2->moveBy( 0.0f, m_labelsDeltaY_new - m_labelsDeltaY_old );
    m_itemLabel3->moveBy( 0.0f, m_labelsDeltaY_new - m_labelsDeltaY_old );
    m_itemLabel4->moveBy( 0.0f, m_labelsDeltaY_new - m_labelsDeltaY_old );
    m_itemLabel5->moveBy( 0.0f, m_labelsDeltaY_new - m_labelsDeltaY_old );
    m_itemLabel6->moveBy( 0.0f, m_labelsDeltaY_new - m_labelsDeltaY_old );
    m_itemLabel7->moveBy( 0.0f, m_labelsDeltaY_new - m_labelsDeltaY_old );

    if ( spd1 >= 0.0f && spd1 <= 10000.0f )
    {
        m_itemLabel1->setVisible( true );
        m_itemLabel1->setPlainText( QString("%1").arg(spd1, 3, 'f', 0, QChar(' ')) );
    }
    else
    {
        m_itemLabel1->setVisible( false );
    }

    if ( spd2 >= 0.0f && spd2 <= 10000.0f )
    {
        m_itemLabel2->setVisible( true );
        m_itemLabel2->setPlainText( QString("%1").arg(spd2, 3, 'f', 0, QChar(' ')) );
    }
    else
    {
        m_itemLabel2->setVisible( false );
    }

    if ( spd3 >= 0.0f && spd3 <= 10000.0f )
    {
        m_itemLabel3->setVisible( true );
        m_itemLabel3->setPlainText( QString("%1").arg(spd3, 3, 'f', 0, QChar(' ')) );
    }
    else
    {
        m_itemLabel3->setVisible( false );
    }

    if ( spd4 >= 0.0f && spd4 <= 10000.0f )
    {
        m_itemLabel4->setVisible( true );
        m_itemLabel4->setPlainText( QString("%1").arg(spd4, 3, 'f', 0, QChar(' ')) );
    }
    else
    {
        m_itemLabel4->setVisible( false );
    }

    if ( spd5 >= 0.0f && spd5 <= 10000.0f )
    {
        m_itemLabel5->setVisible( true );
        m_itemLabel5->setPlainText( QString("%1").arg(spd5, 3, 'f', 0, QChar(' ')) );
    }
    else
    {
        m_itemLabel5->setVisible( false );
    }

    if ( spd6 >= 0.0f && spd6 <= 10000.0f )
    {
        m_itemLabel6->setVisible( true );
        m_itemLabel6->setPlainText( QString("%1").arg(spd6, 3, 'f', 0, QChar(' ')) );
    }
    else
    {
        m_itemLabel6->setVisible( false );
    }

    if ( spd7 >= 0.0f && spd7 <= 10000.0f )
    {
        m_itemLabel7->setVisible( true );
        m_itemLabel7->setPlainText( QString("%1").arg(spd7, 3, 'f', 0, QChar(' ')) );
    }
    else
    {
        m_itemLabel7->setVisible( false );
    }
}
