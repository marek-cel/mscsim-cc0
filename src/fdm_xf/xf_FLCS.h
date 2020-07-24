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
#ifndef XF_FLCS_H
#define XF_FLCS_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/sys/fdm_Filter2.h>
#include <fdm/sys/fdm_Lag.h>
#include <fdm/sys/fdm_LeadLag.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief X/F Flight Control System class.
 */
class XF_FLCS
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
    XF_FLCS();

    /** Destructor. */
    ~XF_FLCS();

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

    inline double getAilerons()     const { return _ailerons;      }
    inline double getAileronsNorm() const { return _ailerons_norm; }
    inline double getElevator()     const { return _elevator;      }
    inline double getElevatorNorm() const { return _elevator_norm; }
    inline double getElevons()      const { return _elevons;       }
    inline double getRudder()       const { return _rudder;        }
    inline double getRudderNorm()   const { return _rudder_norm;   }
    inline double getFlapsLE()      const { return _flaps_le;      }
    inline double getFlapsLENorm()  const { return _flaps_le_norm; }
    inline double getFlapsTE()      const { return _flaps_te;      }
    inline double getFlapsTENorm()  const { return _flaps_te_norm; }

    void setAilerons_max( double ailerons_max );
    void setElevator_max( double elevator_max );
    void setRudder_max( double rudder_max );
    void setFlaps_le_max( double flaps_le_max );

private:

    double _ailerons_max;               ///< [rad] ailerons deflection limit
    double _elevator_max;               ///< [rad] elevator deflection limit
    double _rudder_max;                 ///< [rad] rudder  deflection limit
    double _flaps_le_max;               ///< [rad] leading edgle flaps deflection limit

    double _ailerons_max_deg;           ///< [deg] ailerons deflection limit
    double _elevator_max_deg;           ///< [deg] elevator deflection limit
    double _rudder_max_deg;             ///< [deg] rudder  deflection limit
    double _flaps_le_max_deg;           ///< [deg] leading edgle flaps deflection limit

    double _ailerons;                   ///< [rad] ailerons deflection
    double _ailerons_norm;              ///< [-] normalized ailerons deflection
    double _elevator;                   ///< [rad] elevator deflection
    double _elevator_norm;              ///< [-] normalized elevator deflection
    double _elevons;                    ///< [rad] elevons differential deflection
    double _rudder;                     ///< [rad] rudder deflection
    double _rudder_norm;                ///< [-] normalized rudder deflection
    double _flaps_le;                   ///< [rad] leading edge flaps deflection
    double _flaps_le_norm;              ///< [-] normalized leading edge flaps deflection
    double _flaps_te;                   ///< [rad] trailing edge flaps deflection
    double _flaps_te_norm;              ///< [-] normalized trailing edge flaps deflection

    double _timeStep;                   ///< [s] time step

    CAT   _cat;                         ///< loading category
    Gains _gains;                       ///< FLCS gains mode

    // leading edge flaps

    LeadLag *_alpha_lef;                ///<

    // trailing edge flaps

    double _flaps_int;                  ///<
    double _flaps_com;                  ///<

    // roll channel

    Lag     *_stick_lat;                ///< lateral stick input lagged
    Lag     *_p_com_lag;                ///< roll rate command
    LeadLag *_p_com_pos;                ///< roll rate command "positive" feedback loop
    LeadLag *_p_com_neg;                ///< roll rate command "negative" feedback loop
    Lag     *_omg_p_lag;                ///< filtered roll rate (p_f)
    Filter2 *_omg_p_fil;                ///<
    Lag     *_delta_fl_lag;             ///<
    Lag     *_delta_fr_lag;             ///<

    double _delta_flc;                  ///< [deg] left flaperon deflection commanded by control system
    double _delta_frc;                  ///< [deg] right flaperon deflection commanded by control system
    double _delta_fl;                   ///< [deg] left flaperon deflection
    double _delta_fr;                   ///< [deg] right flaperon deflection
    double _delta_ac;                   ///< [deg] ailerons deflection
    double _delta_a;                    ///< [deg] ailerons deflection

    // pitch channel

    Lag     *_stick_lon;                ///< longitudinal stick input lagged
    Lag     *_alpha_lag;                ///< [deg] filtered angle of attack (alpha_f)
    Lag     *_g_com_lag;                ///<
    Lag     *_omg_q_lag;                ///< filtered pitch rate (q_f)
    LeadLag *_omg_q_fil;                ///< pitch rate filtered
    Lag     *_g_z_input;                ///< filtered normal acceleration (Az_f)
    Lag     *_sca_bias_1;               ///<
    Lag     *_sca_bias_2;               ///<
    Lag     *_sca_bias_3;               ///<
    LeadLag *_u_sca_fil;                ///<
    Filter2 *_u_sca_fil2;               ///<
    Lag     *_actuator_l;               ///<
    Lag     *_actuator_r;               ///<

    double _pitch_int;                  ///< [deg] pitch integral
    double _delta_htl;                  ///<
    double _delta_htr;                  ///<
    double _delta_h;                    ///< [deg] horizontal stabilator deflection
    double _delta_d;                    ///< [deg] differential horizontal tail deflection

    // yaw channel

    Lag     *_pedals;                   ///<
    Lag     *_omg_r_lag;                ///< yaw rate filtered (r_f)
    Filter2 *_omg_p_yaw;                ///<
    LeadLag *_u_sum_ll1;                ///<
    LeadLag *_u_sum_ll2;                ///<
    Filter2 *_delta_r_fil;              ///<
    Lag     *_delta_r_lag;              ///<

    double _delta_r;                    ///< [deg] rudder deflection

    // gun compensation

    double _gun_compensation;           ///<

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

#endif // XF_FLCS_H
