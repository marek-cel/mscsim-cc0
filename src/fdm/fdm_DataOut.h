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
#ifndef FDM_DATAOUT_H
#define FDM_DATAOUT_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/fdm_Defines.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief Simulation output data.
 */
struct DataOut
{
    /** State output. */
    enum StateOut
    {
        Idle = 0,                           ///< idle
        Initializing,                       ///< initializing
        Ready,                              ///< ready
        Working,                            ///< working
        Paused,                             ///< paused
        Stopped                             ///< stopped
    };

    /** Aircraft crash condition. */
    enum Crash
    {
        NoCrash = 0,                        ///< no crash
        Collision,                          ///< collision with terrain or obstacle
        Overspeed,                          ///< airspeed too high
        Overstress                          ///< load factor too high
    };

    /** Flight data. */
    struct Flight
    {
        double latitude;                    ///< [rad] geodetic latitude (positive north)
        double longitude;                   ///< [rad] geodetic longitude (positive east)

        double altitude_asl;                ///< [m] altitude above mean sea level
        double altitude_agl;                ///< [m] altitude above ground level

        double roll;                        ///< [rad] roll angle
        double pitch;                       ///< [rad] pitch angle
        double heading;                     ///< [rad] true heading

        double angleOfAttack;               ///< [rad] angle of attack
        double sideslipAngle;               ///< [rad] angle of sideslip

        double climbAngle;                  ///< [rad] climb angle
        double trackAngle;                  ///< [rad] track angle

        double slipSkidAngle;               ///< [rad] slip/skid angle

        double airspeed;                    ///< [m/s] airspeed (real aircraft airspeed)
        double ias;                         ///< [m/s] IAS (along x-axis)
        double tas;                         ///< [m/s] TAS (along x-axis)
        double groundSpeed;                 ///< [m/s] ground speed (horizontal velocity)
        double machNumber;                  ///< [-]   Mach number
        double climbRate;                   ///< [m/s] climb rate

        double rollRate;                    ///< [rad/s] roll rate  (angular velcoity p component expressed in BAS)
        double pitchRate;                   ///< [rad/s] pitch rate (angular velcoity q component expressed in BAS)
        double yawRate;                     ///< [rad/s] yaw rate   (angular velcoity r component expressed in BAS)
        double turnRate;                    ///< [rad/s] turn rate  (heading change rate)

        double pos_x_wgs;                   ///< [m] postion x coordinate expressed in WGS
        double pos_y_wgs;                   ///< [m] postion y coordinate expressed in WGS
        double pos_z_wgs;                   ///< [m] postion z coordinate expressed in WGS

        double att_e0_wgs;                  ///< [-] attitude quaternion e0 component expressed as rotation from WGS to BAS
        double att_ex_wgs;                  ///< [-] attitude quaternion ex component expressed as rotation from WGS to BAS
        double att_ey_wgs;                  ///< [-] attitude quaternion ey component expressed as rotation from WGS to BAS
        double att_ez_wgs;                  ///< [-] attitude quaternion ez component expressed as rotation from WGS to BAS

        double vel_u_bas;                   ///< [m/s] velcoity u component expressed in BAS
        double vel_v_bas;                   ///< [m/s] velcoity v component expressed in BAS
        double vel_w_bas;                   ///< [m/s] velcoity w component expressed in BAS

        double omg_p_bas;                   ///< [rad/s] angular velcoity p component expressed in BAS
        double omg_q_bas;                   ///< [rad/s] angular velcoity q component expressed in BAS
        double omg_r_bas;                   ///< [rad/s] angular velcoity r component expressed in BAS

        double phi_wgs;                     ///< [rad] angle of rotation about x axis from WGS to BAS expressed in zyx convention (Bryant angles)
        double tht_wgs;                     ///< [rad] angle of rotation about y axis from WGS to BAS expressed in zyx convention (Bryant angles)
        double psi_wgs;                     ///< [rad] angle of rotation about z axis from WGS to BAS expressed in zyx convention (Bryant angles)

        double airspeed_u_bas;              ///< [m/s] velcoity relative to airflow u component expressed in BAS
        double airspeed_v_bas;              ///< [m/s] velcoity relative to airflow v component expressed in BAS
        double airspeed_w_bas;              ///< [m/s] velcoity relative to airflow w component expressed in BAS

        double vel_north;                   ///< [m/s] north velcoity u component expressed in BAS
        double vel_east;                    ///< [m/s] east velcoity v component expressed in BAS

        double acc_x_bas;                   ///< [m/s^2] linear acceleration x component expressed in BAS
        double acc_y_bas;                   ///< [m/s^2] linear acceleration y component expressed in BAS
        double acc_z_bas;                   ///< [m/s^2] linear acceleration z component expressed in BAS

        double g_force_x;                   ///< [-] x component of G-Force vector expressed in BAS (aircraft)
        double g_force_y;                   ///< [-] y component of G-Force vector expressed in BAS (aircraft)
        double g_force_z;                   ///< [-] z component of G-Force vector expressed in BAS (aircraft)

        double g_pilot_x;                   ///< [-] x component of G-Force vector expressed in BAS (pilot)
        double g_pilot_y;                   ///< [-] y component of G-Force vector expressed in BAS (pilot)
        double g_pilot_z;                   ///< [-] z component of G-Force vector expressed in BAS (pilot)

        bool onGround;                      ///< specifies if aircraft is on ground
        bool stall;                         ///< specifies if aircraft is stalling
    };

    /** Controls data. */
    struct Controls
    {
        double ailerons;                    ///< [rad] ailerons deflection (positive left aileron in the upward direction)
        double elevator;                    ///< [rad] elevator deflection (positive in the downward direction)
        double elevons;                     ///< [rad] elevons differential deflection
        double rudder;                      ///< [rad] rudder deflection (positive in the port direction)
        double flaps;                       ///< [rad] flaps deflection
        double flaperons;                   ///< [rad] flaperons differtial deflection
        double lef;                         ///< [rad] leading edge flaps deflection
        double airbrake;                    ///< [rad] airbrake deflection
    };

    /** Engine data. */
    struct Engine
    {
        bool state;                         ///< specifies if engine is working
        bool afterburner;                   ///< afterburner

        double rpm;                         ///< [rpm] engine rotational speed
        double prop;                        ///< [rpm] propeller rotational speed
        double ng;                          ///< [%] gas generator rotational speed
        double n1;                          ///< [%] low pressure spool rotational speed
        double n2;                          ///< [%] high pressure spool rotational speed
        double trq;                         ///< [%] torque
        double epr;                         ///< [-] engine pressure ratio
        double map;                         ///< [Pa] manifold absolute pressure
        double egt;                         ///< [deg C] exhaust gas temperature
        double itt;                         ///< [deg C] interstage turbine temperature
        double tit;                         ///< [deg C] turbine inlet temperature

        double fuelFlow;                    ///< [kg/s] fuel flow
    };

    /** Environment data. */
    struct Environment
    {
        double air_pressure;                ///< [Pa] air pressure
        double air_density;                 ///< [kg/m^3] air density
        double air_temperature;             ///< [K] air temperature
    };

    /** Rotor data. */
    struct Rotor
    {
        double mainRotor_omega;             ///< [rad/s] main rotor rotation speed
        double mainRotor_azimuth;           ///< [rad] main rotor rotation angle (azimuth)
        double mainRotor_coningAngle;       ///< [rad] main rotor coning angle
        double mainRotor_diskRoll;          ///< [rad] main rotor disk roll angle
        double mainRotor_diskPitch;         ///< [rad] main rotor disk pitch angle
        double mainRotor_collective;        ///< [rad] main rotor collective pitch angle
        double mainRotor_cyclicLon;         ///< [rad] main rotor longitudinal cyclic pitch angle
        double mainRotor_cyclicLat;         ///< [rad] main rotor lateral cyclic pitch angle
        double tailRotor_azimuth;           ///< [rad] tail rotor rotation angle
    };

    /** Blade data. */
    struct Blade
    {
        double flapping;                    ///< [rad] flapping angle
        double feathering;                  ///< [rad] feathering angle
    };

    Flight      flight;                     ///< flight data
    Controls    controls;                   ///< controls data
    Engine      engine[ FDM_MAX_ENGINES ];  ///< engines data
    Environment environment;                ///< environment data
    Rotor       rotor;                      ///< rotor data
    Blade       blade[ FDM_MAX_BLADES ];    ///< blades data

    Crash crash;                            ///< crash cause
    StateOut stateOut;                      ///< output state
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_DATAOUT_H
