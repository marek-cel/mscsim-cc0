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

#include <fdm/models/fdm_MainRotorBE.h>

#include <fdm/utils/fdm_GaussJordan.h>
#include <fdm/utils/fdm_String.h>

#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

const double MainRotorBE::_timeStepMax = 1.0e-3;

////////////////////////////////////////////////////////////////////////////////

MainRotorBE::MainRotorBE() :
    _prev_azimuth  ( 0.0 ),
    _prev_theta_0  ( 0.0 ),
    _prev_theta_1c ( 0.0 ),
    _prev_theta_1s ( 0.0 ),

    _i_tot ( 0.0 ),
    _d_psi ( 0.0 )
{}

////////////////////////////////////////////////////////////////////////////////

MainRotorBE::~MainRotorBE()
{
    Blades::iterator it = _blades.begin();

    while ( it != _blades.end() )
    {
        FDM_DELPTR( *it );
        it = _blades.erase( it );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainRotorBE::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        if ( String::toBool( dataNode.getAttribute( "counter-clockwise" ), false ) )
        {
            _direction = CCW;
        }
        else
        {
            _direction = CW;
        }

        double inclination = 0.0;

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _r_hub_bas  , "hub_center" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, inclination , "inclination" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _blades_no  , "number_of_blades" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _radius     , "rotor_radius" );

        if ( result == FDM_SUCCESS )
        {
            _bas2ras = Matrix3x3( Angles( 0.0, -inclination, 0.0 ) );
            _ras2bas = _bas2ras.getTransposed();

            _d_psi = ( 2.0 * M_PI ) / (double)( _blades_no );
        }
        else
        {
            XmlUtils::throwError( __FILE__, __LINE__, dataNode );
        }

        // blades
        XmlNode nodeBlade = dataNode.getFirstChildElement( "blade" );

        for ( int i = 0; i < _blades_no; i++ )
        {
            Blade *blade = new Blade( _direction );
            blade->readData( nodeBlade );

            _i_tot += blade->getInertia();

            _blades.push_back( blade );
        }
    }
    else
    {
        XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainRotorBE::computeForceAndMoment( const Vector3 &vel_air_bas,
                                         const Vector3 &omg_air_bas,
                                         const Vector3 &omg_bas,
                                         const Vector3 &acc_bas,
                                         const Vector3 &eps_bas,
                                         const Vector3 &grav_bas,
                                         double airDensity )
{
    _for_bas.zeroize();
    _mom_bas.zeroize();

    _thrust = 0.0;
    _torque = 0.0;

    Vector3 vel_air_ras = _bas2ras * ( vel_air_bas + omg_air_bas % _r_hub_bas );
    Vector3 omg_air_ras = _bas2ras * omg_air_bas;
    Vector3 omg_ras     = _bas2ras * omg_bas;
    Vector3 acc_ras     = _bas2ras * ( acc_bas + ( omg_bas % ( omg_bas % _r_hub_bas ) ) + ( eps_bas % _r_hub_bas ) );
    Vector3 eps_ras     = _bas2ras * eps_bas;
    Vector3 grav_ras    = _bas2ras * grav_bas;

    double delta_psi = 0.0;

    for ( Blades::iterator it = _blades.begin(); it != _blades.end(); it++ )
    {
        (*it)->computeForceAndMoment( vel_air_ras,
                                      omg_air_ras,
                                      omg_ras,
                                      acc_ras,
                                      eps_ras,
                                      grav_ras,
                                      _omega,
                                      _azimuth + delta_psi,
                                      airDensity,
                                      _theta_0,
                                      _theta_1c,
                                      _theta_1s
                                    );

        _for_bas += _ras2bas * (*it)->getFor_RAS();
        _mom_bas += _ras2bas * (*it)->getMom_RAS();

        _torque += (*it)->getTorque();

        delta_psi += _d_psi;
    }

    _mom_bas += _r_hub_bas % _for_bas;
}

////////////////////////////////////////////////////////////////////////////////

void MainRotorBE::update( double timeStep,
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
                          double cyclicLon )
{
    _prev_vel_air_ras = _vel_air_ras;
    _prev_omg_air_ras = _omg_air_ras;
    _prev_omg_ras     = _omg_ras;
    _prev_acc_ras     = _acc_ras;
    _prev_eps_ras     = _eps_ras;
    _prev_grav_ras    = _grav_ras;

    _vel_air_ras = _bas2ras * ( vel_air_bas + omg_air_bas % _r_hub_bas );
    _omg_air_ras = _bas2ras * omg_air_bas;
    _omg_ras     = _bas2ras * omg_bas;
    _acc_ras     = _bas2ras * ( acc_bas + ( omg_bas % ( omg_bas % _r_hub_bas ) ) + ( eps_bas % _r_hub_bas ) );
    _eps_ras     = _bas2ras * eps_bas;
    _grav_ras    = _bas2ras * grav_bas;

    _prev_azimuth  = _azimuth;

    _prev_theta_0  = _theta_0;
    _prev_theta_1c = _theta_1c;
    _prev_theta_1s = _theta_1s;

    //////////////////////////////////////////////////////////////////////
    MainRotor::update( omega, azimuth, collective, cyclicLat, cyclicLon );
    //////////////////////////////////////////////////////////////////////

    Vector3 d_vel_air_ras = _vel_air_ras - _prev_vel_air_ras;
    Vector3 d_omg_air_ras = _omg_air_ras - _prev_omg_air_ras;
    Vector3 d_omg_ras     = _omg_ras     - _prev_omg_ras;
    Vector3 d_acc_ras     = _acc_ras     - _prev_acc_ras;
    Vector3 d_eps_ras     = _eps_ras     - _prev_eps_ras;
    Vector3 d_grav_ras    = _grav_ras    - _prev_grav_ras;

    double d_azimuth = _azimuth - _prev_azimuth;

    double d_theta_0  = _theta_0  - _prev_theta_0;
    double d_theta_1c = _theta_1c - _prev_theta_1c;
    double d_theta_1s = _theta_1s - _prev_theta_1s;

    const int steps = ceil( timeStep / _timeStepMax );
    double timeStepInt = timeStep / ( (double)steps );

    for ( int i = 0; i < steps; i++ )
    {
        const double coef = ( (double)( i + 1 ) ) / ( (double)steps );

        Vector3 vel_air_ras = _prev_vel_air_ras + coef * d_vel_air_ras;
        Vector3 omg_air_ras = _prev_omg_air_ras + coef * d_omg_air_ras;
        Vector3 omg_ras     = _prev_omg_ras     + coef * d_omg_ras;
        Vector3 acc_ras     = _prev_acc_ras     + coef * d_acc_ras;
        Vector3 eps_ras     = _prev_eps_ras     + coef * d_eps_ras;
        Vector3 grav_ras    = _prev_grav_ras    + coef * d_grav_ras;

        double azimuth = _prev_azimuth + coef * d_azimuth;

        double theta_0  = _prev_theta_0  + coef * d_theta_0;
        double theta_1c = _prev_theta_1c + coef * d_theta_1c;
        double theta_1s = _prev_theta_1s + coef * d_theta_1s;

        double delta_psi = 0.0;

        for ( Blades::iterator it = _blades.begin(); it != _blades.end(); it++ )
        {
            (*it)->integrate( timeStepInt,
                              vel_air_ras,
                              omg_air_ras,
                              omg_ras,
                              acc_ras,
                              eps_ras,
                              grav_ras,
                              omega,
                              azimuth + delta_psi,
                              airDensity,
                              theta_0,
                              theta_1c,
                              theta_1s
                            );

            delta_psi += _d_psi;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainRotorBE::inducedVelcoity()
{
    // iteration loop
//    for ( int i = 0; i < 100; i++ )
//    {
//        // thrust coefficient
//        _ct = 0.5 * _a * _s * _b * ( lambda * _b / 2.0
//                                  + _theta_0 * ( _b2 + 1.5 * mu2 ) / 3.0
//                                  + _b * mu * beta_1c_cwas / 4.0 );
//        if ( _ct > _ct_max ) _ct = _ct_max;

//        // zero function (Padfield p.124)
//        double lambda_d = mu2 + lambda * lambda;
//        double g_0 = lambda_i - _ct / ( 2.0 * sqrt( lambda_d ) );

//        // break condition
//        if ( fabs( g_0 ) < 1.0e-6 ) break;

//        // (Padfield p.124)
//        double h_j = -( 2.0 * lambda_i * sqrt( lambda_d ) - _ct ) * lambda_d
//                / ( 2*pow( lambda_d, 2.0/3.0 ) + _a * _s * lambda_d / 4.0 - _ct * lambda );

//        // (Padfield p.124)
//        double f_j = 1.0;
//        if ( fabs( mu_z ) < 0.05 ) f_j = 0.6;

//        // (Padfield p.124)
//        double lambda_i_new = lambda_i + f_j * h_j;

//        if ( Misc::isValid( lambda_i_new ) ) lambda_i = lambda_i_new;
//    }
}
