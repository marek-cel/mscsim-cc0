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

#include <fdm/utils/fdm_WGS84.h>

#include <math.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

const double WGS84::m_a = 6378137.0;
const double WGS84::m_f = 1.0 / 298.257223563;

const double WGS84::m_b   = 6356752.3142;
const double WGS84::m_r1  = ( 2.0 * WGS84::m_a + WGS84::m_b ) / 3.0;
const double WGS84::m_a2  = WGS84::m_a * WGS84::m_a;
const double WGS84::m_b2  = WGS84::m_b * WGS84::m_b;
const double WGS84::m_e2  = 6.6943799901400e-3;
const double WGS84::m_e   = 8.1819190842622e-2;
const double WGS84::m_ep2 = 6.7394967422800e-3;
const double WGS84::m_ep  = 8.2094437949696e-2;

const double WGS84::m_g       = 9.80665;
const double WGS84::m_gm      = 3986004.418e8;
const double WGS84::m_omega   = 7.2921151467e-5;
const double WGS84::m_gamma_e = 9.7803253359;
const double WGS84::m_gamma_p = 9.8321849378;
const double WGS84::m_k       = 0.00193185265241;
const double WGS84::m_m       = 0.00344978650684;

//0.0,  1.0,  0.0
//1.0,  0.0,  0.0
//0.0,  0.0, -1.0

const Matrix3x3 WGS84::m_enu2ned( 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, -1.0 );
const Matrix3x3 WGS84::m_ned2enu( 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, -1.0 );

////////////////////////////////////////////////////////////////////////////////

Vector3 WGS84::getOmega_WGS()
{
    return Vector3( 0.0, 0.0, m_omega );
}

////////////////////////////////////////////////////////////////////////////////

void WGS84::geo2wgs( double lat, double lon, double alt,
                     double &x, double &y, double &z )
{
    double sinLat = sin( lat );
    double cosLat = cos( lat );
    double sinLon = sin( lon );
    double cosLon = cos( lon );

    double n = m_a / sqrt( 1.0 - m_e2 * sinLat*sinLat );

    x = ( n + alt ) * cosLat * cosLon;
    y = ( n + alt ) * cosLat * sinLon;
    z = ( n * ( m_b2 / m_a2 ) + alt ) * sinLat;
}

////////////////////////////////////////////////////////////////////////////////

Vector3 WGS84::geo2wgs( double lat, double lon, double alt )
{
    Vector3 pos_wgs;

    geo2wgs( lat, lon, alt, pos_wgs.x(), pos_wgs.y(), pos_wgs.z() );

    return pos_wgs;
}

////////////////////////////////////////////////////////////////////////////////

Vector3 WGS84::geo2wgs( const Geo &geo )
{
    return geo2wgs( geo.lat, geo.lon, geo.alt );
}

////////////////////////////////////////////////////////////////////////////////

void WGS84::geo2wgs( const Geo &geo, Vector3 &pos_wgs )
{
    pos_wgs = geo2wgs( geo );
}

////////////////////////////////////////////////////////////////////////////////

void WGS84::wgs2geo( double x, double y, double z,
                     double &lat, double &lon, double &alt )
{
#   ifdef WGS84_SIMPLE_CONVERSION
    // This method provides 1cm accuracy for height less than 1000km
    double p   = sqrt( x*x + y*y );
    double tht = atan2( z*m_a, p*m_b );
    double ed2 = ( m_a2 - m_b2 ) / m_b2;

    double sinTht = sin( tht );
    double cosTht = cos( tht );

    lat = atan( (z + ed2*m_b*sinTht*sinTht*sinTht) / ( p - m_e2*m_a*cosTht*cosTht*cosTht ) );
    lon = atan2( y, x );

    double sinLat = sin( lat );
    double n = m_a / sqrt( 1.0 - m_e2*sinLat*sinLat );

    alt = p / cos( lat ) - n;
#   else
    double z2 = z*z;
    double r  = sqrt( x*x + y*y );
    double r2 = r*r;
    double e2 = m_a2 - m_b2;
    double f  = 54.0 * m_b2 * z2;
    double g  = r2 + ( 1.0 - m_e2 )*z2 - m_e2*e2;
    double c  = m_e2*m_e2 * f * r2 / ( g*g*g );
    double s  = pow( 1.0 + c + sqrt( c*c + 2.0*c ), 1.0/3.0 );
    double p0 = s + 1.0/s + 1.0;
    double p  = f / ( 3.0 * p0*p0 * g*g );
    double q  = sqrt( 1.0 + 2.0*( m_e2*m_e2 )*p );
    double r0 = -( p * m_e2 * r )/( 1.0 + q ) + sqrt( 0.5*m_a2*( 1.0 + 1.0/q ) - p*( 1.0 - m_e2 )*z2/( q + q*q ) - 0.5*p*r2 );
    double uv = r - m_e2*r0;
    double u  = sqrt( uv*uv + z2 );
    double v  = sqrt( uv*uv + ( 1.0 - m_e2 )*z2 );
    double z0 = m_b2 * z / ( m_a * v );

    alt = u * ( 1.0 - m_b2 / ( m_a * v ) );
    lat = atan( ( z + m_ep2*z0 )/r );
    lon = atan2( y, x );
#   endif
}

////////////////////////////////////////////////////////////////////////////////

WGS84::Geo WGS84::wgs2geo( double x, double y, double z )
{
    Geo pos_geo;

    wgs2geo( x, y, z, pos_geo.lat, pos_geo.lon, pos_geo.alt );

    return pos_geo;
}

////////////////////////////////////////////////////////////////////////////////

WGS84::Geo WGS84::wgs2geo( const Vector3 &pos_wgs )
{
    return wgs2geo( pos_wgs.x(), pos_wgs.y(), pos_wgs.z() );
}

////////////////////////////////////////////////////////////////////////////////

void WGS84::wgs2geo( const Vector3 &pos_wgs, Geo &pos_geo )
{
    pos_geo = wgs2geo( pos_wgs );
}

////////////////////////////////////////////////////////////////////////////////

WGS84::WGS84()
{
    m_pos_geo.lat = 0.0;
    m_pos_geo.lon = 0.0;
    m_pos_geo.alt = 0.0;

    geo2wgs( m_pos_geo, m_pos_wgs );
    update();
}

////////////////////////////////////////////////////////////////////////////////

WGS84::WGS84( const WGS84 &wgs )
{
    m_pos_wgs = wgs.m_pos_wgs;

    m_pos_geo.lat = wgs.m_pos_geo.lat;
    m_pos_geo.lon = wgs.m_pos_geo.lon;
    m_pos_geo.alt = wgs.m_pos_geo.alt;

    m_norm_wgs = wgs.m_norm_wgs;
    m_grav_wgs = wgs.m_grav_wgs;

    m_enu2wgs = wgs.m_enu2wgs;
    m_ned2wgs = wgs.m_ned2wgs;
    m_wgs2enu = wgs.m_wgs2enu;
    m_wgs2ned = wgs.m_wgs2ned;
}

////////////////////////////////////////////////////////////////////////////////

WGS84::WGS84( const Geo &pos_geo )
{
    setPos_Geo( pos_geo );
}

////////////////////////////////////////////////////////////////////////////////

WGS84::WGS84( const Vector3 &pos_wgs )
{
    setPos_WGS( pos_wgs );
}

////////////////////////////////////////////////////////////////////////////////

Angles WGS84::getAngles_NED( const Angles &angles_wgs ) const
{
    return getNED2BAS( Quaternion( angles_wgs ) ).getAngles();
}

////////////////////////////////////////////////////////////////////////////////

Angles WGS84::getAngles_WGS( const Angles &angles_ned ) const
{
    return getWGS2BAS( Quaternion( angles_ned ) ).getAngles();
}

////////////////////////////////////////////////////////////////////////////////

Quaternion WGS84::getNED2BAS(const Quaternion &att_wgs ) const
{
    return m_ned2wgs.getQuaternion() * att_wgs;
}

////////////////////////////////////////////////////////////////////////////////

Quaternion WGS84::getWGS2BAS(const Quaternion &att_ned ) const
{
    return m_wgs2ned.getQuaternion() * att_ned;
}

////////////////////////////////////////////////////////////////////////////////

void WGS84::setPos_Geo( const Geo &pos_geo )
{
    m_pos_geo.lat = pos_geo.lat;
    m_pos_geo.lon = pos_geo.lon;
    m_pos_geo.alt = pos_geo.alt;

    geo2wgs( m_pos_geo, m_pos_wgs );
    update();
}

////////////////////////////////////////////////////////////////////////////////

void WGS84::setPos_WGS( const Vector3 &pos_wgs )
{
    m_pos_wgs = pos_wgs;

    wgs2geo( m_pos_wgs, m_pos_geo );
    update();
}

////////////////////////////////////////////////////////////////////////////////

void WGS84::update()
{
    double cosLat = cos( m_pos_geo.lat );
    double cosLon = cos( m_pos_geo.lon );
    double sinLat = sin( m_pos_geo.lat );
    double sinLon = sin( m_pos_geo.lon );

    double sinLat2 = sinLat*sinLat;

    // normal to ellipsoid
    m_norm_wgs( 0 ) = cosLat * cos( m_pos_geo.lon );
    m_norm_wgs( 1 ) = cosLat * sin( m_pos_geo.lon );
    m_norm_wgs( 2 ) = sin( m_pos_geo.lat );

    // gravity formula (NIMA TR-8350.2 - Department of Defence World Geodetic System 1984, p. 4-2)
    double gamma_0 = m_gamma_e * ( 1.0 + m_k * sinLat2 ) / sqrt( 1.0 - m_e2 * sinLat2 );
    double gamma_h = gamma_0 * ( 1.0 - (2.0/m_a)*(1.0 + m_f + m_m - 2.0*m_f*sinLat2)*m_pos_geo.alt + (3.0/m_a2)*m_pos_geo.alt*m_pos_geo.alt );

    m_grav_wgs = -gamma_h * m_norm_wgs;

    // NED to WGS
    m_ned2wgs(0,0) = -cosLon*sinLat;
    m_ned2wgs(0,1) = -sinLon;
    m_ned2wgs(0,2) = -cosLon*cosLat;

    m_ned2wgs(1,0) = -sinLon*sinLat;
    m_ned2wgs(1,1) =  cosLon;
    m_ned2wgs(1,2) = -sinLon*cosLat;

    m_ned2wgs(2,0) =  cosLat;
    m_ned2wgs(2,1) =  0.0;
    m_ned2wgs(2,2) = -sinLat;

    m_enu2wgs = m_enu2ned * m_ned2wgs;

    // WGS to NED
    m_wgs2ned(0,0) = -cosLon * sinLat;
    m_wgs2ned(0,1) = -sinLon * sinLat;
    m_wgs2ned(0,2) =  cosLat;

    m_wgs2ned(1,0) = -sinLon;
    m_wgs2ned(1,1) =  cosLon;
    m_wgs2ned(1,2) =  0.0;

    m_wgs2ned(2,0) = -cosLon * cosLat;
    m_wgs2ned(2,1) = -sinLon * cosLat;
    m_wgs2ned(2,2) = -sinLat;

    m_wgs2enu = m_wgs2ned * m_ned2enu;
}
