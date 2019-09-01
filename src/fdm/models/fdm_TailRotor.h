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
#ifndef FDM_TAILROTOR_H
#define FDM_TAILROTOR_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/fdm_Base.h>

#include <fdm/utils/fdm_Matrix3x3.h>

#include <fdm/xml/fdm_XmlNode.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief Helicopter tail rotor base class.
 *
 * <h3>XML configuration file format:</h3>
 * @code
 * <tail_rotor>
 *   <hub_center> { [m] x-coordinate } { [m] y-coordinate } { [m] z-coordinate } </hub_center>
 *   <cant_angle> { [rad] cant angle } </cant_angle>
 *   <number_of_blades> { number of blades } </number_of_blades>
 *   <blade_mass> { [kg] single blade mass } </blade_mass>
 *   <rotor_radius> { [m] rotor radius } </rotor_radius>
 *   <blades_chord> { [m] blades chord } </blades_chord>
 *   <lift_slope> { [1/rad] blade section lift curve slope } </lift_slope>
 *   <tip_losses> { [-] tip losses coefficient } </tip_losses>
 *   <delta_0> { [-] drag coefficient constant component } </delta_0>
 *   <delta_2> { [-] drag coefficient quadratic component } </delta_2>
 *   <ct_max> { [-] maximum thrust coefficient } </ct_max>
 *   <cq_max> { [-] maximum thrust coefficient } </cq_max>
 *   <thrust_factor> { [-] thrust scaling factor } </thrust_factor>
 *   <torque_factor> { [-] torque scaling factor } </torque_factor>
 *   <vel_i_factor> { [-] induced velocity scaling factor } </vel_i_factor>
 * </tail_rotor>
 * @endcode
 *
 * <p>Optional elements: "thrust_factor", "torque_factor", "vel_i_factor"</p>
 *
 * @see Gessow A., Myers G.: Aerodynamics of the Helicopter, 1985
 * @see Bramwell A.: Bramwells Helicopter Dynamics, 2001
 * @see Padfield G.: Helicopter Flight Dynamics, 2007
 * @see Johnson W.: Helicopter Theory, 1980
 */
class FDMEXPORT TailRotor : public Base
{
public:

    /** Constructor. */
    TailRotor();

    /** Destructor. */
    virtual ~TailRotor();

    /**
     * Reads data.
     * @param dataNode XML node
     */
    virtual void readData( XmlNode &dataNode );

    virtual void computeForceAndMoment( const Vector3 &vel_air_bas,
                                        const Vector3 &omg_air_bas,
                                        double airDensity,
                                        double collective );

    /**
     * @brief update
     * @param omega [rad/s]
     */
    virtual void update( double omega );

    inline const Vector3& getFor_BAS() const { return _for_bas; }
    inline const Vector3& getMom_BAS() const { return _mom_bas; }

    inline const Vector3& getVel_i_BAS() const { return _vel_i_bas; }

    inline double getMomentOfInertia() const { return _nb * _i_b; }

    inline double getThrust() const { return _thrust; }
    inline double getTorque() const { return _torque; }

protected:

    Vector3 _for_bas;           ///< [N] total force vector expressed in BAS
    Vector3 _mom_bas;           ///< [N*m] total moment vector expressed in BAS

    Vector3 _r_hub_bas;         ///< [m] rotor hub coordinates expressed in BAS

    Matrix3x3 _bas2ras;         ///< matrix of rotation from BAS to RAS
    Matrix3x3 _ras2bas;         ///< matrix of rotation from RAS to BAS

    Vector3 _vel_i_bas;         ///< [m/s] induced velocity

    int _nb;                    ///< number of rotor blades

    double _r;                  ///< [m] rotor radius
    double _c;                  ///< [m] blades chord

    double _a;                  ///< [1/rad] blade section lift curve slope
    double _b;                  ///< [-] tip losses coefficient

    double _delta_0;            ///< [-] drag coefficient constant component
    double _delta_2;            ///< [-] drag coefficient quadratic component

    double _ct_max;             ///< [-] maximum thrust coefficient
    double _cq_max;             ///< [-] maximum torque coefficient

    double _thrust_factor;      ///< [-] thrust scaling factor
    double _torque_factor;      ///< [-] torque scaling factor
    double _vel_i_factor;       ///< [-] induced velocity scaling factor

    double _r2;                 ///< [m^2] rotor radius squared
    double _r3;                 ///< [m^3] rotor radius cubed
    double _ad;                 ///< [m^2] rotor disk area
    double _s;                  ///< [-] rotor solidity

    double _i_b;                ///< [kg*m^2] single rotor blade inertia moment about flapping hinge

    double _omega;              ///< [rad/s] rotor revolution speed

    double _thrust;             ///< [N] rotor thrust
    double _torque;             ///< [N*m] rotor torque
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_TAILROTOR_H
