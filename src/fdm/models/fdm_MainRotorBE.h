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
#ifndef FDM_MAINROTORBE_H
#define FDM_MAINROTORBE_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/models/fdm_RotorBlade.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief Helicopter main rotor model class.
 *
 * Articulated blades dynamic model based on blade element theory.
 *
 * Flapping angle is positive upwards.
 *
 * Coordinate Systems Used for Rotor Calculations:
 *
 * Rotor Axes System (RAS)
 * Origin of the Rotor Axes System is coincident with the rotor hub center,
 * the x-axis is positive forwards, the y-axis is positive right and z-axis
 * is positive downwards and coincident with the rotor shaft axis.
 *
 * XML configuration file format:
 * @code
 * <main_rotor>
 *   <hub_center> { [m] x-coordinate } { [m] y-coordinate } { [m] z-coordinate } </hub_center>
 *   <inclination> { [rad] rotor inclination angle (positive if forward) } </inclination>
 *   <number_of_blades> { number of blades } </number_of_blades>
 *   <rotor_radius> { [m] rotor radius } </rotor_radius>
 *   <blade>
 *     { blade data }
 *   </blade>
 * </main_rotor>
 * @endcode
 *
 * @see fdm::Blade
 */
class FDMEXPORT MainRotorBE
{
public:

    typedef std::vector< RotorBlade* > Blades;

    /** Rotor direction. */
    enum Direction
    {
        CW  = 0,    ///< clockwise (looking from above)
        CCW = 1     ///< counter-clockwise (looking from above)
    };

    static const double _timeStepMax;       ///< [s] maximum integration time step

    /** @brief Constructor. */
    MainRotorBE();

    /** @brief Destructor. */
    virtual ~MainRotorBE();

    /**
     * @brief Reads data.
     * @param dataNode XML node
     */
    virtual void readData( XmlNode &dataNode );

    /**
     * @brief Compute forces and moments.
     * @param vel_air_bas [m/s]     rotor hub linear velocity relative to airflow expressed in BAS
     * @param omg_air_bas [rad/s]   rotor hub angular velocity relative to airflow expressed in BAS
     * @param omg_bas     [rad/s]   angular velocity expressed in BAS
     * @param acc_bas     [m/s^2]   rotor hub linear acceleration expressed in BAS
     * @param eps_bas     [rad/s^2] angular acceleration expressed in BAS
     * @param grav_bas    [m/s^2]   gravity acceleration vector expressed in BAS
     * @param airDensity  [kg/m^3]  air density
     */
    virtual void computeForceAndMoment( const Vector3 &vel_air_bas,
                                        const Vector3 &omg_air_bas,
                                        const Vector3 &omg_bas,
                                        const Vector3 &acc_bas,
                                        const Vector3 &eps_bas,
                                        const Vector3 &grav_bas,
                                        double airDensity );

    /**
     * @brief Updates main rotor model.
     * @param timeStep    [s]       time step
     * @param vel_air_bas [m/s]     rotor hub linear velocity relative to airflow expressed in BAS
     * @param omg_air_bas [rad/s]   rotor hub angular velocity relative to airflow expressed in BAS
     * @param omg_bas     [rad/s]   angular velocity expressed in BAS
     * @param acc_bas     [m/s^2]   rotor hub linear acceleration expressed in BAS
     * @param eps_bas     [rad/s^2] angular acceleration expressed in BAS
     * @param grav_bas    [m/s^2]   gravity acceleration vector expressed in BAS
     * @param omega       [rad/s]   rotor speed
     * @param azimuth     [rad]     blade azimuth
     * @param airDensity  [kg/m^3]  air density
     * @param collective  [rad]     collective pitch angle
     * @param cyclicLat   [rad]     cyclic lateral pitch angle
     * @param cyclicLon   [rad]     cyclic longitudinal pitch angle
     */
    virtual void update( double timeStep,
                         const Vector3 &vel_air_bas,
                         const Vector3 &omg_air_bas,
                         const Vector3 &omg_bas,
                         const Vector3 &acc_bas,
                         const Vector3 &eps_bas,
                         const Vector3 &grav_bas,
                         double omega,
                         double azimuth,
                         double airDensity,
                         double collective,
                         double cyclicLat,
                         double cyclicLon );

    inline Direction getDirection() const { return _direction; }

    inline const RotorBlade* getBlade( int index ) const { return _blades[ index ]; }

    inline const Vector3& getFor_BAS() const { return _for_bas; }
    inline const Vector3& getMom_BAS() const { return _mom_bas; }

    /**
     * @brief Returns rotor total inartia about shaft axis.
     * @return [kg*m^2] rotor total inartia about shaft axis
     */
    inline double getInertia() const { return _i_tot; }

    inline const Vector3& getR_hub_BAS() const { return _r_hub_bas; }

    inline int getNumberOfBlades() const { return _blades_no; }

    inline double getRadius() const { return _radius; }

    inline double getBeta0()  const { return _beta_0;  }
    inline double getBeta1c() const { return _beta_1c; }
    inline double getBeta1s() const { return _beta_1s; }

    inline double getTheta0()  const { return _theta_0;  }
    inline double getTheta1c() const { return _theta_1c; }
    inline double getTheta1s() const { return _theta_1s; }

    inline double getConingAngle() const { return _coningAngle; }
    inline double getDiskRoll()    const { return _diskRoll;    }
    inline double getDiskPitch()   const { return _diskPitch;   }

    inline double getThrust() const { return _thrust; }
    inline double getTorque() const { return _torque; }

    inline double getVel_i() const { return _vel_i; }

    inline double getWakeSkew() const { return _wakeSkew; }

protected:

    Direction _direction;       ///< rotor rotation direction (clockwise or counter-clockwise)

    Blades _blades;             ///< main rotor blades

    Vector3 _for_bas;           ///< [N] total force vector expressed in BAS
    Vector3 _mom_bas;           ///< [N*m] total moment vector expressed in BAS

    Vector3 _r_hub_bas;         ///< [m] rotor hub coordinates expressed in BAS

    Matrix3x3 _bas2ras;         ///< matrix of rotation from BAS to RAS
    Matrix3x3 _ras2bas;         ///< matrix of rotation from RAS to BAS

    Vector3 _vel_air_ras;       ///< [m/s]     rotor hub linear velocity relative to airflow expressed in RAS
    Vector3 _omg_air_ras;       ///< [rad/s]   rotor hub angular velocity relative to airflow expressed in RAS
    Vector3 _omg_ras;           ///< [rad/s]   angular velocity expressed in RAS
    Vector3 _acc_ras;           ///< [m/s^2]   rotor hub linear acceleration expressed in RAS
    Vector3 _eps_ras;           ///< [rad/s^2] angular acceleration expressed in RAS
    Vector3 _grav_ras;          ///< [m/s^2]   gravity acceleration vector expressed in RAS

    Vector3 _prev_vel_air_ras;  ///< [m/s]     rotor hub linear velocity relative to airflow expressed in RAS (previous value)
    Vector3 _prev_omg_air_ras;  ///< [rad/s]   rotor hub angular velocity relative to airflow expressed in RAS (previous value)
    Vector3 _prev_omg_ras;      ///< [rad/s]   angular velocity expressed in RAS (previous value)
    Vector3 _prev_acc_ras;      ///< [m/s^2]   rotor hub linear acceleration expressed in RAS (previous value)
    Vector3 _prev_eps_ras;      ///< [rad/s^2] angular acceleration expressed in RAS (previous value)
    Vector3 _prev_grav_ras;     ///< [m/s^2]   gravity acceleration vector expressed in RAS (previous value)

    int _blades_no;             ///< number of rotor blades

    double _radius;             ///< [m] rotor radius

    double _omega;              ///< [rad/s] rotor revolution speed
    double _azimuth;            ///< [rad] rotor azimuth position

    double _i_tot;              ///< [kg*m^2] rotor total inartia about shaft axis
    double _d_psi;              ///< [rad] azimuth difference between adjacent blades

    double _beta_0;             ///< [rad] rotor coning angle
    double _beta_1c;            ///< [rad] longitudinal flapping angle
    double _beta_1s;            ///< [rad] lateral flapping angle

    double _theta_0;            ///< [rad] collective feathering angle
    double _theta_1c;           ///< [rad]
    double _theta_1s;           ///< [rad]

    double _coningAngle;        ///< [rad] rotor coning angle
    double _diskRoll;           ///< [rad] rotor disk roll angle
    double _diskPitch;          ///< [rad] rotor disk pitch angle

    double _ct;                 ///< [-] thrust coefficient
    double _cq;                 ///< [-] torque coefficient

    double _thrust;             ///< [N] rotor thrust
    double _torque;             ///< [N*m] rotor torque

    double _vel_i;              ///< [m/s] rotor induced velocity

    double _wakeSkew;           ///< [rad] rotor wake skew angle

    double _prev_azimuth;       ///< [rad] rotor azimuth position (previous value)

    double _prev_theta_0;       ///< [rad] collective feathering angle (previous value)
    double _prev_theta_1c;      ///< [rad] (previous value)
    double _prev_theta_1s;      ///< [rad] (previous value)

    /** */
    virtual void inducedVelcoity();
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_MAINROTORBE_H
