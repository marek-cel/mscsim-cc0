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

#include <fdm/main/fdm_Intersections.h>

#ifdef SIM_INTERSECTIONS
#   include <cgi/cgi_Intersections.h>
#   include <cgi/cgi_WGS84.h>
#endif

#include <fdm/utils/fdm_Geom.h>
#include <fdm/utils/fdm_WGS84.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

Intersections::Intersections() :
    _inited ( false )
{}

////////////////////////////////////////////////////////////////////////////////

Intersections::~Intersections() {}

////////////////////////////////////////////////////////////////////////////////

void Intersections::update( double lat, double lon )
{
#   ifdef SIM_INTERSECTIONS
    cgi::WGS84 wgs_b( lat, lon, 10000.0 );
    cgi::WGS84 wgs_e( lat, lon, -1000.0 );

    osg::Vec3d b = wgs_b.getPosition();
    osg::Vec3d e = wgs_e.getPosition();
    osg::Vec3d r;
    osg::Vec3d n;

    if ( cgi::Intersections::instance()->findFirst( b, e, r, n ) )
    {
        _inited = true;

        _ground_wgs = Vector3( r.x(), r.y(), r.z() );
        _normal_wgs = Vector3( n.x(), n.y(), n.z() );
    }
#   else
    WGS84::Geo geo = { lat, lon, 0.0 };
    WGS84 wgs( geo );

    _inited = true;

    _ground_wgs = wgs.getPos_WGS();
    _normal_wgs = wgs.getNorm_WGS();
#   endif
}

////////////////////////////////////////////////////////////////////////////////

double Intersections::getElevation( double lat, double lon ) const
{
    WGS84::Geo b_geo;
    WGS84::Geo e_geo;

    b_geo.lat = lat;
    b_geo.lon = lon;
    b_geo.alt = 10000.0;

    e_geo.lat = lat;
    e_geo.lon = lon;
    e_geo.alt = -1000.0;

    Vector3 b_wgs = WGS84::geo2wgs( b_geo );
    Vector3 e_wgs = WGS84::geo2wgs( e_geo );
    Vector3 r_wgs;
    Vector3 n_wgs;

    if ( FDM_SUCCESS == getIntersection( b_wgs, e_wgs, &r_wgs, &n_wgs ) )
    {
        return WGS84::wgs2geo( r_wgs ).alt;
    }

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

int Intersections::getIntersection( const Vector3 &b, const Vector3 &e,
                                    Vector3 *r, Vector3 *n, bool update ) const
{
#   ifdef SIM_INTERSECTIONS
    if ( update )
    {
        osg::Vec3d b_tmp( b.x(), b.y(), b.z() );
        osg::Vec3d e_tmp( e.x(), e.y(), e.z() );
        osg::Vec3d r_tmp;
        osg::Vec3d n_tmp;

        if ( cgi::Intersections::instance()->findFirst( b_tmp, e_tmp, r_tmp, n_tmp ) )
        {
            (*r) = Vector3( r_tmp.x(), r_tmp.y(), r_tmp.z() );
            (*n) = Vector3( n_tmp.x(), n_tmp.y(), n_tmp.z() );

            return FDM_SUCCESS;
        }
    }
    else
#   endif
    {
        if ( _inited )
        {
            double num = _normal_wgs * ( _ground_wgs - b );
            double den = _normal_wgs * ( e - b );

            double u = 0.0;

            if ( fabs( den ) > 10e-15 ) u = num / den;

            if ( 0.0 < u && u < 1.0 )
            {
                (*r) = b + u * ( e - b );
                (*n) = _normal_wgs;

                return FDM_SUCCESS;
            }
        }
    }

    return FDM_FAILURE;
}

////////////////////////////////////////////////////////////////////////////////

bool Intersections::isIntersection( const Vector3 &b, const Vector3 &e,
                                    bool update ) const
{
    if ( update )
    {
        Vector3 r;
        Vector3 n;

        if ( FDM_SUCCESS == getIntersection( b, e, &r, &n, true ) )
        {
            return Geom::isIsect( b, e, r, n );
        }
    }
    else
    {
        if ( _inited )
        {
            return Geom::isIsect( b, e, _ground_wgs, _normal_wgs );
        }
    }

    return false;
}

////////////////////////////////////////////////////////////////////////////////

Vector3 Intersections::getNormal( double lat, double lon, bool update ) const
{
    WGS84::Geo b_geo;
    WGS84::Geo e_geo;

    b_geo.lat = lat;
    b_geo.lon = lon;
    b_geo.alt = 10000.0;

    e_geo.lat = lat;
    e_geo.lon = lon;
    e_geo.alt = -1000.0;

    Vector3 b_wgs = WGS84::geo2wgs( b_geo );
    Vector3 e_wgs = WGS84::geo2wgs( e_geo );
    Vector3 r_wgs;
    Vector3 n_wgs;

    if ( FDM_SUCCESS == getIntersection( b_wgs, e_wgs, &r_wgs, &n_wgs, update ) )
    {
        return n_wgs;
    }
    else
    {
        return WGS84( b_wgs ).getNorm_WGS();
    }
}
