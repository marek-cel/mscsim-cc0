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
#ifndef FDM_PROPELLER_H
#define FDM_PROPELLER_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/fdm_Base.h>

#include <fdm/utils/fdm_Table.h>
#include <fdm/utils/fdm_Table2D.h>
#include <fdm/utils/fdm_Vector3.h>

#include <fdm/xml/fdm_XmlNode.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief Propeller class.
 *
 * <h5>XML configuration file format:</h5>
 * @code
 * <propeller>
 *   <position> { [m] x-coordinate } { [m] y-coordinate } { [m] z-coordinate } </position>
 *   <gear_ratio> { [-] gear ratio (propeller rpm / engine rpm - sic!) } </gear_ratio>
 *   <diameter> { [m] propeller diameter } </diameter>
 *   <inertia> { [kg*m^2] polar moment of inertia } </inertia>
 *   <pitch>
 *     { [-] propeller lever position } { [deg] propeller pitch at 0.75 radius }
 *     ... { more entries }
 *   </pitch>
 *   <thrust_coef>
 *     { [deg] propeller pitch at 0.75 radius } ... { more values of propeller pitch}
 *     { [-] propeller advance } { [-] thrust coefficients } ... { more values of thrust coefficients }
 *     ... { more entries }
 *   </thrust_coef>
 *   <power_coef>
 *     { [deg] propeller pitch at 0.75 radius } ... { more values of propeller pitch}
 *     { [-] propeller advance } { [-] power coefficients } ... { more values of power coefficients }
 *     ... { more entries }
 *   </power_coef>
 * </propeller>
 * @endcode
 *
 * @see Paturski Z.: Przewodnik po projektach z Mechaniki Lotu, Projekt nr 5: Charakterystyki zespolu napedowego. [in Polish]
 */
class FDMEXPORT Propeller : public Base
{
public:

    /** Propeller direction. */
    enum Direction
    {
        CW  = 0,    ///< clockwise (looking from cockpit)
        CCW = 1     ///< counter-clockwise (looking from cockpit)
    };

    /** Constructor. */
    Propeller();

    /** Destructor. */
    virtual ~Propeller();

    /**
     * Reads data.
     * @param dataNode XML node
     */
    virtual void readData( XmlNode &dataNode );

    /**
     * Computes thrust.
     * @param airspeed [m/s] airspeed
     * @param airDensity [kg/m^3] air density
     */
    virtual void computeThrust( double airspeed, double airDensity );

    /**
     * Integrates model.
     * @param timeStep [s] time step
     * @param engineInertia [kg*m^2] engine polar moment of inertia
     */
    virtual void integrate( double timeStep, double engineInertia );

    /**
     * Updates propeller.
     * @param propellerLever [0.0,1.0] normalized propeller lever position
     * @param engineTorque [N] engine torque
     * @param airspeed [m/s] airspeed
     * @param airDensity [kg/m^3] air density
     */
    virtual void update( double propellerLever, double engineTorque,
                         double airspeed, double airDensity );

    /**
     * Returns propeller direction.
     * @return propeller direction
     */
    inline Direction getDirection() const
    {
        return m_direction;
    }

    /**
     * Returns engine rpm.
     * @return [rpm] engine rpm
     */
    inline double getEngineRPM() const
    {
        return m_speed_rpm * m_gearRatio;
    }

    /**
     * Returns propeller polar moment of inertia.
     * @return [kg*m^2] propeller polar moment of inertia
     */
    inline double getInertia() const
    {
        return m_inertia;
    }

    /**
     * Returns propeller angular velocity.
     * @return [rad/s] propeller angular velocity
     */
    inline double getOmega() const
    {
        return m_omega;
    }

    /**
     * Returns propeller position expressed in BAS.
     * @return [m] propeller position expressed in BAS
     */
    inline const Vector3& getPos_BAS() const
    {
        return m_pos_bas;
    }

    /**
     * Returns propeller thrust.
     * @return [N] propeller thrust
     */
    inline double getThrust() const
    {
        return m_thrust;
    }

    /**
     * Returns torque.
     * @return [N*m] torque
     */
    inline double getTorque() const
    {
        return ( m_torqueRequired < m_torqueAvailable ) ? m_torqueRequired : m_torqueAvailable;
    }

    void setRPM( double rpm );

protected:

    Vector3 m_pos_bas;          ///< [m] propeller position expressed in BAS

    Table m_propPitch;          ///< [rad] propeller pitch vs [-] propeller lever position

    Table2D m_coefThrust;       ///< [-] thrust coefficient
    Table2D m_coefPower;        ///< [-] power coefficient

    Direction m_direction;      ///< propeller direction looking from cockpit

    double m_gearRatio;         ///< [-] gear ratio (engine rpm / propeller rpm - sic!)
    double m_diameter;          ///< [m] diameter
    double m_inertia;           ///< [kg*m^2] polar moment of inertia

    double m_pitch;             ///< [rad] propeller pitch at 0.75 radius
    double m_omega;             ///< [rad/s] propeller angular velocity
    double m_speed_rps;         ///< [rps] propeller speed
    double m_speed_rpm;         ///< [rpm] propeller speed
    double m_thrust;            ///< [N] thrust

    double m_torqueAvailable;   ///< [N*m] available torque
    double m_torqueRequired;    ///< [N*m] required torque
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_PROPELLER_H
