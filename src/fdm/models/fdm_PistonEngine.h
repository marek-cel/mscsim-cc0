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
#ifndef FDM_PISTONENGINE_H
#define FDM_PISTONENGINE_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/models/fdm_Engine.h>

#include <fdm/utils/fdm_Table.h>
#include <fdm/xml/fdm_XmlNode.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief Piston engine class.
 *
 * <h5>XML configuration file format:</h5>
 * @code
 * <piston_engine>
 *   <power_max> { [W] engine maximum power } </power_max>
 *   <starter> { [N*m] starter torque } </starter>
 *   <rpm_min> { [rpm] minimum rpm } </rpm_min>
 *   <rpm_max> { [rpm] maximum rpm } </rpm_max>
 *   <sfc> { [kg/(W*s)] specific fuel consumption } </sfc>
 *   <inertia> { [kg*m^2] polar moment of inertia } </inertia>
 *   <mixture>
 *     { [-] mixture } { [-] mixture lever position }
 *     ... { more entries }
 *   </mixture>
 *   <throttle>
 *     { [-] throttle } { [-] throttle lever position }
 *     ... { more entries }
 *   </throttle>
 *   <power_factor>
 *     { [-] fuel to air ratio } { [-] power factor }
 *     ... { more entries }
 *   </power_factor>
 * </piston_engine>
 * @endcode
 *
 * @see Allerton D.: Principles of Flight Simulation, 2009, p.128
 */
class FDMEXPORT PistonEngine : public Engine
{
public:

    /** Constructor. */
    PistonEngine();

    /** Destructor. */
    virtual ~PistonEngine();

    /**
     * Reads data.
     * @param dataNode XML node
     */
    virtual void readData( XmlNode &dataNode );

    /**
     * Updates engine.
     * @param throttleLever [0.0,1.0] throttle lever position
     * @param mixtureLever [0.0,1.0] mixture lever position
     * @param rpm [rpm] engine rpm
     * @param airPressure [Pa] air pressure
     * @param airDensity [kg/m^3] air density
     * @param fuel specifies if fuel is provided
     * @param starter specifies if starter is enabled
     * @param magneto_l specifies if left magneto is enabled
     * @param magneto_r specifies if right magneto is enabled
     */
    virtual void update( double throttleLever, double mixtureLever, double rpm,
                         double airPressure, double airDensity,
                         bool fuel, bool starter,
                         bool magneto_l = true, bool magneto_r = true );

    /**
     * Returns engine fuel consumption.
     * @return [kg/s] engine fuel consumption
     */
    inline double getFuelFlow() const
    {
        return m_fuelFlow;
    }

    /**
     * Returns engine polar moment of inertia.
     * @return [kg*m^2] engine polar moment of inertia
     */
    inline double getInertia() const
    {
        return m_inertia;
    }

    /**
     * Returns engine manifold absolute pressure.
     * @return [Pa] engine manifold absolute pressure
     */
    inline double getMAP() const
    {
        return m_map;
    }

    /**
     * Returns engine net power.
     * @return [W] engine net power
     */
    inline double getPower()  const
    {
        return m_power;
    }

    /**
     * Returns engine rpm.
     * @return [rpm] engine rpm
     */
    inline double getRPM() const
    {
        return m_rpm;
    }

    /**
     * Returns engine torque.
     * @return [N*m] engine torque
     */
    inline double getTorque() const
    {
        return m_torque;
    }

protected:

    Table m_mixture;            ///< [-] mixture vs mixture lever position
    Table m_throttle;           ///< [-] throttle vs throttle lever position

    Table m_powerFactor;        ///< [-] power factor

    double m_power_max;         ///< [W] maximum power
    double m_starter;           ///< [N*m] starter torque
    double m_rpm_min;           ///< [rpm] engine minimum rpm
    double m_rpm_max;           ///< [rpm] engine maximum rpm
    double m_specFuelCons;      ///< [kg/(W*s)] specific fuel consumption
    double m_inertia;           ///< [kg*m^2] polar moment of inertia

    double m_rpm;               ///< [rpm] engine rpm
    double m_map;               ///< [Pa] manifold absolute pressure
    double m_power;             ///< [W] net power
    double m_torque;            ///< [N*m] torque
    double m_fuelFlow;          ///< [kg/s] fuel flow

    /**
     * Computes manifold absolute pressure.
     * @param throttle <0.0;1.0> throttle
     * @param rpm [rpm] engine rpm
     * @param airPressure [Pa] air pressure
     * @return [Pa] manifold absolute pressure
     */
    virtual double getManifoldAbsolutePressure( double throttle, double rpm,
                                                double airPressure );

    /**
     * Computes engine power factor.
     * @param fuel specifies if fuel is provided
     * @param mixture [-] mixture
     * @param airDensity [kg/m^3] air density
     * @param magneto_l specifies if left magneto is enabled
     * @param magneto_r specifies if right magneto is enabled
     * @return [-] power factor
     */
    virtual double getPowerFactor( double mixture, double airDensity, bool fuel,
                                   bool magneto_l = true, bool magneto_r = true );

    /**
     * Computes engine power losses.
     * @param rpm [rpm] engine rpm
     * @return [W] power losses
     */
    virtual double getPowerLosses( double rpm );

    /**
     * Computes engine static power (the power produced by combustion).
     * @param rpm [rpm] engine rpm
     * @param map [Pa] manifold absolute pressure
     * @return [W] static power
     */
    virtual double getStaticPower( double rpm, double map );
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_PISTONENGINE_H
