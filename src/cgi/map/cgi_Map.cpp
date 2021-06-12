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
//const osg::Vec3 Map::_colorOceans      = osg::Vec3( 0.49, 0.73, 0.78 );
//const osg::Vec3 Map::_colorLandmass    = osg::Vec3( 0.40, 0.61, 0.42 );
//const osg::Vec3 Map::_colorCoastline   = osg::Vec3( 0.01, 0.01, 0.01 );
//const osg::Vec3 Map::_colorCrops       = osg::Vec3( 0.00, 0.00, 0.00 );
//const osg::Vec3 Map::_colorGrassland   = osg::Vec3( 0.00, 0.00, 0.00 );
//const osg::Vec3 Map::_colorWoodland    = osg::Vec3( 0.35, 0.54, 0.36 );
//const osg::Vec3 Map::_colorBuiltup     = osg::Vec3( 0.78, 0.51, 0.00 );
//const osg::Vec3 Map::_colorRailroads   = osg::Vec3( 0.11, 0.11, 0.11 );
//const osg::Vec3 Map::_colorRoads       = osg::Vec3( 0.75, 0.00, 0.00 );
//const osg::Vec3 Map::_colorAirports    = osg::Vec3( 0.78, 0.76, 0.68 );
//const osg::Vec3 Map::_colorWaterCourse = Map::_colorOceans;
//const osg::Vec3 Map::_colorWaterInland = Map::_colorOceans;
//const osg::Vec3 Map::_colorBorders     = osg::Vec3( 0.00, 0.00, 0.00 );
//const osg::Vec3 Map::_colorAeroData    = osg::Vec3( 0.00, 0.00, 0.00 );

// Google Maps
//const osg::Vec3 Map::_colorOceans      = osg::Vec3( 0.67, 0.85, 1.00 );
//const osg::Vec3 Map::_colorLandmass    = osg::Vec3( 0.96, 0.96, 0.96 );
//const osg::Vec3 Map::_colorCoastline   = osg::Vec3( 0.01, 0.01, 0.01 );
//const osg::Vec3 Map::_colorCrops       = osg::Vec3( 0.00, 0.00, 0.00 );
//const osg::Vec3 Map::_colorGrassland   = osg::Vec3( 0.93, 0.97, 0.92 );
//const osg::Vec3 Map::_colorWoodland    = osg::Vec3( 0.72, 0.84, 0.71 );
//const osg::Vec3 Map::_colorBuiltup     = osg::Vec3( 0.91, 0.91, 0.91 );
//const osg::Vec3 Map::_colorRailroads   = osg::Vec3( 0.85, 0.85, 0.85 );
//const osg::Vec3 Map::_colorRoads       = osg::Vec3( 0.98, 0.70, 0.61 );
//const osg::Vec3 Map::_colorAirports    = osg::Vec3( 0.91, 0.91, 0.91 );
//const osg::Vec3 Map::_colorWaterCourse = Map::_colorOceans;
//const osg::Vec3 Map::_colorWaterInland = Map::_colorOceans;
//const osg::Vec3 Map::_colorBorders     = osg::Vec3( 0.48, 0.49, 0.49 );
//const osg::Vec3 Map::_colorAeroData    = osg::Vec3( 0.00, 0.00, 0.00 );

// OpenStreetMap
//const osg::Vec3 Map::_colorOceans      = osg::Vec3( 0.67, 0.83, 0.87 );
//const osg::Vec3 Map::_colorLandmass    = osg::Vec3( 0.95, 0.94, 0.91 );
//const osg::Vec3 Map::_colorCoastline   = osg::Vec3( 0.51, 0.75, 0.82 );
//const osg::Vec3 Map::_colorCrops       = osg::Vec3( 0.95, 0.95, 0.87 );
//const osg::Vec3 Map::_colorGrassland   = osg::Vec3( 0.88, 0.95, 0.81 );
//const osg::Vec3 Map::_colorWoodland    = osg::Vec3( 0.83, 0.91, 0.80 );
//const osg::Vec3 Map::_colorBuiltup     = osg::Vec3( 0.87, 0.87, 0.87 );
//const osg::Vec3 Map::_colorRailroads   = osg::Vec3( 0.60, 0.60, 0.60 );
//const osg::Vec3 Map::_colorRoads       = osg::Vec3( 0.81, 0.63, 0.32 );
//const osg::Vec3 Map::_colorAirports    = osg::Vec3( 0.74, 0.74, 0.80 );
//const osg::Vec3 Map::_colorWaterCourse = Map::_colorOceans;
//const osg::Vec3 Map::_colorWaterInland = Map::_colorOceans;
//const osg::Vec3 Map::_colorBorders     = osg::Vec3( 0.75, 0.50, 0.75 );
//const osg::Vec3 Map::_colorAeroData    = osg::Vec3( 0.00, 0.00, 0.00 );

// PANSA
//const osg::Vec3 Map::_colorOceans      = osg::Vec3( 0.84, 0.91, 0.97 );
//const osg::Vec3 Map::_colorLandmass    = osg::Vec3( 1.00, 1.00, 1.00 );
//const osg::Vec3 Map::_colorCoastline   = osg::Vec3( 0.01, 0.01, 0.01 );
//const osg::Vec3 Map::_colorCrops       = osg::Vec3( 1.00, 1.00, 1.00 );
//const osg::Vec3 Map::_colorGrassland   = osg::Vec3( 0.93, 0.97, 0.92 );
//const osg::Vec3 Map::_colorWoodland    = osg::Vec3( 0.79, 0.92, 0.79 );
//const osg::Vec3 Map::_colorBuiltup     = osg::Vec3( 0.84, 0.83, 0.84 );
//const osg::Vec3 Map::_colorRailroads   = osg::Vec3( 0.51, 0.51, 0.51 );
//const osg::Vec3 Map::_colorRoads       = osg::Vec3( 0.67, 0.66, 0.66 );
//const osg::Vec3 Map::_colorAirports    = osg::Vec3( 0.47, 0.47, 0.19 );
//const osg::Vec3 Map::_colorWaterCourse = Map::_colorOceans;
//const osg::Vec3 Map::_colorWaterInland = Map::_colorOceans;
//const osg::Vec3 Map::_colorBorders     = osg::Vec3( 0.00, 0.00, 0.00 );
//const osg::Vec3 Map::_colorAeroData    = osg::Vec3( 0.00, 0.00, 0.00 );

// ICAO Annex 4 - Aeronautical Charts
const osg::Vec3 Map::_colorOceans      = osg::Vec3( 0.73, 0.77, 0.82 );
const osg::Vec3 Map::_colorLandmass    = osg::Vec3( 1.00, 1.00, 1.00 );
const osg::Vec3 Map::_colorCoastline   = osg::Vec3( 0.11, 0.20, 0.39 );
const osg::Vec3 Map::_colorCrops       = osg::Vec3( 1.00, 1.00, 1.00 );
const osg::Vec3 Map::_colorGrassland   = osg::Vec3( 1.00, 1.00, 1.00 );
const osg::Vec3 Map::_colorWoodland    = osg::Vec3( 0.64, 0.60, 0.20 );
const osg::Vec3 Map::_colorBuiltup     = osg::Vec3( 0.99, 0.92, 0.00 );
const osg::Vec3 Map::_colorRailroads   = osg::Vec3( 0.22, 0.15, 0.13 );
const osg::Vec3 Map::_colorRoads       = osg::Vec3( 0.94, 0.22, 0.14 );
const osg::Vec3 Map::_colorAirports    = osg::Vec3( 0.47, 0.15, 0.11 );
const osg::Vec3 Map::_colorWaterCourse = Map::_colorCoastline;
const osg::Vec3 Map::_colorWaterInland = Map::_colorOceans;
const osg::Vec3 Map::_colorBorders     = osg::Vec3( 0.22, 0.15, 0.13 );
const osg::Vec3 Map::_colorAeroData    = osg::Vec3( 0.18, 0.19, 0.50 );

const double Map::_zOceans      = -24.0;
const double Map::_zLandmass    = -23.0;
const double Map::_zCoastline   = -22.0;
const double Map::_zCrops       = -21.0;
const double Map::_zGrassland   = -20.0;
const double Map::_zWoodland    = -19.0;
const double Map::_zBuiltup     = -18.0;
const double Map::_zRailroads   = -17.0;
const double Map::_zRoads       = -16.0;
const double Map::_zWaterCourse = -15.0;
const double Map::_zWaterInland = -14.0;
const double Map::_zSatellite   = -13.0;
const double Map::_zAirports    = -12.0;
const double Map::_zBorders     = -11.0;

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

void Map::setVisibilityAirports( bool visible )
{
    _layers->setVisibilityAirports( visible );
}

////////////////////////////////////////////////////////////////////////////////

void Map::setVisibilitySatellite( bool visible )
{
    _layers->setVisibilitySatellite( visible );
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
