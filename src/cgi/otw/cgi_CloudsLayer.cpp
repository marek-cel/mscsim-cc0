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

#include <cgi/otw/cgi_CloudsLayer.h>

#include <osg/AlphaFunc>
#include <osg/BlendFunc>
#include <osg/Geode>
#include <osg/Geometry>
#include <osg/Material>
#include <osg/PositionAttitudeTransform>

#include <cgi/cgi_Defines.h>
#include <cgi/cgi_WGS84.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

CloudsLayer::CloudsLayer( const Module *parent ) :
    Module( parent ),

    _cover ( Data::CGI::Environment::Clouds::Data::Layer::SKC ),
    _base_asl ( 0.0f ),

    _framesCounter ( 0 ),
    _created ( false )
{
    _textures.push_back( Textures::get( "data/cgi/textures/cloud_st_few.png" ) );
    _textures.push_back( Textures::get( "data/cgi/textures/cloud_st_sct.png" ) );
    _textures.push_back( Textures::get( "data/cgi/textures/cloud_st_bkn.png" ) );
    _textures.push_back( Textures::get( "data/cgi/textures/cloud_st_ovc.png" ) );
}

////////////////////////////////////////////////////////////////////////////////

CloudsLayer::~CloudsLayer() {}

////////////////////////////////////////////////////////////////////////////////

void CloudsLayer::update()
{
    /////////////////
    Module::update();
    /////////////////

    if ( Data::get()->cgi.environment.clouds.type == Data::CGI::Environment::Clouds::Layer )
    {
        if ( _framesCounter % 10 == 0 )
        {
            _framesCounter = 0;

            if ( !_created
              || _cover     != Data::get()->cgi.environment.clouds.data.layer.cover
              || _base_asl  != Data::get()->cgi.environment.clouds.data.layer.base_asl )
            {
                _cover     = Data::get()->cgi.environment.clouds.data.layer.cover;
                _base_asl  = Data::get()->cgi.environment.clouds.data.layer.base_asl;

                create();
            }
        }

        _framesCounter++;
    }
    else
    {
        remove();

        _framesCounter = 0;
    }
}

////////////////////////////////////////////////////////////////////////////////

void CloudsLayer::create()
{
    remove();

    _created = true;

    osg::ref_ptr<osg::PositionAttitudeTransform> pat = new osg::PositionAttitudeTransform();
    _root->addChild( pat.get() );

    WGS84 wgs( Data::get()->cgi.camera.latitude,
               Data::get()->cgi.camera.longitude,
               0.0 );

    pat->setAttitude( wgs.getAttitude() );
    pat->setPosition( wgs.getPosition() );

    createLayer( pat.get(),
                 Data::get()->cgi.camera.latitude,
                 Data::get()->cgi.camera.longitude,
                 _base_asl );
}

////////////////////////////////////////////////////////////////////////////////

void CloudsLayer::createLayer( osg::Group *parent, double lat , double lon, double alt  )
{
    osg::Vec3 ctr_wgs = WGS84::geo2wgs( lat, lon, 0.0 );

    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    parent->addChild( geode.get() );

    osg::ref_ptr<osg::StateSet> geodeStateSet = geode->getOrCreateStateSet();

    osg::ref_ptr<osg::Geometry> geom = new osg::Geometry();
    geode->addDrawable( geom.get() );

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec2Array> t = new osg::Vec2Array();
    osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();

    short k = 20;

    float x = -CGI_SKYDOME_RADIUS;
    float y = -CGI_SKYDOME_RADIUS;

    float dx = 2.0f * CGI_SKYDOME_RADIUS / (float)k;
    float dy = 2.0f * CGI_SKYDOME_RADIUS / (float)k;

    osg::Vec3 v1_ned;
    osg::Vec3 v2_ned;
    osg::Vec3 v1_wgs;
    osg::Vec3 v2_wgs;

    double lat1 = 0.0;
    double lat2 = 0.0;
    double lon1 = 0.0;
    double lon2 = 0.0;
    double dummy = 0.0;

    for ( short ix = 0; ix < k + 1; ix++ )
    {
        y = ( ix % 2 == 0 ) ? -CGI_SKYDOME_RADIUS : CGI_SKYDOME_RADIUS;

        for ( short iy = 0; iy < k + 1; iy++ )
        {
            v1_ned.set( x      , y, 0.0f );
            v2_ned.set( x + dx , y, 0.0f );

            v1_wgs = WGS84::r_ned2wgs( ctr_wgs, v1_ned );
            v2_wgs = WGS84::r_ned2wgs( ctr_wgs, v2_ned );

            WGS84::wgs2geo( v1_wgs, lat1, lon1, dummy );
            WGS84::wgs2geo( v2_wgs, lat2, lon2, dummy );

            v1_wgs = WGS84::geo2wgs( lat1, lon1, alt );
            v2_wgs = WGS84::geo2wgs( lat2, lon2, alt );

            v1_ned = WGS84::r_wgs2ned( ctr_wgs, v1_wgs );
            v2_ned = WGS84::r_wgs2ned( ctr_wgs, v2_wgs );

            osg::Vec3f n1 = WGS84::wgs2ned( ctr_wgs, v1_wgs );
            osg::Vec3f n2 = WGS84::wgs2ned( ctr_wgs, v2_wgs );

            n1.normalize();
            n2.normalize();

            v->push_back( v1_ned );
            v->push_back( v2_ned );

            n->push_back( n1 );
            n->push_back( n2 );

            if ( iy % 2 == 0 )
            {
                t->push_back( osg::Vec2( 0, 0 ) );
                t->push_back( osg::Vec2( 0, 1 ) );
            }
            else
            {
                t->push_back( osg::Vec2( 1, 0 ) );
                t->push_back( osg::Vec2( 1, 1 ) );
            }

            y += ( ix % 2 == 0 ) ? dy : -dy;
        }

        x += dx;
    }

    geom->setNormalArray( n.get() );
    geom->setNormalBinding( osg::Geometry::BIND_PER_VERTEX );
    geom->setVertexArray( v.get() );
    geom->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::TRIANGLE_STRIP, 0, v->size() ) );
    geom->setTexCoordArray( 0, t.get() );

    // texture
    osg::ref_ptr<osg::Texture2D> texture;
    switch ( _cover )
    {
    case Data::CGI::Environment::Clouds::Data::Layer::FEW:
        texture = _textures.at( 0 ).get();
        break;

    case Data::CGI::Environment::Clouds::Data::Layer::SCT:
        texture = _textures.at( 1 ).get();
        break;

    case Data::CGI::Environment::Clouds::Data::Layer::BKN:
        texture = _textures.at( 2 ).get();
        break;

    case Data::CGI::Environment::Clouds::Data::Layer::OVC:
    default:
        texture = _textures.at( 3 ).get();
        break;
    }
    geodeStateSet->setTextureAttributeAndModes( 0, texture.get(), osg::StateAttribute::ON );

    // material
    osg::ref_ptr<osg::Material> material = new osg::Material();
    material->setColorMode( osg::Material::AMBIENT_AND_DIFFUSE );
    material->setAmbient( osg::Material::FRONT, osg::Vec4f( 0.8f, 0.8f, 0.8f, 1.0f ) );
    material->setDiffuse( osg::Material::FRONT, osg::Vec4f( 1.0f, 1.0f, 1.0f, 1.0f ) );

    geodeStateSet->setAttribute( material.get() );

    // alpha blending
    osg::ref_ptr<osg::AlphaFunc> alphaFunc = new osg::AlphaFunc();
    osg::ref_ptr<osg::BlendFunc> blendFunc = new osg::BlendFunc();
    alphaFunc->setFunction( osg::AlphaFunc::GEQUAL, 0.01 );

    geodeStateSet->setRenderingHint( osg::StateSet::TRANSPARENT_BIN );
    geodeStateSet->setAttributeAndModes( blendFunc.get(), osg::StateAttribute::ON );
    geodeStateSet->setAttributeAndModes( alphaFunc.get(), osg::StateAttribute::ON );
    geodeStateSet->setMode( GL_BLEND, osg::StateAttribute::ON | osg::StateAttribute::OVERRIDE );
    geodeStateSet->setRenderBinDetails( CGI_DEPTH_SORTED_BIN_CLOUDS, "DepthSortedBin" );
}

////////////////////////////////////////////////////////////////////////////////

void CloudsLayer::remove()
{
    _created = false;

    if ( _root->getNumChildren() > 0 )
    {
        _root->removeChildren( 0, _root->getNumChildren() );
    }
}
