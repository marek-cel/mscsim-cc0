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

Layers::Layers( Module *parent ) :
    Module( parent )
{
    m_switchCrops     = new osg::Switch();
    m_switchGrassland = new osg::Switch();
    m_switchWoodland  = new osg::Switch();
    m_switchBuiltup   = new osg::Switch();
    m_switchRailroads = new osg::Switch();
    m_switchRoads     = new osg::Switch();
    m_switchAirports  = new osg::Switch();
    m_switchSatellite = new osg::Switch();
    m_switchBorders   = new osg::Switch();

    m_oceans    = new osg::PositionAttitudeTransform();
    m_landmass  = new osg::PositionAttitudeTransform();
    m_crops     = new osg::PositionAttitudeTransform();
    m_grassland = new osg::PositionAttitudeTransform();
    m_woodland  = new osg::PositionAttitudeTransform();
    m_builtup   = new osg::PositionAttitudeTransform();
    m_railroads = new osg::PositionAttitudeTransform();
    m_roads     = new osg::PositionAttitudeTransform();
    m_airports  = new osg::PositionAttitudeTransform();
    m_water     = new osg::PositionAttitudeTransform();
    m_satellite = new osg::PositionAttitudeTransform();
    m_borders   = new osg::PositionAttitudeTransform();

    m_oceans    ->setPosition( osg::Vec3d( 0.0, 0.0, Map::zOceans    ) );
    m_landmass  ->setPosition( osg::Vec3d( 0.0, 0.0, Map::zLandmass  ) );
    m_crops     ->setPosition( osg::Vec3d( 0.0, 0.0, Map::zCrops     ) );
    m_grassland ->setPosition( osg::Vec3d( 0.0, 0.0, Map::zGrassland ) );
    m_woodland  ->setPosition( osg::Vec3d( 0.0, 0.0, Map::zWoodland  ) );
    m_builtup   ->setPosition( osg::Vec3d( 0.0, 0.0, Map::zBuiltup   ) );
    m_railroads ->setPosition( osg::Vec3d( 0.0, 0.0, Map::zRailroads ) );
    m_roads     ->setPosition( osg::Vec3d( 0.0, 0.0, Map::zRoads     ) );
    m_airports  ->setPosition( osg::Vec3d( 0.0, 0.0, Map::zAirports  ) );
    m_water     ->setPosition( osg::Vec3d( 0.0, 0.0, Map::zWater     ) );
    m_satellite ->setPosition( osg::Vec3d( 0.0, 0.0, Map::zSatellite ) );
    m_borders   ->setPosition( osg::Vec3d( 0.0, 0.0, Map::zBorders   ) );

    m_switchCrops     ->addChild( m_crops     .get() );
    m_switchGrassland ->addChild( m_grassland .get() );
    m_switchWoodland  ->addChild( m_woodland  .get() );
    m_switchBuiltup   ->addChild( m_builtup   .get() );
    m_switchRailroads ->addChild( m_railroads .get() );
    m_switchRoads     ->addChild( m_roads     .get() );
    m_switchAirports  ->addChild( m_airports  .get() );
    m_switchSatellite ->addChild( m_satellite .get() );
    m_switchBorders   ->addChild( m_borders   .get() );

    m_root->addChild( m_oceans   .get() );
    m_root->addChild( m_landmass .get() );
    m_root->addChild( m_water    .get() );

    m_root->addChild( m_switchCrops     .get() );
    m_root->addChild( m_switchGrassland .get() );
    m_root->addChild( m_switchWoodland  .get() );
    m_root->addChild( m_switchBuiltup   .get() );
    m_root->addChild( m_switchRailroads .get() );
    m_root->addChild( m_switchRoads     .get() );
    m_root->addChild( m_switchAirports  .get() );
    m_root->addChild( m_switchSatellite .get() );
    m_root->addChild( m_switchBorders   .get() );

    initLayer( m_oceans    .get() , Map::colorOceans    );
    initLayer( m_landmass  .get() , Map::colorLandmass  );
    initLayer( m_crops     .get() , Map::colorCrops     );
    initLayer( m_grassland .get() , Map::colorGrassland );
    initLayer( m_woodland  .get() , Map::colorWoodland  );
    initLayer( m_builtup   .get() , Map::colorBuiltup   );
    initLayer( m_railroads .get() , Map::colorRailroads );
    initLayer( m_roads     .get() , Map::colorRoads     );
    initLayer( m_airports  .get() , Map::colorAirports  );
    initLayer( m_water     .get() , Map::colorWater     );
    initLayer( m_borders   .get() , Map::colorBorders   );

    createOcean();
    readLayers();
}

////////////////////////////////////////////////////////////////////////////////

Layers::~Layers() {}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilityCrops( bool visible )
{
    if ( visible )
        m_switchCrops->setAllChildrenOn();
    else
        m_switchCrops->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilityGrassland( bool visible )
{
    if ( visible )
        m_switchGrassland->setAllChildrenOn();
    else
        m_switchGrassland->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilityWoodland( bool visible )
{
    if ( visible )
        m_switchWoodland->setAllChildrenOn();
    else
        m_switchWoodland->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilityBuiltup( bool visible )
{
    if ( visible )
        m_switchBuiltup->setAllChildrenOn();
    else
        m_switchBuiltup->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilityRailroads( bool visible )
{
    if ( visible )
        m_switchRailroads->setAllChildrenOn();
    else
        m_switchRailroads->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilityRoads( bool visible )
{
    if ( visible )
        m_switchRoads->setAllChildrenOn();
    else
        m_switchRoads->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilityAirports( bool visible )
{
    if ( visible )
        m_switchAirports->setAllChildrenOn();
    else
        m_switchAirports->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilitySatellite( bool visible )
{
    if ( visible )
        m_switchSatellite->setAllChildrenOn();
    else
        m_switchSatellite->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::setVisibilityBorders( bool visible )
{
    if ( visible )
        m_switchBorders->setAllChildrenOn();
    else
        m_switchBorders->setAllChildrenOff();
}

////////////////////////////////////////////////////////////////////////////////

void Layers::createOcean()
{
    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    m_oceans->addChild( geode.get() );

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();
    geode->addDrawable( geometry.get() );

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();

    v->push_back( osg::Vec3( -Mercator::maxX, -Mercator::maxY, 0.0 ) );
    v->push_back( osg::Vec3(  Mercator::maxX, -Mercator::maxY, 0.0 ) );
    v->push_back( osg::Vec3(  Mercator::maxX,  Mercator::maxY, 0.0 ) );
    v->push_back( osg::Vec3( -Mercator::maxX,  Mercator::maxY, 0.0 ) );

    Geometry::createQuad( geometry.get(), v.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Layers::initLayer( osg::Node* layer, osg::Vec3 color )
{
    osg::ref_ptr<osg::Material> material = new osg::Material();
    material->setColorMode( osg::Material::AMBIENT_AND_DIFFUSE );
    material->setAmbient( osg::Material::FRONT, osg::Vec4( color, 1.0f ) );
    material->setDiffuse( osg::Material::FRONT, osg::Vec4( color, 1.0f ) );
    layer->getOrCreateStateSet()->setAttribute( material.get(),
            osg::StateAttribute::OVERRIDE | osg::StateAttribute::ON );

//    osg::ref_ptr<osg::LineWidth> lineWidth = new osg::LineWidth();
//    lineWidth->setWidth( 2.0f );
//    layer->getOrCreateStateSet()->setAttributeAndModes( lineWidth.get(),
//        osg::StateAttribute::ON );
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
                fdm::XmlNode landmassNode  = rootNode.getFirstChildElement( "landmass"  );
                fdm::XmlNode cropsNode     = rootNode.getFirstChildElement( "crops"     );
                fdm::XmlNode grasslandNode = rootNode.getFirstChildElement( "grassland" );
                fdm::XmlNode woodlandNode  = rootNode.getFirstChildElement( "woodland"  );
                fdm::XmlNode builtupNode   = rootNode.getFirstChildElement( "builtup"   );
                fdm::XmlNode railroadsNode = rootNode.getFirstChildElement( "railroads" );
                fdm::XmlNode roadsNode     = rootNode.getFirstChildElement( "roads"     );
                fdm::XmlNode airportsNode  = rootNode.getFirstChildElement( "airports"  );
                fdm::XmlNode waterNode     = rootNode.getFirstChildElement( "water"     );
                fdm::XmlNode satelliteNode = rootNode.getFirstChildElement( "satellite" );
                fdm::XmlNode bordersNode   = rootNode.getFirstChildElement( "borders"   );

                if ( landmassNode  .isValid() ) readLayer( landmassNode  , m_landmass  .get() );
                if ( cropsNode     .isValid() ) readLayer( cropsNode     , m_crops     .get() );
                if ( grasslandNode .isValid() ) readLayer( grasslandNode , m_grassland .get() );
                if ( woodlandNode  .isValid() ) readLayer( woodlandNode  , m_woodland  .get() );
                if ( builtupNode   .isValid() ) readLayer( builtupNode   , m_builtup   .get() );
                if ( railroadsNode .isValid() ) readLayer( railroadsNode , m_railroads .get() );
                if ( roadsNode     .isValid() ) readLayer( roadsNode     , m_roads     .get() );
                if ( airportsNode  .isValid() ) readLayer( airportsNode  , m_airports  .get() );
                if ( waterNode     .isValid() ) readLayer( waterNode     , m_water     .get() );
                if ( satelliteNode .isValid() ) readLayer( satelliteNode , m_satellite .get() );
                if ( bordersNode   .isValid() ) readLayer( bordersNode   , m_borders   .get() );
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
