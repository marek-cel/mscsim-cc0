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
#ifndef XF_ENGINE_H
#define XF_ENGINE_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/models/fdm_Engine.h>

#include <fdm/utils/fdm_Table1.h>
#include <fdm/utils/fdm_Table2.h>
#include <fdm/utils/fdm_Vector3.h>

#include <fdm/xml/fdm_XmlNode.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief X/F engine class.
 *
 * XML configuration file format:
 * @code
 * <turbofan_ab>
 *   <position> { [m] x-coordinate } { [m] y-coordinate } { [m] z-coordinate } </position>
 *   <thrust_mil> { [N] maximum military thrust } </thrust_mil>
 *   <thrust_ab> { [N] maximum afterburner thrust } </thrust_ab>
 *   <ab_threshold> { afterburner throttle threshold } </ab_threshold>
 *   <time_constant_n1>
 *     { [-] difference of N1 setpoint and N1 } { [s] N1 time constant }
 *     ... { more entries }
 *   </time_constant_n1>
 *   <time_constant_n2>
 *     { [-] difference of N2 setpoint and N2 } { [s] N2 time constant }
 *     ... { more entries }
 *   </time_constant_n2>
 *   <time_constant_thrust>
 *     { [-] difference of normalized engine power command and engine power } { [s] thrust time constant }
 *     ... { more entries }
 *   </time_constant_thrust>
 *   <time_constant_tit> { TIT time constant } </time_constant_tit>
 *   <n1_throttle>
 *     { throttle position } { N1 }
 *     ... { more entries }
 *   </n1_throttle>
 *   <n2_throttle>
 *     { throttle position } { N2 }
 *     ... { more entries }
 *   </n2_throttle>
 *   <tit_n2>
 *     { N2 } { [deg C] TIT }
 *     ... { more entries }
 *   </tit_n2>
 *   <tsfc> { [kg/(N*s)] thrust specific fuel consumption } </tsfc>
 *   <tsfc_ab> { [kg/(N*s)] thrust specific fuel consumption (afterburner) } </tsfc_ab>
 *   <thrust_factor_idle>
 *     { [kg/m^3] air density } ... { more values of air density }
 *     { [-] Mach number } { [-] thrust factor } ... { more values of thrust }
 *     ... { more entries }
 *   </thrust_factor_idle>
 *   <thrust_factor_mil>
 *     { [kg/m^3] air density } ... { more values of air density }
 *     { [-] Mach number } { [-] thrust factor } ... { more values of thrust }
 *     ... { more entries }
 *   </thrust_factor_mil>
 *   <thrust_factor_ab>
 *     { [kg/m^3] air density } ... { more values of air density }
 *     { [-] Mach number } { [-] thrust factor } ... { more values of thrust }
 *     ... { more entries }
 *   </thrust_factor_ab>
 * </turbofan_ab>
 * @endcode
 */
class XF_Engine : public Engine
{
public:

    /** Constructor. */
    XF_Engine();

    /** Destructor. */
    ~XF_Engine();

    /**
     * Reads data.
     * @param dataNode XML node
     */
    void readData( XmlNode &dataNode );

    /** */
    void initialize( bool engineOn );

    /**
     * Computes thrust.
     * @param machNumber [-] Mach number
     * @param densityAltitude [m] air density altitude
     */
    void computeThrust( double machNumber, double densityAltitude );

    /**
     * Integrates model.
     * @param timeStep [s] time step
     */
    void integrate( double timeStep );

    /**
     * Updates engine.
     * @param throttle [0.0,1.0] throttle lever position
     * @param temperature [deg C] air temperature
     * @param machNumber [-] Mach number
     * @param densityAltitude [m] air density altitude
     * @param fuel specifies if fuel is provided
     * @param starter specifies if starter is enabled
     */
    void update( double throttle, double temperature,
                 double machNumber, double densityAltitude,
                 bool fuel, bool starter );

    /**
     * Returns propeller position expressed in BAS.
     * @return [m] propeller position expressed in BAS
     */
    inline const Vector3& getPos_BAS() const
    {
        return _pos_bas;
    }

    /**
     * Returns engine fuel consumption.
     * @return [kg/s] engine fuel consumption
     */
    inline double getFuelFlow() const
    {
        return _fuelFlow;
    }

    /** */
    inline double getN1() const
    {
        return _n1;
    }

    /** */
    inline double getN2() const
    {
        return _n2;
    }

    /** */
    inline double getTIT() const
    {
        return _tit;
    }

    /**
     * Returns engine thrust.
     * @return [N] propeller thrust
     */
    inline double getThrust() const
    {
        return _thrust;
    }

    /** */
    inline bool getAfterburner() const
    {
        return _afterburner;
    }

protected:

    Vector3 _pos_bas;       ///< [m] nozzle position expressed in BAS

    Table1 _n1_throttle;    ///< low  pressure compressor rpm vs throttle position
    Table1 _n2_throttle;    ///< high pressure compressor rpm vs throttle position

    Table1 _tit_n2;         ///< turbine inlet temperature (TIT) vs high pressure compressor rpm

    Table2 _tf_idle;        ///< [-] idle thrust factor
    Table2 _tf_mil;         ///< [-] military thrust factor
    Table2 _tf_ab;          ///< [-] afterburner thrust factor

    Table1 _tc_n1;          ///<
    Table1 _tc_n2;          ///<

    Table1 _tc_thrust;      ///< thrust time constant [s] vs difference of normalized engine power command and engine power [-]

    double _thrust_mil;     ///< [N] specific maximum military thrust
    double _thrust_ab;      ///< [N] specific maximum afterburner thrust

    double _ab_threshold;   ///< [-] throttle afterburner threshold

    double _tc_tit;         ///< [s] turbine inlet temperature (TIT) time constant

    double _tsfc;           ///< [kg/(N*s)] thrust specific fuel consumption
    double _tsfc_ab;        ///< [kg/(N*s)] thrust specific fuel consumption (afterburner)

    double _n1_idle;        ///< low  pressure compressor idle rpm
    double _n2_idle;        ///< high pressure compressor idle rpm
    double _n1_ab;          ///< low  pressure compressor afterburner rpm
    double _n2_ab;          ///< high pressure compressor afterburner rpm
    double _n1_max;         ///< low  pressure compressor max rpm
    double _n2_max;         ///< high pressure compressor max rpm

    double _n1_setpoint;    ///< low  pressure compressor rpm setpoint
    double _n2_setpoint;    ///< high pressure compressor rpm setpoint

    double _tit_setpoint;   ///< turbine inlet temperature (TIT) setpoint

    double _pow_command;    ///< <0.0;1.0> normalized engine power command
    double _pow;            ///< <0.0;1.0> normalized engine power

    double _thrust_tc_inv;  ///< [1/s] inverse of thrust time constant
    double _tit_tc_actual;  ///< [s] actual turbine inlet temperature (TIT) time constant

    double _temperature;    ///< [deg C] air temperature

    // output

    double _n1;             ///< low  pressure compressor rpm
    double _n2;             ///< high pressure compressor rpm
    double _tit;            ///< [deg C] turbine inlet temperature (TIT)
    double _fuelFlow;       ///< [kg/s] fuel flow
    double _thrust;         ///< [N] thrust

    bool _afterburner;      ///< specifies if afterburner is engaged

    double getTimeConstant( double delta_n, double n_max, double tc );
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // XF_ENGINE_H
