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

#include <fdm/models/fdm_Atmosphere.h>

#include <cmath>

#include <fdm/fdm_Log.h>

#include <fdm/utils/fdm_WGS84.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

// US Standard Atmosphere 1976, Table 3, p.3
const double Atmosphere::_m_i[] = {
    28.0134,
    31.9988,
    39.948,
    44.00995,
    20.183,
    4.0026,
    83.8,
    131.3,
    16.04303,
    2.01594
};

// US Standard Atmosphere 1976, Table 3, p.3
const double Atmosphere::_f_i[] = {
    0.78084,
    0.209476,
    0.00934,
    0.000314,
    0.00001818,
    0.00000524,
    0.00000114,
    0.000000087,
    0.000002,
    0.0000005
};

// US Standard Atmosphere 1976, Table 4, p.3
const double Atmosphere::_h_b[] = {
    11000.0,
    20000.0,
    32000.0,
    47000.0,
    51000.0,
    71000.0,
    84852.0
};

// US Standard Atmosphere 1976, Table I, p.50-73
const double Atmosphere::_p_b[] = {
    101325.0,
     22632.0,
      5474.8,
       868.01,
       110.9,
        66.938,
         3.9564
};

// US Standard Atmosphere 1976, Table I, p.50-73
const double Atmosphere::_t_b[] = {
    288.15,
    216.65,
    216.65,
    228.65,
    270.65,
    270.65,
    214.65
};

// US Standard Atmosphere 1976, Table 4, p.3
const double Atmosphere::_l_b[] = {
    -6.5e-3,
    0.0,
    1.0e-3,
    2.8e-3,
    0.0,
    -2.8e-3,
    -2.0e-3
};

// [kg/kmol] mean molecular weight, US Standard Atmosphere 1976, p.9
const double Atmosphere::_m =
        ( Atmosphere::_m_i[ Atmosphere::N2  ] * Atmosphere::_f_i[ Atmosphere::N2  ]
        + Atmosphere::_m_i[ Atmosphere::O2  ] * Atmosphere::_f_i[ Atmosphere::O2  ]
        + Atmosphere::_m_i[ Atmosphere::Ar  ] * Atmosphere::_f_i[ Atmosphere::Ar  ]
        + Atmosphere::_m_i[ Atmosphere::CO2 ] * Atmosphere::_f_i[ Atmosphere::CO2 ]
        + Atmosphere::_m_i[ Atmosphere::Ne  ] * Atmosphere::_f_i[ Atmosphere::Ne  ]
        + Atmosphere::_m_i[ Atmosphere::He  ] * Atmosphere::_f_i[ Atmosphere::He  ]
        + Atmosphere::_m_i[ Atmosphere::Kr  ] * Atmosphere::_f_i[ Atmosphere::Kr  ]
        + Atmosphere::_m_i[ Atmosphere::Xe  ] * Atmosphere::_f_i[ Atmosphere::Xe  ]
        + Atmosphere::_m_i[ Atmosphere::CH4 ] * Atmosphere::_f_i[ Atmosphere::CH4 ]
        + Atmosphere::_m_i[ Atmosphere::H2  ] * Atmosphere::_f_i[ Atmosphere::H2  ] )
        /
        ( Atmosphere::_f_i[ Atmosphere::N2  ]
        + Atmosphere::_f_i[ Atmosphere::O2  ]
        + Atmosphere::_f_i[ Atmosphere::Ar  ]
        + Atmosphere::_f_i[ Atmosphere::CO2 ]
        + Atmosphere::_f_i[ Atmosphere::Ne  ]
        + Atmosphere::_f_i[ Atmosphere::He  ]
        + Atmosphere::_f_i[ Atmosphere::Kr  ]
        + Atmosphere::_f_i[ Atmosphere::Xe  ]
        + Atmosphere::_f_i[ Atmosphere::CH4 ]
        + Atmosphere::_f_i[ Atmosphere::H2  ] );

const double Atmosphere::_r     = 8.31432e3;    // US Standard Atmosphere 1976, Table 2, p.2
const double Atmosphere::_s     = 110.0;        // US Standard Atmosphere 1976, Table 2, p.2
const double Atmosphere::_beta  = 1.458e-6;     // US Standard Atmosphere 1976, Table 2, p.2
const double Atmosphere::_gamma = 1.4;          // US Standard Atmosphere 1976, Table 2, p.2

const double Atmosphere::_std_sl_p = 101325.0;  // US Standard Atmosphere 1976, Table 2, p.2
const double Atmosphere::_std_sl_t = 288.15;    // US Standard Atmosphere 1976, Table 2, p.2
const double Atmosphere::_std_sl_rho = 1.225;

////////////////////////////////////////////////////////////////////////////////

double Atmosphere::getDensityAltitude( double pressure, double temperature,
                                       double altitude )
{
    static double b = ( -_l_b[ 0 ]*_r  ) / ( WGS84::_g*_m + _l_b[ 0 ]*_r  );

    double result = altitude;

    if ( altitude < _h_b[ 0 ] )
    {
        double a = ( pressure / _std_sl_p ) / ( temperature / _std_sl_t );
        result = -( _std_sl_t / _l_b[ 0 ] ) * ( 1.0 - pow( a, b ) );
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////

Atmosphere::Atmosphere() :
    _temperature_0 ( _std_sl_t ),
    _pressure_0    ( _std_sl_p )
{
    update( 0.0 );
}

////////////////////////////////////////////////////////////////////////////////

Atmosphere::~Atmosphere() {}

////////////////////////////////////////////////////////////////////////////////

void Atmosphere::update( double altitude )
{
    double h_b = _h_b[ 5 ];
    double p_b = _p_b[ 6 ];
    double t_b = _t_b[ 6 ];
    double l_b = 0.0;

    if ( altitude < _h_b[ 0 ] )
    {
        h_b = 0.0;
        p_b = _p_b[ 0 ];
        t_b = _temperature_0;
        l_b = -( _temperature_0 - _t_b[ 1 ] ) / _h_b[ 0 ];
    }
    else
    {
        for ( int i = 1; i < 7; i++ )
        {
            if ( altitude < _h_b[ i ] )
            {
                h_b = _h_b[ i - 1 ];
                p_b = _p_b[ i ];
                t_b = _t_b[ i ];
                l_b = _l_b[ i ];

                break;
            }
        }

        if ( altitude > _h_b[ 6 ] )
        {
            Log::w() << "Atmosphere altitude above valid range." << std::endl;
        }
    }

    double delta_h = altitude - h_b;

    // [K] temperature, US Standard Atmosphere 1976, p.10
    _temperature = t_b + l_b * delta_h;

    // [Pa] pressure, US Standard Atmosphere 1976, p.12
    if ( fabs( l_b ) < 1.0e-6 )
    {
        _pressure = p_b * exp( -( WGS84::_g * _m * delta_h ) / ( _r * t_b ) );
    }
    else
    {
        _pressure = p_b * pow( t_b / _temperature, ( WGS84::_g * _m ) / ( _r * l_b ) );

        if ( altitude < _h_b[ 0 ] )
        {
            _pressure = ( _pressure / _std_sl_p ) * _pressure_0;
        }
    }

    // [kg/m^3] density, US Standard Atmosphere 1976, p.15
    _density = ( _pressure * _m ) / ( _r * _temperature );

    // [m/s] speed of sound, US Standard Atmosphere 1976, p.18
    _speedOfSound = sqrt( ( _gamma * _r * _temperature ) / _m );

    // [Pa*s] dynamic viscosity, US Standard Atmosphere 1976, p.19
    _dynViscosity = _beta * pow( _temperature, 3.0 / 2.0 ) / ( _temperature + _s );

    // [m^2/s] kinematic viscosity, US Standard Atmosphere 1976, p.19
    _kinViscosity = _dynViscosity / _density;
}

////////////////////////////////////////////////////////////////////////////////

void Atmosphere::setPressureSL( double pressure_0 )
{
    if ( pressure_0 > 90000.0 && pressure_0 < 110000.0 )
    {
        _pressure_0 = pressure_0;
    }
    else
    {
        Log::w() << "Atmosphere wrong value of sea level pressure." << std::endl;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Atmosphere::setTemperatureSL( double temperature_0 )
{
    if ( temperature_0 > 173.15 && temperature_0 < 373.15 )
    {
        _temperature_0 = temperature_0;
    }
    else
    {
        Log::w() << "Atmosphere wrong value of sea level temperature." << std::endl;
    }
}
