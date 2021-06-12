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

#include <nav/nav_DataBase.h>

#include <cstdio>
#include <fstream>

#include <QDomElement>
#include <QFile>

#include <fdm/utils/fdm_String.h>
#include <fdm/utils/fdm_Units.h>
#include <fdm/utils/fdm_WGS84.h>

#include <nav/nav_Frequency.h>

#include <sim/Path.h>

////////////////////////////////////////////////////////////////////////////////

using namespace nav;

////////////////////////////////////////////////////////////////////////////////

double DataBase::getTrueBearing( const char *str_bear, const char *str_magvar )
{
    double bear = fdm::Units::deg2rad( fdm::String::toDouble( str_bear ) );

    bool true_bear = toupper( str_bear[ strlen( str_bear ) - 1 ] ) == 'T';

    std::vector< std::string > temp = fdm::String::split( str_magvar, " " );

    if ( temp.size() > 0 && !true_bear )
    {
        double coef = toupper( temp.at( 0 ).c_str()[ 0 ] ) == 'E' ? 1.0 : -1.0;

        if ( temp.at( 0 ).length() >= 4 )
        {
            std::string str_deg;

            str_deg += temp.at( 0 ).c_str()[ 1 ];
            str_deg += temp.at( 0 ).c_str()[ 2 ];
            str_deg += temp.at( 0 ).c_str()[ 3 ];

            double magvar = fdm::String::toDouble( str_deg );

            if ( temp.at( 0 ).length() == 7 )
            {
                std::string str_dec;

                str_dec += temp.at( 0 ).c_str()[ 4 ];
                str_dec += temp.at( 0 ).c_str()[ 5 ];
                str_dec += temp.at( 0 ).c_str()[ 6 ];

                magvar += fdm::String::toDouble( str_dec ) / 1000.0;
            }

            bear += coef * fdm::Units::deg2rad( magvar );
        }
    }

    return bear;
}

////////////////////////////////////////////////////////////////////////////////

DataBase::DataBase()
{
    QFile file( Path::get( "nav/nav_db.xml" ).c_str() );

    if ( file.open(QFile::ReadOnly | QFile::Text) )
    {
        QDomDocument doc;

        doc.setContent( &file, false );

        QDomElement rootNode = doc.documentElement();

        if ( rootNode.tagName() == "nav_db" )
        {
            QDomElement nodeAPT = rootNode.firstChildElement( "apt" );
            QDomElement nodeILS = rootNode.firstChildElement( "ils" );
            QDomElement nodeNAV = rootNode.firstChildElement( "nav" );
            QDomElement nodeRWY = rootNode.firstChildElement( "rwy" );

            if ( !nodeAPT.isNull() )
            {
                QDomElement fileNode = nodeAPT.firstChildElement( "file" );

                while ( !fileNode.isNull() )
                {
                    parseAPT( fileNode.text().toStdString().c_str() );
                    fileNode = fileNode.nextSiblingElement( "file" );
                }
            }

            if ( !nodeILS.isNull() )
            {
                QDomElement fileNode = nodeILS.firstChildElement( "file" );

                while ( !fileNode.isNull() )
                {
                    parseILS( fileNode.text().toStdString().c_str() );
                    fileNode = fileNode.nextSiblingElement( "file" );
                }
            }

            if ( !nodeNAV.isNull() )
            {
                QDomElement fileNode = nodeNAV.firstChildElement( "file" );

                while ( !fileNode.isNull() )
                {
                    parseNAV( fileNode.text().toStdString().c_str() );
                    fileNode = fileNode.nextSiblingElement( "file" );
                }
            }

            if ( !nodeRWY.isNull() )
            {
                QDomElement fileNode = nodeRWY.firstChildElement( "file" );

                while ( !fileNode.isNull() )
                {
                    parseRWY( fileNode.text().toStdString().c_str() );
                    fileNode = fileNode.nextSiblingElement( "file" );
                }
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

DataBase::~DataBase() {}

////////////////////////////////////////////////////////////////////////////////

void DataBase::parseAPT( const char *path )
{
    std::fstream file( Path::get( path ).c_str(), std::ios_base::in );

    if ( file.is_open() )
    {
        std::string line;

        int i_line = 0;

        while ( !file.eof() )
        {
            getline( file, line );

            if ( i_line > 0 )
            {
                std::vector< std::string > cols = fdm::String::split( line, "\t" );

                line.clear();

                if ( cols.size() == 23 )
                {
                    APT apt;

                    apt.ident = cols.at( 0 );
                    apt.name  = cols.at( 1 );
                    apt.icao  = cols.at( 3 );

                    apt.lat = fdm::Units::deg2rad( fdm::String::toDouble( cols.at(  8 ) ) );
                    apt.lon = fdm::Units::deg2rad( fdm::String::toDouble( cols.at( 10 ) ) );

                    _list_apt.push_back( apt );
                }
            }

            i_line++;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void DataBase::parseILS( const char *path )
{
    std::fstream file( Path::get( path ).c_str(), std::ios_base::in );

    if ( file.is_open() )
    {
        std::string line;

        int i_line = 0;

        while ( !file.eof() )
        {
            getline( file, line );

            if ( i_line > 0 )
            {
                std::vector< std::string > cols = fdm::String::split( line, "\t" );

                line.clear();

                if ( cols.size() == 29 )
                {
                    if ( cols.at( 2 ).length() > 0 )
                    {
                        ILS ils;

                        switch( toupper( cols.at( 2 ).c_str()[ 0 ] ) )
                        {
                            default:  ils.type = ILS::NONE; break;
                            case 'D': ils.type = ILS::DME;  break;
                            case 'Z': ils.type = ILS::LOC;  break;
                            case 'G': ils.type = ILS::GS;   break;
                            case 'B': ils.type = ILS::BCM;  break;
                            case 'I': ils.type = ILS::IM;   break;
                            case 'M': ils.type = ILS::MM;   break;
                            case 'O': ils.type = ILS::OM;   break;
                        }

                        if ( ils.type != ILS::NONE )
                        {
                            ils.lat = fdm::Units::deg2rad( fdm::String::toDouble( cols.at( 15 ) ) );
                            ils.lon = fdm::Units::deg2rad( fdm::String::toDouble( cols.at( 17 ) ) );

                            ils.elev = fdm::Units::ft2m( fdm::String::toDouble( cols.at( 10 ) ) );

                            ils.true_bearing = ils.type == ILS::LOC ? getTrueBearing( cols.at( 24 ).c_str(), cols.at( 22 ).c_str() ) : 0.0;
                            ils.glide_slope  = ils.type == ILS::GS  ? fdm::Units::deg2rad( fdm::String::toDouble( cols.at( 7 ) ) ) : 0.0;

                            ils.freq = fdm::String::toDouble( cols.at( 5 ) );

                            if ( ils.type == ILS::DME && cols.at( 6 ).length() > 0 )
                            {
                                ils.freq = Frequency::getFreqDME( cols.at( 6 ).c_str() );
                            }

                            fdm::Geo position_geo;

                            position_geo.lat = ils.lat;
                            position_geo.lon = ils.lon;
                            position_geo.alt = ils.elev;

                            ils.pos_wgs = fdm::WGS84::geo2wgs( position_geo );

                            _list_ils.push_back( ils );
                        }
                    }
                }
            }

            i_line++;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void DataBase::parseNAV( const char *path )
{
    std::fstream file( Path::get( path ).c_str(), std::ios_base::in );

    if ( file.is_open() )
    {
        std::string line;

        int i_line = 0;

        while ( !file.eof() )
        {
            getline( file, line );

            if ( i_line > 0 )
            {
                std::vector< std::string > cols = fdm::String::split( line, "\t" );

                line.clear();

                if ( cols.size() == 32 )
                {
                    NAV nav;

                    switch( fdm::String::toInt( cols.at( 1 ) ) )
                    {
                        default:           nav.type = NAV::NONE;    break;
                        case NAV::VOR:     nav.type = NAV::VOR;     break;
                        case NAV::VORTAC:  nav.type = NAV::VORTAC;  break;
                        case NAV::TACAN:   nav.type = NAV::TACAN;   break;
                        case NAV::VOR_DME: nav.type = NAV::VOR_DME; break;
                        case NAV::NDB:     nav.type = NAV::NDB;     break;
                        case NAV::NDB_DME: nav.type = NAV::NDB_DME; break;
                        case NAV::LOCATOR: nav.type = NAV::LOCATOR; break;
                        case NAV::DME:     nav.type = NAV::DME;     break;
                    }

                    if ( nav.type != NAV::NONE )
                    {
                        nav.lat = fdm::Units::deg2rad( fdm::String::toDouble( cols.at( 18 ) ) );
                        nav.lon = fdm::Units::deg2rad( fdm::String::toDouble( cols.at( 20 ) ) );

                        nav.elev = fdm::Units::ft2m( fdm::String::toDouble( cols.at( 23 ) ) );

                        nav.freq = fdm::String::toDouble( cols.at( 8 ) );

                        fdm::Geo position_geo;

                        position_geo.lat = nav.lat;
                        position_geo.lon = nav.lon;
                        position_geo.alt = nav.elev;

                        nav.pos_wgs = fdm::WGS84::geo2wgs( position_geo );

                        _list_nav.push_back( nav );
                    }
                }
            }

            i_line++;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void DataBase::parseRWY( const char *path )
{
    std::fstream file( Path::get( path ).c_str(), std::ios_base::in );

    if ( file.is_open() )
    {
        std::string line;

        int i_line = 0;

        while ( !file.eof() )
        {
            getline( file, line );

            if ( i_line > 0 )
            {
                std::vector< std::string > cols = fdm::String::split( line, "\t" );

                line.clear();

                if ( cols.size() == 51 )
                {
                    RWY rwy;

                    rwy.he_lat = fdm::Units::deg2rad( fdm::String::toDouble( cols.at( 10 ) ) );
                    rwy.he_lon = fdm::Units::deg2rad( fdm::String::toDouble( cols.at( 12 ) ) );
                    rwy.he_elev = fdm::Units::ft2m( fdm::String::toDouble( cols.at( 13 ) ) );

                    rwy.le_lat = fdm::Units::deg2rad( fdm::String::toDouble( cols.at( 27 ) ) );
                    rwy.le_lon = fdm::Units::deg2rad( fdm::String::toDouble( cols.at( 29 ) ) );
                    rwy.le_elev = fdm::Units::ft2m( fdm::String::toDouble( cols.at( 30 ) ) );

                    rwy.true_hdg = fdm::Units::deg2rad( fdm::String::toDouble( cols.at( 44 ) ) );

                    rwy.length = fdm::Units::ft2m( fdm::String::toDouble( cols.at( 5 ) ) );
                    rwy.width  = fdm::Units::ft2m( fdm::String::toDouble( cols.at( 6 ) ) );

                    _list_rwy.push_back( rwy );
                }
            }

            i_line++;
        }
    }
}
