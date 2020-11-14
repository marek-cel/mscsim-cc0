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
#ifndef F16_AERODYNAMICS_H
#define F16_AERODYNAMICS_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/main/fdm_Aerodynamics.h>

#include <fdm/utils/fdm_Table1.h>
#include <fdm/utils/fdm_Table2.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

class F16_Aircraft;     ///< aircraft class forward declaration

/**
 * @brief F-16 aerodynamics class.
 *
 * @see Nguyen L., et al.: Simulator Study of Stall/Post-Stall Characteristics of a Fighter Airplane With Relaxed Longitudinal Static Stability, NASA-TP-1538, 1979
 * @see Gilbert W., et al.: Simulator Study of the Effectiveness of an Automatic Control System Designed to Improve the High-Angle-of-Attack Characteristics of a Fighter Airplane, NASA-TN-D-8176, 1976
 */
class F16_Aerodynamics : public Aerodynamics
{
public:

    /** Constructor. */
    F16_Aerodynamics( const F16_Aircraft *aircraft, Input *input );

    /** Destructor. */
    ~F16_Aerodynamics();

    /**
     * Reads data.
     * @param dataNode XML node
     */
    void readData( XmlNode &dataNode );

    /** Computes force and moment. */
    void computeForceAndMoment();

    /** Updates model. */
    void update();

    /**
     * Returns true if aircraft is stalling, otherwise returns false.
     * @return true if aircraft is stalling, false otherwise
     */
    inline bool getStall() const { return false; /* TODO */ }

private:

    const F16_Aircraft *_aircraft;  ///< aircraft model main object

    Table2 _cx_dh_n25;              ///< [-] body x-force coefficient vs angle of attack and sideslip (delta_h=-25)
    Table2 _cx_dh_n10;              ///< [-] body x-force coefficient vs angle of attack and sideslip (delta_h=-10)
    Table2 _cx_dh_0;                ///< [-] body x-force coefficient vs angle of attack and sideslip (delta_h=0)
    Table2 _cx_dh_p10;              ///< [-] body x-force coefficient vs angle of attack and sideslip (delta_h=10)
    Table2 _cx_dh_p25;              ///< [-] body x-force coefficient vs angle of attack and sideslip (delta_h=25)
    Table2 _cx_lef;                 ///<
    Table1 _delta_cx_sb;            ///<
    Table1 _cx_q;                   ///<
    Table1 _delta_cx_q_lef;         ///<
    Table1 _delta_cx_tef;           ///<
    Table1 _delta_cx_gear;          ///<

    Table2 _cy;                     ///< [-] sideforce coefficient vs angle of attack and sideslip
    Table2 _cy_lef;                 ///<
    Table2 _cy_da_20;               ///<
    Table2 _cy_da_20_lef;           ///<
    Table2 _cy_dr_30;               ///<
    Table1 _cy_r;                   ///<
    Table1 _delta_cy_r_lef;         ///<
    Table1 _cy_p;                   ///<
    Table1 _delta_cy_p_lef;         ///<

    Table2 _cz_dh_n25;              ///< [-] body z-force coefficient vs angle of attack and sideslip (delta_h=-25)
    Table2 _cz_dh_n10;              ///< [-] body z-force coefficient vs angle of attack and sideslip (delta_h=-10)
    Table2 _cz_dh_0;                ///< [-] body z-force coefficient vs angle of attack and sideslip (delta_h=0)
    Table2 _cz_dh_p10;              ///< [-] body z-force coefficient vs angle of attack and sideslip (delta_h=10)
    Table2 _cz_dh_p25;              ///< [-] body z-force coefficient vs angle of attack and sideslip (delta_h=25)
    Table2 _cz_lef;                 ///<
    Table1 _delta_cz_sb;            ///<
    Table1 _cz_q;                   ///<
    Table1 _delta_cz_q_lef;         ///<
    Table1 _delta_cz_tef;           ///<
    Table1 _delta_cz_gear;          ///<

    Table2 _cl_dh_n25;              ///<
    Table2 _cl_dh_0;                ///<
    Table2 _cl_dh_p25;              ///<
    Table2 _cl_lef;                 ///<
    Table2 _cl_da_20;               ///<
    Table2 _cl_da_20_lef;           ///<
    Table2 _cl_dr_30;               ///<
    Table1 _cl_r;                   ///<
    Table1 _delta_cl_beta;          ///<
    Table1 _delta_cl_r_lef;         ///<
    Table1 _cl_p;                   ///<
    Table1 _delta_cl_p_lef;         ///<

    Table2 _cm_dh_n25;              ///< [-] body pitching moment coefficient vs angle of attack and sideslip (delta_h=-25)
    Table2 _cm_dh_n10;              ///< [-] body pitching moment coefficient vs angle of attack and sideslip (delta_h=-10)
    Table2 _cm_dh_0;                ///< [-] body pitching moment coefficient vs angle of attack and sideslip (delta_h=0)
    Table2 _cm_dh_p10;              ///< [-] body pitching moment coefficient vs angle of attack and sideslip (delta_h=10)
    Table2 _cm_dh_p25;              ///< [-] body pitching moment coefficient vs angle of attack and sideslip (delta_h=25)
    Table2 _cm_lef;                 ///<
    Table1 _delta_cm_sb;            ///<
    Table1 _cm_q;                   ///<
    Table1 _delta_cm_q_lef;         ///<
    Table1 _delta_cm;               ///<
    Table2 _delta_cm_ds;            ///< (deep stall)
    Table1 _delta_cm_tef;           ///<
    Table1 _eta_delta_h;            ///< horizontal stabilator effectiveness factor

    Table2 _cn_dh_n25;              ///< [-] body yawing moment coefficient vs angle of attack and sideslip (delta_h=-25)
    Table2 _cn_dh_0;                ///< [-] body yawing moment coefficient vs angle of attack and sideslip (delta_h=0)
    Table2 _cn_dh_p25;              ///< [-] body yawing moment coefficient vs angle of attack and sideslip (delta_h=25)
    Table2 _cn_lef;                 ///<
    Table2 _cn_da_20;               ///<
    Table2 _cn_da_20_lef;           ///<
    Table2 _cn_dr_30;               ///<
    Table1 _cn_r;                   ///<
    Table1 _delta_cn_beta;          ///<
    Table1 _delta_cn_r_lef;         ///<
    Table1 _cn_p;                   ///<
    Table1 _delta_cn_p_lef;         ///<

    Table1 _wave_drag;              ///< wave drag coefficient

    double _span;                   ///< [m] wing span
    double _mac;                    ///< [m] wing mean aerodynamic chord
    double _area;                   ///< [m^2] wing reference area

    double _mac_s;                  ///< [m^3] MAC*S where MAC is mean aerodynamic chord and S is wing area

    double _alpha;                  ///< [rad] angle of attack
    double _alpha_deg;              ///< [deg] angle of attack
    double _beta;                   ///< [rad] angle of sideslip
    double _beta_deg;               ///< [deg] angle of sideslip

    double _b_2v;                   ///< [s] b/(2*V) where b is a wing span and V is an airspeed
    double _c_2v;                   ///< [s] c/(2*V) where c is a mean chord and V is an airspeed

    double _cx_delta_h;             ///< [-] body x-force coefficient due to angle of attack, sideslip and elevator deflection
    double _cz_delta_h;             ///< [-] body z-force coefficient due to angle of attack, sideslip and elevator deflection
    double _cl_delta_h;             ///<
    double _cm_delta_h;             ///< [-] body pitching moment coefficient due to angle of attack, sideslip and elevator deflection
    double _cn_delta_h;             ///<

    double _lef_factor;             ///< [-] leading edge flaps factor

    double getCx() const;
    double getCy() const;
    double getCz() const;

    double getCl() const;
    double getCm() const;
    double getCn() const;

    void updateCoefsDueToElevator();
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // F16_AERODYNAMICS_H
