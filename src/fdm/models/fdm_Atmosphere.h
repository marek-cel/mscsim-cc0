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
#ifndef FDM_ATMOSPHERE_H
#define FDM_ATMOSPHERE_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/fdm_Defines.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief US Standard Atmosphere class.
 *
 * <p>This class is used to compute altitude depend atmospheric data. It is
 * based on U.S. Standard Atmosphere 1976 extended by user defined sea level
 * conditions. User defined sea level conditions affect only the lowest layer
 * up to 11,000 m above mean sea level.</p>
 * <p>Model is valid up to 84,852 meters above mean sea level.</p>
 *
 * @see US Standard Atmosphere 1976, NASA, TM-X-74335
 */
class FDMEXPORT Atmosphere
{
public:

    /** Gas species indeces. */
    enum GasSpeciesIndeces
    {
        N2 = 0,                         ///< index of Nitrogen in tables m_m_i and m_f_i
        O2,                             ///< index of Oxygen in tables m_m_i and m_f_i
        Ar,                             ///< index of Argon in tables m_m_i and m_f_i
        CO2,                            ///< index of Carbon Dioxide in tables m_m_i and m_f_i
        Ne,                             ///< index of Neon in tables m_m_i and m_f_i
        He,                             ///< index of Helium in tables m_m_i and m_f_i
        Kr,                             ///< index of Krypton in tables m_m_i and m_f_i
        Xe,                             ///< index of Xenon in tables m_m_i and m_f_i
        CH4,                            ///< index of Methane in tables m_m_i and m_f_i
        H2                              ///< index of Hydrogen in tables m_m_i and m_f_i
    };

    static const double _m_i[ 10 ];     ///< [kg/kmol] molecular weight
    static const double _f_i[ 10 ];     ///< [-] fractional volume

    static const double _h_b[ 7 ];      ///< [m] altitude values
    static const double _p_b[ 7 ];      ///< [Pa] pressure values
    static const double _t_b[ 7 ];      ///< [K] temperature values
    static const double _l_b[ 7 ];      ///< [K/m] temperature gradients

    static const double _m;             ///< [kg/kmol] mean molecular weight
    static const double _r;             ///< [J/(kmol*K)] gas constant
    static const double _s;             ///< [K] Sutherland constant
    static const double _beta;          ///< [kg/(s*m*K^0.5)] a constant used in computing dynamic viscosity
    static const double _gamma;         ///< [-] a constant taken to represent the ratio of specific heat at constant pressure to the specific heat at constant volume

    static const double _std_sl_t;      ///< [K]  standard sea level temperature (15 deg C)
    static const double _std_sl_p;      ///< [Pa] standard sea level pressure (1013.25 hPa)
    static const double _std_sl_rho;    ///< [kg/m^3] standard sea level density (1.225 kg/m^3)

    /**
     * @brief Computes density altitude.
     * @param pressure [Pa] outside pressure
     * @param temperature [K] outside temperature
     * @param altitude [m] altitude above sea level
     * @return [m] density altitude
     */
    static double getDensityAltitude( double pressure, double temperature,
                                      double altitude );

    /** Constructor. */
    Atmosphere();

    /** Destructor. */
    virtual ~Atmosphere();

    /**
     * Updates atmosphere due to altitude.
     * @param altitude [m] altitude above sea level
     */
    virtual void update( double altitude );

    /**
     * Sets sea level air pressure value.
     * @param pressure_0 [Pa] sea level air pressure
     */
    virtual void setPressureSL( double pressure_0 );

    /**
     * Sets sea level air temperature value.
     * @param temperature_0 [K] sea level air temperature
     */
    virtual void setTemperatureSL( double temperature_0 );

    inline double getTemperature()  const { return _temperature;  }
    inline double getPressure()     const { return _pressure;     }
    inline double getDensity()      const { return _density;      }
    inline double getSpeedOfSound() const { return _speedOfSound; }
    inline double getDynViscosity() const { return _dynViscosity; }
    inline double getKinViscosity() const { return _kinViscosity; }

private:

    double _temperature_0;      ///< [K] sea level air temperature
    double _pressure_0;         ///< [Pa] sea level air pressure

    double _temperature;        ///< [K] air temperature
    double _pressure;           ///< [Pa] air static pressure
    double _density;            ///< [kg/m^3] air density
    double _speedOfSound;       ///< [m/s] speed of sound
    double _dynViscosity;       ///< [Pa*s] dynamic viscosity
    double _kinViscosity;       ///< [m^2/s] kinematic viscosity
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_ATMOSPHERE_H
