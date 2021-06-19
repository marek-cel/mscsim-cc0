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
 ******************************************************************************/

#include <cgi/map/cgi_Map.h>

#include <cgi/cgi_Defines.h>

#include <cgi/map/cgi_Icons.h>
#include <cgi/map/cgi_Layers.h>
#include <cgi/map/cgi_Traces.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

// DCS World
//const osg::Vec3 Map::_colorOceans      = osg::Vec3( 0.49f, 0.73f, 0.78f );
//const osg::Vec3 Map::_colorLandmass    = osg::Vec3( 0.40f, 0.61f, 0.42f );
//const osg::Vec3 Map::_colorCoastline   = osg::Vec3( 0.01f, 0.01f, 0.01f );
//const osg::Vec3 Map::_colorCrops       = osg::Vec3( 0.00f, 0.00f, 0.00f );
//const osg::Vec3 Map::_colorGrassland   = osg::Vec3( 0.00f, 0.00f, 0.00f );
//const osg::Vec3 Map::_colorWoodland    = osg::Vec3( 0.35f, 0.54f, 0.36f );
//const osg::Vec3 Map::_colorBuiltup     = osg::Vec3( 0.78f, 0.51f, 0.00f );
//const osg::Vec3 Map::_colorWaterCourse = Map::_colorOceans;
//const osg::Vec3 Map::_colorWaterInland = Map::_colorOceans;
//const osg::Vec3 Map::_colorAirports    = osg::Vec3( 0.78f, 0.76f, 0.68f );
//const osg::Vec3 Map::_colorRailroads   = osg::Vec3( 0.11f, 0.11f, 0.11f );
//const osg::Vec3 Map::_colorRoads       = osg::Vec3( 0.75f, 0.00f, 0.00f );
//const osg::Vec3 Map::_colorBorders     = osg::Vec3( 0.00f, 0.00f, 0.00f );
//const osg::Vec3 Map::_colorAeroData    = osg::Vec3( 0.00f, 0.00f, 0.00f );

// Google Maps
//const osg::Vec3 Map::_colorOceans      = osg::Vec3( 0.67f, 0.85f, 1.00f );
//const osg::Vec3 Map::_colorLandmass    = osg::Vec3( 0.96f, 0.96f, 0.96f );
//const osg::Vec3 Map::_colorCoastline   = osg::Vec3( 0.01f, 0.01f, 0.01f );
//const osg::Vec3 Map::_colorCrops       = osg::Vec3( 0.00f, 0.00f, 0.00f );
//const osg::Vec3 Map::_colorGrassland   = osg::Vec3( 0.93f, 0.97f, 0.92f );
//const osg::Vec3 Map::_colorWoodland    = osg::Vec3( 0.72f, 0.84f, 0.71f );
//const osg::Vec3 Map::_colorBuiltup     = osg::Vec3( 0.91f, 0.91f, 0.91f );
//const osg::Vec3 Map::_colorWaterCourse = Map::_colorOceans;
//const osg::Vec3 Map::_colorWaterInland = Map::_colorOceans;
//const osg::Vec3 Map::_colorAirports    = osg::Vec3( 0.91f, 0.91f, 0.91f );
//const osg::Vec3 Map::_colorRailroads   = osg::Vec3( 0.85f, 0.85f, 0.85f );
//const osg::Vec3 Map::_colorRoads       = osg::Vec3( 0.98f, 0.70f, 0.61f );
//const osg::Vec3 Map::_colorBorders     = osg::Vec3( 0.48f, 0.49f, 0.49f );
//const osg::Vec3 Map::_colorAeroData    = osg::Vec3( 0.00f, 0.00f, 0.00f );

// OpenStreetMap
//const osg::Vec3 Map::_colorOceans      = osg::Vec3( 0.67f, 0.83f, 0.87f );
//const osg::Vec3 Map::_colorLandmass    = osg::Vec3( 0.95f, 0.94f, 0.91f );
//const osg::Vec3 Map::_colorCoastline   = osg::Vec3( 0.51f, 0.75f, 0.82f );
//const osg::Vec3 Map::_colorCrops       = osg::Vec3( 0.95f, 0.95f, 0.87f );
//const osg::Vec3 Map::_colorGrassland   = osg::Vec3( 0.88f, 0.95f, 0.81f );
//const osg::Vec3 Map::_colorWoodland    = osg::Vec3( 0.83f, 0.91f, 0.80f );
//const osg::Vec3 Map::_colorBuiltup     = osg::Vec3( 0.87f, 0.87f, 0.87f );
//const osg::Vec3 Map::_colorWaterCourse = Map::_colorOceans;
//const osg::Vec3 Map::_colorWaterInland = Map::_colorOceans;
//const osg::Vec3 Map::_colorAirports    = osg::Vec3( 0.74f, 0.74f, 0.80f );
//const osg::Vec3 Map::_colorRailroads   = osg::Vec3( 0.60f, 0.60f, 0.60f );
//const osg::Vec3 Map::_colorRoads       = osg::Vec3( 0.81f, 0.63f, 0.32f );
//const osg::Vec3 Map::_colorBorders     = osg::Vec3( 0.75f, 0.50f, 0.75f );
//const osg::Vec3 Map::_colorAeroData    = osg::Vec3( 0.00f, 0.00f, 0.00f );

// PANSA
//const osg::Vec3 Map::_colorOceans      = osg::Vec3( 0.84f, 0.91f, 0.97f );
//const osg::Vec3 Map::_colorLandmass    = osg::Vec3( 1.00f, 1.00f, 1.00f );
//const osg::Vec3 Map::_colorCoastline   = osg::Vec3( 0.01f, 0.01f, 0.01f );
//const osg::Vec3 Map::_colorCrops       = osg::Vec3( 1.00f, 1.00f, 1.00f );
//const osg::Vec3 Map::_colorGrassland   = osg::Vec3( 0.93f, 0.97f, 0.92f );
//const osg::Vec3 Map::_colorWoodland    = osg::Vec3( 0.79f, 0.92f, 0.79f );
//const osg::Vec3 Map::_colorBuiltup     = osg::Vec3( 0.84f, 0.83f, 0.84f );
//const osg::Vec3 Map::_colorWaterCourse = Map::_colorOceans;
//const osg::Vec3 Map::_colorWaterInland = Map::_colorOceans;
//const osg::Vec3 Map::_colorAirports    = osg::Vec3( 0.47f, 0.47f, 0.19f );
//const osg::Vec3 Map::_colorRailroads   = osg::Vec3( 0.51f, 0.51f, 0.51f );
//const osg::Vec3 Map::_colorRoads       = osg::Vec3( 0.67f, 0.66f, 0.66f );
//const osg::Vec3 Map::_colorBorders     = osg::Vec3( 0.00f, 0.00f, 0.00f );
//const osg::Vec3 Map::_colorAeroData    = osg::Vec3( 0.00f, 0.00f, 0.00f );

// ICAO Annex 4 - Aeronautical Charts
const osg::Vec3 Map::_colorOceans      = osg::Vec3( 0.73f, 0.77f, 0.82f );
const osg::Vec3 Map::_colorLandmass    = osg::Vec3( 1.00f, 1.00f, 1.00f );
const osg::Vec3 Map::_colorCoastline   = osg::Vec3( 0.11f, 0.20f, 0.39f );
const osg::Vec3 Map::_colorCrops       = osg::Vec3( 1.00f, 1.00f, 1.00f );
const osg::Vec3 Map::_colorGrassland   = osg::Vec3( 1.00f, 1.00f, 1.00f );
const osg::Vec3 Map::_colorWoodland    = osg::Vec3( 0.64f, 0.60f, 0.20f );
const osg::Vec3 Map::_colorBuiltup     = osg::Vec3( 0.99f, 0.92f, 0.00f );
const osg::Vec3 Map::_colorWaterCourse = Map::_colorCoastline;
const osg::Vec3 Map::_colorWaterInland = Map::_colorOceans;
const osg::Vec3 Map::_colorAirports    = osg::Vec3( 0.47f, 0.15f, 0.11f );
const osg::Vec3 Map::_colorRailroads   = osg::Vec3( 0.22f, 0.15f, 0.13f );
const osg::Vec3 Map::_colorRoads       = osg::Vec3( 0.94f, 0.22f, 0.14f );
const osg::Vec3 Map::_colorBorders     = osg::Vec3( 0.22f, 0.15f, 0.13f );
const osg::Vec3 Map::_colorAeroData    = osg::Vec3( 0.18f, 0.19f, 0.50f );

const double Map::_zOceans      = -24.0;
const double Map::_zLandmass    = -23.0;
const double Map::_zCrops       = -22.0;
const double Map::_zGrassland   = -21.0;
const double Map::_zWoodland    = -20.0;
const double Map::_zBuiltup     = -19.0;
const double Map::_zWaterCourse = -18.0;
const double Map::_zWaterInland = -17.0;
const double Map::_zSatellite   = -16.0;
const double Map::_zAirports    = -15.0;
const double Map::_zRailroads   = -14.0;
const double Map::_zRoads       = -13.0;
const double Map::_zBorders     = -12.0;
const double Map::_zCoastline   = -11.0;

const double Map::_zAerodromes  = -3.0;
const double Map::_zNavaids     = -3.0;
const double Map::_zTraces      = -2.0;
const double Map::_zSpeedLeader = -2.0;
const double Map::_zOwnship     = -1.0;

////////////////////////////////////////////////////////////////////////////////

Map::Map( const Module *parent ) :
    Module( parent ),

    _icons  ( NULLPTR ),
    _layers ( NULLPTR ),
    _traces ( NULLPTR )
{
    osg::ref_ptr<osg::StateSet> stateSet = _root->getOrCreateStateSet();

    stateSet->setMode( GL_RESCALE_NORMAL , osg::StateAttribute::ON  );
    stateSet->setMode( GL_LIGHTING       , osg::StateAttribute::OFF );
    stateSet->setMode( GL_LIGHT0         , osg::StateAttribute::OFF );
    stateSet->setMode( GL_BLEND          , osg::StateAttribute::ON  );
    stateSet->setMode( GL_ALPHA_TEST     , osg::StateAttribute::ON  );
    stateSet->setMode( GL_DEPTH_TEST     , osg::StateAttribute::ON  );
    stateSet->setMode( GL_DITHER         , osg::StateAttribute::OFF );
    stateSet->setRenderingHint( osg::StateSet::TRANSPARENT_BIN );
    stateSet->setRenderBinDetails( CGI_DEPTH_SORTED_BIN_MAP, "RenderBin" );

    addChild( _icons  = new Icons  ( this ) );
    addChild( _layers = new Layers ( this ) );
    addChild( _traces = new Traces ( this ) );
}

////////////////////////////////////////////////////////////////////////////////

Map::~Map() {}

////////////////////////////////////////////////////////////////////////////////

void Map::resetTraces()
{
    _traces->reset();
}

////////////////////////////////////////////////////////////////////////////////

void Map::setScale( double scale )
{
    _icons->setScale( scale );
}

////////////////////////////////////////////////////////////////////////////////

void Map::setVisibilityCrops( bool visible )
{
    _layers->setVisibilityCrops( visible );
}

////////////////////////////////////////////////////////////////////////////////

void Map::setVisibilityGrassland( bool visible )
{
    _layers->setVisibilityGrassland( visible );
}

////////////////////////////////////////////////////////////////////////////////

void Map::setVisibilityWoodland( bool visible )
{
    _layers->setVisibilityWoodland( visible );
}

////////////////////////////////////////////////////////////////////////////////

void Map::setVisibilityBuiltup( bool visible )
{
    _layers->setVisibilityBuiltup( visible );
}

////////////////////////////////////////////////////////////////////////////////

void Map::setVisibilityInWaters( bool visible )
{
    _layers->setVisibilityInWaters( visible );
}

////////////////////////////////////////////////////////////////////////////////

void Map::setVisibilitySatellite( bool visible )
{
    _layers->setVisibilitySatellite( visible );
}

////////////////////////////////////////////////////////////////////////////////

void Map::setVisibilityAirports( bool visible )
{
    _layers->setVisibilityAirports( visible );
}

////////////////////////////////////////////////////////////////////////////////

void Map::setVisibilityRailroads( bool visible )
{
    _layers->setVisibilityRailroads( visible );
}

////////////////////////////////////////////////////////////////////////////////

void Map::setVisibilityRoads( bool visible )
{
    _layers->setVisibilityRoads( visible );
}

////////////////////////////////////////////////////////////////////////////////

void Map::setVisibilityBorders( bool visible )
{
    _layers->setVisibilityBorders( visible );
}

////////////////////////////////////////////////////////////////////////////////

void Map::setVisibilityTraces( bool visible )
{
    _traces->setVisibility( visible );
}
