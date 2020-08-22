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

#include <cgi/otw/cgi_Scenery.h>

#include <osg/Geode>
#include <osg/Geometry>
#include <osg/Material>
#include <osg/TexEnv>

#include <Common.h>
#include <Data.h>

#include <fdm/utils/fdm_String.h>
#include <fdm/xml/fdm_XmlDoc.h>

#include <cgi/cgi_Geometry.h>
#include <cgi/cgi_Intersections.h>
#include <cgi/cgi_Textures.h>
#include <cgi/cgi_WGS84.h>

#include <cgi/otw/cgi_Airport.h>
#include <cgi/otw/cgi_Entities.h>
#include <cgi/otw/cgi_Landmark.h>
#include <cgi/otw/cgi_Terrain.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

Scenery::Scenery( const Module *parent ) :
    Module( parent )
{
    _root->setName( "Scenery" );

    _patMasterPos = new osg::PositionAttitudeTransform();
    _patMasterAtt = new osg::PositionAttitudeTransform();

    _patMasterPos->addChild( _patMasterAtt.get() );

    _root->addChild( _patMasterPos.get() );

    _on = new osgSim::OverlayNode( osgSim::OverlayNode::OBJECT_DEPENDENT_WITH_ORTHOGRAPHIC_OVERLAY );
    _on->setContinuousUpdate( true );
    _on->setOverlayTextureSizeHint( 1024 );
    _on->getOrCreateStateSet()->setTextureAttribute( 1, new osg::TexEnv( osg::TexEnv::DECAL ) );
    _on->getOrCreateStateSet()->setMode( GL_BLEND, osg::StateAttribute::ON );
    _on->getOrCreateStateSet()->setRenderingHint( osg::StateSet::TRANSPARENT_BIN );
    _on->getOrCreateStateSet()->setRenderBinDetails( CGI_DEPTH_SORTED_BIN_WORLD, "RenderBin" );
    _patMasterAtt->addChild( _on.get() );

    //_groupScenery = new osg::Group();
    //_on->addChild( _groupScenery.get() );

    _patSceneryPos = new osg::PositionAttitudeTransform();
    _patSceneryAtt = new osg::PositionAttitudeTransform();

    _patSceneryAtt->addChild( _patSceneryPos.get() );

    _on->addChild( _patSceneryAtt.get() );

    _patShadow = new osg::PositionAttitudeTransform();
    _on->setOverlaySubgraph( _patShadow.get() );

    createShadow();

    fdm::XmlDoc doc( Path::get( "data/cgi/scenery/scenery.xml" ).c_str() );

    if ( doc.isOpen() )
    {
        fdm::XmlNode rootNode = doc.getRootNode();

        if ( rootNode.isValid() )
        {
            if ( 0 == fdm::String::icompare( rootNode.getName(), "scenery" ) )
            {
                readAirports  ( rootNode );
                readTerrain   ( rootNode );
                readLandmarks ( rootNode ); // landmarks after terrain!
            }
        }
    }

    addChild( new Entities( this ) ); // entities after terrain!

    Intersections::instance()->setScenery( _root.get() );
}

////////////////////////////////////////////////////////////////////////////////

Scenery::~Scenery() {}

////////////////////////////////////////////////////////////////////////////////

void Scenery::addChild( Module *child )
{
    if ( child )
    {
        _children.push_back( child );
        _patSceneryPos->addChild( child->getNode() );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Scenery::update()
{
    /////////////////
    Module::update();
    /////////////////

    osg::Vec3d v( Data::get()->ownship.pos_x_wgs,
                  Data::get()->ownship.pos_y_wgs,
                  Data::get()->ownship.pos_z_wgs );

    WGS84 wgs( v );

    _patSceneryAtt->setAttitude(  wgs.getAttitude().inverse() );
    _patSceneryPos->setPosition( -wgs.getPosition() );

    _patMasterAtt->setAttitude(  wgs.getAttitude() );
    _patMasterPos->setPosition(  wgs.getPosition() );

    osg::Quat att( Data::get()->ownship.roll    , osg::X_AXIS,
                   Data::get()->ownship.pitch   , osg::Y_AXIS,
                   Data::get()->ownship.heading , osg::Z_AXIS );

    _patShadow->setAttitude( att );
}

////////////////////////////////////////////////////////////////////////////////

void Scenery::setShadow( const char *shadowFile )
{
    osg::ref_ptr<osg::Texture2D> texture = Textures::get( shadowFile );

    if ( !texture.valid() )
    {
        texture = Textures::get( "data/cgi/textures/shadow.png" );
    }

    _geodeShadow->getOrCreateStateSet()->setTextureAttributeAndModes( 0, texture.get(), osg::StateAttribute::ON );
}


////////////////////////////////////////////////////////////////////////////////

void Scenery::createShadow()
{
    const double w_2 = 50.0;
    const double l_2 = 50.0;

    _geodeShadow = new osg::Geode();
    _patShadow->addChild( _geodeShadow.get() );

    osg::ref_ptr<osg::Geometry> geom = new osg::Geometry();
    _geodeShadow->addDrawable( geom.get() );

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();

    v->push_back( osg::Vec3d( -w_2, -l_2, 0.0 ) );
    v->push_back( osg::Vec3d( -w_2,  l_2, 0.0 ) );
    v->push_back( osg::Vec3d(  w_2,  l_2, 0.0 ) );
    v->push_back( osg::Vec3d(  w_2, -l_2, 0.0 ) );

    Geometry::createQuad( geom.get(), v.get(), true );

    // material
    osg::ref_ptr<osg::Material> material = new osg::Material();
    material->setColorMode( osg::Material::AMBIENT_AND_DIFFUSE );
    material->setAmbient( osg::Material::FRONT, osg::Vec4f( 0.8f, 0.8f, 0.8f, 1.0f ) );
    material->setDiffuse( osg::Material::FRONT, osg::Vec4f( 0.5f, 0.5f, 0.5f, 1.0f ) );

    _geodeShadow->getOrCreateStateSet()->setAttribute( material.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Scenery::readAirports( const fdm::XmlNode &node )
{
    fdm::XmlNode airportsNode = node.getFirstChildElement( "airports" );

    if ( airportsNode.isValid() )
    {
        fdm::XmlNode airportNode = airportsNode.getFirstChildElement( "airport" );

        while ( airportNode.isValid() )
        {
            fdm::XmlNode nameNode = airportNode.getFirstChildElement( "name" );
            fdm::XmlNode icaoNode = airportNode.getFirstChildElement( "icao" );
            fdm::XmlNode fileNode = airportNode.getFirstChildElement( "file" );

            fdm::XmlNode latNode = airportNode.getFirstChildElement( "lat" );
            fdm::XmlNode lonNode = airportNode.getFirstChildElement( "lon" );
            fdm::XmlNode altNode = airportNode.getFirstChildElement( "alt" );

            if ( nameNode.isValid() && icaoNode.isValid() && fileNode.isValid()
              && latNode.isValid() && lonNode.isValid() && altNode.isValid() )
            {
                fdm::XmlNode nameTextNode = nameNode.getFirstChild();
                fdm::XmlNode icaoTextNode = icaoNode.getFirstChild();
                fdm::XmlNode fileTextNode = fileNode.getFirstChild();

                fdm::XmlNode latTextNode = latNode.getFirstChild();
                fdm::XmlNode lonTextNode = lonNode.getFirstChild();
                fdm::XmlNode altTextNode = altNode.getFirstChild();

                if ( nameTextNode.isValid() && nameTextNode.isText()
                  && icaoTextNode.isValid() && icaoTextNode.isText()
                  && fileTextNode.isValid() && fileTextNode.isText()
                  && latTextNode.isValid() && latTextNode.isText()
                  && lonTextNode.isValid() && lonTextNode.isText()
                  && altTextNode.isValid() && altTextNode.isText() )
                {
                    //std::string name = nameTextNode.getText();
                    //std::string icao = icaoTextNode.getText();
                    std::string file = fileTextNode.getText();

                    double lat = osg::DegreesToRadians( fdm::String::toDouble( latTextNode.getText() ) );
                    double lon = osg::DegreesToRadians( fdm::String::toDouble( lonTextNode.getText() ) );
                    double alt = fdm::String::toDouble( altTextNode.getText() );

                    addChild( new Airport( file.c_str(), lat, lon, alt, this ) );
                }
            }

            airportNode = airportNode.getNextSiblingElement( "airport" );
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Scenery::readLandmarks( const fdm::XmlNode &node )
{
    fdm::XmlNode landmarksNode = node.getFirstChildElement( "landmarks" );

    if ( landmarksNode.isValid() )
    {
        fdm::XmlNode landmarkNode = landmarksNode.getFirstChildElement( "landmark" );

        while ( landmarkNode.isValid() )
        {
            fdm::XmlNode fileNode = landmarkNode.getFirstChildElement( "file" );

            fdm::XmlNode latNode = landmarkNode.getFirstChildElement( "lat" );
            fdm::XmlNode lonNode = landmarkNode.getFirstChildElement( "lon" );
            fdm::XmlNode altNode = landmarkNode.getFirstChildElement( "alt" );
            fdm::XmlNode hdgNode = landmarkNode.getFirstChildElement( "hdg" );

            if ( fileNode.isValid()
              && latNode.isValid() && lonNode.isValid()
              && altNode.isValid() && hdgNode.isValid() )
            {
                fdm::XmlNode fileTextNode = fileNode.getFirstChild();

                fdm::XmlNode latTextNode = latNode.getFirstChild();
                fdm::XmlNode lonTextNode = lonNode.getFirstChild();
                fdm::XmlNode altTextNode = altNode.getFirstChild();
                fdm::XmlNode hdgTextNode = hdgNode.getFirstChild();

                if ( fileTextNode.isValid() && fileTextNode.isText()
                  && latTextNode.isValid() && latTextNode.isText()
                  && lonTextNode.isValid() && lonTextNode.isText()
                  && altTextNode.isValid() && altTextNode.isText()
                  && hdgTextNode.isValid() && hdgTextNode.isText() )
                {
                    std::string file = fileTextNode.getText();

                    double lat = osg::DegreesToRadians( fdm::String::toDouble( latTextNode.getText() ) );
                    double lon = osg::DegreesToRadians( fdm::String::toDouble( lonTextNode.getText() ) );
                    double alt = fdm::String::toDouble( altTextNode.getText() );
                    double hdg = osg::DegreesToRadians( fdm::String::toDouble( hdgTextNode.getText() ) );

                    bool reflection = fdm::String::toBool( landmarkNode.getAttribute( "reflection" ), false );

                    addChild( new Landmark( file.c_str(), lat, lon, alt, hdg, reflection, this ) );
                }
            }

            landmarkNode = landmarkNode.getNextSiblingElement( "landmark" );
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Scenery::readTerrain( const fdm::XmlNode &node )
{
    fdm::XmlNode terrainNode = node.getFirstChildElement( "terrain" );

    if ( terrainNode.isValid() )
    {
        fdm::XmlNode terrainTextNode = terrainNode.getFirstChild();

        if ( terrainTextNode.isValid() && terrainTextNode.isText() )
        {
            std::string file = terrainTextNode.getText();

            addChild( new Terrain( file.c_str(), this ) );
        }
    }
}
