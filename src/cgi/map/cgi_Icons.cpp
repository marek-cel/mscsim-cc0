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

#include <cgi/map/cgi_Icons.h>

#include <osg/LineWidth>
#include <osg/Material>

#include <Data.h>

#include <cgi/cgi_Geometry.h>
#include <cgi/cgi_Mercator.h>
#include <cgi/cgi_Models.h>
#include <cgi/cgi_Textures.h>

#include <cgi/map/cgi_Map.h>

#include <fdm/utils/fdm_WGS84.h>

#include <nav/nav_DataBase.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

Icons::Icons( const Module *parent ) :
    Module( parent )
{
    _symbolAerodrome    = Models::get( "data/map/icons/aerodrome.stl" );
    _symbolNavaidVOR    = Models::get( "data/map/icons/vor.stl" );
    _symbolNavaidVORTAC = Models::get( "data/map/icons/vortac.stl" );
    _symbolNavaidVORDME = Models::get( "data/map/icons/vor_dme.stl" );
    _symbolNavaidILSLOC = createSymbolILS();

    osg::ref_ptr<osg::Material> material = new osg::Material();

    material->setColorMode( osg::Material::AMBIENT_AND_DIFFUSE );
    material->setAmbient( osg::Material::FRONT, osg::Vec4( Map::_colorAeroData, 1.0f ) );
    material->setDiffuse( osg::Material::FRONT, osg::Vec4( Map::_colorAeroData, 1.0f ) );

    _symbolAerodrome    ->getOrCreateStateSet()->setAttribute( material.get() );
    _symbolNavaidVOR    ->getOrCreateStateSet()->setAttribute( material.get() );
    _symbolNavaidVORTAC ->getOrCreateStateSet()->setAttribute( material.get() );
    _symbolNavaidVORDME ->getOrCreateStateSet()->setAttribute( material.get() );

    createOwnship();

    initAerodromes();
    initLocalizers();
    initNavaids();
    initRunways();

    setScale( 1.0 );
}

////////////////////////////////////////////////////////////////////////////////

Icons::~Icons() {}

////////////////////////////////////////////////////////////////////////////////

void Icons::update()
{
    updateOwnship();
}

////////////////////////////////////////////////////////////////////////////////

void Icons::setScale( double scale )
{
    double s = 1.5 * 1.0e6 * scale;
    osg::Vec3d sv( s, s, 1.0 );

    _ownship.pat->setScale( sv );

    for ( PATs::iterator it = _aerodromes.begin(); it != _aerodromes.end(); it++ )
    {
        (*it)->setScale( sv );
    }

    for ( PATs::iterator it = _navaids.begin(); it != _navaids.end(); it++ )
    {
        (*it)->setScale( sv );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Icons::createIcon( osg::Group *parent, float z,
                        const std::string &textureFile )
{
    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    parent->addChild( geode.get() );

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();
    geode->addDrawable( geometry.get() );

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();  // vertices

    v->push_back( osg::Vec3( -0.5f, -0.5f, z ) );
    v->push_back( osg::Vec3(  0.5f, -0.5f, z ) );
    v->push_back( osg::Vec3(  0.5f,  0.5f, z ) );
    v->push_back( osg::Vec3( -0.5f,  0.5f, z ) );

    Geometry::createQuad( geometry.get(), v.get(), true, true );

    osg::ref_ptr<osg::StateSet> stateSet = geode->getOrCreateStateSet();
    stateSet->setMode( GL_LIGHTING, osg::StateAttribute::OFF );

    // texture
    osg::ref_ptr<osg::Texture2D> texture = Textures::get( textureFile );

    if ( texture.valid() )
    {
        stateSet->setMode( GL_BLEND, osg::StateAttribute::ON );
        stateSet->setRenderingHint( osg::StateSet::TRANSPARENT_BIN );
        stateSet->setTextureAttributeAndModes( 0, texture, osg::StateAttribute::ON );
    }

    // material
    osg::ref_ptr<osg::Material> material = new osg::Material();

    material->setColorMode( osg::Material::AMBIENT_AND_DIFFUSE );
    material->setAmbient( osg::Material::FRONT, osg::Vec4( 1.0f, 1.0f, 1.0f, 1.0f ) );
    material->setDiffuse( osg::Material::FRONT, osg::Vec4( 1.0f, 1.0f, 1.0f, 1.0f ) );

    stateSet->setAttribute( material.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Icons::createOwnship()
{
    _ownship.pat = new osg::PositionAttitudeTransform();
    _root->addChild( _ownship.pat.get() );

    _ownship.speedLeader = new osg::Group();
    _ownship.pat->addChild( _ownship.speedLeader.get() );

    createIcon( _ownship.pat.get(), Map::_zOwnship, "data/map/icons/air_friend.png" );
}

////////////////////////////////////////////////////////////////////////////////

osg::Node* Icons::createRunway( double length, double width )
{
    osg::ref_ptr<osg::Geode> geode = new osg::Geode();

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();
    osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();

    c->push_back( osg::Vec4( Map::_colorAirports, 1.0f ) );
    n->push_back( osg::Vec3( 0.0f, 0.0f, 1.0f ) );

    osg::ref_ptr<osg::Geometry> geom = new osg::Geometry();

    geode->addDrawable( geom.get() );

    v->push_back( osg::Vec3( -width / 2.0, -length / 2.0, 0.0 ) );
    v->push_back( osg::Vec3(  width / 2.0, -length / 2.0, 0.0 ) );
    v->push_back( osg::Vec3(  width / 2.0,  length / 2.0, 0.0 ) );
    v->push_back( osg::Vec3( -width / 2.0,  length / 2.0, 0.0 ) );

    geom->setVertexArray( v.get() );
    geom->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::QUADS, 0, v->size() ) );
    geom->setNormalArray( n.get() );
    geom->setNormalBinding( osg::Geometry::BIND_OVERALL );
    geom->setColorArray( c.get() );
    geom->setColorBinding( osg::Geometry::BIND_OVERALL );

    return geode.release();
}

////////////////////////////////////////////////////////////////////////////////

osg::Node* Icons::createSymbolILS()
{
    osg::ref_ptr<osg::Geode> geode = new osg::Geode();

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();
    osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();

    c->push_back( osg::Vec4( Map::_colorAeroData, 1.0f ) );
    n->push_back( osg::Vec3( 0.0f, 0.0f, 1.0f ) );

    osg::ref_ptr<osg::Geometry> geom = new osg::Geometry();

    geode->addDrawable( geom.get() );

    v->push_back( osg::Vec3(    0.0f,      0.0f, 0.0f ) );
    v->push_back( osg::Vec3(    0.0f, -10500.0f, 0.0f ) );
    v->push_back( osg::Vec3(  600.0f, -11000.0f, 0.0f ) );
    v->push_back( osg::Vec3(    0.0f,      0.0f, 0.0f ) );
    v->push_back( osg::Vec3( -600.0f, -11000.0f, 0.0f ) );
    v->push_back( osg::Vec3(    0.0f, -10500.0f, 0.0f ) );

    geom->setVertexArray( v.get() );
    geom->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::LINE_STRIP, 0, v->size() ) );
    geom->setNormalArray( n.get() );
    geom->setNormalBinding( osg::Geometry::BIND_OVERALL );
    geom->setColorArray( c.get() );
    geom->setColorBinding( osg::Geometry::BIND_OVERALL );

    return geode.release();
}

////////////////////////////////////////////////////////////////////////////////

osg::Node* Icons::getNavaidSymbol( int type )
{
    switch ( type )
    {
        case nav::DataBase::NAV::VOR:     return _symbolNavaidVOR.get();
        case nav::DataBase::NAV::VORTAC:  return _symbolNavaidVORTAC.get();
//        case nav::DataBase::NAV::TACAN:   return _symbolNavaidTACAN.get();
        case nav::DataBase::NAV::VOR_DME: return _symbolNavaidVORDME.get();
//        case nav::DataBase::NAV::NDB:     return _symbolNavaidNDB.get();
//        case nav::DataBase::NAV::NDB_DME: return _symbolNavaidNDB_DME.get();
//        case nav::DataBase::NAV::LOCATOR: return _symbolNavaidLOCATOR.get();
//        case nav::DataBase::NAV::DME:     return _symbolNavaidDME.get();
    }

    return _symbolNavaidVOR.get();;
}

////////////////////////////////////////////////////////////////////////////////

void Icons::initAerodromes()
{
    nav::DataBase::ListAPT list = nav::DataBase::instance()->getListAPT();

    for ( nav::DataBase::ListAPT::iterator it = list.begin(); it != list.end(); it++ )
    {
        osg::ref_ptr<osg::PositionAttitudeTransform> pat = new osg::PositionAttitudeTransform();
        _root->addChild( pat.get() );
        pat->addChild( _symbolAerodrome.get() );
        pat->setPosition( osg::Vec3d(  Mercator::x( (*it).lon ),
                                       Mercator::y( (*it).lat ),
                                       Map::_zAerodromes ) );
        _aerodromes.push_back( pat.get() );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Icons::initLocalizers()
{
    nav::DataBase::ListILS listILS = nav::DataBase::instance()->getListILS();

    for ( nav::DataBase::ListILS::iterator it = listILS.begin(); it != listILS.end(); it++ )
    {
        if ( (*it).type == nav::DataBase::ILS::LOC )
        {
            osg::ref_ptr<osg::PositionAttitudeTransform> pat = new osg::PositionAttitudeTransform();
            _root->addChild( pat.get() );
            pat->addChild( _symbolNavaidILSLOC.get() );
            pat->setPosition( osg::Vec3d(  Mercator::x( (*it).lon ),
                                           Mercator::y( (*it).lat ),
                                           Map::_zNavaids ) );
            pat->setAttitude( osg::Quat( -(*it).true_bearing, osg::Z_AXIS ) );
            _localizers.push_back( pat.get() );
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Icons::initNavaids()
{
    nav::DataBase::ListNAV listNAV = nav::DataBase::instance()->getListNAV();

    for ( nav::DataBase::ListNAV::iterator it = listNAV.begin(); it != listNAV.end(); it++ )
    {
        osg::ref_ptr<osg::PositionAttitudeTransform> pat = new osg::PositionAttitudeTransform();
        _root->addChild( pat.get() );
        pat->addChild( getNavaidSymbol( (*it).type ) );
        pat->setPosition( osg::Vec3d(  Mercator::x( (*it).lon ),
                                       Mercator::y( (*it).lat ),
                                       Map::_zNavaids ) );
        _navaids.push_back( pat.get() );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Icons::initRunways()
{
    nav::DataBase::ListRWY listRWY = nav::DataBase::instance()->getListRWY();

    for ( nav::DataBase::ListRWY::iterator it = listRWY.begin(); it != listRWY.end(); it++ )
    {
        osg::ref_ptr<osg::PositionAttitudeTransform> pat = new osg::PositionAttitudeTransform();
        _root->addChild( pat.get() );
        pat->addChild( createRunway( (*it).length, (*it).width ) );

        double he_x = Mercator::x( (*it).he_lon );
        double he_y = Mercator::y( (*it).he_lat );
        double le_x = Mercator::x( (*it).le_lon );
        double le_y = Mercator::y( (*it).le_lat );

        fdm::WGS84::Geo he_pos_geo;
        fdm::WGS84::Geo le_pos_geo;

        he_pos_geo.lat = (*it).he_lat;
        he_pos_geo.lon = (*it).he_lon;
        he_pos_geo.alt = (*it).he_elev;

        le_pos_geo.lat = (*it).le_lat;
        le_pos_geo.lon = (*it).le_lon;
        le_pos_geo.alt = (*it).le_elev;

        fdm::Vector3 he_pos_wgs = fdm::WGS84::geo2wgs( he_pos_geo );
        fdm::Vector3 le_pos_wgs = fdm::WGS84::geo2wgs( le_pos_geo );

        fdm::WGS84 av_pos_wgs( 0.5 * ( he_pos_wgs + le_pos_wgs ) );

        fdm::Vector3 he_pos_ned = av_pos_wgs.getWGS2NED() * ( he_pos_wgs - av_pos_wgs.getPos_WGS() );
        fdm::Vector3 le_pos_ned = av_pos_wgs.getWGS2NED() * ( le_pos_wgs - av_pos_wgs.getPos_WGS() );

        fdm::Vector3 v_delta_ned = he_pos_ned - le_pos_ned;

        double heading = atan2( v_delta_ned.y(), v_delta_ned.x() );

        pat->setPosition( osg::Vec3d( 0.5 * ( he_x + le_x ),
                                      0.5 * ( he_y + le_y ),
                                      Map::_zAirports ) );
        pat->setAttitude( osg::Quat( -heading, osg::Z_AXIS ) );
        _runways.push_back( pat.get() );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Icons::updateOwnship()
{
    _ownship.pat->setPosition( osg::Vec3( Mercator::x( Data::get()->ownship.longitude ),
                                          Mercator::y( Data::get()->ownship.latitude ),
                                          0.0f ) );

    if ( _ownship.speedLeader->getNumChildren() > 0 )
    {
        _ownship.speedLeader->removeChildren( 0, _ownship.speedLeader->getNumChildren() );
    }

    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    _ownship.speedLeader->addChild( geode.get() );

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();  // normals
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();  // colors
    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();

    n->push_back( osg::Vec3( 0.0f, 0.0f, 1.0f ) );
    c->push_back( osg::Vec4( 0.0f, 0.0f, 0.0f, 1.0f ) );

    const float coef = 1.0f / 50.0f; // 180 km/h
    osg::Vec3 vel_ned( coef * Data::get()->ownship.vel_east,
                       coef * Data::get()->ownship.vel_north,
                       Map::_zSpeedLeader );

    if ( vel_ned.length2() > 1.0f )
    {
        vel_ned.normalize();
    }

    v->push_back( osg::Vec3( 0.0f, 0.0f, Map::_zSpeedLeader ) );
    v->push_back( vel_ned );

    geometry->setVertexArray( v.get() );
    geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::LINES, 0, v->size() ) );
    geometry->setNormalArray( n.get() );
    geometry->setNormalBinding( osg::Geometry::BIND_OVERALL );
    geometry->setColorArray( c.get() );
    geometry->setColorBinding( osg::Geometry::BIND_OVERALL );

    geode->addDrawable( geometry.get() );

    ////////////////////

    osg::ref_ptr<osg::StateSet> stateSet = geode->getOrCreateStateSet();

    osg::ref_ptr<osg::LineWidth> lineWidth = new osg::LineWidth();
    lineWidth->setWidth( 1.25f );

    stateSet->setAttributeAndModes( lineWidth, osg::StateAttribute::ON );
    stateSet->setMode( GL_LIGHTING, osg::StateAttribute::OFF | osg::StateAttribute::OVERRIDE );
}
