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

GraphicsEADI::ALT::ALT( QGraphicsScene *scene ) :
    m_scene ( scene ),

    m_itemBack     ( 0 ),
    m_itemScale1   ( 0 ),
    m_itemScale2   ( 0 ),
    m_itemLabel1   ( 0 ),
    m_itemLabel2   ( 0 ),
    m_itemLabel3   ( 0 ),
    m_itemGround   ( 0 ),
    m_itemFrame    ( 0 ),
    m_itemAltitude ( 0 ),
    m_itemPressure ( 0 ),

    m_frameTextColor ( 255, 255, 255 ),
    m_pressTextColor (   0, 255,   0 ),
    m_labelsColor    ( 255, 255, 255 ),

    m_altitude ( 0.0f ),

    m_scale1DeltaY_new ( 0.0f ),
    m_scale1DeltaY_old ( 0.0f ),
    m_scale2DeltaY_new ( 0.0f ),
    m_scale2DeltaY_old ( 0.0f ),
    m_groundDeltaY_new ( 0.0f ),
    m_groundDeltaY_old ( 0.0f ),
    m_labelsDeltaY_new ( 0.0f ),
    m_labelsDeltaY_old ( 0.0f ),

    m_scaleX ( 1.0f ),
    m_scaleY ( 1.0f ),

    m_originalPixPerAlt   ( 0.150f ),
    m_originalScaleHeight ( 300.0f ),
    m_originalLabelsX     ( 250.0f ),
    m_originalLabel1Y     (  50.0f ),
    m_originalLabel2Y     ( 125.0f ),
    m_originalLabel3Y     ( 200.0f ),

    m_originalBackPos     ( 231.0f ,   37.5f ),
    m_originalScale1Pos   ( 231.0f , -174.5f ),
    m_originalScale2Pos   ( 231.0f , -474.5f ),
    m_originalGroundPos   ( 231.5f ,  124.5f ),
    m_originalFramePos    ( 225.0f ,  110.0f ),
    m_originalAltitudeCtr ( 254.0f ,  126.0f ),
    m_originalPressureCtr ( 254.0f ,  225.0f ),

    m_backZ      (  70 ),
    m_scaleZ     (  77 ),
    m_labelsZ    (  78 ),
    m_groundZ    (  79 ),
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

void GraphicsEADI::ALT::init( float scaleX, float scaleY )
{
    m_scaleX = scaleX;
    m_scaleY = scaleY;

    reset();

    m_itemBack = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_alt_back.svg" );
    m_itemBack->setCacheMode( QGraphicsItem::NoCache );
    m_itemBack->setZValue( m_backZ );
    m_itemBack->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemBack->moveBy( m_scaleX * m_originalBackPos.x(), m_scaleY * m_originalBackPos.y() );
    m_scene->addItem( m_itemBack );

    m_itemScale1 = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_alt_scale.svg" );
    m_itemScale1->setCacheMode( QGraphicsItem::NoCache );
    m_itemScale1->setZValue( m_scaleZ );
    m_itemScale1->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemScale1->moveBy( m_scaleX * m_originalScale1Pos.x(), m_scaleY * m_originalScale1Pos.y() );
    m_scene->addItem( m_itemScale1 );

    m_itemScale2 = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_alt_scale.svg" );
    m_itemScale2->setCacheMode( QGraphicsItem::NoCache );
    m_itemScale2->setZValue( m_scaleZ );
    m_itemScale2->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemScale2->moveBy( m_scaleX * m_originalScale2Pos.x(), m_scaleY * m_originalScale2Pos.y() );
    m_scene->addItem( m_itemScale2 );

    m_itemLabel1 = new QGraphicsTextItem( QString( "99999" ) );
    m_itemLabel1->setCacheMode( QGraphicsItem::NoCache );
    m_itemLabel1->setZValue( m_labelsZ );
    m_itemLabel1->setDefaultTextColor( m_labelsColor );
    m_itemLabel1->setFont( m_labelsFont );
    m_itemLabel1->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemLabel1->moveBy( m_scaleX * ( m_originalLabelsX - m_itemLabel1->boundingRect().width()  / 2.0f ),
                         m_scaleY * ( m_originalLabel1Y - m_itemLabel1->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemLabel1 );

    m_itemLabel2 = new QGraphicsTextItem( QString( "99999" ) );
    m_itemLabel2->setCacheMode( QGraphicsItem::NoCache );
    m_itemLabel2->setZValue( m_labelsZ );
    m_itemLabel2->setDefaultTextColor( m_labelsColor );
    m_itemLabel2->setFont( m_labelsFont );
    m_itemLabel2->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemLabel2->moveBy( m_scaleX * ( m_originalLabelsX - m_itemLabel2->boundingRect().width()  / 2.0f ),
                         m_scaleY * ( m_originalLabel2Y - m_itemLabel2->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemLabel2 );

    m_itemLabel3 = new QGraphicsTextItem( QString( "99999" ) );
    m_itemLabel3->setCacheMode( QGraphicsItem::NoCache );
    m_itemLabel3->setZValue( m_labelsZ );
    m_itemLabel3->setDefaultTextColor( m_labelsColor );
    m_itemLabel3->setFont( m_labelsFont );
    m_itemLabel3->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemLabel3->moveBy( m_scaleX * ( m_originalLabelsX - m_itemLabel3->boundingRect().width()  / 2.0f ),
                         m_scaleY * ( m_originalLabel3Y - m_itemLabel3->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemLabel3 );

    m_itemGround = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_alt_ground.svg" );
    m_itemGround->setCacheMode( QGraphicsItem::NoCache );
    m_itemGround->setZValue( m_groundZ );
    m_itemGround->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemGround->moveBy( m_scaleX * m_originalGroundPos.x(), m_scaleY * m_originalGroundPos.y() );
    m_scene->addItem( m_itemGround );

    m_itemFrame = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_alt_frame.svg" );
    m_itemFrame->setCacheMode( QGraphicsItem::NoCache );
    m_itemFrame->setZValue( m_frameZ );
    m_itemFrame->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemFrame->moveBy( m_scaleX * m_originalFramePos.x(), m_scaleY * m_originalFramePos.y() );
    m_scene->addItem( m_itemFrame );

    m_itemAltitude = new QGraphicsTextItem( QString( "    0" ) );
    m_itemAltitude->setCacheMode( QGraphicsItem::NoCache );
    m_itemAltitude->setZValue( m_frameTextZ );
    m_itemAltitude->setDefaultTextColor( m_frameTextColor );
    m_itemAltitude->setFont( m_frameTextFont );
    m_itemAltitude->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemAltitude->moveBy( m_scaleX * ( m_originalAltitudeCtr.x() - m_itemAltitude->boundingRect().width()  / 2.0f ),
                           m_scaleY * ( m_originalAltitudeCtr.y() - m_itemAltitude->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemAltitude );

    m_itemPressure = new QGraphicsTextItem( QString( "  STD  " ) );
    m_itemPressure->setCacheMode( QGraphicsItem::NoCache );
    m_itemPressure->setZValue( m_frameTextZ );
    m_itemPressure->setDefaultTextColor( m_pressTextColor );
    m_itemPressure->setFont( m_frameTextFont );
    m_itemPressure->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemPressure->moveBy( m_scaleX * ( m_originalPressureCtr.x() - m_itemPressure->boundingRect().width()  / 2.0f ),
                           m_scaleY * ( m_originalPressureCtr.y() - m_itemPressure->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemPressure );

    update( scaleX, scaleY );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ALT::update( float scaleX, float scaleY )
{
    m_scaleX = scaleX;
    m_scaleY = scaleY;

    updateAltitude();

    m_scale1DeltaY_old = m_scale1DeltaY_new;
    m_scale2DeltaY_old = m_scale2DeltaY_new;
    m_groundDeltaY_old = m_groundDeltaY_new;
    m_labelsDeltaY_old = m_labelsDeltaY_new;

}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ALT::setAltitude( float altitude )
{
    m_altitude = altitude;

    if      ( m_altitude <     0.0f ) m_altitude =     0.0f;
    else if ( m_altitude > 99999.0f ) m_altitude = 99999.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ALT::reset()
{
    m_itemBack     = 0;
    m_itemScale1   = 0;
    m_itemScale2   = 0;
    m_itemLabel1   = 0;
    m_itemLabel2   = 0;
    m_itemLabel3   = 0;
    m_itemGround   = 0;
    m_itemFrame    = 0;
    m_itemAltitude = 0;
    m_itemPressure = 0;

    m_altitude = 0.0f;

    m_scale1DeltaY_new = 0.0f;
    m_scale1DeltaY_old = 0.0f;
    m_scale2DeltaY_new = 0.0f;
    m_scale2DeltaY_old = 0.0f;
    m_groundDeltaY_new = 0.0f;
    m_groundDeltaY_old = 0.0f;
    m_labelsDeltaY_new = 0.0f;
    m_labelsDeltaY_old = 0.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ALT::updateAltitude()
{
    m_itemAltitude->setPlainText( QString("%1").arg(m_altitude, 5, 'f', 0, QChar(' ')) );

    updateScale();
    updateScaleLabels();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ALT::updateScale()
{
    m_scale1DeltaY_new = m_scaleY * m_originalPixPerAlt * m_altitude;
    m_scale2DeltaY_new = m_scale1DeltaY_new;
    m_groundDeltaY_new = m_scale1DeltaY_new;

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

    if ( m_groundDeltaY_new > m_scaleY * 100.0f ) m_groundDeltaY_new = m_scaleY * 100.0f;

    m_itemScale1->moveBy( 0.0f, m_scale1DeltaY_new - m_scale1DeltaY_old );
    m_itemScale2->moveBy( 0.0f, m_scale2DeltaY_new - m_scale2DeltaY_old );
    m_itemGround->moveBy( 0.0f, m_groundDeltaY_new - m_groundDeltaY_old );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::ALT::updateScaleLabels()
{
    int tmp = floor( m_altitude + 0.5f );
    int alt = tmp - ( tmp % 500 );

    float alt1 = (float)alt + 500.0f;
    float alt2 = (float)alt;
    float alt3 = (float)alt - 500.0f;

    m_labelsDeltaY_new = m_scaleY * m_originalPixPerAlt * m_altitude;

    while ( m_labelsDeltaY_new > m_scaleY * 37.5f )
    {
        m_labelsDeltaY_new = m_labelsDeltaY_new - m_scaleY * 75.0f;
    }

    if ( m_labelsDeltaY_new < 0.0f && m_altitude > alt2 )
    {
        alt1 += 500.0f;
        alt2 += 500.0f;
        alt3 += 500.0f;
    }

    m_itemLabel1->moveBy( 0.0f, m_labelsDeltaY_new - m_labelsDeltaY_old );
    m_itemLabel2->moveBy( 0.0f, m_labelsDeltaY_new - m_labelsDeltaY_old );
    m_itemLabel3->moveBy( 0.0f, m_labelsDeltaY_new - m_labelsDeltaY_old );

    if ( alt1 > 0.0f && alt1 <= 100000.0f )
    {
        m_itemLabel1->setVisible( true );
        m_itemLabel1->setPlainText( QString("%1").arg(alt1, 5, 'f', 0, QChar(' ')) );
    }
    else
    {
        m_itemLabel1->setVisible( false );
    }

    if ( alt2 > 0.0f && alt2 <= 100000.0f )
    {
        m_itemLabel2->setVisible( true );
        m_itemLabel2->setPlainText( QString("%1").arg(alt2, 5, 'f', 0, QChar(' ')) );
    }
    else
    {
        m_itemLabel2->setVisible( false );
    }

    if ( alt3 > 0.0f && alt3 <= 100000.0f )
    {
        m_itemLabel3->setVisible( true );
        m_itemLabel3->setPlainText( QString("%1").arg(alt3, 5, 'f', 0, QChar(' ')) );
    }
    else
    {
        m_itemLabel3->setVisible( false );
    }
}
