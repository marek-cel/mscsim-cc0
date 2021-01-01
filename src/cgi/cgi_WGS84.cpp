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
 *
 ******************************************************************************/

#include <cgi/cgi_WGS84.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

const double WGS84::_a  = osg::WGS_84_RADIUS_EQUATOR;
const double WGS84::_b  = osg::WGS_84_RADIUS_POLAR;
const double WGS84::_e2 = ( WGS84::_a*WGS84::_a - WGS84::_b*WGS84::_b ) / ( WGS84::_a*WGS84::_a );
const double WGS84::_e  = sqrt( WGS84::_e2 );

const osg::EllipsoidModel WGS84::_em = osg::EllipsoidModel();

const osg::Quat WGS84::_enu2ned = osg::Matrixd( 0.0,  1.0,  0.0,  0.0,
                                                1.0,  0.0,  0.0,  0.0,
                                                0.0,  0.0, -1.0,  0.0,
                                                0.0,  0.0,  0.0,  1.0 ).getRotate();

////////////////////////////////////////////////////////////////////////////////

double WGS84::getRadiusEquatorial()
{
    return _a;
}

////////////////////////////////////////////////////////////////////////////////

double WGS84::getRadiusPolar()
{
    return _b;
}

////////////////////////////////////////////////////////////////////////////////

osg::Vec3d WGS84::geo2wgs( double lat, double lon, double alt )
{
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    _em.convertLatLongHeightToXYZ( lat, lon, alt, x, y, z );

    return osg::Vec3d( x, y, z );
}

////////////////////////////////////////////////////////////////////////////////

void WGS84::wgs2geo( const osg::Vec3d &r_wgs, double &lat, double &lon, double &alt )
{
    _em.convertXYZToLatLongHeight( r_wgs.x(), r_wgs.y(), r_wgs.z(),
                                   lat, lon, alt );
}

////////////////////////////////////////////////////////////////////////////////

osg::Vec3d WGS84::ned2wgs( const osg::Vec3d &r0_wgs, const osg::Vec3d &v_ned )
{
    double lat = 0.0;
    double lon = 0.0;
    double alt = 0.0;

    wgs2geo( r0_wgs, lat, lon, alt );

    double cosLat = cos( lat );
    double cosLon = cos( lon );
    double sinLat = sin( lat );
    double sinLon = sin( lon );

    osg::Matrix mat_ned2wgs;

    // WGS to NED
    mat_ned2wgs(0,0) = -cosLon * sinLat;
    mat_ned2wgs(0,1) = -sinLon * sinLat;
    mat_ned2wgs(0,2) =  cosLat;
    mat_ned2wgs(0,3) = 0.0;

    mat_ned2wgs(1,0) = -sinLon;
    mat_ned2wgs(1,1) =  cosLon;
    mat_ned2wgs(1,2) =  0.0;
    mat_ned2wgs(1,3) = 0.0;

    mat_ned2wgs(2,0) = -cosLon * cosLat;
    mat_ned2wgs(2,1) = -sinLon * cosLat;
    mat_ned2wgs(2,2) = -sinLat;
    mat_ned2wgs(2,3) = 0.0;

    mat_ned2wgs(3,0) = 0.0;
    mat_ned2wgs(3,1) = 0.0;
    mat_ned2wgs(3,2) = 0.0;
    mat_ned2wgs(3,3) = 1.0;

    return mat_ned2wgs.getRotate() * v_ned;
}

////////////////////////////////////////////////////////////////////////////////

osg::Vec3d WGS84::wgs2ned( const osg::Vec3d &r0_wgs, const osg::Vec3d &v_wgs )
{
    double lat = 0.0;
    double lon = 0.0;
    double alt = 0.0;

    wgs2geo( r0_wgs, lat, lon, alt );

    double cosLat = cos( lat );
    double cosLon = cos( lon );
    double sinLat = sin( lat );
    double sinLon = sin( lon );

    osg::Matrix mat_wgs2ned;

    mat_wgs2ned(0,0) = -cosLon*sinLat;
    mat_wgs2ned(0,1) = -sinLon;
    mat_wgs2ned(0,2) = -cosLon*cosLat;
    mat_wgs2ned(0,3) = 0.0;

    mat_wgs2ned(1,0) = -sinLon*sinLat;
    mat_wgs2ned(1,1) =  cosLon;
    mat_wgs2ned(1,2) = -sinLon*cosLat;
    mat_wgs2ned(1,3) = 0.0;

    mat_wgs2ned(2,0) =  cosLat;
    mat_wgs2ned(2,1) =  0.0;
    mat_wgs2ned(2,2) = -sinLat;
    mat_wgs2ned(2,3) = 0.0;

    mat_wgs2ned(3,0) = 0.0;
    mat_wgs2ned(3,1) = 0.0;
    mat_wgs2ned(3,2) = 0.0;
    mat_wgs2ned(3,3) = 1.0;

    return mat_wgs2ned.getRotate() * v_wgs;
}

////////////////////////////////////////////////////////////////////////////////

osg::Vec3d WGS84::r_ned2wgs( const osg::Vec3d &r0_wgs, const osg::Vec3d &r_ned )
{
    return r0_wgs + ned2wgs( r0_wgs, r_ned );
}

////////////////////////////////////////////////////////////////////////////////

osg::Vec3d WGS84::r_wgs2ned( const osg::Vec3d &r0_wgs, const osg::Vec3d &r_wgs )
{
    return wgs2ned( r0_wgs, r_wgs - r0_wgs );
}

////////////////////////////////////////////////////////////////////////////////

void WGS84::setLatLonAltHdg( osg::PositionAttitudeTransform *pat,
                             double lat, double lon, double alt, double hdg )
{
    WGS84 wgs( lat, lon, alt );

    pat->setPosition( wgs.getPosition() );
    pat->setAttitude( osg::Quat( hdg, osg::Z_AXIS ) * wgs.getAttitude() );
}

////////////////////////////////////////////////////////////////////////////////

WGS84::WGS84()
{
    set( 0.0, 0.0, 0.0 );
}

////////////////////////////////////////////////////////////////////////////////

WGS84::WGS84( double lat, double lon, double alt )
{
    set( lat, lon, alt );
}

////////////////////////////////////////////////////////////////////////////////

WGS84::WGS84( const osg::Vec3d &position )
{
    set( position );
}

////////////////////////////////////////////////////////////////////////////////

WGS84::~WGS84() {}

////////////////////////////////////////////////////////////////////////////////

void WGS84::set( double lat, double lon, double alt )
{
    _lat = lat;
    _lon = lon;
    _alt = alt;

    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    osg::Matrixd localToWorld;

    _em.convertLatLongHeightToXYZ( lat, lon, alt, x, y, z );
    _em.computeLocalToWorldTransformFromXYZ( x, y, z, localToWorld );

    osg::Quat wgs2enu = localToWorld.getRotate();

    _position = osg::Vec3( x, y, z );
    _attitude = _enu2ned * wgs2enu;
}

////////////////////////////////////////////////////////////////////////////////

void WGS84::set( const osg::Vec3d &position )
{
    double lat = 0.0;
    double lon = 0.0;
    double alt = 0.0;

    osg::Matrixd localToWorld;

    _em.convertXYZToLatLongHeight( position.x(), position.y(), position.z(),
                                   lat, lon, alt );
    _em.computeLocalToWorldTransformFromXYZ( position.x(), position.y(), position.z(),
                                             localToWorld );

    _lat = lat;
    _lon = lon;
    _alt = alt;

    osg::Quat wgs2enu = localToWorld.getRotate();

    _position = position;
    _attitude = _enu2ned * wgs2enu;
}
