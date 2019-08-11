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

#include <cgi/otw/cgi_SkyDome.h>

#include <math.h>
#include <stdio.h>

#include <osg/Geode>
#include <osg/Geometry>
#include <osg/Light>
#include <osg/PolygonOffset>

#include <Data.h>

#include <cgi/otw/cgi_FogScene.h>

#include <cgi/cgi_Color.h>
#include <cgi/cgi_Defines.h>
#include <cgi/cgi_Geometry.h>
#include <cgi/cgi_WGS84.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

const float SkyDome::m_sunRadius  = CGI_SKYDOME_RADIUS * tan( osg::DegreesToRadians( CGI_SKYDOME_DIAMETER_SUN  / 2.0 ) );
const float SkyDome::m_moonRadius = CGI_SKYDOME_RADIUS * tan( osg::DegreesToRadians( CGI_SKYDOME_DIAMETER_MOON / 2.0 ) );

const float SkyDome::m_offsetStars   = -1000.0f;
const float SkyDome::m_offsetSunHalo = -2000.0f;
const float SkyDome::m_offsetSunFace = -3000.0f;
const float SkyDome::m_offsetMoon    = -4000.0f;

////////////////////////////////////////////////////////////////////////////////

SkyDome::SkyDome( Module *parent ) :
    Module( parent ),

    m_textureSky  ( 0 ),
    m_textureFog  ( 0 ),
    m_textureSun  ( 0 ),
    m_textureMoon ( 0 ),

    m_skyScale ( 1.0f ),

    m_sunAlpha  ( 0.0f ),
    m_sunDelta  ( 0.0f ),
    m_sunElev   ( 0.0f ),
    m_sunAzim   ( 0.0f ),
    m_moonAlpha ( 0.0f ),
    m_moonDelta ( 0.0f ),
    m_moonElev  ( 0.0f ),
    m_moonAzim  ( 0.0f ),

    m_starIntensity ( 0 ),
    m_starsCount ( 0 )
{
    m_root->setName( "SkyDome" );

    m_switch = new osg::Switch();
    m_root->addChild( m_switch.get() );

    // position
    m_position = new osg::PositionAttitudeTransform();
    m_switch->addChild( m_position.get() );

    // attitude (due to local horizon)
    m_attitude = new osg::PositionAttitudeTransform();
    m_position->addChild( m_attitude.get() );

    // Sky PAT
    m_patSky = new osg::PositionAttitudeTransform();
    m_position->addChild( m_patSky.get() );

    // Sun PAT
    m_patSun = new osg::PositionAttitudeTransform();
    m_patSky->addChild( m_patSun.get() );

    // Moon PAT
    m_patMoon = new osg::PositionAttitudeTransform();
    m_patSky->addChild( m_patMoon.get() );

    createTextures();

    createSky();
    createSun();
    createMoon();
    createStars();

    createLightMoon();
    createLightSun();

    m_root->getOrCreateStateSet()->setMode( GL_BLEND, osg::StateAttribute::ON | osg::StateAttribute::OVERRIDE );
}

////////////////////////////////////////////////////////////////////////////////

SkyDome::~SkyDome()
{
    if ( m_starIntensity ) delete [] m_starIntensity;
    m_starIntensity = 0;
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::update()
{
    /////////////////
    Module::update();
    /////////////////

    m_dateTime.year   = Data::get()->dateTime.year;
    m_dateTime.month  = Data::get()->dateTime.month;
    m_dateTime.day    = Data::get()->dateTime.day;
    m_dateTime.hour   = Data::get()->dateTime.hour;
    m_dateTime.minute = Data::get()->dateTime.minute;
    m_dateTime.second = Data::get()->dateTime.second;

    m_ephemeris.update( m_dateTime, Data::get()->camera.latitude, Data::get()->camera.longitude );

    m_sunAlpha  = m_ephemeris.getSunAlpha();
    m_sunDelta  = m_ephemeris.getSunDelta();
    m_sunElev   = m_ephemeris.getSunElev();
    m_sunAzim   = m_ephemeris.getSunAzim();
    m_moonAlpha = m_ephemeris.getMoonAlpha();
    m_moonDelta = m_ephemeris.getMoonDelta();
    m_moonElev  = m_ephemeris.getMoonElev();
    m_moonAzim  = m_ephemeris.getMoonAzim();

    ////////////////////////////////////////

#   ifdef SIM_SKYDOME_SCALING
    // scale
    if ( Data::get()->camera.altitude_agl > CGI_SKYDOME_SCALING_TRANSIENT_ALT_MIN )
    {
        // Scaling (distance to the horizon - simplified formula)
        m_skyScale = 3600.0 * sqrt( Data::get()->camera.altitude_asl ) / CGI_SKYDOME_RADIUS;

        float coef = ( Data::get()->camera.altitude_agl - CGI_SKYDOME_SCALING_TRANSIENT_ALT_MIN )
                   / ( CGI_SKYDOME_SCALING_TRANSIENT_ALT_MAX - CGI_SKYDOME_SCALING_TRANSIENT_ALT_MIN );
        if ( coef > 1.0f ) coef = 1.0f;

        m_skyScale *= coef;

        if ( m_skyScale < 1.0 ) m_skyScale = 1.0;
        if ( m_skyScale > 9.0 ) m_skyScale = 9.0;
    }
    else
    {
        m_skyScale = 1.0;
    }
#   else
    m_skyScale = 1.0;
#   endif

    // position
    osg::Vec3d pos_wgs = WGS84( Data::get()->camera.latitude, Data::get()->camera.longitude, 0.0 ).getPosition();

    double r_s = m_skyScale * CGI_SKYDOME_RADIUS;
    double r_e = pos_wgs.length();

    double delta_h = -r_s * tan( asin( r_s / r_e ) );

    WGS84 wgs( Data::get()->camera.latitude, Data::get()->camera.longitude, delta_h );

    m_attitude->setAttitude( wgs.getAttitude() );
    m_position->setPosition( wgs.getPosition() );
#   ifdef SIM_SKYDOME_SCALING
    osg::Vec3 vecSkyScale( m_skyScale, m_skyScale, m_skyScale );
    m_position ->setScale( vecSkyScale );
    m_patSun   ->setScale( vecSkyScale );
    m_patMoon  ->setScale( vecSkyScale );
#   endif

    osg::Quat Q_gst( -m_ephemeris.getGST(), osg::Z_AXIS );

    osg::Quat Q_sun( -m_sunDelta, osg::Y_AXIS,
                      m_sunAlpha, osg::Z_AXIS,
   -Data::get()->camera.latitude, osg::X_AXIS );

    osg::Quat Q_moon( 0.0, osg::X_AXIS,
             -m_moonDelta, osg::Y_AXIS,
              m_moonAlpha, osg::Z_AXIS );

    m_patSky->setAttitude( Q_gst );
    m_patSun->setAttitude( Q_sun );
    m_patMoon->setAttitude( Q_moon );

    float sun_elevation_deg  = osg::RadiansToDegrees( m_sunElev  );
    float moon_elevation_deg = osg::RadiansToDegrees( m_moonElev );

    // Sky
    unsigned short sky_num = 0;

    if ( sun_elevation_deg >= -10.0f )
    {
        if ( sun_elevation_deg < 10.0f )
        {
            sky_num = floor( 8 * ( sun_elevation_deg + 10.0f ) / 20.0f + 0.5f );
            sky_num = std::min( std::max( (int)sky_num, 0 ), 8 );
        }
        else
        {
            sky_num = 8;
        }
    }

    if ( Data::get()->environment.visibility < CGI_FOG_LIMIT )
    {
        unsigned short fog_num = FogScene::getFogNumber( sun_elevation_deg );

        if ( m_textureFog != fog_num && fog_num < m_texturesFog.size() )
        {
            m_textureSky = 0;
            m_textureFog = fog_num;
            m_geodeSky->getOrCreateStateSet()->setTextureAttributeAndModes( 0, m_texturesFog[ m_textureFog ], osg::StateAttribute::ON );
        }
    }
    else
    {
        if ( m_textureSky != sky_num && sky_num < m_texturesSky.size() )
        {
            m_textureFog = 0;
            m_textureSky = sky_num;
            m_geodeSky->getOrCreateStateSet()->setTextureAttributeAndModes( 0, m_texturesSky[ m_textureSky ], osg::StateAttribute::ON );
        }
    }

    // Sun
    unsigned short numSun = 0;

    if ( sun_elevation_deg >= 0.0f && sun_elevation_deg < 10.0f )
    {
        numSun = floor( 10.0f * ( sun_elevation_deg ) / 10.0f + 0.5f );
    }
    else
    {
        numSun = ( sun_elevation_deg < 0.0f ) ? 0 : 10;
    }

    numSun = std::min( std::max( (int)numSun, 0 ), 10 );

    osg::Vec4 sunColor( Color::sun[ numSun ], 1.0f );

    m_materialSun->setColorMode( osg::Material::AMBIENT_AND_DIFFUSE );
    m_materialSun->setAmbient( osg::Material::FRONT, sunColor );
    m_materialSun->setDiffuse( osg::Material::FRONT, sunColor );

    m_geodeSunFace->getOrCreateStateSet()->setAttribute( m_materialSun.get() );

    if ( m_textureSun != numSun && numSun < m_texturesSun.size() )
    {
        m_textureSun = numSun;

        m_geodeSunHalo->getOrCreateStateSet()->setTextureAttributeAndModes( 0, m_texturesSun[ m_textureSun ], osg::StateAttribute::ON );
    }

    // Moon
    unsigned short numMoon = 0;

    // known new moon : 2000-01-06 18:15 UTC
    // synodic month  : 29.530587981 days
    // New Moon    : 0.0
    // 1st Quarter : 0.25
    // Full Moon   : 0.5
    // 3rd Quarter : 0.75
    // New Moon    : 1.0
    double moonTmp = ( m_ephemeris.getJD() - 2451550.0 ) / 29.530587981;
    double moonAge = moonTmp - floor( moonTmp );

    numMoon = floor( 7.0 * moonAge + 0.5 );
    numMoon = std::min( std::max( (int)numMoon, 0 ), 7 );

    if ( m_textureMoon != numMoon && numMoon < m_texturesMoon.size() )
    {
        m_textureMoon = numMoon;

        m_geodeMoon->getOrCreateStateSet()->setTextureAttributeAndModes( 0, m_texturesMoon[ m_textureMoon ], osg::StateAttribute::ON );
    }

    // Stars
    float starsIntensity = 0.0f;

    if ( -5.0f < sun_elevation_deg && sun_elevation_deg < 5.0f )
    {
        starsIntensity = 1.0f - ( sun_elevation_deg + 5.0f ) / 10.0f;
    }
    else
    {
        if ( sun_elevation_deg < -5.0f )
        {
            starsIntensity = 1.0f;
        }
        else
        {
            starsIntensity = 0.0f;
        }
    }

    if ( starsIntensity > 0.0f )
    {
        m_switchStars->setAllChildrenOn();

        if ( starsIntensity > 1.0f ) starsIntensity = 1.0f;

        osgSim::LightPointNode::LightPointList lightPointList = m_stars->getLightPointList();

        for ( unsigned int i = 0; i < lightPointList.size(); i++ )
        {
            lightPointList[ i ]._intensity = starsIntensity * m_starIntensity[ i ];
        }

        m_stars->setLightPointList( lightPointList );
    }
    else
    {
        m_switchStars->setAllChildrenOff();
    }

    // Sun Light
    osg::ref_ptr<osg::Light> lightSun = m_lightSourceSun->getLight();

    if ( lightSun.valid() )
    {
        float intensityDiffuse = 0.0f;
        float intensityAmbient = 0.0f;

        if ( -0.5f < sun_elevation_deg && sun_elevation_deg < 0.5f )
        {
            intensityDiffuse = sun_elevation_deg + 0.5f;
        }
        else
        {
            intensityDiffuse = ( sun_elevation_deg < -0.5f ) ? 0.0f : 1.0f;
        }

        if ( -5.0f < sun_elevation_deg && sun_elevation_deg < 5.0f )
        {
            intensityAmbient = ( sun_elevation_deg + 5.0f ) / 10.0f;
        }
        else
        {
            intensityAmbient = ( sun_elevation_deg < -5.0f ) ? 0.0f : 0.9f;
        }

        osg::Vec4 sunLightColorDiffuse( Color::sun[ numSun ] * intensityDiffuse, 0.0f );
        osg::Vec4 sunLightColorAmbient( Color::sun[   10   ] * intensityAmbient, 0.0f );

        lightSun->setAmbient( sunLightColorAmbient );
        lightSun->setDiffuse( sunLightColorDiffuse );
    }

    // Moon Light
    osg::ref_ptr<osg::Light> lightMoon = m_lightSourceMoon->getLight();

    if ( lightMoon.valid() )
    {
        float intensity = 0.0f;

        if ( 0.0f < moon_elevation_deg )
        {
            if ( moon_elevation_deg < 5.0f )
            {
                intensity = moon_elevation_deg / 5.0f;
            }
            else
            {
                intensity = 1.0f;
            }

            float ageCoef = 1.0 - fabs( 2.0f * ( moonAge - 0.5f ) );
            intensity *= ageCoef;
        }

        osg::Vec4 moonLightColor( Color::moon * intensity, 0.0f );

        lightMoon->setAmbient( moonLightColor );
        lightMoon->setDiffuse( moonLightColor );
    }

    Data::get()->skyDome.skyScale = m_skyScale;
    Data::get()->skyDome.sunAlpha = m_sunAlpha;
    Data::get()->skyDome.sunDelta = m_sunDelta;
    Data::get()->skyDome.sunElev  = m_sunElev;
    Data::get()->skyDome.sunAzim  = m_sunAzim;
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createTextures()
{
    m_texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_0.png" ) );
    m_texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_1.png" ) );
    m_texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_2.png" ) );
    m_texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_3.png" ) );
    m_texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_4.png" ) );
    m_texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_5.png" ) );
    m_texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_6.png" ) );
    m_texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_7.png" ) );
    m_texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_8.png" ) );

    m_texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_0.png" ) );
    m_texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_1.png" ) );
    m_texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_2.png" ) );
    m_texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_3.png" ) );
    m_texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_4.png" ) );
    m_texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_5.png" ) );
    m_texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_6.png" ) );
    m_texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_7.png" ) );
    m_texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_8.png" ) );

    m_texturesSun.push_back( Textures::get( "data/cgi/textures/sun_000.png" ) );
    m_texturesSun.push_back( Textures::get( "data/cgi/textures/sun_010.png" ) );
    m_texturesSun.push_back( Textures::get( "data/cgi/textures/sun_020.png" ) );
    m_texturesSun.push_back( Textures::get( "data/cgi/textures/sun_030.png" ) );
    m_texturesSun.push_back( Textures::get( "data/cgi/textures/sun_040.png" ) );
    m_texturesSun.push_back( Textures::get( "data/cgi/textures/sun_050.png" ) );
    m_texturesSun.push_back( Textures::get( "data/cgi/textures/sun_060.png" ) );
    m_texturesSun.push_back( Textures::get( "data/cgi/textures/sun_070.png" ) );
    m_texturesSun.push_back( Textures::get( "data/cgi/textures/sun_080.png" ) );
    m_texturesSun.push_back( Textures::get( "data/cgi/textures/sun_090.png" ) );
    m_texturesSun.push_back( Textures::get( "data/cgi/textures/sun_100.png" ) );

    m_texturesMoon.push_back( Textures::get( "data/cgi/textures/moon_0.png" ) );
    m_texturesMoon.push_back( Textures::get( "data/cgi/textures/moon_1.png" ) );
    m_texturesMoon.push_back( Textures::get( "data/cgi/textures/moon_2.png" ) );
    m_texturesMoon.push_back( Textures::get( "data/cgi/textures/moon_3.png" ) );
    m_texturesMoon.push_back( Textures::get( "data/cgi/textures/moon_4.png" ) );
    m_texturesMoon.push_back( Textures::get( "data/cgi/textures/moon_5.png" ) );
    m_texturesMoon.push_back( Textures::get( "data/cgi/textures/moon_6.png" ) );
    m_texturesMoon.push_back( Textures::get( "data/cgi/textures/moon_7.png" ) );

    m_texturesStars.push_back( Textures::get( "data/cgi/textures/star.png" ) );
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createSky()
{
    m_geodeSky = new osg::Geode();
    m_attitude->addChild( m_geodeSky.get() );

    createDome( m_geodeSky, m_texturesSky.at( m_textureSky ), CGI_SKYDOME_RADIUS );

    m_geodeSky->getOrCreateStateSet()->setRenderBinDetails( CGI_DEPTH_SORTED_BIN_SKY, "DepthSortedBin" );
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createSun()
{
    createSunFace();
    createSunHalo();
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createSunFace()
{
    osg::ref_ptr<osg::PositionAttitudeTransform> offsetSun = new osg::PositionAttitudeTransform();
    m_patSun->addChild( offsetSun.get() );

    offsetSun->setPosition( osg::Vec3( CGI_SKYDOME_RADIUS, 0, 0 ) );

    m_geodeSunFace = new osg::Geode();
    offsetSun->addChild( m_geodeSunFace.get() );

    osg::ref_ptr<osg::Geometry> geom = new osg::Geometry();
    m_geodeSunFace->addDrawable( geom.get() );

    Geometry::createFace( geom.get(), m_sunRadius, false, 32 );

    osg::ref_ptr<osg::StateSet> stateSet = m_geodeSunFace->getOrCreateStateSet();
    stateSet->setMode( GL_LIGHTING , osg::StateAttribute::OFF );

    // material
    m_materialSun = new osg::Material();

    osg::Vec4 sunColor( Color::sun[ 0 ], 1.0f );

    m_materialSun->setColorMode( osg::Material::AMBIENT_AND_DIFFUSE );
    m_materialSun->setAmbient( osg::Material::FRONT, sunColor );
    m_materialSun->setDiffuse( osg::Material::FRONT, sunColor );

    stateSet->setAttribute( m_materialSun.get() );
    stateSet->setAttributeAndModes( new osg::PolygonOffset( 1.0f, m_offsetSunFace ), osg::StateAttribute::ON );
    stateSet->setRenderBinDetails( CGI_DEPTH_SORTED_BIN_SUN, "DepthSortedBin" );
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createSunHalo()
{
    m_geodeSunHalo = new osg::Geode();
    m_patSun->addChild( m_geodeSunHalo.get() );

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array;
    osg::ref_ptr<osg::Vec2Array> t = new osg::Vec2Array;
    osg::ref_ptr<osg::Vec3Array> n  = new osg::Vec3Array;

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();
    m_geodeSunHalo->addDrawable( geometry.get() );

    double y = CGI_SKYDOME_RADIUS * tan( osg::DegreesToRadians( 5.0 ) );

    double azimuth = -40.0;

    while ( azimuth <= 40.0 )
    {
        double azimuth_rad = osg::DegreesToRadians( azimuth );

        double x = CGI_SKYDOME_RADIUS * cos( azimuth_rad );
        double z = CGI_SKYDOME_RADIUS * sin( azimuth_rad );

        v->push_back( osg::Vec3( x, -y, z ) );
        v->push_back( osg::Vec3( x,  y, z ) );

        osg::Vec3d norm( -x, 0, -z );
        norm.normalize();

        n->push_back( norm );
        n->push_back( norm );

        float temp = ( azimuth + 40.0 ) / 80.0;

        t->push_back( osg::Vec2( temp, 0 ) );
        t->push_back( osg::Vec2( temp, 1 ) );

        azimuth += 10.0;
    }

    geometry->setNormalArray( n.get() );
    geometry->setNormalBinding( osg::Geometry::BIND_OVERALL );

    geometry->setVertexArray( v.get() );

    geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::TRIANGLE_STRIP, 0, v->size() ) );

    osg::ref_ptr<osg::StateSet> stateSet = m_geodeSunHalo->getOrCreateStateSet();
    stateSet->setMode( GL_LIGHTING , osg::StateAttribute::OFF );

    // texture
    geometry->setTexCoordArray( 0, t.get() );

    stateSet->setMode( GL_BLEND, osg::StateAttribute::ON );
    stateSet->setRenderingHint( osg::StateSet::TRANSPARENT_BIN );
    stateSet->setAttributeAndModes( new osg::PolygonOffset( 1.0f, m_offsetSunHalo ), osg::StateAttribute::ON );
    stateSet->setRenderBinDetails( CGI_DEPTH_SORTED_BIN_SUN, "DepthSortedBin" );
    stateSet->setTextureAttributeAndModes( 0, m_texturesSun.at( m_textureSun ), osg::StateAttribute::ON );

    osg::ref_ptr<osg::Material> material = new osg::Material();

    material->setColorMode( osg::Material::AMBIENT_AND_DIFFUSE );
    material->setAmbient( osg::Material::FRONT, osg::Vec4( 1.0f, 1.0f, 1.0f, 1.0f ) );
    material->setDiffuse( osg::Material::FRONT, osg::Vec4( 1.0f, 1.0f, 1.0f, 1.0f ) );

    stateSet->setAttribute( material.get() );
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createMoon()
{
    osg::ref_ptr<osg::PositionAttitudeTransform> offsetMoon = new osg::PositionAttitudeTransform();
    m_patMoon->addChild( offsetMoon.get() );

    offsetMoon->setPosition( osg::Vec3( CGI_SKYDOME_RADIUS, 0, 0 ) );

    m_geodeMoon = new osg::Geode();
    offsetMoon->addChild( m_geodeMoon.get() );

    osg::ref_ptr<osg::Geometry> geom = new osg::Geometry();
    m_geodeMoon->addDrawable( geom.get() );

    Geometry::createFace( geom.get(), m_moonRadius, true, 32 );

    osg::ref_ptr<osg::StateSet> stateSet = m_geodeMoon->getOrCreateStateSet();

    // texture
    osg::ref_ptr<osg::Texture2D> texture = m_texturesMoon.at( m_textureMoon );

    if ( texture.valid() )
    {
        stateSet->setMode( GL_BLEND, osg::StateAttribute::ON );
        stateSet->setRenderingHint( osg::StateSet::TRANSPARENT_BIN );
        stateSet->setTextureAttributeAndModes( 0, texture.get(), osg::StateAttribute::ON );
    }

    stateSet->setMode( GL_LIGHTING , osg::StateAttribute::OFF );

    // material
    osg::ref_ptr<osg::Material> material = new osg::Material();

    material->setColorMode( osg::Material::AMBIENT_AND_DIFFUSE );
    material->setAmbient( osg::Material::FRONT, osg::Vec4( 1.0, 1.0, 1.0, 1.0 ) );
    material->setDiffuse( osg::Material::FRONT, osg::Vec4( 1.0, 1.0, 1.0, 1.0 ) );

    stateSet->setAttribute( material.get() );
    stateSet->setAttributeAndModes( new osg::PolygonOffset( 1.0f, m_offsetMoon ), osg::StateAttribute::ON );
    stateSet->setRenderBinDetails( CGI_DEPTH_SORTED_BIN_MOON, "DepthSortedBin" );
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createStars()
{
    m_switchStars = new osg::Switch();
    m_patSky->addChild( m_switchStars.get() );

    m_stars = new osgSim::LightPointNode();
    m_switchStars->addChild( m_stars.get() );

    float magLimit = 4.5f;

    FILE *file = fopen( "data/cgi/stars.csv", "r" );

    if ( file )
    {
        float alpha = 0.0f;
        float delta = 0.0f;
        float mag = 0.0f;

        while ( !feof( file ) )
        {
            if ( fscanf( file, "%f,%f,%f\n", &alpha, &delta, &mag ) == 3 )
            {
                if ( mag < magLimit )
                {
                    createStar( alpha, delta, mag );
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }

        //osg::notify(osg::ALWAYS) << m_starsCount << " stars brighter than " << magLimit << "mag" << std::endl;

        fclose( file );
    }

    // texture
    osg::ref_ptr<osg::Texture2D> texture = m_texturesStars.at( 0 );
    if ( texture.valid() )
    {
        osg::ref_ptr<osg::StateSet> stateSet = m_stars->getOrCreateStateSet();
        m_stars->setPointSprite();
        stateSet->setTextureAttributeAndModes( 0, texture.get(), osg::StateAttribute::ON );
    }

    m_switchStars->getOrCreateStateSet()->setAttributeAndModes( new osg::PolygonOffset( 1.0f, m_offsetStars ), osg::StateAttribute::ON );
    m_switchStars->getOrCreateStateSet()->setRenderBinDetails( CGI_DEPTH_SORTED_BIN_STARS, "DepthSortedBin" );
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createStar( float alpha, float delta, float mag, bool trueIntensity )
{
    float intensity = 0.0f;

    if ( !trueIntensity )
    {
        if ( mag < 1.0 ) mag = 1.0;
        if ( mag > 3.0 ) mag = 3.0;
    }

    // illuminance (bisection)
    double E_0 = 1.0e-7;
    double E_1 = 1.0;

    double E_C = E_0 + ( E_1 - E_0 ) / 2.0;

    for ( int i = 0; i < 10000; i++ )
    {
        double m = -2.5 * log10( E_C ) - 14.05;

        if ( m > mag )
            E_0 = E_C;
        else
            E_1 = E_C;

        E_C = E_0 + ( E_1 - E_0 ) / 2.0;

        if ( fabs( mag - m ) < 0.001 ) break;
    }

    // sphere area
    float r = CGI_SKYDOME_RADIUS + m_offsetStars;
    float S = 4.0 * M_PI * r * r;

    // total luminous flux
    float phi = S * E_C;

    intensity = phi / 1000.0;

    ////////////////////////////////////////

    double alpha_rad = M_PI * alpha / 12.0;
    double delta_rad = osg::DegreesToRadians( delta );

    double z  = r * sin( delta_rad );
    double xy = r * cos( delta_rad );
    double x  = xy * cos( alpha_rad );
    double y  = xy * sin( alpha_rad );

    osg::Vec3d position( x, y, z );
    osg::Vec4 color( 1.0, 1.0, 1.0, 1.0 );

    osgSim::LightPoint star( position, color );

    star._intensity = intensity;
    star._radius    = 0.0005f * CGI_SKYDOME_RADIUS;

    if ( m_starsCount > 0 )
    {
        std::vector< float > tempIntensity;

        for ( int i = 0; i < m_starsCount; i++ )
        {
            tempIntensity.push_back( m_starIntensity[ i ] );
        }

        delete [] m_starIntensity;

        m_starIntensity = new float [ m_starsCount + 1 ];

        for ( int i = 0; i < m_starsCount; i++ )
        {
            m_starIntensity[ i ] = tempIntensity.at( i );
        }
    }
    else
    {
        m_starIntensity = new float [ 1 ];
    }

    m_starIntensity[ m_starsCount ] = star._intensity;

    m_starsCount++;

    m_stars->addLightPoint( star );
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createLightMoon()
{
    m_lightSourceMoon = new osg::LightSource();
    m_patMoon->addChild( m_lightSourceMoon.get() );

    osg::ref_ptr<osg::Light> lightMoon = new osg::Light();

    lightMoon->setLightNum( CGI_LIGHT_MOON_NUM );

    lightMoon->setPosition( osg::Vec4d( CGI_SKYDOME_RADIUS, 0.0f, 0.0f, 0.0f ) );

    lightMoon->setAmbient( osg::Vec4( 1.0, 1.0, 1.0, 0.0 ) );
    lightMoon->setDiffuse( osg::Vec4( 1.0, 1.0, 1.0, 0.0 ) );
    lightMoon->setSpecular( osg::Vec4( 1.0, 1.0, 1.0, 0.0 ) );

    lightMoon->setConstantAttenuation( 1.0 );

    m_lightSourceMoon->setLight( lightMoon.get() );

    m_lightSourceMoon->setLocalStateSetModes( osg::StateAttribute::ON );
    m_lightSourceMoon->setStateSetModes( *m_root->getOrCreateStateSet(), osg::StateAttribute::ON );
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createLightSun()
{
    m_lightSourceSun = new osg::LightSource();
    m_patSun->addChild( m_lightSourceSun.get() );

    osg::ref_ptr<osg::Light> lightSun = new osg::Light();

    lightSun->setLightNum( CGI_LIGHT_SUN_NUM );

    lightSun->setPosition( osg::Vec4d( CGI_SKYDOME_RADIUS, 0.0f, 0.0f, 0.0f ) );

    lightSun->setAmbient( osg::Vec4( Color::sun[ 10 ], 1.0 ) );
    lightSun->setDiffuse( osg::Vec4( Color::sun[ 10 ], 1.0 ) );
    lightSun->setSpecular( osg::Vec4( Color::sun[ 10 ], 1.0 ) );

    lightSun->setConstantAttenuation( 1.0 );

    m_lightSourceSun->setLight( lightSun.get() );

    m_lightSourceSun->setLocalStateSetModes( osg::StateAttribute::ON );
    m_lightSourceSun->setStateSetModes( *m_root->getOrCreateStateSet(), osg::StateAttribute::ON );
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createDome( osg::Geode *dome, osg::Texture2D *texture,
                          float radius, bool blend )
{
    osg::ref_ptr<osg::Geometry> geom = new osg::Geometry();
    dome->addDrawable( geom.get() );

    Geometry::createDome( geom, radius, true, Geometry::Cylindrical, 18, 36 );

    // state set
    osg::ref_ptr<osg::StateSet> stateSet = dome->getOrCreateStateSet();
    stateSet->setMode( GL_LIGHTING, osg::StateAttribute::OFF );

    // texture
    if ( texture != 0 )
    {
        if ( blend )
        {
            stateSet->setMode( GL_BLEND, osg::StateAttribute::ON );
            stateSet->setRenderingHint( osg::StateSet::TRANSPARENT_BIN );
        }

        stateSet->setTextureAttributeAndModes( 0, texture, osg::StateAttribute::ON );
    }

    // material
    osg::ref_ptr<osg::Material> material = new osg::Material();

    material->setColorMode( osg::Material::AMBIENT_AND_DIFFUSE );
    material->setAmbient( osg::Material::FRONT, osg::Vec4( 1.0f, 1.0f, 1.0f, 1.0f ) );
    material->setDiffuse( osg::Material::FRONT, osg::Vec4( 1.0f, 1.0f, 1.0f, 1.0f ) );

    stateSet->setAttribute( material.get() );
}
