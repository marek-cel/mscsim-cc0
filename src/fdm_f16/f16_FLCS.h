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
#ifndef F16_FLCS_H
#define F16_FLCS_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/sys/fdm_Filter2.h>
#include <fdm/sys/fdm_Lag.h>
#include <fdm/sys/fdm_LeadLag.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief F-16 Flight Control System class.
 *
 * @see Marchand M.: Pitch Rate Flight Control for the F-16 Aircraft to improve Air-to-Air Combat, AD-A055-417, 1977
 * @see Nguyen L., et al.: Simulator Study of Stall/Post-Stall Characteristics of a Fighter Airplane With Relaxed Longitudinal Static Stability, NASA-TP-1538, 1979
 * @see Droste T., Walker J.: The General Dynamics Case Study on the F-16 Fly-by-Wire Flight Control System
 * @see Dameron G.: A Real-Time Simulator for Man-In-The-Loop Testing of Aircraft Control Systems, AD-A202-599, 1988
 */
class F16_FLCS
{
public:

    /** Loading category. */
    enum CAT
    {
        CAT_I   = 0,    ///< category I loadings
        CAT_III = 1     ///< category III loadings
    };

    /** FLCS gains. */
    enum Gains
    {
        Cruise  = 0,
        Landing = 1
    };

    /** Constructor. */
    F16_FLCS();

    /** Destructor. */
    ~F16_FLCS();

    /** Updates model. */
    void update( double timeStep, double angleOfAttack,
                 double g_y, double g_z,
                 double rollRate, double pitchRate, double yawRate,
                 double ctrlLat, double trimLat,
                 double ctrlLon, double trimLon,
                 double ctrlYaw, double trimYaw,
                 double statPress, double dynPress,
                 bool alt_flaps_ext, bool refuel_door_open,
                 bool lg_handle_dn, bool touchdown );

    inline double getAilerons()     const { return m_ailerons;      }
    inline double getAileronsNorm() const { return m_ailerons_norm; }
    inline double getElevator()     const { return m_elevator;      }
    inline double getElevatorNorm() const { return m_elevator_norm; }
    inline double getElevons()      const { return m_elevons;       }
    inline double getRudder()       const { return m_rudder;        }
    inline double getRudderNorm()   const { return m_rudder_norm;   }
    inline double getFlapsLE()      const { return m_flaps_le;      }
    inline double getFlapsLENorm()  const { return m_flaps_le_norm; }
    inline double getFlapsTE()      const { return m_flaps_te;      }
    inline double getFlapsTENorm()  const { return m_flaps_te_norm; }

    void setAilerons_max( double ailerons_max );
    void setElevator_max( double elevator_max );
    void setRudder_max( double rudder_max );
    void setFlaps_le_max( double flaps_le_max );

private:

    double m_ailerons_max;              ///< [rad] ailerons deflection limit
    double m_elevator_max;              ///< [rad] elevator deflection limit
    double m_rudder_max;                ///< [rad] rudder  deflection limit
    double m_flaps_le_max;              ///< [rad] leading edgle flaps deflection limit

    double m_ailerons_max_deg;          ///< [deg] ailerons deflection limit
    double m_elevator_max_deg;          ///< [deg] elevator deflection limit
    double m_rudder_max_deg;            ///< [deg] rudder  deflection limit
    double m_flaps_le_max_deg;          ///< [deg] leading edgle flaps deflection limit

    double m_ailerons;                  ///< [rad] ailerons deflection
    double m_ailerons_norm;             ///< [-] normalized ailerons deflection
    double m_elevator;                  ///< [rad] elevator deflection
    double m_elevator_norm;             ///< [-] normalized elevator deflection
    double m_elevons;                   ///< [rad] elevons differential deflection
    double m_rudder;                    ///< [rad] rudder deflection
    double m_rudder_norm;               ///< [-] normalized rudder deflection
    double m_flaps_le;                  ///< [rad] leading edge flaps deflection
    double m_flaps_le_norm;             ///< [-] normalized leading edge flaps deflection
    double m_flaps_te;                  ///< [rad] trailing edge flaps deflection
    double m_flaps_te_norm;             ///< [-] normalized trailing edge flaps deflection

    double m_timeStep;                  ///< [s] time step

    CAT   m_cat;                        ///< loading category
    Gains m_gains;                      ///< FLCS gains mode

    // leading edge flaps

    LeadLag *m_alpha_lef;               ///<

    // trailing edge flaps

    double m_flaps_int;                 ///<
    double m_flaps_com;                 ///<

    // roll channel

    Lag     *m_stick_lat;               ///< lateral stick input lagged
    Lag     *m_p_com_lag;               ///< roll rate command
    LeadLag *m_p_com_pos;               ///< roll rate command "positive" feedback loop
    LeadLag *m_p_com_neg;               ///< roll rate command "negative" feedback loop
    Lag     *m_omg_p_lag;               ///< filtered roll rate (p_f)
    Filter2 *m_omg_p_fil;               ///<
    Lag     *m_delta_fl_lag;            ///<
    Lag     *m_delta_fr_lag;            ///<

    double m_delta_flc;                 ///< [deg] left flaperon deflection commanded by control system
    double m_delta_frc;                 ///< [deg] right flaperon deflection commanded by control system
    double m_delta_fl;                  ///< [deg] left flaperon deflection
    double m_delta_fr;                  ///< [deg] right flaperon deflection
    double m_delta_ac;                  ///< [deg] ailerons deflection
    double m_delta_a;                   ///< [deg] ailerons deflection

    // pitch channel

    Lag     *m_stick_lon;               ///< longitudinal stick input lagged
    Lag     *m_alpha_lag;               ///< [deg] filtered angle of attack (alpha_f)
    Lag     *m_g_com_lag;               ///<
    Lag     *m_omg_q_lag;               ///< filtered pitch rate (q_f)
    LeadLag *m_omg_q_fil;               ///< pitch rate filtered
    Lag     *m_g_z_input;               ///< filtered normal acceleration (Az_f)
    Lag     *m_sca_bias_1;              ///<
    Lag     *m_sca_bias_2;              ///<
    Lag     *m_sca_bias_3;              ///<
    LeadLag *m_u_sca_fil;               ///<
    Filter2 *m_u_sca_fil2;              ///<
    Lag     *m_actuator_l;              ///<
    Lag     *m_actuator_r;              ///<

    double m_pitch_int;                 ///< [deg] pitch integral
    double m_delta_htl;                 ///<
    double m_delta_htr;                 ///<
    double m_delta_h;                   ///< [deg] horizontal stabilator deflection
    double m_delta_d;                   ///< [deg] differential horizontal tail deflection

    // yaw channel

    Lag     *m_pedals;                  ///<
    Lag     *m_omg_r_lag;               ///< yaw rate filtered (r_f)
    Filter2 *m_omg_p_yaw;               ///<
    LeadLag *m_u_sum_ll1;               ///<
    LeadLag *m_u_sum_ll2;               ///<
    Filter2 *m_delta_r_fil;             ///<
    Lag     *m_delta_r_lag;             ///<

    double m_delta_r;                   ///< [deg] rudder deflection

    // gun compensation

    double m_gun_compensation;          ///<

    void updateLEF( double angleOfAttack, double q_p );

    void updateTEF( double q_p, bool alt_flaps_ext, bool lg_handle_dn );

    void updateLat( double ctrlLat, double trimLat,
                    double rollRate );

    void updateLon( double ctrlLon, double trimLon,
                    double pitchRate,
                    double angleOfAttack, double q_p, double dynPress, double g_z,
                    bool touchdown );

    void updateYaw( double ctrlYaw, double trimYaw,
                    double yawRate,
                    double q_p, double g_y );

    double getGainF2( double q_p );
    double getGainF3( double dynPress );
    double getGainF7( double q_p );
    double getGainF8( double q_p );
    double getGainF9( double q_p );
    double getGainF10( double q_p );

    double getSurfaceMaxRate( double d_old, double d_new, double delta_max );
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // F16_FLCS_H
