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

#include <cgi/cgi_SkyDome.h>

#include <osg/Geode>
#include <osg/Geometry>
#include <osg/Light>
#include <osg/LightSource>

#include <Data.h>

#include <Defines.h>
#include <cgi/cgi_WGS84.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

SkyDome::SkyDome()
{
    _root = new osg::Group();

    _pat = new osg::PositionAttitudeTransform();
    _root->addChild( _pat.get() );

    createLighting();
    createSkyDome();
}

////////////////////////////////////////////////////////////////////////////////

SkyDome::~SkyDome() {}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::update()
{
    osg::Vec3d pos_wgs = WGS84( Data::get()->cgi.camera.latitude,
                                Data::get()->cgi.camera.longitude,
                                0.0 ).getPosition();

    double r_s = CGI_SKYDOME_RADIUS;
    double r_e = pos_wgs.length();

    double delta_h = -r_s * tan( asin( r_s / r_e ) );

    WGS84 wgs( Data::get()->cgi.camera.latitude,
               Data::get()->cgi.camera.longitude,
               delta_h );

    _pat->setAttitude( wgs.getAttitude() );
    _pat->setPosition( wgs.getPosition() );
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createLighting()
{
    osg::ref_ptr<osg::LightSource> lightSourceSun = new osg::LightSource();
    _pat->addChild( lightSourceSun.get() );

    osg::ref_ptr<osg::Light> lightSun = new osg::Light();

    lightSun->setLightNum( 0 );

    lightSun->setPosition( osg::Vec4d( 0.0, 0.0f, CGI_SKYDOME_RADIUS, 0.0f ) );

    osg::Vec4 color( 1.0, 1.0, 1.0, 1.0 );

    lightSun->setAmbient( color );
    lightSun->setDiffuse( color );
    lightSun->setSpecular( color );

    lightSun->setConstantAttenuation( 1.0 );

    lightSourceSun->setLight( lightSun.get() );

    lightSourceSun->setLocalStateSetModes( osg::StateAttribute::ON );
    lightSourceSun->setStateSetModes( *_pat->getOrCreateStateSet(), osg::StateAttribute::ON );
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createSkyDome()
{
    osg::ref_ptr<osg::Vec3Array> vertices;
    osg::ref_ptr<osg::Vec3Array> normals;
    osg::ref_ptr<osg::Vec4Array> colors;

    osg::ref_ptr<osg::Geode> dome = new osg::Geode();
    _pat->addChild( dome.get() );

    vertices = new osg::Vec3Array();
    normals  = new osg::Vec3Array();
    colors   = new osg::Vec4Array();

    ////////////////////////

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();
    dome->addDrawable( geometry.get() );

    int latSteps = 18;
    int lonSteps = 36;

    float latStep = osg::DegreesToRadians( 180.0f ) / (float)latSteps;
    float lonStep = osg::DegreesToRadians( 360.0f ) / (float)lonSteps;

    float latCurr = osg::DegreesToRadians( 90.0f );
    float latNext = osg::DegreesToRadians( 90.0f ) - latStep;
    float lonCurr = 0.0f;

    float xCurr = 0.0f;
    float yCurr = 0.0f;
    float zCurr = CGI_SKYDOME_RADIUS;

    float xNext = 0.0f;
    float yNext = 0.0f;
    float zNext = CGI_SKYDOME_RADIUS;

    float rCurr = 0.0f;
    float rNext = 0.0f;

    osg::Vec3 colorG( 0.0, 0.2, 0.0 );
    osg::Vec3 colorH( 0.7, 0.8, 0.9 );
    osg::Vec3 colorZ( 0.5, 0.7, 1.0 );

    for ( int latIter = 0; latIter < latSteps; latIter++ )
    {
        if ( latNext < osg::DegreesToRadians( -90.0f ) )
        {
            latNext = osg::DegreesToRadians( -90.0f );
        }

        zCurr = CGI_SKYDOME_RADIUS * sin( latCurr );
        rCurr = CGI_SKYDOME_RADIUS * cos( latCurr );

        for ( int lonIter = 0; lonIter < lonSteps + 1; lonIter++ )
        {
            lonCurr = lonIter * lonStep;

            xCurr = rCurr * cos( lonCurr - M_PI );
            yCurr = rCurr * sin( lonCurr - M_PI );

            zNext = CGI_SKYDOME_RADIUS * sin( latNext );
            rNext = CGI_SKYDOME_RADIUS * cos( latNext );

            xNext = rNext * cos( lonCurr - M_PI );
            yNext = rNext * sin( lonCurr - M_PI );

            osg::Vec3 pntCurr( xCurr, yCurr, zCurr );
            osg::Vec3 pntNext( xNext, yNext, zNext );

            vertices->push_back( pntCurr );
            vertices->push_back( pntNext );

            float coefCurr = pow( cos( latCurr ), 4 );
            float coefNext = pow( cos( latNext ), 4 );

            osg::Vec3 colorCurr = colorZ * ( 1.0 - coefCurr ) + colorH * coefCurr;
            osg::Vec3 colorNext = colorZ * ( 1.0 - coefNext ) + colorH * coefNext;

            if ( zNext > 0.0 )
            {
                coefCurr = pow( cos( latCurr ), 64 );
                coefNext = pow( cos( latNext ), 64 );

                colorCurr = colorG * ( 1.0 - coefCurr ) + colorH * coefCurr;
                colorNext = colorG * ( 1.0 - coefNext ) + colorH * coefNext;
            }

            colors->push_back( osg::Vec4( colorCurr, 1.0f ) );
            colors->push_back( osg::Vec4( colorNext, 1.0f ) );

            pntCurr.normalize();
            pntNext.normalize();

            normals->push_back( -pntCurr );
            normals->push_back( -pntNext );
        }

        latCurr -= latStep;
        latNext -= latStep;
    }

    geometry->setNormalArray( normals.get() );
    geometry->setNormalBinding( osg::Geometry::BIND_PER_VERTEX );

    geometry->setVertexArray( vertices.get() );
    geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::TRIANGLE_STRIP, 0, vertices->size() ) );

    geometry->setColorArray( colors.get() );
    geometry->setColorBinding( osg::Geometry::BIND_PER_VERTEX );

    ////////////////////////

    osg::ref_ptr<osg::StateSet> stateSet = dome->getOrCreateStateSet();
    stateSet->setMode( GL_LIGHTING , osg::StateAttribute::OFF );
    stateSet->setMode( GL_FOG      , osg::StateAttribute::OFF|osg::StateAttribute::OVERRIDE );
}
