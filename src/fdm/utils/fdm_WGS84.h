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
#ifndef FDM_WGS84_H
#define FDM_WGS84_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/utils/fdm_Angles.h>
#include <fdm/utils/fdm_Matrix3x3.h>
#include <fdm/utils/fdm_Quaternion.h>
#include <fdm/utils/fdm_Vector3.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief DoD World Geodetic System 1984 (WGS) class.
 *
 * <p>This class is used to store and calculate location expressed in DoD World
 * Geodetic System 1984 (WGS). It also provides functions to calculate
 * rotation matricies between WGS and local North-East-Down (NED) as well as
 * between WGS and local East-North-Up (ENU) axis systems and function
 * calculating local normal to ellipsoid vector and gravity acceleration.</p>
 *
 * @see Department of Defence World Geodetic System 1984, NIMA, TR-8350.2, 2000
 * @see Bowring B.: Transformation from spatial to geocentric coordinates, 1976
 * @see Zhu J.: Conversion of Earth-centered Earth-fixed coordinates to geodetic coordinates, 1994
 */
class FDMEXPORT WGS84
{
public:

    /** Geographic coordinates. */
    struct Geo
    {
        double lat;                     ///< [rad] geographic latitude (positive north)
        double lon;                     ///< [rad] geographic longitude (positive east)
        double alt;                     ///< [m] altitude above mean sea level
    };

    static const double m_a;            ///< [m] equatorial radius
    static const double m_f;            ///< [-] ellipsoid flattening

    static const double m_b;            ///< [m] polar radius
    static const double m_r1;           ///< [m] mean radius
    static const double m_a2;           ///< [m^2] equatorial radius squared
    static const double m_b2;           ///< [m^2] polar radius squared
    static const double m_e2;           ///< [-] ellipsoid first eccentricity squared
    static const double m_e;            ///< [-] ellipsoid first eccentricity
    static const double m_ep2;          ///< [-] ellipsoid second eccentricity squared
    static const double m_ep;           ///< [-] ellipsoid second eccentricity

    static const double m_g;            ///< [m/s^2] standard gravitional acceleration
    static const double m_gm;           ///< [m^3/s^2] Earth’s gravitational constant (mass of Earth’s atmosphere included)
    static const double m_omega;        ///< [rad/s] angular velocity of the Earth ( 360deg / 23:56:04.091 )
    static const double m_gamma_e;      ///< [m/s^2] theoretical (normal) gravity at the equator (on the ellipsoid)
    static const double m_gamma_p;      ///< [m/s^2] theoretical (normal) gravity at the pole (on the ellipsoid)
    static const double m_k;            ///< [-] theoretical (normal) gravity formula constant
    static const double m_m;            ///< [-] m = omega^2 * a^2 * b / GM

    static const Matrix3x3 m_enu2ned;   ///< matrix of rotation from ENU to NED
    static const Matrix3x3 m_ned2enu;   ///< matrix of rotation from NED to ENU

    /**
     * Returns Earth angular velocity vector expressed in WGS axis system.
     * @return [rad/s] Earth angular velocity vector expressed in WGS
     */
    static Vector3 getOmega_WGS();

    /**
     * Converts geodetic coordinates into WGS coordinates.
     * @param lat geographic latitude [rad]
     * @param lon geographic longitude [rad]
     * @param alt altitude above mean sea level [m]
     * @param x resulting WGS x-coordinate [m]
     * @param y resulting WGS y-coordinate [m]
     * @param z resulting WGS z-coordinate [m]
     */
    static void geo2wgs( double lat, double lon, double alt,
                         double &x, double &y, double &z );

    /**
     * Converts geodetic coordinates into WGS coordinates.
     * @param lat geographic latitude [rad]
     * @param lon geographic longitude [rad]
     * @param alt altitude above mean sea level [m]
     * @return resulting WGS coordinates vector [m]
     */
    static Vector3 geo2wgs( double lat, double lon, double alt );

    /**
     * Converts geodetic coordinates into WGS coordinates.
     * @param pos_geo geographic coordinates
     * @return resulting WGS coordinates vector [m]
     */
    static Vector3 geo2wgs( const Geo &pos_geo );

    /**
     * Converts geodetic coordinates into WGS coordinates.
     * @param pos_geo geographic coordinates
     * @param pos_wgs resulting WGS coordinates vector [m]
     */
    static void geo2wgs( const Geo &pos_geo, Vector3 &pos_wgs );

    /**
     * Converts WGS coordinates into geodetic coordinates.
     * @param x WGS x-coordinate [m]
     * @param y WGS y-coordinate [m]
     * @param z WGS z-coordinate [m]
     * @param lat resulting geographic latitude [rad]
     * @param lon resulting geographic longitude [rad]
     * @param alt resulting altitude above mean sea level [m]
     */
    static void wgs2geo( double x, double y, double z,
                         double &lat, double &lon, double &alt );

    /**
     * Converts WGS coordinates into geodetic coordinates.
     * @param x WGS x-coordinate [m]
     * @param y WGS y-coordinate [m]
     * @param z WGS z-coordinate [m]
     * @return resulting geographic coordinates
     */
    static Geo wgs2geo( double x, double y, double z );

    /**
     * Converts WGS coordinates into geodetic coordinates.
     * @param pos_wgs WGS coordinates vector [m]
     * @return resulting geographic coordinates
     */
    static Geo wgs2geo( const Vector3 &pos_wgs );

    /**
     * Converts WGS coordinates into geodetic coordinates.
     * @param pos_wgs WGS coordinates vector [m]
     * @param pos_geo resulting geographic coordinates
     */
    static void wgs2geo( const Vector3 &pos_wgs, Geo &pos_geo );

    /** Constructor. */
    WGS84();

    /** Copy constructor. */
    WGS84( const WGS84 &wgs );

    /** Constructor. */
    WGS84( const Geo &pos_geo );

    /** Constructor. */
    WGS84( const Vector3 &pos_wgs );

    Angles getAngles_NED( const Angles &angles_wgs ) const;
    Angles getAngles_WGS( const Angles &angles_ned ) const;

    Quaternion getNED2BAS( const Quaternion &att_wgs ) const;
    Quaternion getWGS2BAS( const Quaternion &att_ned ) const;

    inline Geo     getPos_Geo() const { return m_pos_geo; }
    inline Vector3 getPos_WGS() const { return m_pos_wgs; }

    inline Vector3 getNorm_WGS() const { return m_norm_wgs; }
    inline Vector3 getGrav_WGS() const { return m_grav_wgs; }

    inline Matrix3x3 getENU2NED() const { return m_enu2ned; }
    inline Matrix3x3 getNED2ENU() const { return m_ned2enu; }
    inline Matrix3x3 getENU2WGS() const { return m_enu2wgs; }
    inline Matrix3x3 getNED2WGS() const { return m_ned2wgs; }
    inline Matrix3x3 getWGS2ENU() const { return m_wgs2enu; }
    inline Matrix3x3 getWGS2NED() const { return m_wgs2ned; }

    /** */
    void setPos_Geo( const Geo &pos_geo );

    /** */
    void setPos_WGS( const Vector3 &pos_wgs );

private:

    Geo m_pos_geo;          ///< geographic coordinates

    Vector3 m_pos_wgs;      ///< [m] coordinates vector expressed in WGS

    Vector3 m_norm_wgs;     ///< [-] normal to ellipsoid vector expressed in WGS
    Vector3 m_grav_wgs;     ///< [m/s^2] gravity acceleration vector expressed in WGS

    Matrix3x3 m_enu2wgs;    ///< rotation matrix from ENU to WGS
    Matrix3x3 m_ned2wgs;    ///< rotation matrix from NED to WGS
    Matrix3x3 m_wgs2enu;    ///< rotation matrix from WGS to ENU
    Matrix3x3 m_wgs2ned;    ///< rotation matrix from WGS to NED

    /**
     * This function updates location (normal to ellipsoid vector, gravity
     * acceleration vector and rotation matricies) due to current WGS coordinates.
     */
    void update();
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_WGS84_H
