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

#include <cgi/otw/cgi_CloudsBlock.h>

#include <osg/AlphaFunc>
#include <osg/Billboard>
#include <osg/BlendFunc>
#include <osg/Geometry>
#include <osg/Material>

#include <Data.h>

#include <fdm/utils/fdm_Random.h>

#include <cgi/cgi_Defines.h>
#include <cgi/cgi_Geometry.h>
#include <cgi/cgi_WGS84.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

CloudsBlock::CloudsBlock( Module *parent ) :
    Module( parent ),
    m_framesCounter ( 0 ),
    m_created ( false ),
    m_count ( 0 ),
    m_base_asl ( 0.0 ),
    m_thickness ( 0.0 )
{
    m_textures.push_back( Textures::get( "data/cgi/textures/cloud_cu_1.png" ) );
    m_textures.push_back( Textures::get( "data/cgi/textures/cloud_cu_2.png" ) );
    m_textures.push_back( Textures::get( "data/cgi/textures/cloud_cu_3.png" ) );
    m_textures.push_back( Textures::get( "data/cgi/textures/cloud_cu_4.png" ) );
    m_textures.push_back( Textures::get( "data/cgi/textures/cloud_cu_5.png" ) );
    m_textures.push_back( Textures::get( "data/cgi/textures/cloud_cu_6.png" ) );
}

////////////////////////////////////////////////////////////////////////////////

CloudsBlock::~CloudsBlock() {}

////////////////////////////////////////////////////////////////////////////////

void CloudsBlock::update()
{
    /////////////////
    Module::update();
    /////////////////

    if ( Data::get()->environment.clouds.type == Data::Environment::Clouds::Block )
    {
        if ( m_framesCounter % 10 == 0 )
        {
            m_framesCounter = 0;

            float lat = Data::get()->camera.latitude;
            float lon = Data::get()->camera.longitude;
            float alt = m_base_asl;

            WGS84 wgs_cam( lat, lon, alt );

            float radius2 = CGI_SKYDOME_RADIUS * CGI_SKYDOME_RADIUS;

            if ( ( m_pos_wgs - wgs_cam.getPosition() ).length2() > 0.01 * radius2
              || !m_created || m_count != Data::get()->environment.clouds.data.block.count
              || m_base_asl != Data::get()->environment.clouds.data.block.base_asl
              || m_thickness != Data::get()->environment.clouds.data.block.thickness )
            {
                m_count = Data::get()->environment.clouds.data.block.count;
                m_base_asl = Data::get()->environment.clouds.data.block.base_asl;
                m_thickness = Data::get()->environment.clouds.data.block.thickness;

                create();
            }
            else
            {
                float azim = 0.0f;
                float dist = 0.0f;

                for ( unsigned int i = 0; i < m_patClouds.size(); i++ )
                {
                    osg::Vec3 pos_wgs = m_patClouds[ i ]->getPosition();

                    if ( ( wgs_cam.getPosition() - pos_wgs ).length2() > radius2 )
                    {
                        azim = fdm::Random::get( 0.0f, 2.0f * M_PI );
                        dist = 0.95f * CGI_SKYDOME_RADIUS;

                        osg::Vec3 pos_ned( dist * cos( azim ), dist * sin( azim ), 0.0f );

                        pos_wgs = wgs_cam.getPosition() + wgs_cam.getAttitude() * pos_ned;

                        WGS84 wgs_new( pos_wgs );
                        wgs_new = WGS84( wgs_new.getLat(), wgs_new.getLon(), alt );

                        m_patClouds[ i ]->setPosition( wgs_new.getPosition() );
                        m_patClouds[ i ]->setAttitude( wgs_new.getAttitude() );
                    }
                }
            }

            m_pos_wgs = wgs_cam.getPosition();
        }

        m_framesCounter++;
    }
    else
    {
        remove();

        m_framesCounter = 0;
        m_count = 0;
        m_base_asl = 0.0;
        m_thickness = 0.0;
    }
}

////////////////////////////////////////////////////////////////////////////////

void CloudsBlock::create()
{
    remove();

    m_created = true;

    float lat = Data::get()->camera.latitude;
    float lon = Data::get()->camera.longitude;
    float alt = m_base_asl;
    float ang = CGI_SKYDOME_RADIUS / 1852.0f / 60.0f;

    int cloudsNumber = m_count;
    cloudsNumber = std::min( std::max( cloudsNumber, 0 ), CGI_CLOUDS_MAX_COUNT );

    for ( int i = 0; i < cloudsNumber; i++ )
    {
        osg::ref_ptr< osg::PositionAttitudeTransform > pat = new osg::PositionAttitudeTransform();
        m_root->addChild( pat.get() );
        m_patClouds.push_back( pat );

        createBlock( pat.get() );

        float d_lat = osg::DegreesToRadians( fdm::Random::get( -ang, ang ) );
        float d_lon = osg::DegreesToRadians( fdm::Random::get( -ang, ang ) );

        WGS84 wgs( lat + d_lat, lon + d_lon, alt );

        pat->setPosition( wgs.getPosition() );
        pat->setAttitude( wgs.getAttitude() );
    }
}

////////////////////////////////////////////////////////////////////////////////

void CloudsBlock::createBlock( osg::Group *parent )
{
    int spritesNumber = fdm::Random::get( 2, 5 );
    spritesNumber = std::min( std::max( spritesNumber, 0 ), CGI_CLOUDS_MAX_SPRITES );

    for ( int i = 0; i < spritesNumber; i++ )
    {
        osg::ref_ptr<osg::PositionAttitudeTransform> pat = new osg::PositionAttitudeTransform();
        parent->addChild( pat.get() );

        createSprite( pat.get() );

        double scale = m_thickness * fdm::Random::get( 0.6f, 1.0f );

        osg::Vec3 pos( m_thickness * fdm::Random::get( 0.1f, 1.0f ),
                       m_thickness * fdm::Random::get( 0.1f, 1.0f ),
                       0.0 );

        pat->setScale( osg::Vec3( scale, scale, scale ) );
        pat->setPosition( pos );
    }
}

////////////////////////////////////////////////////////////////////////////////

void CloudsBlock::createSprite( osg::Group *parent )
{
    osg::ref_ptr<osg::Billboard> billboard = new osg::Billboard();
    parent->addChild( billboard.get() );

    billboard->setMode( osg::Billboard::AXIAL_ROT );
    billboard->setNormal( osg::Vec3f( 0.0f, 1.0f, 0.0f ) );

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();
    billboard->addDrawable( geometry.get(), osg::Vec3( 0.0, 0.0, 0.0 ) );

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();

    v->push_back( osg::Vec3f( -1.0f, 0.0f,  0.0f ) );
    v->push_back( osg::Vec3f(  1.0f, 0.0f,  0.0f ) );
    v->push_back( osg::Vec3f(  1.0f, 0.0f, -1.0f ) );
    v->push_back( osg::Vec3f( -1.0f, 0.0f, -1.0f ) );

    Geometry::createQuad( geometry.get(), v.get(), true );

    osg::ref_ptr<osg::StateSet> billboardStateSet = billboard->getOrCreateStateSet();

    // texture
    int i_tex = fdm::Random::get( 0, m_textures.size() - 1 );
    billboardStateSet->setTextureAttributeAndModes( 0, m_textures.at( i_tex ).get(), osg::StateAttribute::ON );

    // material
    osg::ref_ptr<osg::Material> material = new osg::Material();
    material->setColorMode( osg::Material::AMBIENT_AND_DIFFUSE );
    material->setAmbient( osg::Material::FRONT, osg::Vec4f( 0.8f, 0.8f, 0.8f, 1.0f ) );
    material->setDiffuse( osg::Material::FRONT, osg::Vec4f( 1.0f, 1.0f, 1.0f, 1.0f ) );
    billboardStateSet->setAttribute( material.get() );

    // alpha blending
    osg::ref_ptr<osg::AlphaFunc> alphaFunc = new osg::AlphaFunc();
    osg::ref_ptr<osg::BlendFunc> blendFunc = new osg::BlendFunc();
    alphaFunc->setFunction( osg::AlphaFunc::GEQUAL, 0.05 );
    billboardStateSet->setRenderingHint( osg::StateSet::TRANSPARENT_BIN );
    billboardStateSet->setAttributeAndModes( blendFunc.get(), osg::StateAttribute::ON );
    billboardStateSet->setAttributeAndModes( alphaFunc.get(), osg::StateAttribute::ON );
    billboardStateSet->setMode( GL_BLEND, osg::StateAttribute::ON | osg::StateAttribute::OVERRIDE );
    billboardStateSet->setRenderBinDetails( CGI_DEPTH_SORTED_BIN_CLOUDS, "DepthSortedBin" );
}

////////////////////////////////////////////////////////////////////////////////

void CloudsBlock::remove()
{
    m_created = false;

    if ( m_root->getNumChildren() > 0 )
    {
        m_root->removeChildren( 0, m_root->getNumChildren() );
    }

    for ( unsigned int i = 0; i < m_patClouds.size(); i++ )
    {
        m_patClouds[ i ] = 0;
    }

    m_patClouds.clear();
}
