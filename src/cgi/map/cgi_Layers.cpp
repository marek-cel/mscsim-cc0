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

#include <cgi/map/cgi_Layers.h>

#include <osg/Geode>
#include <osg/Geometry>
#include <osg/LineWidth>
#include <osg/PositionAttitudeTransform>
#include <osg/Material>

#include <cgi/cgi_Geometry.h>
#include <cgi/cgi_Mercator.h>
#include <cgi/cgi_Models.h>

#include <cgi/map/cgi_Map.h>

#include <fdm/fdm_Path.h>
#include <fdm/utils/fdm_String.h>
#include <fdm/xml/fdm_XmlDoc.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

Layers::Layers( const Module *parent ) :
    Module( parent )
{
    _switchCrops     = new osg::Switch();
    _switchGrassland = new osg::Switch();
    _switchWoodland  = new osg::Switch();
    _switchBuiltup   = new osg::Switch();
    _switchRailroads = new osg::Switch();
    _switchRoads     = new osg::Switch();
    _switchAirports  = new osg::Switch();
    _switchSatellite = new osg::Switch();
    _switchBorders   = new osg::Switch();

    _oceans       = new osg::PositionAttitudeTransform();
    _landmass     = new osg::PositionAttitudeTransform();
    _coastline    = new osg::PositionAttitudeTransform();
    _crops        = new osg::PositionAttitudeTransform();
    _grassland    = new osg::PositionAttitudeTransform();
    _woodland     = new osg::PositionAttitudeTransform();
    _builtup      = new osg::PositionAttitudeTransform();
    _railroads    = new osg::PositionAttitudeTransform();
    _roads        = new osg::PositionAttitudeTransform();
    _airports     = new osg::PositionAttitudeTransform();
    _water_course = new osg::PositionAttitudeTransform();
    _water_inland = new osg::PositionAttitudeTransform();
    _satellite    = new osg::PositionAttitudeTransform();
    _borders      = new osg::PositionAttitudeTransform();

    _oceans       ->setPosition( osg::Vec3d( 0.0, 0.0, Map::_zOceans    ) );
    _landmass     ->setPosition( osg::Vec3d( 0.0, 0.0, Map::_zLandmass  ) );
    _coastline    ->setPosition( osg::Vec3d( 0.0, 0.0, Map::_zCoastline ) );
    _crops        ->setPosition( osg::Vec3d( 0.0, 0.0, Map::_zCrops     ) );
    _grassland    ->setPosition( osg::Vec3d( 0.0, 0.0, Map::_zGrassland ) );
    _woodland     ->setPosition( osg::Vec3d( 0.0, 0.0, Map::_zWoodland  ) );
    _builtup      ->setPosition( osg::Vec3d( 0.0, 0.0, Map::_zBuiltup   ) );
    _railroads    ->setPosition( osg::Vec3d( 0.0, 0.0, Map::_zRailroads ) );
    _roads        ->setPosition( osg::Vec3d( 0.0, 0.0, Map::_zRoads     ) );
    _airports     ->setPosition( osg::Vec3d( 0.0, 0.0, Map::_zAirports  ) );
    _water_course ->setPosition( osg::Vec3d( 0.0, 0.0, Map::_zWaterCourse ) );
    _water_inland ->setPosition( osg::Vec3d( 0.0, 0.0, Map::_zWaterInland ) );
    _satellite    ->setPosition( osg::Vec3d( 0.0, 0.0, Map::_zSatellite ) );
    _borders      ->setPosition( osg::Vec3d( 0.0, 0.0, Map::_zBorders   ) );

    _switchCrops     ->addChild( _crops     .get() );
    _switchGrassland ->addChild( _grassland .get() );
    _switchWoodland  ->addChild( _woodland  .get() );
    _switchBuiltup   ->addChild( _builtup   .get() );
    _switchRailroads ->addChild( _railroads .get() );
    _switchRoads     ->addChild( _roads     .get() );
    _switchAirports  ->addChild( _airports  .get() );
    _switchSatellite ->addChild( _satellite .get() );
    _switchBorders   ->addChild( _borders   .get() );

    _root->addChild( _oceans       .get() );
    _root->addChild( _landmass     .get() );
    _root->addChild( _coastline    .get() );
    _root->addChild( _water_course .get() );
    _root->addChild( _water_inland .get() );

    _root->addChild( _switchCrops     .get() );
    _root->addChild( _switchGrassland .get() );
    _root->addChild( _switchWoodland  .get() );
    _root->addChild( _switchBuiltup   .get() );
    _root->addChild( _switchRailroads .get() );
    _root->addChild( _switchRoads     .get() );
    _root->addChild( _switchAirports  .get() );
    _root->addChild( _switchSatellite .get() );
    _root->addChild( _switchBorders   .get() );

    initLayer( _oceans       .get() , Map::_colorOceans      );
    initLayer( _landmass     .get() , Map::_colorLandmass    );
    initLayer( _coastline    .get() , Map::_colorCoastline   );
    initLayer( _crops        .get() , Map::_colorCrops       );
    initLayer( _grassland    .get() , Map::_colorGrassland   );
    initLayer( _woodland     .get() , Map::_colorWoodland    );
    initLayer( _builtup      .get() , Map::_colorBuiltup     );
    initLayer( _railroads    .get() , Map::_colorRailroads   );
    initLayer( _roads        .get() , Map::_colorRoads       );
    initLayer( _airports     .get() , Map::_colorAirports    );
    initLayer( _water_course .get() , Map::_colorWaterCourse );
    initLayer( _water_inland .get() , Map::_colorWaterInland );
    initLayer( _borders      .get() , Map::_colorBorders     );

    createOcean();
    readLayers();
}

////////////////////////////////////////////////////////////////////////////////

Layers::~Layers() {}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilityCrops( bool visible )
{
    if ( visible )
        _switchCrops->setAllChildrenOn();
    else
        _switchCrops->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilityGrassland( bool visible )
{
    if ( visible )
        _switchGrassland->setAllChildrenOn();
    else
        _switchGrassland->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilityWoodland( bool visible )
{
    if ( visible )
        _switchWoodland->setAllChildrenOn();
    else
        _switchWoodland->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilityBuiltup( bool visible )
{
    if ( visible )
        _switchBuiltup->setAllChildrenOn();
    else
        _switchBuiltup->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilityRailroads( bool visible )
{
    if ( visible )
        _switchRailroads->setAllChildrenOn();
    else
        _switchRailroads->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilityRoads( bool visible )
{
    if ( visible )
        _switchRoads->setAllChildrenOn();
    else
        _switchRoads->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilityAirports( bool visible )
{
    if ( visible )
        _switchAirports->setAllChildrenOn();
    else
        _switchAirports->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilitySatellite( bool visible )
{
    if ( visible )
        _switchSatellite->setAllChildrenOn();
    else
        _switchSatellite->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilityBorders( bool visible )
{
    if ( visible )
        _switchBorders->setAllChildrenOn();
    else
        _switchBorders->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::createOcean()
{
    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    _oceans->addChild( geode.get() );

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();
    geode->addDrawable( geometry.get() );

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();

    v->push_back( osg::Vec3( -Mercator::_max_x, -Mercator::_max_y, 0.0 ) );
    v->push_back( osg::Vec3(  Mercator::_max_x, -Mercator::_max_y, 0.0 ) );
    v->push_back( osg::Vec3(  Mercator::_max_x,  Mercator::_max_y, 0.0 ) );
    v->push_back( osg::Vec3( -Mercator::_max_x,  Mercator::_max_y, 0.0 ) );

    Geometry::createQuad( geometry.get(), v.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Layers::initLayer( osg::Node* layer, osg::Vec3 color, float width )
{
    osg::ref_ptr<osg::Material> material = new osg::Material();
    material->setColorMode( osg::Material::AMBIENT_AND_DIFFUSE );
    material->setAmbient( osg::Material::FRONT, osg::Vec4( color, 1.0f ) );
    material->setDiffuse( osg::Material::FRONT, osg::Vec4( color, 1.0f ) );
    layer->getOrCreateStateSet()->setAttribute( material.get(),
            osg::StateAttribute::OVERRIDE | osg::StateAttribute::ON );

    osg::ref_ptr<osg::LineWidth> lineWidth = new osg::LineWidth();
    lineWidth->setWidth( width );
    layer->getOrCreateStateSet()->setAttributeAndModes( lineWidth.get(),
        osg::StateAttribute::ON );
}

////////////////////////////////////////////////////////////////////////////////

void Layers::readLayers()
{
    fdm::XmlDoc doc( fdm::Path::get( "data/map/layers/layers.xml" ) );

    if ( doc.isOpen() )
    {
        fdm::XmlNode rootNode = doc.getRootNode();

        if ( rootNode.isValid() )
        {
            if ( 0 == fdm::String::icompare( rootNode.getName(), "layers" ) )
            {
                fdm::XmlNode landmassNode    = rootNode.getFirstChildElement( "landmass"     );
                fdm::XmlNode coastlineNode   = rootNode.getFirstChildElement( "coastline"    );
                fdm::XmlNode cropsNode       = rootNode.getFirstChildElement( "crops"        );
                fdm::XmlNode grasslandNode   = rootNode.getFirstChildElement( "grassland"    );
                fdm::XmlNode woodlandNode    = rootNode.getFirstChildElement( "woodland"     );
                fdm::XmlNode builtupNode     = rootNode.getFirstChildElement( "builtup"      );
                fdm::XmlNode railroadsNode   = rootNode.getFirstChildElement( "railroads"    );
                fdm::XmlNode roadsNode       = rootNode.getFirstChildElement( "roads"        );
                fdm::XmlNode airportsNode    = rootNode.getFirstChildElement( "airports"     );
                fdm::XmlNode waterCourseNode = rootNode.getFirstChildElement( "water_course" );
                fdm::XmlNode waterInlandNode = rootNode.getFirstChildElement( "water_inland" );
                fdm::XmlNode satelliteNode   = rootNode.getFirstChildElement( "satellite"    );
                fdm::XmlNode bordersNode     = rootNode.getFirstChildElement( "borders"      );

                if ( landmassNode    .isValid() ) readLayer( landmassNode    , _landmass     .get() );
                if ( coastlineNode   .isValid() ) readLayer( coastlineNode   , _coastline    .get() );
                if ( cropsNode       .isValid() ) readLayer( cropsNode       , _crops        .get() );
                if ( grasslandNode   .isValid() ) readLayer( grasslandNode   , _grassland    .get() );
                if ( woodlandNode    .isValid() ) readLayer( woodlandNode    , _woodland     .get() );
                if ( builtupNode     .isValid() ) readLayer( builtupNode     , _builtup      .get() );
                if ( railroadsNode   .isValid() ) readLayer( railroadsNode   , _railroads    .get() );
                if ( roadsNode       .isValid() ) readLayer( roadsNode       , _roads        .get() );
                if ( airportsNode    .isValid() ) readLayer( airportsNode    , _airports     .get() );
                if ( waterCourseNode .isValid() ) readLayer( waterCourseNode , _water_course .get() );
                if ( waterInlandNode .isValid() ) readLayer( waterInlandNode , _water_inland .get() );
                if ( satelliteNode   .isValid() ) readLayer( satelliteNode   , _satellite    .get() );
                if ( bordersNode     .isValid() ) readLayer( bordersNode     , _borders      .get() );
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Layers::readLayer( const fdm::XmlNode &node, osg::Group *parent )
{
    fdm::XmlNode fileNode = node.getFirstChildElement( "file" );

    while ( fileNode.isValid() )
    {
        fdm::XmlNode fileTextNode = fileNode.getFirstChild();

        if ( fileTextNode.isValid() && fileTextNode.isText() )
        {
            std::string file = fileTextNode.getText();

            osg::ref_ptr<osg::Node> layerNode = Models::get( file );

            if ( layerNode.valid() )
            {
                parent->addChild( layerNode.get() );
            }
        }

        fileNode = fileNode.getNextSiblingElement( "file" );
    }
}
