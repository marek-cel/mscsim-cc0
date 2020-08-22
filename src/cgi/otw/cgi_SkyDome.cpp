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

#include <cgi/otw/cgi_SkyDome.h>

#ifdef _MSC_VER
#   include <algorithm>
#endif

#include <cmath>

#include <osg/Geode>
#include <osg/Geometry>
#include <osg/Light>
#include <osg/PolygonOffset>

#include <Common.h>
#include <Data.h>

#include <cgi/otw/cgi_FogScene.h>

#include <cgi/cgi_Colors.h>
#include <cgi/cgi_Defines.h>
#include <cgi/cgi_Geometry.h>
#include <cgi/cgi_WGS84.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

const float SkyDome::_sunRadius  = CGI_SKYDOME_RADIUS * tan( osg::DegreesToRadians( CGI_SKYDOME_DIAMETER_SUN  / 2.0 ) );
const float SkyDome::_moonRadius = CGI_SKYDOME_RADIUS * tan( osg::DegreesToRadians( CGI_SKYDOME_DIAMETER_MOON / 2.0 ) );

const float SkyDome::_offsetStars   = -1000.0f;
const float SkyDome::_offsetSunHalo = -2000.0f;
const float SkyDome::_offsetSunFace = -3000.0f;
const float SkyDome::_offsetMoon    = -4000.0f;

////////////////////////////////////////////////////////////////////////////////

SkyDome::SkyDome( const Module *parent ) :
    Module( parent ),

    _textureSky  ( 0 ),
    _textureFog  ( 0 ),
    _textureSun  ( 0 ),
    _textureMoon ( 0 ),

    _skyScale ( 1.0f ),

    _sunAlpha  ( 0.0f ),
    _sunDelta  ( 0.0f ),
    _sunElev   ( 0.0f ),
    _sunAzim   ( 0.0f ),
    _moonAlpha ( 0.0f ),
    _moonDelta ( 0.0f ),
    _moonElev  ( 0.0f ),
    _moonAzim  ( 0.0f ),

    _starIntensity ( 0 ),
    _starsCount ( 0 )
{
    _root->setName( "SkyDome" );

    _switch = new osg::Switch();
    _root->addChild( _switch.get() );

    // position
    _position = new osg::PositionAttitudeTransform();
    _switch->addChild( _position.get() );

    // attitude (due to local horizon)
    _attitude = new osg::PositionAttitudeTransform();
    _position->addChild( _attitude.get() );

    // Sky PAT
    _patSky = new osg::PositionAttitudeTransform();
    _position->addChild( _patSky.get() );

    // Sun PAT
    _patSun = new osg::PositionAttitudeTransform();
    _attitude->addChild( _patSun.get() );

    // Moon PAT
    _patMoon = new osg::PositionAttitudeTransform();
    _patSky->addChild( _patMoon.get() );

    createTextures();

    createSky();
    createSun();
    createMoon();
    createStars();

    createLightMoon();
    createLightSun();

    _root->getOrCreateStateSet()->setMode( GL_BLEND, osg::StateAttribute::ON | osg::StateAttribute::OVERRIDE );
}

////////////////////////////////////////////////////////////////////////////////

SkyDome::~SkyDome()
{
    if ( _starIntensity ) delete [] _starIntensity;
    _starIntensity = 0;
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::update()
{
    /////////////////
    Module::update();
    /////////////////

    _dateTime.year   = Data::get()->dateTime.year;
    _dateTime.month  = Data::get()->dateTime.month;
    _dateTime.day    = Data::get()->dateTime.day;
    _dateTime.hour   = Data::get()->dateTime.hour;
    _dateTime.minute = Data::get()->dateTime.minute;
    _dateTime.second = Data::get()->dateTime.second;

    _ephemeris.update( _dateTime,
                       Data::get()->cgi.camera.latitude,
                       Data::get()->cgi.camera.longitude );

    _sunAlpha  = _ephemeris.getSunAlpha();
    _sunDelta  = _ephemeris.getSunDelta();
    _sunElev   = _ephemeris.getSunElev();
    _sunAzim   = _ephemeris.getSunAzim();
    _moonAlpha = _ephemeris.getMoonAlpha();
    _moonDelta = _ephemeris.getMoonDelta();
    _moonElev  = _ephemeris.getMoonElev();
    _moonAzim  = _ephemeris.getMoonAzim();

    ////////////////////////////////////////

#   ifdef SIM_SKYDOME_SCALING
    // scale
    if ( Data::get()->cgi.camera.altitude_agl > CGI_SKYDOME_SCALING_TRANSIENT_ALT_MIN )
    {
        // Scaling (distance to the horizon - simplified formula)
        _skyScale = 3600.0 * sqrt( Data::get()->cgi.camera.altitude_asl ) / CGI_SKYDOME_RADIUS;

        float coef = ( Data::get()->cgi.camera.altitude_agl - CGI_SKYDOME_SCALING_TRANSIENT_ALT_MIN )
                   / ( CGI_SKYDOME_SCALING_TRANSIENT_ALT_MAX - CGI_SKYDOME_SCALING_TRANSIENT_ALT_MIN );
        if ( coef > 1.0f ) coef = 1.0f;

        _skyScale *= coef;

        if ( _skyScale < 1.0 ) _skyScale = 1.0;
        if ( _skyScale > 9.0 ) _skyScale = 9.0;
    }
    else
    {
        _skyScale = 1.0;
    }
#   else
    _skyScale = 1.0;
#   endif

    // position
    osg::Vec3d pos_wgs = WGS84( Data::get()->cgi.camera.latitude,
                                Data::get()->cgi.camera.longitude,
                                0.0 ).getPosition();

    double r_s = _skyScale * CGI_SKYDOME_RADIUS;
    double r_e = pos_wgs.length();

    double delta_h = -r_s * tan( asin( r_s / r_e ) );

    WGS84 wgs( Data::get()->cgi.camera.latitude,
               Data::get()->cgi.camera.longitude,
               delta_h );

    _attitude->setAttitude( wgs.getAttitude() );
    _position->setPosition( wgs.getPosition() );
#   ifdef SIM_SKYDOME_SCALING
    osg::Vec3 vecSkyScale( _skyScale, _skyScale, _skyScale );
    _position ->setScale( vecSkyScale );
    _patSun   ->setScale( vecSkyScale );
    _patMoon  ->setScale( vecSkyScale );
#   endif

    osg::Quat Q_gst( -_ephemeris.getGST(), osg::Z_AXIS );

    osg::Quat Q_sun( M_PI_2, osg::X_AXIS,
                   _sunElev, osg::Y_AXIS,
                   _sunAzim, osg::Z_AXIS );

    osg::Quat Q_moon( 0.0, osg::X_AXIS,
              -_moonDelta, osg::Y_AXIS,
               _moonAlpha, osg::Z_AXIS );

    _patSky->setAttitude( Q_gst );
    _patSun->setAttitude( Q_sun );
    _patMoon->setAttitude( Q_moon );

    float sun_elevation_deg  = osg::RadiansToDegrees( _sunElev  );
    float moon_elevation_deg = osg::RadiansToDegrees( _moonElev );

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

    if ( Data::get()->cgi.environment.visibility < CGI_FOG_LIMIT )
    {
        unsigned short fog_num = FogScene::getFogNumber( sun_elevation_deg );

        if ( _textureFog != fog_num && fog_num < _texturesFog.size() )
        {
            _textureSky = 0;
            _textureFog = fog_num;
            _geodeSky->getOrCreateStateSet()->setTextureAttributeAndModes( 0, _texturesFog[ _textureFog ], osg::StateAttribute::ON );
        }
    }
    else
    {
        if ( _textureSky != sky_num && sky_num < _texturesSky.size() )
        {
            _textureFog = 0;
            _textureSky = sky_num;
            _geodeSky->getOrCreateStateSet()->setTextureAttributeAndModes( 0, _texturesSky[ _textureSky ], osg::StateAttribute::ON );
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

    osg::Vec4 sunColor( Colors::_sun[ numSun ], 1.0f );

    _materialSun->setColorMode( osg::Material::AMBIENT_AND_DIFFUSE );
    _materialSun->setAmbient( osg::Material::FRONT, sunColor );
    _materialSun->setDiffuse( osg::Material::FRONT, sunColor );

    _geodeSunFace->getOrCreateStateSet()->setAttribute( _materialSun.get() );

    if ( _textureSun != numSun && numSun < _texturesSun.size() )
    {
        _textureSun = numSun;

        _geodeSunHalo->getOrCreateStateSet()->setTextureAttributeAndModes( 0, _texturesSun[ _textureSun ], osg::StateAttribute::ON );
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
    double moonTmp = ( _ephemeris.getJD() - 2451550.0 ) / 29.530587981;
    double moonAge = moonTmp - floor( moonTmp );

    numMoon = floor( 7.0 * moonAge + 0.5 );
    numMoon = std::min( std::max( (int)numMoon, 0 ), 7 );

    if ( _textureMoon != numMoon && numMoon < _texturesMoon.size() )
    {
        _textureMoon = numMoon;

        _geodeMoon->getOrCreateStateSet()->setTextureAttributeAndModes( 0, _texturesMoon[ _textureMoon ], osg::StateAttribute::ON );
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
        _switchStars->setAllChildrenOn();

        if ( starsIntensity > 1.0f ) starsIntensity = 1.0f;

        osgSim::LightPointNode::LightPointList lightPointList = _stars->getLightPointList();

        for ( unsigned int i = 0; i < lightPointList.size(); i++ )
        {
            lightPointList[ i ]._intensity = starsIntensity * _starIntensity[ i ];
        }

        _stars->setLightPointList( lightPointList );
    }
    else
    {
        _switchStars->setAllChildrenOff();
    }

    // Sun Light
    osg::ref_ptr<osg::Light> lightSun = _lightSourceSun->getLight();

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

        osg::Vec4 sunLightColorDiffuse( Colors::_sun[ numSun ] * intensityDiffuse, 0.0f );
        osg::Vec4 sunLightColorAmbient( Colors::_sun[   10   ] * intensityAmbient, 0.0f );

        lightSun->setAmbient( sunLightColorAmbient );
        lightSun->setDiffuse( sunLightColorDiffuse );
    }

    // Moon Light
    osg::ref_ptr<osg::Light> lightMoon = _lightSourceMoon->getLight();

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

        osg::Vec4 moonLightColor( Colors::_moon * intensity, 0.0f );

        lightMoon->setAmbient( moonLightColor );
        lightMoon->setDiffuse( moonLightColor );
    }

    Data::get()->cgi.skyDome.skyScale = _skyScale;
    Data::get()->cgi.skyDome.sunAlpha = _sunAlpha;
    Data::get()->cgi.skyDome.sunDelta = _sunDelta;
    Data::get()->cgi.skyDome.sunElev  = _sunElev;
    Data::get()->cgi.skyDome.sunAzim  = _sunAzim;
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createTextures()
{
    _texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_0.png" ) );
    _texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_1.png" ) );
    _texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_2.png" ) );
    _texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_3.png" ) );
    _texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_4.png" ) );
    _texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_5.png" ) );
    _texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_6.png" ) );
    _texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_7.png" ) );
    _texturesSky.push_back( Textures::get( "data/cgi/textures/sky_clear_8.png" ) );

    _texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_0.png" ) );
    _texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_1.png" ) );
    _texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_2.png" ) );
    _texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_3.png" ) );
    _texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_4.png" ) );
    _texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_5.png" ) );
    _texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_6.png" ) );
    _texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_7.png" ) );
    _texturesFog.push_back( Textures::get( "data/cgi/textures/sky_foggy_8.png" ) );

    _texturesSun.push_back( Textures::get( "data/cgi/textures/sun_000.png" ) );
    _texturesSun.push_back( Textures::get( "data/cgi/textures/sun_010.png" ) );
    _texturesSun.push_back( Textures::get( "data/cgi/textures/sun_020.png" ) );
    _texturesSun.push_back( Textures::get( "data/cgi/textures/sun_030.png" ) );
    _texturesSun.push_back( Textures::get( "data/cgi/textures/sun_040.png" ) );
    _texturesSun.push_back( Textures::get( "data/cgi/textures/sun_050.png" ) );
    _texturesSun.push_back( Textures::get( "data/cgi/textures/sun_060.png" ) );
    _texturesSun.push_back( Textures::get( "data/cgi/textures/sun_070.png" ) );
    _texturesSun.push_back( Textures::get( "data/cgi/textures/sun_080.png" ) );
    _texturesSun.push_back( Textures::get( "data/cgi/textures/sun_090.png" ) );
    _texturesSun.push_back( Textures::get( "data/cgi/textures/sun_100.png" ) );

    _texturesMoon.push_back( Textures::get( "data/cgi/textures/moon_0.png" ) );
    _texturesMoon.push_back( Textures::get( "data/cgi/textures/moon_1.png" ) );
    _texturesMoon.push_back( Textures::get( "data/cgi/textures/moon_2.png" ) );
    _texturesMoon.push_back( Textures::get( "data/cgi/textures/moon_3.png" ) );
    _texturesMoon.push_back( Textures::get( "data/cgi/textures/moon_4.png" ) );
    _texturesMoon.push_back( Textures::get( "data/cgi/textures/moon_5.png" ) );
    _texturesMoon.push_back( Textures::get( "data/cgi/textures/moon_6.png" ) );
    _texturesMoon.push_back( Textures::get( "data/cgi/textures/moon_7.png" ) );

    _texturesStars.push_back( Textures::get( "data/cgi/textures/star.png" ) );
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createSky()
{
    _geodeSky = new osg::Geode();
    _attitude->addChild( _geodeSky.get() );

    createDome( _geodeSky, _texturesSky.at( _textureSky ), CGI_SKYDOME_RADIUS );

    _geodeSky->getOrCreateStateSet()->setRenderBinDetails( CGI_DEPTH_SORTED_BIN_SKY, "DepthSortedBin" );
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
    _patSun->addChild( offsetSun.get() );

    offsetSun->setPosition( osg::Vec3( CGI_SKYDOME_RADIUS, 0, 0 ) );

    _geodeSunFace = new osg::Geode();
    offsetSun->addChild( _geodeSunFace.get() );

    osg::ref_ptr<osg::Geometry> geom = new osg::Geometry();
    _geodeSunFace->addDrawable( geom.get() );

    Geometry::createFace( geom.get(), _sunRadius, false, 32 );

    osg::ref_ptr<osg::StateSet> stateSet = _geodeSunFace->getOrCreateStateSet();
    stateSet->setMode( GL_LIGHTING , osg::StateAttribute::OFF );

    // material
    _materialSun = new osg::Material();

    osg::Vec4 sunColor( Colors::_sun[ 0 ], 1.0f );

    _materialSun->setColorMode( osg::Material::AMBIENT_AND_DIFFUSE );
    _materialSun->setAmbient( osg::Material::FRONT, sunColor );
    _materialSun->setDiffuse( osg::Material::FRONT, sunColor );

    stateSet->setAttribute( _materialSun.get() );
    stateSet->setAttributeAndModes( new osg::PolygonOffset( 1.0f, _offsetSunFace ), osg::StateAttribute::ON );
    stateSet->setRenderBinDetails( CGI_DEPTH_SORTED_BIN_SUN, "DepthSortedBin" );
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createSunHalo()
{
    _geodeSunHalo = new osg::Geode();
    _patSun->addChild( _geodeSunHalo.get() );

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array;
    osg::ref_ptr<osg::Vec2Array> t = new osg::Vec2Array;
    osg::ref_ptr<osg::Vec3Array> n  = new osg::Vec3Array;

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();
    _geodeSunHalo->addDrawable( geometry.get() );

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

    osg::ref_ptr<osg::StateSet> stateSet = _geodeSunHalo->getOrCreateStateSet();
    stateSet->setMode( GL_LIGHTING , osg::StateAttribute::OFF );

    // texture
    geometry->setTexCoordArray( 0, t.get() );

    stateSet->setMode( GL_BLEND, osg::StateAttribute::ON );
    stateSet->setRenderingHint( osg::StateSet::TRANSPARENT_BIN );
    stateSet->setAttributeAndModes( new osg::PolygonOffset( 1.0f, _offsetSunHalo ), osg::StateAttribute::ON );
    stateSet->setRenderBinDetails( CGI_DEPTH_SORTED_BIN_SUN, "DepthSortedBin" );
    stateSet->setTextureAttributeAndModes( 0, _texturesSun.at( _textureSun ), osg::StateAttribute::ON );

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
    _patMoon->addChild( offsetMoon.get() );

    offsetMoon->setPosition( osg::Vec3( CGI_SKYDOME_RADIUS, 0, 0 ) );

    _geodeMoon = new osg::Geode();
    offsetMoon->addChild( _geodeMoon.get() );

    osg::ref_ptr<osg::Geometry> geom = new osg::Geometry();
    _geodeMoon->addDrawable( geom.get() );

    Geometry::createFace( geom.get(), _moonRadius, true, 32 );

    osg::ref_ptr<osg::StateSet> stateSet = _geodeMoon->getOrCreateStateSet();

    // texture
    osg::ref_ptr<osg::Texture2D> texture = _texturesMoon.at( _textureMoon );

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
    stateSet->setAttributeAndModes( new osg::PolygonOffset( 1.0f, _offsetMoon ), osg::StateAttribute::ON );
    stateSet->setRenderBinDetails( CGI_DEPTH_SORTED_BIN_MOON, "DepthSortedBin" );
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createStars()
{
    _switchStars = new osg::Switch();
    _patSky->addChild( _switchStars.get() );

    _stars = new osgSim::LightPointNode();
    _switchStars->addChild( _stars.get() );

    float magLimit = 4.5f;

    FILE *file = fopen( Path::get( "data/cgi/stars.csv" ).c_str(), "r" );

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

        //osg::notify(osg::ALWAYS) << starsCount << " stars brighter than " << magLimit << "mag" << std::endl;

        fclose( file );
    }

    // texture
    osg::ref_ptr<osg::Texture2D> texture = _texturesStars.at( 0 );
    if ( texture.valid() )
    {
        osg::ref_ptr<osg::StateSet> stateSet = _stars->getOrCreateStateSet();
        _stars->setPointSprite();
        stateSet->setTextureAttributeAndModes( 0, texture.get(), osg::StateAttribute::ON );
    }

    _switchStars->getOrCreateStateSet()->setAttributeAndModes( new osg::PolygonOffset( 1.0f, _offsetStars ), osg::StateAttribute::ON );
    _switchStars->getOrCreateStateSet()->setRenderBinDetails( CGI_DEPTH_SORTED_BIN_STARS, "DepthSortedBin" );
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
    float r = CGI_SKYDOME_RADIUS + _offsetStars;
    float S = 4.0 * M_PI * r * r;

    // total luminous flux
    float phi = S * E_C;

    intensity = phi / 1000.0;

    // intensity tuning
    intensity *= 2.0f;

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

    if ( _starsCount > 0 )
    {
        std::vector< float > tempIntensity;

        for ( int i = 0; i < _starsCount; i++ )
        {
            tempIntensity.push_back( _starIntensity[ i ] );
        }

        delete [] _starIntensity;

        _starIntensity = new float [ _starsCount + 1 ];

        for ( int i = 0; i < _starsCount; i++ )
        {
            _starIntensity[ i ] = tempIntensity.at( i );
        }
    }
    else
    {
        _starIntensity = new float [ 1 ];
    }

    _starIntensity[ _starsCount ] = star._intensity;

    _starsCount++;

    _stars->addLightPoint( star );
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createLightMoon()
{
    _lightSourceMoon = new osg::LightSource();
    _patMoon->addChild( _lightSourceMoon.get() );

    osg::ref_ptr<osg::Light> lightMoon = new osg::Light();

    lightMoon->setLightNum( CGI_LIGHT_MOON_NUM );

    lightMoon->setPosition( osg::Vec4d( CGI_SKYDOME_RADIUS, 0.0f, 0.0f, 0.0f ) );

    lightMoon->setAmbient( osg::Vec4( 1.0, 1.0, 1.0, 0.0 ) );
    lightMoon->setDiffuse( osg::Vec4( 1.0, 1.0, 1.0, 0.0 ) );
    lightMoon->setSpecular( osg::Vec4( 1.0, 1.0, 1.0, 0.0 ) );

    lightMoon->setConstantAttenuation( 1.0 );

    _lightSourceMoon->setLight( lightMoon.get() );

    _lightSourceMoon->setLocalStateSetModes( osg::StateAttribute::ON );
    _lightSourceMoon->setStateSetModes( *_root->getOrCreateStateSet(), osg::StateAttribute::ON );
}

////////////////////////////////////////////////////////////////////////////////

void SkyDome::createLightSun()
{
    _lightSourceSun = new osg::LightSource();
    _patSun->addChild( _lightSourceSun.get() );

    osg::ref_ptr<osg::Light> lightSun = new osg::Light();

    lightSun->setLightNum( CGI_LIGHT_SUN_NUM );

    lightSun->setPosition( osg::Vec4d( CGI_SKYDOME_RADIUS, 0.0f, 0.0f, 0.0f ) );

    lightSun->setAmbient(  osg::Vec4( Colors::_sun[ 10 ], 1.0 ) );
    lightSun->setDiffuse(  osg::Vec4( Colors::_sun[ 10 ], 1.0 ) );
    lightSun->setSpecular( osg::Vec4( Colors::_sun[ 10 ], 1.0 ) );

    lightSun->setConstantAttenuation( 1.0 );

    _lightSourceSun->setLight( lightSun.get() );

    _lightSourceSun->setLocalStateSetModes( osg::StateAttribute::ON );
    _lightSourceSun->setStateSetModes( *_root->getOrCreateStateSet(), osg::StateAttribute::ON );
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
