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

#include <gui/GraphicsStick.h>

#ifdef WIN32
#   include <float.h>
#endif

#include <math.h>
#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////

GraphicsStick::GraphicsStick( QWidget *parent ) :
    QGraphicsView ( parent ),

    _timerId ( 0 ),

    _scene ( 0 ),

    _ctrlLineH ( 0 ),
    _ctrlLineV ( 0 ),
    _trimLineH ( 0 ),
    _trimLineV ( 0 ),
    _markLineH ( 0 ),
    _markLineV ( 0 ),

    _ctrlBrush ( QColor( 0x03, 0x2a, 0x63 ), Qt::SolidPattern ),
    _trimBrush ( QColor( 0x88, 0x88, 0x88 ), Qt::SolidPattern ),
    _markBrush ( QColor( 0xff, 0xff, 0xff ), Qt::SolidPattern ),

    _ctrlPen( _ctrlBrush, 1 ),
    _trimPen( _trimBrush, 1 ),
    _markPen( _markBrush, 1 ),

    _ctrlRoll  ( 0 ),
    _ctrlPitch ( 0 ),
    _trimRoll  ( 0 ),
    _trimPitch ( 0 )
{
    _scene = new QGraphicsScene( this );
    setScene( _scene );

    _scene->clear();

    init();

    _timerId = startTimer( 100 );
}

////////////////////////////////////////////////////////////////////////////////

GraphicsStick::~GraphicsStick()
{
    if ( _timerId ) killTimer( _timerId );

    if ( _scene )
    {
        _scene->clear();
        delete _scene;
        _scene = 0;
    }

    reset();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsStick::reinit()
{
    if ( _scene )
    {
        _scene->clear();

        init();
    }
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsStick::resizeEvent( QResizeEvent *event )
{
    ////////////////////////////////////
    QGraphicsView::resizeEvent( event );
    ////////////////////////////////////

    reinit();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsStick::timerEvent( QTimerEvent *event )
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

void GraphicsStick::init()
{
    updateView();
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsStick::reset()
{
    _ctrlLineH = 0;
    _ctrlLineV = 0;
    _trimLineH = 0;
    _trimLineV = 0;
    _markLineH = 0;
    _markLineV = 0;
}

////////////////////////////////////////////////////////////////////////////////

void GraphicsStick::updateView()
{
    _scene->clear();

    short w = width();
    short h = height();

    float h_2 = h / 2.0f;
    float w_2 = w / 2.0f;

    short x_max = floor( w_2 ) - 1;
    short y_max = floor( h_2 ) - 1;

    short length = 8;

    short x_ctrl = floor( _ctrlRoll  * ( w_2 - 1.0f ) / 100.0f + 0.5f );
    short y_ctrl = floor( _ctrlPitch * ( h_2 - 1.0f ) / 100.0f + 0.5f );

    short x_trim = floor( _trimRoll  * ( w_2 - 1.0f ) / 100.0f + 0.5f );
    short y_trim = floor( _trimPitch * ( h_2 - 1.0f ) / 100.0f + 0.5f );

    if ( x_ctrl < -x_max ) x_ctrl = -x_max;
    if ( x_ctrl >  x_max ) x_ctrl =  x_max;
    if ( x_trim < -x_max ) x_trim = -x_max;
    if ( x_trim >  x_max ) x_trim =  x_max;

    if ( y_ctrl < -y_max ) y_ctrl = -y_max;
    if ( y_ctrl >  y_max ) y_ctrl =  y_max;
    if ( y_trim < -y_max ) y_trim = -y_max;
    if ( y_trim >  y_max ) y_trim =  y_max;

    _markLineH = _scene->addLine( -w_2, 0, w_2, 0, _markPen );
    _markLineV = _scene->addLine( 0, h_2, 0, -h_2, _markPen );

    _trimLineH = _scene->addLine( x_trim + length, y_trim, x_trim - length, y_trim, _trimPen );
    _trimLineV = _scene->addLine( x_trim, y_trim - length, x_trim, y_trim + length, _trimPen );

    _ctrlLineH = _scene->addLine( x_ctrl + length, y_ctrl, x_ctrl - length, y_ctrl, _ctrlPen );
    _ctrlLineV = _scene->addLine( x_ctrl, y_ctrl - length, x_ctrl, y_ctrl + length, _ctrlPen );

    _scene->update();

    centerOn( 0, 0 );
}
