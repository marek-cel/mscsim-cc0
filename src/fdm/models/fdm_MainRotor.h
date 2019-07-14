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
#ifndef FDM_MAINROTOR_H
#define FDM_MAINROTOR_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/fdm_Base.h>

#include <fdm/utils/fdm_Matrix3x3.h>

#include <fdm/xml/fdm_XmlNode.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief Helicopter main rotor base class.
 *
 * <h3>Coordinate Systems Used for Rotor Calculations</h3>
 *
 * <h4>Rotor Axes System</h4>
 * <p>Abbreviated as RAS.</p>
 * <p>Origin of the Rotor Axes System is coincident with the rotor hub center,
 * the x-axis is positive forwards, the y-axis is positive right and z-axis
 * is positive downwards and coincident with the rotor shaft axis.</p>
 *
 * <h4>Rotor-Wind Axes System</h4>
 * <p>Abbreviated as RWAS.</p>
 * <p>Rotor-Wind Axes System is very much like Rotor Axes System, the only
 * difference is that it is rotated about z-axis in such a manner that x-axis
 * points directly into relative wind, so there is no lateral airspeed
 * component.</p>
 *
 * <h4>Control Axes System</h4>
 * <p>Abbreviated as CAS.</p>
 * <p>For most purposes, using the Rotor Axes System causes unnecessary
 * complications. It is convenient to use no cyclic feathering axes system.
 * Origin of the Control Axes System is coincident with the origin of the Rotor
 * Axes System, but it is rotated by angles of the swashplate roll and pitch so
 * there is no cyclic feathering in this coordinate system.</p>
 *
 * <h4>Disc Axes System</h4>
 * <p>Abbreviated as DAS.</p>
 * <p>Origin of the Disc Axes System is coincident with the origin of the Rotor
 * Axes System, but it is rotated by angles of the rotor cone roll and pitch
 * in such a manner that z?axis is perpendicular to the tip path plane so there
 * is no cyclic flapping in this coordinate system.</p>
 *
 * <h4>Control-Wind Axes System</h4>
 * <p>Abbreviated as CWAS.</p>
 * <p>Control-Wind Axes System is very much like Control Axes System, the only
 * difference is that it is rotated about z-axis in such a manner that x-axis
 * points directly into relative wind, so there is no lateral airspeed
 * component.</p>
 *
 * <h3>XML configuration file format:</h3>
 * @code
 * <main_rotor>
 *   <hub_center> { [m] x-coordinate } { [m] y-coordinate } { [m] z-coordinate } </hub_center>
 *   <inclination> { [rad] rotor inclination angle (positive if forward) } </inclination>
 *   <number_of_blades> { number of blades } </number_of_blades>
 *   <blade_mass> { [kg] single blade mass } </blade_mass>
 *   <rotor_radius> { [m] rotor radius } </rotor_radius>
 *   <blades_chord> { [m] blades chord } </blades_chord>
 *   <hinge_offset> { [m] flapping hinge offset } </hinge_offset>
 *   <lift_slope> { [1/rad] blade section lift curve slope } </lift_slope>
 *   <tip_losses> { [-] tip losses coefficient } </tip_losses>
 *   <delta_0> { [-] drag coefficient constant component } </delta_0>
 *   <delta_2> { [-] drag coefficient quadratic component } </delta_2>
 *   <beta_max> { [rad] maximum flapping angle } </beta_max>
 *   <ct_max> { [-] maximum thrust coefficient } </ct_max>
 *   <cq_max> { [-] maximum thrust coefficient } </cq_max>
 *   <thrust_factor> { [-] thrust scaling factor } </thrust_factor>
 *   <torque_factor> { [-] torque scaling factor } </torque_factor>
 *   <vel_i_factor> { [-] induced velocity scaling factor } </vel_i_factor>
 * </main_rotor>
 * @endcode
 *
 * <p>Optional elements: "thrust_factor", "torque_factor", "vel_i_factor"</p>
 *
 * @see Mil M.: Helicopters: Calculation and Design. Volume 1: Aerodynamics, NASA, TM-X-74335, 1967
 * @see Gessow A., Myers G.: Aerodynamics of the Helicopter, 1985
 * @see Bramwell A.: Bramwells Helicopter Dynamics, 2001
 * @see Padfield G.: Helicopter Flight Dynamics, 2007
 * @see Stepniewski W.: Rotary-Wing Aerodynamics. Volume I: Basic Theories of Rotor Aerodynamics, 1984
 * @see Johnson W.: Helicopter Theory, 1980
 */
class FDMEXPORT MainRotor : public Base
{
public:

    /** Rotor direction. */
    enum Direction
    {
        CW  = 0,    ///< clockwise (looking from above)
        CCW = 1     ///< counter-clockwise (looking from above)
    };

    /** Constructor. */
    MainRotor();

    /** Destructor. */
    virtual ~MainRotor();

    /**
     * Reads data.
     * @param dataNode XML node
     */
    virtual void readData( XmlNode &dataNode );

    /**
     * Computes force and moment.
     * @param vel_bas [m/s] aircraft linear velocity vector expressed in BAS
     * @param omg_bas [rad/s] aircraft angular velocity expressed in BAS
     * @param acc_bas [m/s^2] aircraft linear acceleration vector expressed in BAS
     * @param eps_bas [rad/s^2] aircraft angular acceleration vector expressed in BAS
     * @param grav_bas [m/s^2] gravity acceleration vector expressed in BAS
     * @param vel_air_bas [m/s] aircraft linear velocity relative to the air expressed in BAS
     * @param omg_air_bas [rad/s] aircraft angular velocity relative to the air expressed in BAS
     * @param airDensity [kg/m^3] air density
     * @param collective [rad] collective pitch angle
     * @param cyclicLat [rad] cyclic lateral pitch angle
     * @param cyclicLon [rad] cyclic longitudinal pitch angle
     */
    virtual void computeForceAndMoment( const Vector3 &vel_bas,
                                        const Vector3 &omg_bas,
                                        const Vector3 &acc_bas,
                                        const Vector3 &eps_bas,
                                        const Vector3 &grav_bas,
                                        const Vector3 &vel_air_bas,
                                        const Vector3 &omg_air_bas,
                                        double airDensity,
                                        double collective,
                                        double cyclicLat,
                                        double cyclicLon );

    /**
     * @brief update
     * @param omega [rad/s]
     */
    virtual void update( double omega );

    inline const Vector3& getFor_BAS() const { return m_for_bas; }
    inline const Vector3& getMom_BAS() const { return m_mom_bas; }

    inline const Vector3& getVel_i_BAS() const { return m_vel_i_bas; }

    inline double getRadius()   const { return m_r;  }
    inline double getDiskArea() const { return m_ad; }
    inline double getInertia()  const { return m_nb * m_i_b; }

    inline double getConingAngle() const { return m_beta_0; }

    inline double getDiskRoll()  const { return m_rotorDiskRoll;  }
    inline double getDiskPitch() const { return m_rotorDiskPitch; }

    inline double getThrust() const { return m_thrust; }
    inline double getTorque() const { return m_torque; }

protected:

    Vector3 m_for_bas;          ///< [N] total force vector expressed in BAS
    Vector3 m_mom_bas;          ///< [N*m] total moment vector expressed in BAS

    Direction m_direction;      ///< rotor direction (clockwise or counter-clockwise)

    Vector3 m_r_hub_bas;        ///< [m] rotor hub coordinates expressed in BAS

    Matrix3x3 m_bas2ras;        ///< matrix of rotation from BAS to RAS
    Matrix3x3 m_ras2bas;        ///< matrix of rotation from RAS to BAS
    Matrix3x3 m_ras2cas;        ///< matrix of rotation from RAS to CAS

    Matrix3x3 m_cas2ras;        ///< matrix of rotation from CAS to RAS

    Matrix3x3 m_bas2cas;        ///< matrix of rotation from BAS to CAS
    Matrix3x3 m_bas2das;        ///< matrix of rotation from BAS to DAS
    Matrix3x3 m_das2bas;        ///< matrix of rotation from DAS to BAS

    Matrix3x3 m_ras2rwas;       ///< matrix of rotation from RAS to RWAS
    Matrix3x3 m_rwas2ras;

    Matrix3x3 m_cas2cwas;       ///< matrix of rotation from CAS to CWAS
    Matrix3x3 m_cwas2cas;       ///< matrix of rotation from CWAS to CAS

    Matrix3x3 m_bas2cwas;       ///< matrix of rotation from BAS to CWAS

    Vector3 m_vel_i_bas;        ///< [m/s] induced velocity

    int m_nb;                   ///< number of rotor blades

    double m_r;                 ///< [m] rotor radius
    double m_c;                 ///< [m] blades chord
    double m_e;                 ///< [m] flapping hinge offset

    double m_a;                 ///< [1/rad] blade section lift curve slope
    double m_b;                 ///< [-] tip losses coefficient

    double m_delta_0;           ///< [-] drag coefficient constant component
    double m_delta_2;           ///< [-] drag coefficient quadratic component

    double m_beta_max;          ///< [rad] maximum flapping angle

    double m_ct_max;            ///< [-] maximum thrust coefficient
    double m_cq_max;            ///< [-] maximum torque coefficient

    double m_thrust_factor;     ///< [-] thrust scaling factor
    double m_torque_factor;     ///< [-] torque scaling factor
    double m_vel_i_factor;      ///< [-] induced velocity scaling factor

    double m_r2;                ///< [m^2] rotor radius squared
    double m_r3;                ///< [m^3] rotor radius cubed
    double m_r4;                ///< [m^3] rotor radius to the power of 4
    double m_b2;                ///< [-] tip losses coefficient squared
    double m_b3;                ///< [-] tip losses coefficient cubed
    double m_b4;                ///< [-] tip losses coefficient to the power of 4
    double m_ad;                ///< [m^2] rotor disk area
    double m_s;                 ///< [-] rotor solidity

    double m_s_b;               ///< [kg*m] single rotor blade first moment of mass about flapping hinge
    double m_i_b;               ///< [kg*m^2] single rotor blade inertia moment about flapping hinge

    double m_omega;             ///< [rad/s] rotor revolution speed

    double m_beta_0;            ///< [rad] rotor coning angle
    double m_beta_1c_ras;       ///< [rad] longitudinal flapping angle expressed in RAS
    double m_beta_1s_ras;       ///< [rad] lateral flapping angle expressed in RAS

    double m_rotorDiskRoll;     ///< [rad] rotor disk roll angle
    double m_rotorDiskPitch;    ///< [rad] rotor disk pitch angle

    double m_thrust;            ///< [N] rotor thrust
    double m_torque;            ///< [N*m] rotor torque
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_MAINROTOR_H
