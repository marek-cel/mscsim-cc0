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
#ifndef FDM_TAILOFF_H
#define FDM_TAILOFF_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/fdm_Base.h>

#include <fdm/utils/fdm_Table.h>
#include <fdm/utils/fdm_Vector3.h>

#include <fdm/xml/fdm_XmlNode.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief Tail-off aircraft aerodynamics class.
 *
 * Forces and moments are calculated, considering different airflow
 * conditions, separately for left and right half wings. Half wing aerodynamic
 * center is considered datum point for computing airflow conditions (airspeed,
 * angle of attack, etc.).
 *
 * XML configuration file format:
 * @code
 * <tail_off>
 *   <aero_center_l> { [m] x-coordinate } { [m] y-coordinate } { [m] z-coordinate } </aero_center_l>
 *   <aero_center_r> { [m] x-coordinate } { [m] y-coordinate } { [m] z-coordinate } </aero_center_r>
 *   <mac> { [m] wing mean aerodynamic chord } </mac>
 *   <area> { [m^2] wing area } </area>
 *   <cx>
 *     { [rad] angle of attack } { [-] drag coefficient }
 *     ... { more entries }
 *   </cx>
 *   <cy>
 *     { [rad] angle of sideslip } { [-] sideforce coefficient }
 *     ... { more entries }
 *   </cy>
 *   <cz>
 *     { [rad] angle of attack } { [-] lift coefficient }
 *     ... { more entries }
 *   </cz>
 *   <cl>
 *     { [rad] angle of sideslip } { [-] rolling moment coefficient }
 *     ... { more entries }
 *   </cl>
 *   <cm>
 *     { [rad] angle of attack } { [-] pitching moment coefficient }
 *     ... { more entries }
 *   </cm>
 *   <cn>
 *     { [rad] angle of sideslip } { [-] yawing moment coefficient }
 *     ... { more entries }
 *   </cn>
 * </tail_off>
 * @endcode
 *
 * Optional elements: "cy", "cl", "cn"
 */
class FDMEXPORT TailOff : public Base
{
public:

    /** Constructor. */
    TailOff();

    /** Destructor. */
    virtual ~TailOff();

    /**
     * Reads data.
     * @param dataNode XML node
     */
    virtual void readData( XmlNode &dataNode );

    /**
     * Computes force and moment.
     * @param vel_air_bas [m/s] aircraft linear velocity relative to the air expressed in BAS
     * @param omg_air_bas [rad/s] aircraft angular velocity relative to the air expressed in BAS
     * @param airDensity [kg/m^3] air density
     */
    virtual void computeForceAndMoment( const Vector3 &vel_air_bas,
                                        const Vector3 &omg_air_bas,
                                        double airDensity );

    /**
     * Updates wing.
     * @param vel_air_bas [m/s] aircraft linear velocity relative to the air expressed in BAS
     * @param omg_air_bas [rad/s] aircraft angular velocity relative to the air expressed in BAS
     */
    virtual void update( const Vector3 &vel_air_bas, const Vector3 &omg_air_bas );

    inline const Vector3& getFor_BAS() const { return _for_bas; }
    inline const Vector3& getMom_BAS() const { return _mom_bas; }

    inline bool getStall() const { return _stall; }

protected:

    Vector3 _for_bas;           ///< [N] total force vector expressed in BAS
    Vector3 _mom_bas;           ///< [N*m] total moment vector expressed in BAS

    Vector3 _vel_l_bas;         ///< [m/s] left half wing airspeed
    Vector3 _vel_r_bas;         ///< [m/s] right half wing airspeed

    Vector3 _r_ac_l_bas;        ///< [m] left half wing aerodynamic center expressed in BAS
    Vector3 _r_ac_r_bas;        ///< [m] right half wing aerodynamic center expressed in BAS

    Table _cx;                  ///< [-] drag coefficient vs [rad] angle of attack
    Table _cy;                  ///< [-] sideforce coefficient vs [rad] angle of sideslip
    Table _cz;                  ///< [-] lift coefficient vs [rad] angle of attack
    Table _cl;                  ///< [-] rolling moment coefficient vs [rad] angle of sideslip
    Table _cm;                  ///< [-] pitching moment coefficient vs [rad] angle of attack
    Table _cn;                  ///< [-] yawing moment coefficient vs [rad] angle of sideslip

    double _mac;                ///< [m] wing mean aerodynamic chord
    double _area;               ///< [m^2] wing reference area

    double _area_2;             ///< [m^2] half wing reference area
    double _mac_s_2;            ///< [m^3] MAC*S/2 where MAC is mean aerodynamic chord and S is reference area

    double _aoa_critical_neg;   ///< [rad] critical angle of attack (negative)
    double _aoa_critical_pos;   ///< [rad] critical angle of attack (positive)

    double _aoa_l;              ///< [rad] left half wing angle of attack
    double _aoa_r;              ///< [rad] right half wing angle of attack

    bool _stall;                ///< specifies if wing is stalled

    /**
     * Adds half wing force and moment to the total force and moment.
     * @param r_ac_bas [m] half wing aerodynamic center expressed in BAS
     * @param vel_air_bas [m/s] aircraft linear velocity relative to the air expressed in BAS
     * @param omg_air_bas [rad/s] aircraft angular velocity relative to the air expressed in BAS
     * @param airDensity [kg/m^3] air density
     */
    virtual void addForceAndMoment( const Vector3 &r_ac_bas,
                                    const Vector3 &vel_air_bas,
                                    const Vector3 &omg_air_bas,
                                    double airDensity );

    /**
     * Computes drag coefficient.
     * @param angleOfAttack [rad] angle of attack
     * @return [-] drag coefficient
     */
    virtual double getCx( double angleOfAttack ) const;

    /**
     * Computes sideforce coefficient.
     * @param sideslipAngle [rad] angle of sideslip
     * @return [-] sideforce coefficient
     */
    virtual double getCy( double sideslipAngle ) const;

    /**
     * Computes lift coefficient.
     * @param angleOfAttack [rad] angle of attack
     * @return [-] lift coefficient
     */
    virtual double getCz( double angleOfAttack ) const;

    /**
     * Computes rolling moment coefficient.
     * @param sideslipAngle [rad] angle of sideslip
     * @return [-] rolling moment coefficient
     */
    virtual double getCl( double sideslipAngle ) const;

    /**
     * Computes pitching moment coefficient.
     * @param angleOfAttack [rad] angle of attack
     * @return [-] pitching moment coefficient
     */
    virtual double getCm( double angleOfAttack ) const;

    /**
     * Computes yawing moment coefficient.
     * @param sideslipAngle [rad] angle of sideslip
     * @return [-] yawing moment coefficient
     */
    virtual double getCn( double sideslipAngle ) const;
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_TAILOFF_H
