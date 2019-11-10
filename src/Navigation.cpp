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

#include <Navigation.h>

#include <iostream>

#include <QFile>

#include <fdm/fdm_Path.h>
#include <fdm/utils/fdm_Units.h>

#include <Common.h>
#include <Data.h>

////////////////////////////////////////////////////////////////////////////////

const double Navigation::_range_ils = fdm::Units::nmi2m( 18.0 );
const double Navigation::_range_ndb = fdm::Units::nmi2m( 40.0 );
const double Navigation::_range_vor = fdm::Units::nmi2m( 40.0 );

const double Navigation::_ils_gs_max = fdm::Units::deg2rad( 0.7 );
const double Navigation::_ils_lc_max = fdm::Units::deg2rad( 2.5 );

const double Navigation::_vor_max = fdm::Units::deg2rad( 10.0 );

////////////////////////////////////////////////////////////////////////////////

Navigation::Navigation() :
    _ils ( NULLPTR ),
    _ndb ( NULLPTR ),
    _vor ( NULLPTR ),

    _course  ( 0.0 ),

    _adf_freq ( 190 ),
    _nav_freq ( 11800 ),

    _adf_visible ( false ),
    _adf_bearing ( 0.0 ),

    _ils_gs_visible ( false ),
    _ils_lc_visible ( false ),
    _ils_gs_deviation ( 0.0 ),
    _ils_lc_deviation ( 0.0 ),
    _ils_gs_norm ( 0.0 ),
    _ils_lc_norm ( 0.0 ),

    _nav_cdi ( Data::Navigation::NONE ),
    _nav_dme ( false ),
    _nav_bearing   ( 0.0 ),
    _nav_deviation ( 0.0 ),
    _nav_distance  ( 0.0 ),
    _nav_norm ( 0.0 )
{
    QFile file( fdm::Path::get( "data/navigation.xml" ).c_str() );

    if ( file.open(QFile::ReadOnly | QFile::Text) )
    {
        QDomDocument doc;

        doc.setContent( &file, false );

        QDomElement rootNode = doc.documentElement();

        if ( rootNode.tagName() == "navigation" )
        {
            QDomElement navaidNode = rootNode.firstChildElement();

            while ( !navaidNode.isNull() )
            {
                parseNavaid( navaidNode );
                navaidNode = navaidNode.nextSiblingElement();
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

Navigation::~Navigation() {}

////////////////////////////////////////////////////////////////////////////////

void Navigation::update()
{
    _aircraft_wgs.setPos_WGS( fdm::Vector3( Data::get()->ownship.pos_x_wgs,
                                            Data::get()->ownship.pos_y_wgs,
                                            Data::get()->ownship.pos_z_wgs ) );

    while ( _course < 0.0        ) _course += 2.0 * M_PI;
    while ( _course > 2.0 * M_PI ) _course -= 2.0 * M_PI;

    updateNavaids();

    Data::get()->navigation.course = _course;

    Data::get()->navigation.adf_visible = _adf_visible;
    Data::get()->navigation.adf_bearing = _adf_bearing;

    Data::get()->navigation.ils_visible      = _ils_gs_visible && _ils_lc_visible;
    Data::get()->navigation.ils_gs_visible   = _ils_gs_visible;
    Data::get()->navigation.ils_lc_visible   = _ils_lc_visible;
    Data::get()->navigation.ils_gs_deviation = _ils_gs_deviation;
    Data::get()->navigation.ils_lc_deviation = _ils_lc_deviation;
    Data::get()->navigation.ils_gs_norm = _ils_gs_norm;
    Data::get()->navigation.ils_lc_norm = _ils_lc_norm;

    Data::get()->navigation.nav_cdi = _nav_cdi;
    Data::get()->navigation.nav_dme = _nav_dme;
    Data::get()->navigation.nav_bearing   = _nav_bearing;
    Data::get()->navigation.nav_deviation = _nav_deviation;
    Data::get()->navigation.nav_distance  = _nav_distance;
    Data::get()->navigation.nav_norm = _nav_norm;
}

////////////////////////////////////////////////////////////////////////////////

double Navigation::getAzimuth( const fdm::Vector3 &pos_wgs )
{
    fdm::Vector3 pos_ned = _aircraft_wgs.getWGS2NED() * ( pos_wgs - _aircraft_wgs.getPos_WGS() );

    double azim = atan2(  pos_ned.y(), pos_ned.x() );

    if      ( azim < 0.0        ) azim += 2.0 * M_PI;
    else if ( azim > 2.0 * M_PI ) azim -= 2.0 * M_PI;

    return azim;
}

////////////////////////////////////////////////////////////////////////////////

double Navigation::getDistance( const fdm::Vector3 &pos_wgs )
{
    // orthodromic distance
    return fdm::WGS84::_r1 * acos( pos_wgs.getNormalized() * _aircraft_wgs.getPos_WGS().getNormalized() );
}

////////////////////////////////////////////////////////////////////////////////

void Navigation::parseNavaid( const QDomElement &node )
{
    if ( !node.isNull() )
    {
        if      ( node.tagName() == "ils" ) parseILS( node );
        else if ( node.tagName() == "ndb" ) parseNDB( node );
        else if ( node.tagName() == "vor" ) parseVOR( node );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Navigation::parseILS( const QDomElement &node )
{
    if ( !node.isNull() )
    {
        QDomElement nodeIdentifier = node.firstChildElement( "ident" );
        QDomElement nodeFrequncy   = node.firstChildElement( "freq" );
        QDomElement nodeGlideSlope = node.firstChildElement( "glide_slope" );
        QDomElement nodeHeading    = node.firstChildElement( "heading" );

        QDomElement nodePositionGS  = node.firstChildElement( "position_gs" );
        QDomElement nodePositionLOC = node.firstChildElement( "position_loc" );
        QDomElement nodePositionDME = node.firstChildElement( "position_dme" );

        if ( !nodeIdentifier.isNull()
          && !nodeFrequncy.isNull()
          && !nodeGlideSlope.isNull()
          && !nodeHeading.isNull()
          && !nodePositionLOC.isNull() )
        {
            ILS ils;

            ils.ident       = nodeIdentifier.text().toStdString();
            ils.freq        = 1000 * nodeFrequncy.text().toDouble();
            ils.glide_slope = fdm::Units::deg2rad( nodeGlideSlope.text().toDouble() );
            ils.heading     = fdm::Units::deg2rad( nodeHeading.text().toDouble() );

            ils.pos_wgs_loc = readPosition( nodePositionLOC );

            if ( !nodePositionGS  .isNull() ) ils.pos_wgs_gs  = readPosition( nodePositionGS  );
            if ( !nodePositionDME .isNull() ) ils.pos_wgs_dme = readPosition( nodePositionDME );

            ils.dme = !nodePositionDME.isNull();

            _listILS.append( ils );
        }
    }
}


////////////////////////////////////////////////////////////////////////////////

void Navigation::parseNDB( const QDomElement &node )
{
    if ( !node.isNull() )
    {
        NDB ndb;

        ndb.freq = node.firstChildElement( "freq" ).text().toInt();

        QDomElement positionNode = node.firstChildElement( "position" );
        ndb.pos_wgs = readPosition( positionNode );

        _listNDB.append( ndb );
    }
}


////////////////////////////////////////////////////////////////////////////////

void Navigation::parseVOR( const QDomElement &node )
{
    if ( !node.isNull() )
    {
        QDomElement nodeIdentifier = node.firstChildElement( "ident" );
        QDomElement nodeFrequncy   = node.firstChildElement( "freq" );

        QDomElement nodePosition = node.firstChildElement( "position" );

        if ( !nodeIdentifier.isNull()
          && !nodeFrequncy.isNull()
          && !nodePosition.isNull() )
        {
            VOR vor;

            vor.ident = nodeIdentifier.text().toStdString();
            vor.freq  = 1000 * nodeFrequncy.text().toFloat();

            vor.pos_wgs = readPosition( nodePosition );

            vor.dme = true; // TODO

            _listVOR.append( vor );
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

fdm::Vector3 Navigation::readPosition( const QDomElement &node )
{
    fdm::WGS84::Geo position_geo;

    position_geo.lat = 0.0;
    position_geo.lon = 0.0;
    position_geo.alt = 0.0;

    QDomElement nodeLat = node.firstChildElement( "lat" );
    QDomElement nodeLon = node.firstChildElement( "lon" );
    QDomElement nodeAlt = node.firstChildElement( "alt" );

    if ( !nodeLat.isNull() && !nodeLon.isNull() && !nodeAlt.isNull() )
    {
        position_geo.lat = fdm::Units::deg2rad( nodeLat.text().toDouble() );
        position_geo.lon = fdm::Units::deg2rad( nodeLon.text().toDouble() );
        position_geo.alt = nodeAlt.text().toDouble();
    }

    return fdm::WGS84::geo2wgs( position_geo );
}

////////////////////////////////////////////////////////////////////////////////

void Navigation::updateNavaids()
{
    _adf_visible = false;
    _adf_bearing = 0.0;

    _ils_gs_visible = false;
    _ils_lc_visible = false;

    _ils_gs_deviation = 0.0;
    _ils_lc_deviation = 0.0;

    _nav_cdi = Data::Navigation::NONE;
    _nav_dme = false;
    _nav_bearing   = 0.0;
    _nav_deviation = 0.0;
    _nav_distance  = 0.0;

    updateNavaidsActive();

    updateADF();
    updateILS();
    updateNAV();
}

////////////////////////////////////////////////////////////////////////////////

void Navigation::updateNavaidsActive()
{
    if ( _ndb )
    {
        if ( _ndb->freq != _adf_freq || getDistance( _ndb->pos_wgs ) > _range_ndb )
            _ndb = NULLPTR;
    }

    if ( _ils )
    {
        if ( _ils->freq != _nav_freq || getDistance( _ils->pos_wgs_loc ) > _range_ils )
            _ils = NULLPTR;
    }

    if ( _vor )
    {
        if ( _vor->freq != _nav_freq || getDistance( _vor->pos_wgs ) > _range_vor )
            _vor = NULLPTR;
    }

    if ( !_ndb )
    {
        for ( ListNDB::iterator it = _listNDB.begin(); it != _listNDB.end(); it++ )
        {
            if ( _adf_freq == (*it).freq && getDistance( (*it).pos_wgs ) < _range_ndb )
            {
                _ndb = &(*it);
                break;
            }
        }
    }

    if ( !_ils )
    {
        for ( ListILS::iterator it = _listILS.begin(); it != _listILS.end(); it++ )
        {
            if ( _nav_freq == (*it).freq && getDistance( (*it).pos_wgs_loc ) < _range_ils )
            {
                _ils = &(*it);
                break;
            }
        }
    }

    if ( !_vor )
    {
        for ( ListVOR::iterator it = _listVOR.begin(); it != _listVOR.end(); it++ )
        {
            if ( _nav_freq == (*it).freq && getDistance( (*it).pos_wgs ) < _range_vor )
            {
                _vor = &(*it);
                break;
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Navigation::updateADF()
{
    if ( _ndb )
    {
        _adf_visible = true;
        _adf_bearing = getAzimuth( _ndb->pos_wgs );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Navigation::updateILS()
{
    if ( _ils )
    {
        fdm::Vector3 pos_ned_gs = _aircraft_wgs.getWGS2NED() * ( _ils->pos_wgs_gs - _aircraft_wgs.getPos_WGS() );
        fdm::Vector3 pos_rwy_gs = fdm::Matrix3x3( fdm::Angles( 0.0, 0.0, _ils->heading ) ) * pos_ned_gs;

        fdm::Vector3 pos_ned_dme = _aircraft_wgs.getWGS2NED() * ( _ils->pos_wgs_dme - _aircraft_wgs.getPos_WGS() );

        double azim = getAzimuth( _ils->pos_wgs_loc );
        double elev = atan2( -pos_rwy_gs.z(), pos_rwy_gs.x() );

        if ( fabs( azim - _ils->heading ) < fdm::Units::deg2rad( 10.0 ) )
        {
            _nav_dme = _ils->dme;
            _nav_distance = _nav_dme ? pos_ned_dme.getLength() : 0.0;

            updateNAV( azim, _course, _ils_lc_max );

            _ils_lc_visible = _nav_cdi != Data::Navigation::NONE;
            _ils_lc_deviation = _nav_deviation;
            _ils_lc_norm = _nav_norm;

            double elev_rel = elev + _ils->glide_slope;

            if ( pos_rwy_gs.x() > 0.0 )
            {
                _ils_gs_visible = true;

                _ils_gs_deviation = elev_rel;

                _ils_gs_norm = _ils_gs_deviation / _ils_gs_max;
                _ils_gs_norm = fdm::Misc::satur( -1.0, 1.0, _ils_gs_norm );
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Navigation::updateNAV()
{
    if ( _vor )
    {
        _nav_dme = true; // TODO
        _nav_distance = getDistance( _vor->pos_wgs );

        double azim = getAzimuth( _vor->pos_wgs );

        updateNAV( azim, _course, _vor_max );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Navigation::updateNAV( double azim, double course, double max )
{
    double azim_rel = azim - course;

    while ( azim_rel < -M_PI ) azim_rel += 2.0 * M_PI;
    while ( azim_rel >  M_PI ) azim_rel -= 2.0 * M_PI;

    if ( azim_rel < -M_PI_2 || M_PI_2 < azim_rel )
    {
        _nav_cdi = Data::Navigation::FROM;

        if ( azim_rel < -M_PI_2 ) azim_rel += M_PI;
        if ( azim_rel >  M_PI_2 ) azim_rel -= M_PI;

        azim_rel *= -1.0;
    }
    else
    {
        _nav_cdi = Data::Navigation::TO;
    }

    _nav_bearing = azim;

    _nav_deviation = azim_rel;

    _nav_norm = _nav_deviation / max;
    _nav_norm = fdm::Misc::satur( -1.0, 1.0, _nav_norm );
}
