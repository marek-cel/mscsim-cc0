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

#include <QFile>

#include <fdm/fdm_Path.h>
#include <fdm/utils/fdm_Units.h>

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
    _adf_visible ( false ),
    _adf_bearing ( 0.0f ),

    _ils_gs_visible ( false ),
    _ils_lc_visible ( false ),
    _ils_gs_deviation ( 0.0f ),
    _ils_lc_deviation ( 0.0f ),

    _nav_visible ( false ),
    _nav_deviation ( 0.0f ),
    _nav_distance ( 0.0f )
{
    QFile file( fdm::Path::get( "data/navigation.xml" ).c_str() );

    if ( file.open(QFile::ReadOnly | QFile::Text) )
    {
        QDomDocument doc;

        doc.setContent( &file, false );

        QDomElement rootNode = doc.documentElement();

        if ( rootNode.tagName() == "navigation" )
        {
            QDomElement ilsNode = rootNode.firstChildElement( "ils" );
            QDomElement ndbNode = rootNode.firstChildElement( "ndb" );
            QDomElement vorNode = rootNode.firstChildElement( "vor" );

            // ILS
            if ( !ilsNode.isNull() )
            {
                QDomElement gsNode = ilsNode.firstChildElement( "gs" );
                QDomElement lcNode = ilsNode.firstChildElement( "lc" );

                if ( !gsNode.isNull() )
                {
                    QDomElement positionNode   = gsNode.firstChildElement( "position" );
                    QDomElement glideSlopeNode = gsNode.firstChildElement( "glide_slope" );

                    _ils.pos_gs_wgs = readPosition( positionNode );

                    if ( !glideSlopeNode.isNull() )
                    {
                        _ils.glide_slope = fdm::Units::deg2rad( glideSlopeNode.text().toDouble() );
                    }
                }

                if ( !lcNode.isNull() )
                {
                    QDomElement positionNode = lcNode.firstChildElement( "position" );
                    QDomElement headingNode  = lcNode.firstChildElement( "heading" );

                    _ils.pos_lc_wgs = readPosition( positionNode );

                    if ( !headingNode.isNull() )
                    {
                        _ils.heading = fdm::Units::deg2rad( headingNode.text().toDouble() );
                    }
                }
            }

            // VOR
            if ( !ndbNode.isNull() )
            {
                QDomElement positionNode = ndbNode.firstChildElement( "position" );

                _ndb.pos_wgs = readPosition( positionNode );
            }

            // VOR
            if ( !vorNode.isNull() )
            {
                QDomElement positionNode = vorNode.firstChildElement( "position" );

                _vor.pos_wgs = readPosition( positionNode );
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

    updateADF();
    updateILS();
    updateNav();

    Data::get()->navigation.adf_visible = _adf_visible;
    Data::get()->navigation.adf_bearing = _adf_bearing;

    Data::get()->navigation.ils_visible      = _ils_gs_visible && _ils_lc_visible;
    Data::get()->navigation.ils_gs_visible   = _ils_gs_visible;
    Data::get()->navigation.ils_lc_visible   = _ils_lc_visible;
    Data::get()->navigation.ils_gs_deviation = _ils_gs_deviation;
    Data::get()->navigation.ils_lc_deviation = _ils_lc_deviation;

    Data::get()->navigation.nav_visible   = _nav_visible;
    Data::get()->navigation.nav_deviation = _nav_deviation;
    Data::get()->navigation.nav_distance  = _nav_distance;
}

////////////////////////////////////////////////////////////////////////////////

double Navigation::getAzimuth( const fdm::Vector3 &pos_wgs )
{
    fdm::Vector3 pos_ned = _aircraft_wgs.getWGS2NED() * ( pos_wgs - _aircraft_wgs.getPos_WGS() );
    return atan2(  pos_ned.y(), pos_ned.x() );
}

////////////////////////////////////////////////////////////////////////////////
double Navigation::getDistance( const fdm::Vector3 &pos_wgs )
{
    // orthodromic distance
    return fdm::WGS84::_r1 * acos( pos_wgs.getNormalized() * _aircraft_wgs.getPos_WGS().getNormalized() );
}

////////////////////////////////////////////////////////////////////////////////

fdm::Vector3 Navigation::readPosition( const QDomElement &node )
{
    fdm::WGS84::Geo position_geo;

    position_geo.lat = 0.0;
    position_geo.lon = 0.0;
    position_geo.alt = 0.0;

    if ( node.tagName() == "position" )
    {
        QDomElement nodeLat = node.firstChildElement( "lat" );
        QDomElement nodeLon = node.firstChildElement( "lon" );
        QDomElement nodeAlt = node.firstChildElement( "alt" );

        if ( !nodeLat.isNull() && !nodeLon.isNull() && !nodeAlt.isNull() )
        {
            position_geo.lat = fdm::Units::deg2rad( nodeLat.text().toDouble() );
            position_geo.lon = fdm::Units::deg2rad( nodeLon.text().toDouble() );
            position_geo.alt = nodeAlt.text().toDouble();
        }
    }

    return fdm::WGS84::geo2wgs( position_geo );
}

////////////////////////////////////////////////////////////////////////////////

void Navigation::updateADF()
{
    _adf_visible = false;
    _adf_bearing = 0.0;

    double distance = getDistance( _ndb.pos_wgs );

    if ( distance < _range_ndb )
    {
        _adf_visible = true;

        _adf_bearing = getAzimuth( _ndb.pos_wgs );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Navigation::updateILS()
{
    _ils_gs_visible = false;
    _ils_lc_visible = false;

    _ils_gs_deviation = 0.0;
    _ils_lc_deviation = 0.0;

    double distance_lc = getDistance( _ils.pos_lc_wgs );

    if ( distance_lc < _range_ils )
    {
        fdm::Vector3 pos_gs_ned = _aircraft_wgs.getWGS2NED() * ( _ils.pos_gs_wgs - _aircraft_wgs.getPos_WGS() );
        fdm::Vector3 pos_gs_rwy = fdm::Matrix3x3( fdm::Angles( 0.0, 0.0, _ils.heading ) ) * pos_gs_ned;

        double azim = getAzimuth( _ils.pos_lc_wgs );
        double elev = atan2( -pos_gs_rwy.z(), pos_gs_rwy.x() );

        double azim_rel = azim - _ils.heading;
        double elev_rel = elev + _ils.glide_slope;

        if ( fabs( azim_rel ) < fdm::Units::deg2rad( 10.0 ) )
        {
            _ils_lc_visible = true;
            _nav_visible = true;

            _nav_distance = pos_gs_ned.getLength();

            _ils_lc_deviation = azim_rel / _ils_lc_max;
            _ils_lc_deviation = fdm::Misc::satur( -1.0, 1.0, _ils_lc_deviation );
            _nav_deviation = _ils_lc_deviation;

            if ( pos_gs_rwy.x() > 0.0 )
            {
                _ils_gs_visible = true;

                _ils_gs_deviation = elev_rel / _ils_gs_max;
                _ils_gs_deviation = fdm::Misc::satur( -1.0, 1.0, _ils_gs_deviation );
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Navigation::updateNav()
{
    if ( !_ils_lc_visible )
    {
        _nav_visible = false;
        _nav_deviation = 0.0;

        double distance = getDistance( _vor.pos_wgs );

        if ( distance < _range_vor )
        {
            _nav_visible = true;

            _nav_distance = distance;

            double azim = getAzimuth( _vor.pos_wgs );
            double azim_rel = azim - _ils.heading;

            _nav_deviation = azim_rel / _vor_max;
            _nav_deviation = fdm::Misc::satur( -1.0, 1.0, _nav_deviation );
        }
    }
}
