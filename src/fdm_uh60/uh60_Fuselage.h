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
#ifndef UH60_FUSELAGE_H
#define UH60_FUSELAGE_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/utils/fdm_Table.h>
#include <fdm/utils/fdm_Table2D.h>
#include <fdm/utils/fdm_Vector3.h>

#include <fdm/xml/fdm_XmlNode.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief UH-60 fuselage class.
 *
 * Force coefficient are given as force devided by dynamic pressure.
 * drag       : C_D = D / q
 * side force : C_Y = Y / q
 * lift       : C_L = L / q
 *
 * Moment coefficient are given as moment devided by dynamic pressure.
 * rolling moment  : C_R = R / q
 * pitching moment : C_M = M / q
 * yawing moment   : C_N = N / q
 *
 * XML configuration file format:
 * @code
 * <fuselage>
 *   <aero_center> { [m] x-coordinate } { [m] y-coordinate } { [m] z-coordinate } </aero_center>
 *   <ekxwf>
 *     { [rad] longitudinal flapping angle } ... { more values }
 *     { [rad] rotor wake skew angle } { [-] rotor wash interference factor (inplane) } ... { more values }
 *     ... { more entries }
 *   </ekxwf>
 *   <ekzwf>
 *     { [rad] longitudinal flapping angle } ... { more values }
 *     { [rad] rotor wake skew angle } { [-] rotor wash interference factor (downwash) } ... { more values }
 *     ... { more entries }
 *   </ekzwf>
 *   <dqfmp>
 *     { [rad] angle of attack } { [m^2] drag coefficient }
 *     ... { more entries }
 *   </dqfmp>
 *   <lqfmp>
 *     { [rad] angle of attack } { [m^2] lift coefficient }
 *     ... { more entries }
 *   </lqfmp>
 *   <mqfmp>
 *     { [rad] angle of attack } { [m^3] pitching moment coefficient }
 *     ... { more entries }
 *   </mqfmp>
 *   <yqfmp>
 *     { [rad] angle of sideslip } { [m^2] sideforce coefficient }
 *     ... { more entries }
 *   </yqfmp>
 *   <rqfmp>
 *     { [rad] angle of sideslip } { [m^3] rolling moment coefficient }
 *     ... { more entries }
 *   </rqfmp>
 *   <nqfmp>
 *     { [rad] angle of sideslip } { [m^3] yawing moment coefficient }
 *     ... { more entries }
 *   </nqfmp>
 *   <ddqfmp>
 *     { [rad] angle of sideslip } { [m^2] incremental drag coefficient }
 *     ... { more entries }
 *   </ddqfmp>
 *   <dlqfmp>
 *     { [rad] angle of sideslip } { [m^2] incremental lift coefficient }
 *     ... { more entries }
 *   </dlqfmp>
 *   <dmqfmp>
 *     { [rad] angle of sideslip } { [m^3] incremental pitching moment coefficient }
 *     ... { more entries }
 *   </dmqfmp>
 * </fuselage>
 * @endcode
 *
 * @see Howlett J.: UH-60A Black Hawk Engineering Simulation Program. NASA, CR-166309, 1981
 */
class UH60_Fuselage
{
public:

    /** Constructor. */
    UH60_Fuselage();

    /** Destructor. */
    virtual ~UH60_Fuselage();

    /**
     * Reads data.
     * @param dataNode XML node
     */
    void readData( XmlNode &dataNode );

    /**
     * Computes force and moment.
     * @param vel_air_bas [m/s] aircraft linear velocity relative to the air expressed in BAS
     * @param omg_air_bas [rad/s] aircraft angular velocity relative to the air expressed in BAS
     * @param airDensity [kg/m^3] air density
     * @param a1fmr [rad] longitudinal flapping angle
     * @param chipmr [rad] rotor wake skew angle
     * @param dwshmr [-] main rotor uniform downwash
     * @param omgtmr [rad/s] rotor speed
     * @param rmr [m] rotor radius
     */
    virtual void computeForceAndMoment( const Vector3 &vel_air_bas,
                                        const Vector3 &omg_air_bas,
                                        double airDensity,
                                        double a1fmr,
                                        double chipmr,
                                        double dwshmr,
                                        double omgtmr,
                                        double rmr );

    inline const Vector3& getFor_BAS() const { return _for_bas; }
    inline const Vector3& getMom_BAS() const { return _mom_bas; }

private:

    Vector3 _for_bas;           ///< [N] total force vector expressed in BAS
    Vector3 _mom_bas;           ///< [N*m] total moment vector expressed in BAS

    Vector3 _r_ac_bas;          ///< [m] fuselage aerodynamic center expressed in BAS

    Table2D _ekxwf;             ///< [-] rotor wash interference factor (inplane)
    Table2D _ekzwf;             ///< [-] rotor wash interference factor (downwash)

    Table _dqfmp;               ///< [m^2] drag coefficient due to angle of attack
    Table _lqfmp;               ///< [m^2] lift coefficient vs [rad] angle of attack
    Table _mqfmp;               ///< [m^3] pitching moment coefficient vs [rad] angle of attack

    Table _yqfmp;               ///< [m^2] sideforce coefficient vs [rad] angle of sideslip
    Table _rqfmp;               ///< [m^3] rolling moment coefficient vs [rad] angle of sideslip
    Table _nqfmp;               ///< [m^3] yawing moment coefficient vs [rad] angle of sideslip

    Table _ddqfmp;              ///< [m^2] incremental drag coefficient vs [rad] angle of sideslip
    Table _dlqfmp;              ///< [m^2] incremental lift coefficient vs [rad] angle of sideslip
    Table _dmqfmp;              ///< [m^3] incremental pitching moment coefficient vs [rad] angle of sideslip

    /**
     * Computes drag coefficient.
     * @param alfwf [rad] body axes angle of attack
     * @param psiwf [rad] W/T model yaw angle
     * @return [-] drag coefficient
     */
    virtual double getDQFTOT( double alfwf, double psiwf ) const;

    /**
     * Computes sideforce coefficient.
     * @param psiwf [rad] W/T model yaw angle
     * @return [-] sideforce coefficient
     */
    virtual double getYQFTOT( double psiwf ) const;

    /**
     * Computes lift coefficient.
     * @param alfwf [rad] body axes angle of attack
     * @param psiwf [rad] W/T model yaw angle
     * @return [-] lift coefficient
     */
    virtual double getLQFTOT( double alfwf, double psiwf ) const;

    /**
     * Computes rolling moment coefficient.
     * @param psiwf [rad] W/T model yaw angle
     * @return [-] rolling moment coefficient
     */
    virtual double getRQFTOT( double psiwf ) const;

    /**
     * Computes pitching moment coefficient.
     * @param alfwf [rad] body axes angle of attack
     * @param psiwf [rad] W/T model yaw angle
     * @return [-] pitching moment coefficient
     */
    virtual double getMQFTOT( double alfwf, double psiwf ) const;

    /**
     * Computes yawing moment coefficient.
     * @param psiwf [rad] W/T model yaw angle
     * @return [-] yawing moment coefficient
     */
    virtual double getNQFTOT( double psiwf ) const;
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // UH60_FUSELAGE_H
