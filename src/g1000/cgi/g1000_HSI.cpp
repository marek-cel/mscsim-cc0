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

#include <g1000/cgi/g1000_HSI.h>

#include <sstream>

#include <osg/Geode>
#include <osg/Geometry>

#include <g1000/g1000_Defines.h>

#include <g1000/cgi/g1000_Colors.h>
#include <g1000/cgi/g1000_Fonts.h>

////////////////////////////////////////////////////////////////////////////////

using namespace g1000;

////////////////////////////////////////////////////////////////////////////////

const double HSI::_x_offset = -10.0;
const double HSI::_y_offset = -40.0;

const osg::Vec3 HSI::_colorFace = osg::Vec3( 0.38, 0.38, 0.38 );

const double HSI::_z_aircraft_symbol = -60.0;
const double HSI::_z_box             = -70.0;
const double HSI::_z_bug             = -70.0;
const double HSI::_z_compass_face    = -80.0;
const double HSI::_z_course_pointer  = -70.0;
const double HSI::_z_heading_bug     = -70.0;

////////////////////////////////////////////////////////////////////////////////

HSI::HSI( IFD *ifd ) :
    Module( ifd )
{
    _pat = new osg::PositionAttitudeTransform();
    _root->addChild( _pat.get() );
    _pat->setPosition( osg::Vec3( _x_offset, _y_offset, 0.0 ) );

    _patHDG = new osg::PositionAttitudeTransform();
    _pat->addChild( _patHDG.get() );

    _patBug = new osg::PositionAttitudeTransform();
    _pat->addChild( _patBug.get() );

    _patCRS = new osg::PositionAttitudeTransform();
    _pat->addChild( _patCRS.get() );

    createAircraftSymbol();
    createBoxCRS();
    createBoxHDG();
    createCompass();
    createCoursePointer();
    createHeadingBox();
    createHeadingBug();
}

////////////////////////////////////////////////////////////////////////////////

HSI::~HSI() {}

////////////////////////////////////////////////////////////////////////////////

void HSI::update()
{
    double ahrs_heading = _ifd->grs()->getHeading();

    double sel_heading = _ifd->input().sel_heading;
    double sel_course  = _ifd->input().sel_course;

    _patHDG->setAttitude( osg::Quat( ahrs_heading, osg::Z_AXIS ) );
    _patBug->setAttitude( osg::Quat( ahrs_heading - sel_heading , osg::Z_AXIS ) );
    _patCRS->setAttitude( osg::Quat( ahrs_heading - sel_course  , osg::Z_AXIS ) );

    char heading_str[16] = { "" };
    double heading_deg = floor( osg::RadiansToDegrees( ahrs_heading ) + 0.5 );
    while ( heading_deg <   0.0 ) heading_deg += 360.0;
    while ( heading_deg > 360.0 ) heading_deg -= 360.0;

    sprintf( heading_str, "%03d°", (int)( floor( heading_deg + 0.5 ) ) );
    _headingText->setText( osgText::String( heading_str, osgText::String::ENCODING_UTF8 ) );

    char crs_str[16] = { "" };
    double crs_deg = osg::RadiansToDegrees( sel_course );
    while ( crs_deg <   0.0 ) crs_deg += 360.0;
    while ( crs_deg > 360.0 ) crs_deg -= 360.0;

    sprintf( crs_str, "%03d°", (int)( floor( crs_deg + 0.5 ) ) );
    _textCRS->setText( osgText::String( crs_str, osgText::String::ENCODING_UTF8 ) );

    char hdg_str[16] = { "" };
    double hdg_deg = osg::RadiansToDegrees( sel_heading );
    while ( hdg_deg <   0.0 ) hdg_deg += 360.0;
    while ( hdg_deg > 360.0 ) hdg_deg -= 360.0;

    sprintf( hdg_str, "%03d°", (int)( floor( hdg_deg + 0.5 ) ) );
    _textHDG->setText( osgText::String( hdg_str, osgText::String::ENCODING_UTF8 ) );
}

////////////////////////////////////////////////////////////////////////////////

void HSI::createAircraftSymbol()
{
    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    _pat->addChild( geode.get() );

    osg::ref_ptr<osg::Geometry> geom = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    // fuselage
    v->push_back( osg::Vec3(  0.0 ,  4.1, _z_box ) );
    v->push_back( osg::Vec3( -0.6 ,  3.3, _z_box ) );
    v->push_back( osg::Vec3(  0.6 ,  3.3, _z_box ) );

    v->push_back( osg::Vec3( -0.6 ,  3.3, _z_box ) );
    v->push_back( osg::Vec3(  0.6 ,  3.3, _z_box ) );
    v->push_back( osg::Vec3(  0.6 , -3.3, _z_box ) );

    v->push_back( osg::Vec3( -0.6 , -3.3, _z_box ) );
    v->push_back( osg::Vec3(  0.6 , -3.3, _z_box ) );
    v->push_back( osg::Vec3( -0.6 ,  3.3, _z_box ) );

    // wing
    v->push_back( osg::Vec3( -0.6 ,  1.4, _z_box ) );
    v->push_back( osg::Vec3( -0.6 , -0.3, _z_box ) );
    v->push_back( osg::Vec3( -3.5 ,  0.3, _z_box ) );

    v->push_back( osg::Vec3( -3.5 , -0.3, _z_box ) );
    v->push_back( osg::Vec3( -3.5 ,  0.3, _z_box ) );
    v->push_back( osg::Vec3( -0.6 , -0.3, _z_box ) );

    v->push_back( osg::Vec3(  0.6 ,  1.4, _z_box ) );
    v->push_back( osg::Vec3(  0.6 , -0.3, _z_box ) );
    v->push_back( osg::Vec3(  3.5 ,  0.3, _z_box ) );

    v->push_back( osg::Vec3(  3.5 , -0.3, _z_box ) );
    v->push_back( osg::Vec3(  3.5 ,  0.3, _z_box ) );
    v->push_back( osg::Vec3(  0.6 , -0.3, _z_box ) );

    // stab
    v->push_back( osg::Vec3( -0.6 , -2.1, _z_box ) );
    v->push_back( osg::Vec3( -0.6 , -3.3, _z_box ) );
    v->push_back( osg::Vec3( -1.6 , -2.8, _z_box ) );

    v->push_back( osg::Vec3( -1.6 , -2.8, _z_box ) );
    v->push_back( osg::Vec3( -1.6 , -3.3, _z_box ) );
    v->push_back( osg::Vec3( -0.6 , -3.3, _z_box ) );

    v->push_back( osg::Vec3(  0.6 , -2.1, _z_box ) );
    v->push_back( osg::Vec3(  0.6 , -3.3, _z_box ) );
    v->push_back( osg::Vec3(  1.6 , -2.8, _z_box ) );

    v->push_back( osg::Vec3(  1.6 , -2.8, _z_box ) );
    v->push_back( osg::Vec3(  1.6 , -3.3, _z_box ) );
    v->push_back( osg::Vec3(  0.6 , -3.3, _z_box ) );

    c->push_back( osg::Vec4( Colors::_white, 1.0 ) );

    geom->setVertexArray( v.get() );
    geom->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::TRIANGLES, 0, v->size() ) );

    geom->setColorArray( c.get() );
    geom->setColorBinding( osg::Geometry::BIND_OVERALL );

    geode->addDrawable( geom.get() );
}

////////////////////////////////////////////////////////////////////////////////

void HSI::createBoxCRS()
{
    double x = 20.0;
    double y = 26.0;
    double h = 6.0;
    double w = 17.0;

    const double delta_x_txt = 0.5;
    const double delta_y_txt = 1.5;

    osg::ref_ptr<osg::Geode> geode_b = new osg::Geode();
    osg::ref_ptr<osg::Geode> geode_f = new osg::Geode();
    osg::ref_ptr<osg::Geode> geode_t = new osg::Geode();

    _pat->addChild( geode_b.get() );
    _pat->addChild( geode_f.get() );
    _pat->addChild( geode_t.get() );

    osg::ref_ptr<osg::Geometry> geom_b = new osg::Geometry();
    osg::ref_ptr<osg::Geometry> geom_f = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> vb = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec3Array> vf = new osg::Vec3Array();

    osg::ref_ptr<osg::Vec4Array> cb = new osg::Vec4Array();
    osg::ref_ptr<osg::Vec4Array> cf = new osg::Vec4Array();

    cb->push_back( osg::Vec4( Colors::_black, 1.0 ) );
    cf->push_back( osg::Vec4( Colors::_white, 1.0 ) );

    vb->push_back( osg::Vec3( x     , y     , _z_box + 1.0 ) );
    vb->push_back( osg::Vec3( x + w , y     , _z_box + 1.0 ) );
    vb->push_back( osg::Vec3( x + w , y + h , _z_box + 1.0 ) );
    vb->push_back( osg::Vec3( x     , y + h , _z_box + 1.0 ) );

    vf->push_back( osg::Vec3( x     , y     , _z_box ) );
    vf->push_back( osg::Vec3( x + w , y     , _z_box ) );
    vf->push_back( osg::Vec3( x + w , y + h , _z_box ) );
    vf->push_back( osg::Vec3( x     , y + h , _z_box ) );

    geom_b->setVertexArray( vb.get() );
    geom_f->setVertexArray( vf.get() );

    geom_b->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::QUADS, 0, vb->size() ) );
    geom_f->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::LINE_LOOP, 0, vf->size() ) );

    geom_b->setColorArray( cb.get() );
    geom_f->setColorArray( cf.get() );

    geom_b->setColorBinding( osg::Geometry::BIND_OVERALL );
    geom_f->setColorBinding( osg::Geometry::BIND_OVERALL );

    geode_b->addDrawable( geom_b.get() );
    geode_f->addDrawable( geom_f.get() );

    osg::ref_ptr<osgText::Text> textLabel = new osgText::Text();
    textLabel->setFont( Fonts::get( "fonts/g1000.ttf" ) );
    textLabel->setColor( osg::Vec4( Colors::_white, 1.0 ) );
    textLabel->setCharacterSize( 2.9 );
    textLabel->setAxisAlignment( osgText::TextBase::XY_PLANE );
    textLabel->setPosition( osg::Vec3( x + delta_x_txt, y + delta_y_txt, _z_box + 2.0 ) );
    textLabel->setLayout( osgText::Text::LEFT_TO_RIGHT );
    textLabel->setAlignment( osgText::Text::LEFT_BASE_LINE );
    textLabel->setText( "CRS" );
    geode_t->addDrawable( textLabel );

    _textCRS = new osgText::Text();
    _textCRS->setFont( Fonts::get( "fonts/g1000.ttf" ) );
    _textCRS->setColor( osg::Vec4( Colors::_magenta, 1.0 ) );
    _textCRS->setCharacterSize( 4.0 );
    _textCRS->setAxisAlignment( osgText::TextBase::XY_PLANE );
    _textCRS->setPosition( osg::Vec3( x + w - delta_x_txt, y + delta_y_txt, _z_box + 2.0 ) );
    _textCRS->setLayout( osgText::Text::LEFT_TO_RIGHT );
    _textCRS->setAlignment( osgText::Text::RIGHT_BASE_LINE );
    _textCRS->setText( "000" );
    geode_t->addDrawable( _textCRS );
}

////////////////////////////////////////////////////////////////////////////////

void HSI::createBoxHDG()
{
    double x = -36.0;
    double y = 26.0;
    double h = 6.0;
    double w = 17.0;

    const double delta_x_txt = 0.5;
    const double delta_y_txt = 1.5;

    osg::ref_ptr<osg::Geode> geode_b = new osg::Geode();
    osg::ref_ptr<osg::Geode> geode_f = new osg::Geode();
    osg::ref_ptr<osg::Geode> geode_t = new osg::Geode();

    _pat->addChild( geode_b.get() );
    _pat->addChild( geode_f.get() );
    _pat->addChild( geode_t.get() );

    osg::ref_ptr<osg::Geometry> geom_b = new osg::Geometry();
    osg::ref_ptr<osg::Geometry> geom_f = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> vb = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec3Array> vf = new osg::Vec3Array();

    osg::ref_ptr<osg::Vec4Array> cb = new osg::Vec4Array();
    osg::ref_ptr<osg::Vec4Array> cf = new osg::Vec4Array();

    cb->push_back( osg::Vec4( Colors::_black, 1.0 ) );
    cf->push_back( osg::Vec4( Colors::_white, 1.0 ) );

    vb->push_back( osg::Vec3( x     , y     , _z_box + 1.0 ) );
    vb->push_back( osg::Vec3( x + w , y     , _z_box + 1.0 ) );
    vb->push_back( osg::Vec3( x + w , y + h , _z_box + 1.0 ) );
    vb->push_back( osg::Vec3( x     , y + h , _z_box + 1.0 ) );

    vf->push_back( osg::Vec3( x     , y     , _z_box ) );
    vf->push_back( osg::Vec3( x + w , y     , _z_box ) );
    vf->push_back( osg::Vec3( x + w , y + h , _z_box ) );
    vf->push_back( osg::Vec3( x     , y + h , _z_box ) );

    geom_b->setVertexArray( vb.get() );
    geom_f->setVertexArray( vf.get() );

    geom_b->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::QUADS, 0, vb->size() ) );
    geom_f->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::LINE_LOOP, 0, vf->size() ) );

    geom_b->setColorArray( cb.get() );
    geom_f->setColorArray( cf.get() );

    geom_b->setColorBinding( osg::Geometry::BIND_OVERALL );
    geom_f->setColorBinding( osg::Geometry::BIND_OVERALL );

    geode_b->addDrawable( geom_b.get() );
    geode_f->addDrawable( geom_f.get() );

    osg::ref_ptr<osgText::Text> textLabel = new osgText::Text();
    textLabel->setFont( Fonts::get( "fonts/g1000.ttf" ) );
    textLabel->setColor( osg::Vec4( Colors::_white, 1.0 ) );
    textLabel->setCharacterSize( 2.9 );
    textLabel->setAxisAlignment( osgText::TextBase::XY_PLANE );
    textLabel->setPosition( osg::Vec3( x + delta_x_txt, y + delta_y_txt, _z_box + 2.0 ) );
    textLabel->setLayout( osgText::Text::LEFT_TO_RIGHT );
    textLabel->setAlignment( osgText::Text::LEFT_BASE_LINE );
    textLabel->setText( "HDG" );
    geode_t->addDrawable( textLabel );

    _textHDG = new osgText::Text();
    _textHDG->setFont( Fonts::get( "fonts/g1000.ttf" ) );
    _textHDG->setColor( osg::Vec4( Colors::_cyan, 1.0 ) );
    _textHDG->setCharacterSize( 4.0 );
    _textHDG->setAxisAlignment( osgText::TextBase::XY_PLANE );
    _textHDG->setPosition( osg::Vec3( x + w - delta_x_txt, y + delta_y_txt, _z_box + 2.0 ) );
    _textHDG->setLayout( osgText::Text::LEFT_TO_RIGHT );
    _textHDG->setAlignment( osgText::Text::RIGHT_BASE_LINE );
    _textHDG->setText( "000" );
    geode_t->addDrawable( _textHDG );
}

////////////////////////////////////////////////////////////////////////////////

void HSI::createCompass()
{
    const double r0 = 28.0;
    const double r1 = 27.0;
    const double r2 = 26.0;

    const double r3 = 29.0;
    const double r4 = 32.0;

    osg::ref_ptr<osg::Geode> geode_f = new osg::Geode();
    osg::ref_ptr<osg::Geode> geode_l = new osg::Geode();
    osg::ref_ptr<osg::Geode> geode_s = new osg::Geode();
    osg::ref_ptr<osg::Geode> geode_p = new osg::Geode();

    _patHDG->addChild( geode_f.get() );
    _patHDG->addChild( geode_l.get() );
    _pat->addChild( geode_s.get() );
    _pat->addChild( geode_p.get() );

    osg::ref_ptr<osg::Vec4Array> cf = new osg::Vec4Array();
    osg::ref_ptr<osg::Vec4Array> cw = new osg::Vec4Array();

    cf->push_back( osg::Vec4( _colorFace, 0.5 ) );
    cw->push_back( osg::Vec4( Colors::_white, 1.0 ) );

    osg::ref_ptr<osg::Geometry> geom_f = new osg::Geometry();
    osg::ref_ptr<osg::Geometry> geom_l = new osg::Geometry();
    osg::ref_ptr<osg::Geometry> geom_s = new osg::Geometry();
    osg::ref_ptr<osg::Geometry> geom_p = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> vf = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec3Array> vl = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec3Array> vs = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec3Array> vp = new osg::Vec3Array();

    vf->push_back( osg::Vec3( 0.0, 0.0, _z_compass_face ) );

    const double step = 5.0;
    const int steps = 360.0 / step;

    for ( int i = 0; i <= steps; i++ )
    {
        double heading = i * step;
        double a = osg::DegreesToRadians( heading );

        double sinA = sin( a );
        double cosA = cos( a );

        double x0 = r0 * sinA;
        double y0 = r0 * cosA;

        vf->push_back( osg::Vec3( x0, y0, _z_compass_face ) );

        if ( i < steps )
        {
            double x1 = ( i % 2 == 0 ? r2: r1 ) * sinA;
            double y1 = ( i % 2 == 0 ? r2: r1 ) * cosA;

            vl->push_back( osg::Vec3( x0, y0, _z_compass_face + 1.0 ) );
            vl->push_back( osg::Vec3( x1, y1, _z_compass_face + 1.0 ) );

            if ( i % 9 == 0 && i != 0 && i != 36 )
            {
                double x3 = r3 * sinA;
                double y3 = r3 * cosA;

                double x4 = r4 * sinA;
                double y4 = r4 * cosA;

                vs->push_back( osg::Vec3( x3, y3, _z_compass_face + 1.0 ) );
                vs->push_back( osg::Vec3( x4, y4, _z_compass_face + 1.0 ) );
            }

            if ( i % 6 == 0 )
            {
                std::stringstream heading_str;

                float charSize = 4.0;

                switch ( i )
                {
                    case 0:  heading_str << "N"; charSize = 5.0; break;
                    case 18: heading_str << "E"; charSize = 5.0; break;
                    case 36: heading_str << "S"; charSize = 5.0; break;
                    case 54: heading_str << "W"; charSize = 5.0; break;
                    default: heading_str << (int)( heading / 10.0 ); break;
                }

                osg::ref_ptr<osg::PositionAttitudeTransform> pat = new osg::PositionAttitudeTransform();
                _patHDG->addChild( pat.get() );

                osg::ref_ptr<osg::Geode> geode_t = new osg::Geode();
                pat->addChild( geode_t.get() );

                pat->setAttitude( osg::Quat( -a, osg::Z_AXIS ) );

                osg::ref_ptr<osgText::Text> text = new osgText::Text();
                text->setFont( Fonts::get( "fonts/g1000.ttf" ) );
                text->setColor( osg::Vec4( Colors::_white, 1.0 ) );
                text->setCharacterSize( charSize );
                text->setAxisAlignment( osgText::TextBase::XY_PLANE );
                text->setPosition( osg::Vec3( 0.0, r2 - 1, _z_compass_face + 1.0 ) );
                text->setLayout( osgText::Text::LEFT_TO_RIGHT );
                text->setAlignment( osgText::Text::CENTER_TOP );
                text->setText( heading_str.str() );
                geode_t->addDrawable( text );
            }
        }
    }

    // pointer
    const double yp = 26.5;
    const double hp = 3.5;
    const double wp = 1.8;

    vp->push_back( osg::Vec3(  0.0, yp      , _z_compass_face + 1.0 ) );
    vp->push_back( osg::Vec3(  -wp, yp + hp , _z_compass_face + 1.0 ) );
    vp->push_back( osg::Vec3(   wp, yp + hp , _z_compass_face + 1.0 ) );

    geom_f->setVertexArray( vf.get() );
    geom_l->setVertexArray( vl.get() );
    geom_s->setVertexArray( vs.get() );
    geom_p->setVertexArray( vp.get() );

    geom_f->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::TRIANGLE_FAN, 0, vf->size() ) );
    geom_l->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::LINES, 0, vl->size() ) );
    geom_s->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::LINES, 0, vs->size() ) );
    geom_p->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::TRIANGLES, 0, vp->size() ) );

    geom_f->setColorArray( cf.get() );
    geom_l->setColorArray( cw.get() );
    geom_s->setColorArray( cw.get() );
    geom_p->setColorArray( cw.get() );

    geom_f->setColorBinding( osg::Geometry::BIND_OVERALL );
    geom_l->setColorBinding( osg::Geometry::BIND_OVERALL );
    geom_s->setColorBinding( osg::Geometry::BIND_OVERALL );
    geom_p->setColorBinding( osg::Geometry::BIND_OVERALL );

    geode_f->addDrawable( geom_f.get() );
    geode_l->addDrawable( geom_l.get() );
    geode_s->addDrawable( geom_s.get() );
    geode_p->addDrawable( geom_p.get() );
}

////////////////////////////////////////////////////////////////////////////////

void HSI::createCoursePointer()
{
    const double y = 26.0;
    const double w = 0.4;
    const double h = 14.0;

    const double wa = 3.0;
    const double ha = 3.0;

    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    _patCRS->addChild( geode.get() );

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    c->push_back( osg::Vec4( Colors::_magenta, 1.0 ) );

    v->push_back( osg::Vec3( -w, -y     , _z_course_pointer ) );
    v->push_back( osg::Vec3(  w, -y     , _z_course_pointer ) );
    v->push_back( osg::Vec3(  w, -y + h , _z_course_pointer ) );
    v->push_back( osg::Vec3( -w, -y + h , _z_course_pointer ) );

    v->push_back( osg::Vec3( -w,  y - h , _z_course_pointer ) );
    v->push_back( osg::Vec3(  w,  y - h , _z_course_pointer ) );
    v->push_back( osg::Vec3(  w,  y     , _z_course_pointer ) );
    v->push_back( osg::Vec3( -w,  y     , _z_course_pointer ) );

    v->push_back( osg::Vec3( -wa ,  y - ha , _z_course_pointer ) );
    v->push_back( osg::Vec3(  wa ,  y - ha , _z_course_pointer ) );
    v->push_back( osg::Vec3(  w  ,  y      , _z_course_pointer ) );
    v->push_back( osg::Vec3( -w  ,  y      , _z_course_pointer ) );

    geometry->setVertexArray( v.get() );
    geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::QUADS, 0, v->size() ) );

    geometry->setColorArray( c.get() );
    geometry->setColorBinding( osg::Geometry::BIND_OVERALL );

    geode->addDrawable( geometry.get() );
}

////////////////////////////////////////////////////////////////////////////////

void HSI::createHeadingBox()
{
    const double y = 30.0;
    const double h = 6.5;
    const double w = 7.0;

    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    _pat->addChild( geode.get() );

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    c->push_back( osg::Vec4( Colors::_black, 1.0 ) );

    v->push_back( osg::Vec3( -w, y     , _z_box ) );
    v->push_back( osg::Vec3(  w, y     , _z_box ) );
    v->push_back( osg::Vec3(  w, y + h , _z_box ) );
    v->push_back( osg::Vec3( -w, y + h , _z_box ) );

    geometry->setVertexArray( v.get() );
    geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::QUADS, 0, v->size() ) );

    geometry->setColorArray( c.get() );
    geometry->setColorBinding( osg::Geometry::BIND_OVERALL );

    geode->addDrawable( geometry.get() );

    _headingText = new osgText::Text();
    _headingText->setFont( Fonts::get( "fonts/g1000.ttf" ) );
    _headingText->setColor( osg::Vec4( Colors::_white, 1.0 ) );
    _headingText->setCharacterSize( 6.0 );
    _headingText->setAxisAlignment( osgText::TextBase::XY_PLANE );
    _headingText->setPosition( osg::Vec3( w + 0.2, y + 1.0, _z_box + 1.0 ) );
    _headingText->setLayout( osgText::Text::LEFT_TO_RIGHT );
    _headingText->setAlignment( osgText::Text::RIGHT_BOTTOM );
    _headingText->setText( osgText::String( "000°", osgText::String::ENCODING_UTF8 ) );
    geode->addDrawable( _headingText );
}

////////////////////////////////////////////////////////////////////////////////

void HSI::createHeadingBug()
{
    const double dy = 26.5;

    const double v13 = 1.0 + ( 1.0 / 3.0 );

    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    _patBug->addChild( geode.get() );

    osg::ref_ptr<osg::Geometry> geom = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    v->push_back( osg::Vec3(  0.0, dy       , _z_bug ) );
    v->push_back( osg::Vec3(  0.0, dy - 0.5 , _z_bug ) );
    v->push_back( osg::Vec3(  3.0, dy - 0.5 , _z_bug ) );

    v->push_back( osg::Vec3(  0.0, dy       , _z_bug ) );
    v->push_back( osg::Vec3(  3.0, dy - 0.5 , _z_bug ) );
    v->push_back( osg::Vec3(  3.0, dy + 2.0 , _z_bug ) );

    v->push_back( osg::Vec3(  0.0, dy       , _z_bug ) );
    v->push_back( osg::Vec3(  3.0, dy + 2.0 , _z_bug ) );
    v->push_back( osg::Vec3(  v13, dy + 2.0 , _z_bug ) );

    v->push_back( osg::Vec3(  0.0, dy       , _z_bug ) );
    v->push_back( osg::Vec3(  0.0, dy - 0.5 , _z_bug ) );
    v->push_back( osg::Vec3( -3.0, dy - 0.5 , _z_bug ) );

    v->push_back( osg::Vec3(  0.0, dy       , _z_bug ) );
    v->push_back( osg::Vec3( -3.0, dy - 0.5 , _z_bug ) );
    v->push_back( osg::Vec3( -3.0, dy + 2.0 , _z_bug ) );

    v->push_back( osg::Vec3(  0.0, dy       , _z_bug ) );
    v->push_back( osg::Vec3( -3.0, dy + 2.0 , _z_bug ) );
    v->push_back( osg::Vec3( -v13, dy + 2.0 , _z_bug ) );

    c->push_back( osg::Vec4( Colors::_cyan, 1.0 ) );

    geom->setVertexArray( v.get() );
    geom->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::TRIANGLES, 0, v->size() ) );

    geom->setColorArray( c.get() );
    geom->setColorBinding( osg::Geometry::BIND_OVERALL );

    geode->addDrawable( geom.get() );
}
