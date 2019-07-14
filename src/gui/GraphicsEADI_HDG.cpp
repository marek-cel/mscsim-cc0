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
#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////

GraphicsEADI::HDG::HDG( QGraphicsScene *scene ) :
    m_scene ( scene ),

    m_itemBack      ( 0 ),
    m_itemFace      ( 0 ),
    m_itemMarks     ( 0 ),
    m_itemFrameText ( 0 ),

    m_frameTextColor ( 255, 255, 255 ),

    m_heading  ( 0.0f ),

    m_scaleX ( 1.0f ),
    m_scaleY ( 1.0f ),

    m_originalHsiCtr       ( 150.0f , 345.0f ),
    m_originalBackPos      (  60.0f,  240.0f ),
    m_originalFacePos      (  45.0f , 240.0f ),
    m_originalMarksPos     ( 134.0f , 219.0f ),
    m_originalFrameTextCtr ( 149.5f , 227.5f ),

    m_backZ      (  80 ),
    m_faceZ      (  90 ),
    m_marksZ     ( 110 ),
    m_frameTextZ ( 120 )
{
    m_frameTextFont.setFamily( "Courier" );
    m_frameTextFont.setPointSizeF( 10.0 );
    m_frameTextFont.setStretch( QFont::Condensed );
    m_frameTextFont.setWeight( QFont::Bold );

    reset();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::HDG::init( float scaleX, float scaleY )
{
    m_scaleX = scaleX;
    m_scaleY = scaleY;

    reset();

    m_itemBack = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_hsi_back.svg" );
    m_itemBack->setCacheMode( QGraphicsItem::NoCache );
    m_itemBack->setZValue( m_backZ );
    m_itemBack->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemBack->moveBy( m_scaleX * m_originalBackPos.x(), m_scaleY * m_originalBackPos.y() );
    m_scene->addItem( m_itemBack );

    m_itemFace = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_hsi_face.svg" );
    m_itemFace->setCacheMode( QGraphicsItem::NoCache );
    m_itemFace->setZValue( m_faceZ );
    m_itemFace->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemFace->setTransformOriginPoint( m_originalHsiCtr - m_originalFacePos );
    m_itemFace->moveBy( m_scaleX * m_originalFacePos.x(), m_scaleY * m_originalFacePos.y() );
    m_scene->addItem( m_itemFace );

    m_itemMarks = new QGraphicsSvgItem( ":/gui/images/efis/eadi/eadi_hsi_marks.svg" );
    m_itemMarks->setCacheMode( QGraphicsItem::NoCache );
    m_itemMarks->setZValue( m_marksZ );
    m_itemMarks->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemMarks->moveBy( m_scaleX * m_originalMarksPos.x(), m_scaleY * m_originalMarksPos.y() );
    m_scene->addItem( m_itemMarks );

    m_itemFrameText = new QGraphicsTextItem( QString( "000" ) );
    m_itemFrameText->setCacheMode( QGraphicsItem::NoCache );
    m_itemFrameText->setZValue( m_frameTextZ );
    m_itemFrameText->setTextInteractionFlags( Qt::NoTextInteraction );
    m_itemFrameText->setDefaultTextColor( m_frameTextColor );
    m_itemFrameText->setFont( m_frameTextFont );
    m_itemFrameText->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemFrameText->moveBy( m_scaleX * ( m_originalFrameTextCtr.x() - m_itemFrameText->boundingRect().width()  / 2.0f ),
                             m_scaleY * ( m_originalFrameTextCtr.y() - m_itemFrameText->boundingRect().height() / 2.0f ) );
    m_scene->addItem( m_itemFrameText );

    update( scaleX, scaleY );
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::HDG::update( float scaleX, float scaleY )
{
    m_scaleX = scaleX;
    m_scaleY = scaleY;

    updateHeading();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::HDG::setHeading( float heading )
{
    m_heading = heading;

    while ( m_heading < 0.0f )
    {
        m_heading += 360.0f;
    }

    while ( m_heading > 360.0f )
    {
        m_heading -= 360.0f;
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::HDG::reset()
{
    m_itemBack      = 0;
    m_itemFace      = 0;
    m_itemMarks     = 0;
    m_itemFrameText = 0;

    m_heading  = 0.0f;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsEADI::HDG::updateHeading()
{
    m_itemFace->setRotation( - m_heading );

    float fHeading = floor( m_heading + 0.5f );

    m_itemFrameText->setPlainText( QString("%1").arg(fHeading, 3, 'f', 0, QChar('0')) );
}
