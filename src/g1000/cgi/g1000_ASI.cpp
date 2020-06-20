/****************************************************************************//*
 * Copyright (C) 2020 Marek M. Cel
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

#include <g1000/cgi/g1000_ASI.h>

#ifdef _MSC_VER
#   include <algorithm>
#endif

#include <sstream>

#include <osg/Geode>
#include <osg/Geometry>

#include <g1000/g1000_Defines.h>
#include <g1000/g1000_Log.h>

#include <g1000/cgi/g1000_Colors.h>
#include <g1000/cgi/g1000_Fonts.h>

#include <g1000/utils/g1000_Misc.h>
#include <g1000/utils/g1000_Units.h>

#include <g1000/xml/g1000_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace g1000;

////////////////////////////////////////////////////////////////////////////////

const double ASI::_x_offset = -10.0;
const double ASI::_y_offset =  19.0;

const osg::Vec3 ASI::_colorBack = osg::Vec3( 0.38, 0.38, 0.38 );

const double ASI::_z_back  = -80.0;
const double ASI::_z_box   = -60.0;
const double ASI::_z_bug   = -69.0;
const double ASI::_z_frame = -60.0;
const double ASI::_z_scale = -70.0;

const double ASI::_ias2pt = 1.1;

const double ASI::_ias_min   = 20.0;
const double ASI::_ias_red   = 40.0;
const double ASI::_ias_stall = 48.0;
const double ASI::_ias_white = 85.0;
const double ASI::_ias_green = 130.0;
const double ASI::_ias_vne   = 164.0;

const int ASI::_depth_sorted_bin_scale = 90;
const int ASI::_depth_sorted_bin_disk = 100;

////////////////////////////////////////////////////////////////////////////////

ASI::ASI( IFD *ifd, XmlNode &node ) :
    Module( ifd )
{
    _pat = new osg::PositionAttitudeTransform();
    _root->addChild( _pat.get() );
    _pat->setPosition( osg::Vec3( _x_offset, _y_offset, 0.0 ) );

    _switchIAS = new osg::Switch();
    _pat->addChild( _switchIAS.get() );

    _groupIAS = new osg::Group();
    _switchIAS->addChild( _groupIAS.get() );

    _patDisk = new osg::PositionAttitudeTransform();
    _groupIAS->addChild( _patDisk.get() );

    _patScale = new osg::PositionAttitudeTransform();
    _pat->addChild( _patScale.get() );

    _patBug = new osg::PositionAttitudeTransform();
    _pat->addChild( _patBug.get() );

    _groupRed = new osg::Group();
    _pat->addChild( _groupRed.get() );

    _materialBlack = new osg::Material();
    _materialBlack->setColorMode( osg::Material::AMBIENT_AND_DIFFUSE );
    _materialBlack->setAmbient( osg::Material::FRONT_AND_BACK, osg::Vec4( Colors::_black, 1.0 ) );
    _materialBlack->setDiffuse( osg::Material::FRONT_AND_BACK, osg::Vec4( Colors::_black, 1.0 ) );

    _materialRed = new osg::Material();
    _materialRed->setColorMode( osg::Material::AMBIENT_AND_DIFFUSE );
    _materialRed->setAmbient( osg::Material::FRONT_AND_BACK, osg::Vec4( Colors::_red, 1.0 ) );
    _materialRed->setDiffuse( osg::Material::FRONT_AND_BACK, osg::Vec4( Colors::_red, 1.0 ) );

    if ( node.isValid() )
    {
        // TODO
    }
    else
    {
        Log::e() << ( "Reading XML file failed. " + XmlUtils::getErrorInfo( node ) ) << std::endl;
    }

    createAirspeedBug();
    createBack();
    createBarRed();
    createBarGreen();
    createBarWhite();
    createBarYellow();
    createBarVne();
    createBox();
    createBoxSelect();
    createBoxTAS();
    createDisk();
    createDiskMask();
    createFrame();
    createScale();
    createScaleMask();
}

////////////////////////////////////////////////////////////////////////////////

ASI::~ASI() {}

////////////////////////////////////////////////////////////////////////////////

void ASI::update()
{
    double ias_kts = Units::mps2kts( _ifd->gdc()->getIAS() );
    double tas_kts = Units::mps2kts( _ifd->gdc()->getTAS() );
    double sel_kts = Units::mps2kts( _ifd->input().sel_airspeed );
    double ias_min = std::max( _ias_min, ias_kts );
    double sel_min = std::max( _ias_min, sel_kts );

    double dy_bug = Misc::satur( -33.0, 33.0, -_ias2pt * ( ias_min - sel_min ) );

    _patScale->setPosition( osg::Vec3( 0.0, -_ias2pt * ias_min, 0.0 ) );
    _patBug->setPosition( osg::Vec3( 0.0, dy_bug, 0.0 ) );

    char ias_str[16] = { "" };
    char tas_str[16] = { "" };

    int ias_10 = floor( ias_kts / 10.0 );

    if ( ias_kts > _ias_min )
    {
        _switchIAS->setValue( 0, true );
        _switchIAS->setValue( 1, false );

        int tas = floor( tas_kts + 0.5 );

        sprintf( ias_str, "%d", ias_10 );
        sprintf( tas_str, "%dKT", tas );

        double a = osg::DegreesToRadians( 36.0 ) * ( ias_kts - 10.0 * ias_10 );
        _patDisk->setAttitude( osg::Quat( a, osg::X_AXIS ) );
    }
    else
    {
        _switchIAS->setValue( 0, false );
        _switchIAS->setValue( 1, true );
    }

    _textIAS_10->setText( ias_str );
    _textTAS->setText( tas_str );

    if ( _groupRed.valid() )
    {
        if ( ias_kts > _ias_vne )
        {
            _groupRed->getOrCreateStateSet()->setAttribute( _materialRed.get(),
                osg::StateAttribute::OVERRIDE | osg::StateAttribute::ON );
        }
        else
        {
            _groupRed->getOrCreateStateSet()->setAttribute( _materialBlack.get(),
                osg::StateAttribute::OVERRIDE | osg::StateAttribute::ON );
        }
    }

    char sel_ias_str[16] = { "" };
    sprintf( sel_ias_str, "%.0f", sel_kts );
    _textSelect->setText( sel_ias_str );
}

////////////////////////////////////////////////////////////////////////////////

void ASI::createAirspeedBug()
{
    const double dx = -44.5;

    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    _patBug->addChild( geode.get() );

    osg::ref_ptr<osg::Geometry> geom = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    v->push_back( osg::Vec3( dx + 0.5 ,  0.0, _z_bug ) );
    v->push_back( osg::Vec3( dx       ,  0.0, _z_bug ) );
    v->push_back( osg::Vec3( dx + 0.5 ,  3.0, _z_bug ) );
    v->push_back( osg::Vec3( dx       ,  0.0, _z_bug ) );
    v->push_back( osg::Vec3( dx + 0.5 ,  3.0, _z_bug ) );
    v->push_back( osg::Vec3( dx - 2.0 ,  2.0, _z_bug ) );
    v->push_back( osg::Vec3( dx + 0.5 ,  3.0, _z_bug ) );
    v->push_back( osg::Vec3( dx - 2.0 ,  2.0, _z_bug ) );
    v->push_back( osg::Vec3( dx - 2.0 ,  3.0, _z_bug ) );

    v->push_back( osg::Vec3( dx + 0.5 ,  0.0, _z_bug ) );
    v->push_back( osg::Vec3( dx       ,  0.0, _z_bug ) );
    v->push_back( osg::Vec3( dx + 0.5 , -3.0, _z_bug ) );
    v->push_back( osg::Vec3( dx       ,  0.0, _z_bug ) );
    v->push_back( osg::Vec3( dx + 0.5 , -3.0, _z_bug ) );
    v->push_back( osg::Vec3( dx - 2.0 , -2.0, _z_bug ) );
    v->push_back( osg::Vec3( dx + 0.5 , -3.0, _z_bug ) );
    v->push_back( osg::Vec3( dx - 2.0 , -2.0, _z_bug ) );
    v->push_back( osg::Vec3( dx - 2.0 , -3.0, _z_bug ) );

    c->push_back( osg::Vec4( Colors::_cyan, 1.0 ) );

    geom->setVertexArray( v.get() );
    geom->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::TRIANGLES, 0, v->size() ) );

    geom->setColorArray( c.get() );
    geom->setColorBinding( osg::Geometry::BIND_OVERALL );

    geode->addDrawable( geom.get() );

    osg::ref_ptr<osg::StateSet> stateSet = geode->getOrCreateStateSet();
    stateSet->setRenderBinDetails( _depth_sorted_bin_scale, "RenderBin" );
}

////////////////////////////////////////////////////////////////////////////////

void ASI::createBack()
{
    const double x = -60.0;
    const double h = 33.0;
    const double w = 16.0;

    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    _pat->addChild( geode.get() );

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    c->push_back( osg::Vec4( _colorBack, 0.5 ) );

    v->push_back( osg::Vec3( x     , -h , _z_back ) );
    v->push_back( osg::Vec3( x + w , -h , _z_back ) );
    v->push_back( osg::Vec3( x + w ,  h , _z_back ) );
    v->push_back( osg::Vec3( x     ,  h , _z_back ) );

    geometry->setVertexArray( v.get() );
    geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::QUADS, 0, v->size() ) );

    geometry->setColorArray( c.get() );
    geometry->setColorBinding( osg::Geometry::BIND_OVERALL );

    geode->addDrawable( geometry.get() );
}

////////////////////////////////////////////////////////////////////////////////

void ASI::createBar( double x, double z, double min, double max, osg::Vec3 color )
{
    const double y_min = _ias2pt * min;
    const double y_max = _ias2pt * max;
    const double w = 1.2;

    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    _patScale->addChild( geode.get() );

    osg::ref_ptr<osg::StateSet> stateSet = geode->getOrCreateStateSet();
    stateSet->setRenderBinDetails( _depth_sorted_bin_scale, "RenderBin" );

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    c->push_back( osg::Vec4( color, 1.0 ) );

    v->push_back( osg::Vec3( x     , y_min, z ) );
    v->push_back( osg::Vec3( x + w , y_min, z ) );
    v->push_back( osg::Vec3( x + w , y_max, z ) );
    v->push_back( osg::Vec3( x     , y_max, z ) );

    geometry->setVertexArray( v.get() );
    geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::QUADS, 0, v->size() ) );

    geometry->setColorArray( c.get() );
    geometry->setColorBinding( osg::Geometry::BIND_OVERALL );

    geode->addDrawable( geometry.get() );
}

////////////////////////////////////////////////////////////////////////////////

void ASI::createBarRed()
{
    createBar( -45.2, _z_back + 2, _ias_min, _ias_red, Colors::_red );
}

////////////////////////////////////////////////////////////////////////////////

void ASI::createBarGreen()
{
    createBar( -45.2, _z_back + 2, _ias_stall, _ias_green, Colors::_green );
}

////////////////////////////////////////////////////////////////////////////////

void ASI::createBarWhite()
{
    createBar( -45.8, _z_back + 1, _ias_red, _ias_white, Colors::_white );
}

////////////////////////////////////////////////////////////////////////////////

void ASI::createBarYellow()
{
    createBar( -45.2, _z_back + 2, _ias_green, _ias_vne, Colors::_yellow );
}

////////////////////////////////////////////////////////////////////////////////

void ASI::createBarVne()
{
    createBar( -45.2, _z_back + 2, _ias_vne, _ias_vne + 600.0, Colors::_red );
}

////////////////////////////////////////////////////////////////////////////////

void ASI::createBox()
{
    const double dx = -44.5;

    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    _groupRed->addChild( geode.get() );

    osg::ref_ptr<osg::Geometry> geom = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    v->push_back( osg::Vec3( dx        ,  0.0, _z_box ) );
    v->push_back( osg::Vec3( dx -  2.0 ,  2.0, _z_box ) );
    v->push_back( osg::Vec3( dx -  2.0 , -2.0, _z_box ) );

    v->push_back( osg::Vec3( dx -  2.0 ,  6.5, _z_box ) );
    v->push_back( osg::Vec3( dx -  6.0 ,  6.5, _z_box ) );
    v->push_back( osg::Vec3( dx -  2.0 , -6.5, _z_box ) );

    v->push_back( osg::Vec3( dx -  6.0 ,  6.5, _z_box ) );
    v->push_back( osg::Vec3( dx -  6.0 , -6.5, _z_box ) );
    v->push_back( osg::Vec3( dx -  2.0 , -6.5, _z_box ) );

    v->push_back( osg::Vec3( dx - 15.0 ,  4.0, _z_box ) );
    v->push_back( osg::Vec3( dx -  6.0 ,  4.0, _z_box ) );
    v->push_back( osg::Vec3( dx -  6.0 , -4.0, _z_box ) );

    v->push_back( osg::Vec3( dx - 15.0 ,  4.0, _z_box ) );
    v->push_back( osg::Vec3( dx - 15.0 , -4.0, _z_box ) );
    v->push_back( osg::Vec3( dx -  6.0 , -4.0, _z_box ) );

    c->push_back( osg::Vec4( Colors::_black, 1.0 ) );

    geom->setVertexArray( v.get() );
    geom->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::TRIANGLES, 0, v->size() ) );

    geode->addDrawable( geom.get() );

    osg::ref_ptr<osg::Geode> geode_t1 = new osg::Geode();
    osg::ref_ptr<osg::Geode> geode_t2 = new osg::Geode();
    _groupIAS->addChild( geode_t1.get() );
    _switchIAS->addChild( geode_t2.get() );

    _textIAS_10 = new osgText::Text();
    _textIAS_10->setFont( Fonts::get( "data/fonts/g1000.ttf" ) );
    _textIAS_10->setColor( osg::Vec4( Colors::_white, 1.0 ) );
    _textIAS_10->setCharacterSize( 5.0 );
    _textIAS_10->setAxisAlignment( osgText::TextBase::XY_PLANE );
    _textIAS_10->setPosition( osg::Vec3( -50.5, 0.0, _z_box + 1.0 ) );
    _textIAS_10->setLayout( osgText::Text::LEFT_TO_RIGHT );
    _textIAS_10->setAlignment( osgText::Text::RIGHT_CENTER );
    _textIAS_10->setText( "00" );
    geode_t1->addDrawable( _textIAS_10 );

    osg::ref_ptr<osgText::Text> textIAS = new osgText::Text();
    textIAS->setFont( Fonts::get( "data/fonts/g1000.ttf" ) );
    textIAS->setColor( osg::Vec4( Colors::_white, 1.0 ) );
    textIAS->setCharacterSize( 5.0 );
    textIAS->setAxisAlignment( osgText::TextBase::XY_PLANE );
    textIAS->setPosition( osg::Vec3( -48.5, 0.0, _z_box + 1.0 ) );
    textIAS->setLayout( osgText::Text::LEFT_TO_RIGHT );
    textIAS->setAlignment( osgText::Text::RIGHT_CENTER );
    textIAS->setText( "---" );
    geode_t2->addDrawable( textIAS );
}

////////////////////////////////////////////////////////////////////////////////

void ASI::createBoxSelect()
{
    const double x = -60.0;
    const double y =  33.0;
    const double h = 6.0;
    const double w = 16.0;

    const double delta_x_txt = 4.0;
    const double delta_y_txt = 1.7;

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

    vf->push_back( osg::Vec3( x     , y     , _z_box ) );
    vf->push_back( osg::Vec3( x + w , y     , _z_box ) );
    vf->push_back( osg::Vec3( x + w , y + h , _z_box ) );
    vf->push_back( osg::Vec3( x     , y + h , _z_box ) );

    vb->push_back( osg::Vec3( x     , y     , _z_box + 1.0 ) );
    vb->push_back( osg::Vec3( x + w , y     , _z_box + 1.0 ) );
    vb->push_back( osg::Vec3( x + w , y + h , _z_box + 1.0 ) );
    vb->push_back( osg::Vec3( x     , y + h , _z_box + 1.0 ) );

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

    _textSelect = new osgText::Text();
    _textSelect->setFont( Fonts::get( "data/fonts/g1000.ttf" ) );
    _textSelect->setColor( osg::Vec4( Colors::_cyan, 1.0 ) );
    _textSelect->setCharacterSize( 4.0 );
    _textSelect->setAxisAlignment( osgText::TextBase::XY_PLANE );
    _textSelect->setPosition( osg::Vec3( x + w - delta_x_txt, y + delta_y_txt, _z_box + 2.0 ) );
    _textSelect->setLayout( osgText::Text::LEFT_TO_RIGHT );
    _textSelect->setAlignment( osgText::Text::RIGHT_BASE_LINE );
    _textSelect->setText( "000" );
    geode_t->addDrawable( _textSelect );
}

////////////////////////////////////////////////////////////////////////////////

void ASI::createBoxTAS()
{
    const double x = -60.0;
    const double y = -33.0;
    const double h = 6.0;
    const double w = 16.0;

    const double delta_x_txt = 0.2;
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

    vf->push_back( osg::Vec3( x     , y - h , _z_box ) );
    vf->push_back( osg::Vec3( x + w , y - h , _z_box ) );
    vf->push_back( osg::Vec3( x + w , y     , _z_box ) );
    vf->push_back( osg::Vec3( x     , y     , _z_box ) );

    vb->push_back( osg::Vec3( x     , y - h , _z_box + 1.0 ) );
    vb->push_back( osg::Vec3( x + w , y - h , _z_box + 1.0 ) );
    vb->push_back( osg::Vec3( x + w , y     , _z_box + 1.0 ) );
    vb->push_back( osg::Vec3( x     , y     , _z_box + 1.0 ) );

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
    textLabel->setFont( Fonts::get( "data/fonts/g1000.ttf" ) );
    textLabel->setColor( osg::Vec4( Colors::_white, 1.0 ) );
    textLabel->setCharacterSize( 2.7 );
    textLabel->setAxisAlignment( osgText::TextBase::XY_PLANE );
    textLabel->setPosition( osg::Vec3( x + delta_x_txt, y - h + delta_y_txt, _z_box + 2.0 ) );
    textLabel->setLayout( osgText::Text::LEFT_TO_RIGHT );
    textLabel->setAlignment( osgText::Text::LEFT_BASE_LINE );
    textLabel->setText( "TAS" );
    geode_t->addDrawable( textLabel );

    _textTAS = new osgText::Text();
    _textTAS->setFont( Fonts::get( "data/fonts/g1000.ttf" ) );
    _textTAS->setColor( osg::Vec4( Colors::_white, 1.0 ) );
    _textTAS->setCharacterSize( 3.5 );
    _textTAS->setAxisAlignment( osgText::TextBase::XY_PLANE );
    _textTAS->setPosition( osg::Vec3( x + w - delta_x_txt, y - h + delta_y_txt, _z_box + 2.0 ) );
    _textTAS->setLayout( osgText::Text::LEFT_TO_RIGHT );
    _textTAS->setAlignment( osgText::Text::RIGHT_BASE_LINE );
    _textTAS->setText( "000" );
    geode_t->addDrawable( _textTAS );
}

////////////////////////////////////////////////////////////////////////////////

void ASI::createDisk()
{
    const double dx = -50.5;

    _patDisk->setPosition( osg::Vec3( dx, 0.0, _z_box + 1.0 ) );

    osg::ref_ptr<osg::StateSet> stateSet = _patDisk->getOrCreateStateSet();
    stateSet->setRenderBinDetails( _depth_sorted_bin_disk, "RenderBin" );

    for ( int i = 0; i <= 9; i++ )
    {
        osg::ref_ptr<osg::PositionAttitudeTransform> pat = new osg::PositionAttitudeTransform();
        _patDisk->addChild( pat.get() );

        osg::ref_ptr<osg::Geode> geode = new osg::Geode();
        pat->addChild( geode.get() );

        double a = osg::DegreesToRadians( 36.0 ) * i;

        pat->setAttitude( osg::Quat( -a, osg::X_AXIS ) );

        char digit[2];
        sprintf( digit, "%d", i );

        osg::ref_ptr<osgText::Text> text = new osgText::Text();
        text->setFont( Fonts::get( "data/fonts/g1000.ttf" ) );
        text->setColor( osg::Vec4( Colors::_white, 1.0 ) );
        text->setCharacterSize( 5.0 );
        text->setAxisAlignment( osgText::TextBase::XY_PLANE );
        text->setPosition( osg::Vec3( 0.5, 0.0, 9.0 ) );
        text->setLayout( osgText::Text::LEFT_TO_RIGHT );
        text->setAlignment( osgText::Text::LEFT_CENTER );
        text->setText( digit );
        geode->addDrawable( text );
    }

    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    _groupRed->addChild( geode.get() );

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();

    v->push_back( osg::Vec3( dx       , -6.5, _z_box + 1.0 ) );
    v->push_back( osg::Vec3( dx + 4.0 , -6.5, _z_box + 1.0 ) );
    v->push_back( osg::Vec3( dx + 4.0 ,  6.5, _z_box + 1.0 ) );
    v->push_back( osg::Vec3( dx       ,  6.5, _z_box + 1.0 ) );

    geometry->setVertexArray( v.get() );
    geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::QUADS, 0, v->size() ) );

    geode->addDrawable( geometry.get() );
}

////////////////////////////////////////////////////////////////////////////////

void ASI::createDiskMask()
{
    const double dy = 6.5;
    const double x = -50.5;
    const double w = 4.0;
    const double h = 10.0;

    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    _pat->addChild( geode.get() );

    osg::ref_ptr<osg::StateSet> stateSet = geode->getOrCreateStateSet();
    stateSet->setRenderBinDetails( _depth_sorted_bin_disk - 1, "RenderBin" );

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    c->push_back( osg::Vec4( 0.0, 0.0, 0.0, 0.0 ) );

    v->push_back( osg::Vec3( x     ,  dy     , _z_box + 10.0 ) );
    v->push_back( osg::Vec3( x + w ,  dy     , _z_box + 10.0 ) );
    v->push_back( osg::Vec3( x + w ,  dy + h , _z_box + 10.0 ) );
    v->push_back( osg::Vec3( x     ,  dy + h , _z_box + 10.0 ) );

    v->push_back( osg::Vec3( x     , -dy - h , _z_box + 10.0 ) );
    v->push_back( osg::Vec3( x + w , -dy - h , _z_box + 10.0 ) );
    v->push_back( osg::Vec3( x + w , -dy     , _z_box + 10.0 ) );
    v->push_back( osg::Vec3( x     , -dy     , _z_box + 10.0 ) );

    geometry->setVertexArray( v.get() );
    geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::QUADS, 0, v->size() ) );

    geometry->setColorArray( c.get() );
    geometry->setColorBinding( osg::Geometry::BIND_OVERALL );

    geode->addDrawable( geometry.get() );
}

////////////////////////////////////////////////////////////////////////////////

void ASI::createFrame()
{
    const double x = -60.0;
    const double h = 33.0;
    const double w = 16.0;

    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    _pat->addChild( geode.get() );

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    c->push_back( osg::Vec4( Colors::_white, 1.0 ) );

    v->push_back( osg::Vec3( x     , -h , _z_frame ) );
    v->push_back( osg::Vec3( x + w , -h , _z_frame ) );
    v->push_back( osg::Vec3( x + w ,  h , _z_frame ) );
    v->push_back( osg::Vec3( x     ,  h , _z_frame ) );

    geometry->setVertexArray( v.get() );
    geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::LINE_LOOP, 0, v->size() ) );

    geometry->setColorArray( c.get() );
    geometry->setColorBinding( osg::Geometry::BIND_OVERALL );

    geode->addDrawable( geometry.get() );
}

////////////////////////////////////////////////////////////////////////////////

void ASI::createScale()
{
    const double x = -44.0;
    const double w1 = 4.0;
    const double w2 = 2.0;

    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    _patScale->addChild( geode.get() );

    osg::ref_ptr<osg::StateSet> stateSet = geode->getOrCreateStateSet();
    stateSet->setRenderBinDetails( _depth_sorted_bin_scale, "RenderBin" );

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    c->push_back( osg::Vec4( Colors::_white, 1.0 ) );

    const double step = 5.0;
    const double min = _ias_min;
    const double max = 800.0;
    const int steps = ( max - min ) / step + 1;

    for ( int i = 0; i < steps; i++ )
    {
        double ias = min + i * step;

        double x0 = x - w2;
        double y = _ias2pt * ias;

        if ( i % 2 == 0 )
        {
            x0 = x - w1;

            std::stringstream ias_str;
            ias_str << ias;

            osg::ref_ptr<osgText::Text> text = new osgText::Text();
            text->setFont( Fonts::get( "data/fonts/g1000.ttf" ) );
            text->setColor( osg::Vec4( Colors::_white, 1.0 ) );
            text->setCharacterSize( 4.0 );
            text->setAxisAlignment( osgText::TextBase::XY_PLANE );
            text->setPosition( osg::Vec3( x0 - 1.0, y, _z_scale ) );
            text->setLayout( osgText::Text::LEFT_TO_RIGHT );
            text->setAlignment( osgText::Text::RIGHT_CENTER );
            text->setText( ias_str.str() );
            geode->addDrawable( text );
        }

        v->push_back( osg::Vec3( x0 , y, _z_scale ) );
        v->push_back( osg::Vec3( x  , y, _z_scale ) );
    }

    geometry->setVertexArray( v.get() );
    geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::LINES, 0, v->size() ) );

    geometry->setColorArray( c.get() );
    geometry->setColorBinding( osg::Geometry::BIND_OVERALL );

    geode->addDrawable( geometry.get() );
}

////////////////////////////////////////////////////////////////////////////////

void ASI::createScaleMask()
{
    const double x  = -60.0;
    const double dy = 33.0;
    const double h1 = 23.0;
    const double h2 = 61.0;
    const double w  = 16.0;

    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    _pat->addChild( geode.get() );

    osg::ref_ptr<osg::StateSet> stateSet = geode->getOrCreateStateSet();
    stateSet->setRenderBinDetails( _depth_sorted_bin_scale - 1, "RenderBin" );

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    c->push_back( osg::Vec4( 0.0, 0.0, 0.0, 0.0 ) );

    v->push_back( osg::Vec3( x     , dy      , _z_scale + 1.0 ) );
    v->push_back( osg::Vec3( x + w , dy      , _z_scale + 1.0 ) );
    v->push_back( osg::Vec3( x + w , dy + h1 , _z_scale + 1.0 ) );
    v->push_back( osg::Vec3( x     , dy + h1 , _z_scale + 1.0 ) );

    v->push_back( osg::Vec3( x     , -dy - h2 , _z_scale + 1.0 ) );
    v->push_back( osg::Vec3( x + w , -dy - h2 , _z_scale + 1.0 ) );
    v->push_back( osg::Vec3( x + w , -dy      , _z_scale + 1.0 ) );
    v->push_back( osg::Vec3( x     , -dy      , _z_scale + 1.0 ) );

    geometry->setVertexArray( v.get() );
    geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::QUADS, 0, v->size() ) );

    geometry->setColorArray( c.get() );
    geometry->setColorBinding( osg::Geometry::BIND_OVERALL );

    geode->addDrawable( geometry.get() );
}
