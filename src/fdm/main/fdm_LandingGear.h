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
#ifndef FDM_LANDINGGEAR_H
#define FDM_LANDINGGEAR_H

////////////////////////////////////////////////////////////////////////////////

#include <vector>

#include <fdm/main/fdm_Module.h>

#include <fdm/utils/fdm_Vector3.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief Landing gear base class.
 *
 * XML configuration file format:
 * @code
 * <landing_gear>
 *   <wheel [steerable="{ 0|1 }"] [caster="{ 0|1 }"] [brake_group="{ 0|1|2 }]">
 *     <attachment_point> { [m] x-coordinate } { [m] y-coordinate } { [m] z-coordinate } </attachment_point>
 *     <unloaded_wheel> { [m] x-coordinate } { [m] y-coordinate } { [m] z-coordinate } </unloaded_wheel>
 *     <stiffness> { [N/m] strut stiffness (linear spring) coefficient } </stiffness>
 *     <damping> { [N/(m/s)] strut damping coefficient  } </damping>
 *     <friction_static> { [-] static friction coefficient } </friction_static>
 *     <friction_kinetic> { [-] kinetic friction coefficient } </friction_kinetic>
 *     <friction_rolling> { [-] rolling friction coefficient } </friction_rolling>
 *     [<max_angle> { [rad] max steering angle } </max_angle>]
 *   </wheel>
 *   ... { more wheels }
 * </landing_gear>
 * @endcode
 */
class FDMEXPORT LandingGear : public Module
{
public:

    /** Brake group. */
    enum BrakeGroup
    {
        None = 0,               ///< none
        Left,                   ///< left brake group
        Right                   ///< right brake group
    };

    /** Wheel data. */
    struct Wheel
    {
        const double *input;    ///< wheel input (0.0 - retracted, 1.0 - extended)

        Vector3 r_a_bas;        ///< [m] strut attachment point coordinates expressed in BAS
        Vector3 r_u_bas;        ///< [m] unloaded wheel coordinates expressed in BAS

        double k;               ///< [N/m] strut stiffness (linear spring) coefficient
        double c;               ///< [N/(m/s)] strut damping coefficient

        double mu_s;            ///< [-] coefficient of static friction
        double mu_k;            ///< [-] coefficient of kinetic friction
        double mu_r;            ///< [-] coefficient of rolling friction

        double angle_max;       ///< [rad] max turn angle

        bool steerable;         ///< specifies if wheel is steerable
        bool caster;            ///< specifies if wheel is caster

        BrakeGroup group;       ///< brake group
    };

    typedef std::map< std::string, Wheel > Wheels;

    /**
     * Returns landing gear strut and ground plane intersection point.
     * @see O'Rourke J.: Computational Geometry in C, 1998, p.226
     * @see http://paulbourke.net/geometry/pointlineplane/
     * @param b [m] landing gear strut attachment point coordinates (beginning)
     * @param e [m] landing gear unloaded wheel coordinates (end)
     * @param r [m] point on the ground plane coordinates
     * @param n [-] ground plane normal vector
     * @return [m] landing gear strut and ground plane intersection point
     */
    static Vector3 getIntersection( const Vector3 &b, const Vector3 &e,
                                    const Vector3 &r, const Vector3 &n );

    /**
     * Returns Pacejka "Magic Formula" coefficient.
     * @see https://en.wikipedia.org/wiki/Hans_B._Pacejka#The_Pacejka_%22Magic_Formula%22_tire_models
     * @see https://www.mathworks.com/help/physmod/sdl/ref/tireroadinteractionmagicformula.html
     * @param kappa [-] slip parameter (v_slip/v_roll)
     * @param b b coefficient
     * @param c c coefficient
     * @param d d coefficient
     * @param e e coefficient
     * @return Pacejka "Magic Formula" coefficient
     */
    static double getPacejkaCoef( double kappa,
                                  double b = 10.0, double c = 1.9,
                                  double d = 1.0,  double e = 0.97 );

    /** Constructor. */
    LandingGear( const Aircraft* aircraft );

    /** Destructor. */
    virtual ~LandingGear();

    /**
     * Reads data.
     * @param dataNode XML node
     */
    virtual void readData( XmlNode &dataNode );

    /** Initializes landing gear. */
    virtual void initialize();

    /** Computes force and moment. */
    virtual void computeForceAndMoment();

    /** Updates landing gear. */
    virtual void update();

    inline const Vector3& getFor_BAS() const { return _for_bas; }
    inline const Vector3& getMom_BAS() const { return _mom_bas; }

    inline bool getOnGround() const { return _onGround; }

protected:

    Vector3 _for_bas;           ///< [N] total force vector expressed in BAS
    Vector3 _mom_bas;           ///< [N*m] total moment vector expressed in BAS

    Wheels _wheels;             ///< wheels data

    double _ctrlAngle;          ///< [rad] wheel turn angle

    double _brake_l;            ///< [0.0,1.0] normalized brake force (left brake group)
    double _brake_r;            ///< [0.0,1.0] normalized brake force (right brake group)

    bool _antiskid;             ///< specifies if antiskid is enabled
    bool _steering;             ///< specifies if steering is enabled

    bool _onGround;             ///< specifies if aircraft is on the ground

    /**
     * Returns wheel by name.
     * @param name wheel name
     * @return channel
     */
    virtual Wheel* getWheelByName( const std::string &name );

    /**
     * Returns wheel ground reaction force.
     * @param wheel wheel data
     * @param surf_coef [-] surface dependent friction coefficient
     * @param vel_break [m/s] static friction breakaway velocity
     * @return [N] wheel ground reaction force
     */
    virtual Vector3 getWheelForce( const Wheel &wheel, const Vector3 &r_i_bas,
                                   double surf_coef = 1.0 , double vel_break = 1.0 );

    /**
     * Returns landing gear strut and ground plane intersection point expressed in BAS.
     * @param wheel wheel data
     * @return [m] landing gear strut and ground plane intersection point expressed in BAS
     */
    virtual Vector3 getWheelIsect( const Wheel &wheel );

private:

    /** Using this constructor is forbidden. */
    LandingGear( const LandingGear & ) : Module( FDM_NULLPTR ) {}
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_LANDINGGEAR_H
