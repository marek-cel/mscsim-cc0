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

#include <fdm/models/fdm_RotorBlade.h>

#include <iostream>

#include <fdm/fdm_Log.h>
#include <fdm/main/fdm_Aerodynamics.h>
#include <fdm/utils/fdm_Units.h>
#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

Matrix3x3 RotorBlade::getRAS2SRA( double psi, Direction direction )
{
    double ccw = ( direction == MainRotor::CCW ) ? 1.0 : -1.0;

    Matrix3x3 a;

    a(0,0) =  0.0;
    a(0,1) = -ccw;
    a(0,2) =  0.0;

    a(1,0) = -ccw;
    a(1,1) =  0.0;
    a(1,2) =  0.0;

    a(2,0) =  0.0;
    a(2,1) =  0.0;
    a(2,2) = -1.0;

    double cosPsi = cos( ccw * psi );
    double sinPsi = sin( ccw * psi );

    Matrix3x3 b;

    b(0,0) =  cosPsi;
    b(0,1) = -sinPsi;
    b(0,2) =  0.0;

    b(1,0) =  sinPsi;
    b(1,1) =  cosPsi;
    b(1,2) =  0.0;

    b(2,0) =  0.0;
    b(2,1) =  0.0;
    b(2,2) =  1.0;

    return a * b;
}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3 RotorBlade::getSRA2BSA( double beta, Direction direction )
{
    double ccw = ( direction == MainRotor::CCW ) ? 1.0 : -1.0;

    double cosBeta = cos( ccw * beta );
    double sinBeta = sin( ccw * beta );

    Matrix3x3 result;

    result(0,0) =  1.0;
    result(0,1) =  0.0;
    result(0,2) =  0.0;

    result(1,0) =  0.0;
    result(1,1) =  cosBeta;
    result(1,2) =  sinBeta;

    result(2,0) =  0.0;
    result(2,1) = -sinBeta;
    result(2,2) =  cosBeta;

    return result;
}

////////////////////////////////////////////////////////////////////////////////

RotorBlade::RotorBlade( Direction direction ) :
    _direction ( direction ),
    _dirFactor ( _direction == MainRotor::CCW ? 1.0 : -1.0 ),

    _m ( 0.0 ),
    _b ( 0.0 ),
    _c ( 0.0 ),
    _e ( 0.0 ),

    _beta_min ( 0.0 ),
    _beta_max ( 0.0 ),

    _sb ( 0.0 ),
    _ib ( 0.0 ),

    _xforce ( 0.0 ),
    _yforce ( 0.0 ),
    _zforce ( 0.0 ),
    _torque ( 0.0 ),
    _moment ( 0.0 ),

    _beta     ( _stateVect( 0 ) ),
    _beta_dot ( _stateVect( 1 ) ),

    _theta ( 0.0 )
{
    _cd = Table1::createOneRecordTable( 0.0 );
    _cl = Table1::createOneRecordTable( 0.0 );

    _twist = Table1::createOneRecordTable( 0.0 );

    _ras2sra = Matrix3x3::createIdentityMatrix();
    _sra2ras = Matrix3x3::createIdentityMatrix();
    //_sra2bsa = Matrix3x3::createIdentityMatrix();
    //_bsa2sra = Matrix3x3::createIdentityMatrix();
}

////////////////////////////////////////////////////////////////////////////////

RotorBlade::~RotorBlade() {}

////////////////////////////////////////////////////////////////////////////////

void RotorBlade::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _m , "blade_mass"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _b , "blade_length" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _c , "blade_chord"  );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _e , "hinge_offset" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _beta_min, "beta_min" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _beta_max, "beta_max" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _twist, "twist" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cd, "cd" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cl, "cl" );

        if ( result == FDM_SUCCESS )
        {
            _pos_fh_sra = Vector3( 0.0, _dirFactor * _e, 0.0 );

            _sb = _m * _b / 2.0;
            _ib = _m * _b * _b / 3.0;
        }
        else
        {
            XmlUtils::throwError( __FILE__, __LINE__, dataNode );
        }
    }
    else
    {
        XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
}

////////////////////////////////////////////////////////////////////////////////

#ifdef SIM_ROTOR_TEST
void RotorBlade::TEST_INIT()
{
    //_beta_0 = _beta_max;
    _beta = _beta_min;

    //Log::out() << _beta_0 << std::endl;
}
#endif

////////////////////////////////////////////////////////////////////////////////

void RotorBlade::computeForceAndMoment( const Vector3 &vel_air_ras,
                                        const Vector3 &omg_air_ras,
                                        const Vector3 &omg_ras,
                                        const Vector3 &acc_ras,
                                        const Vector3 &eps_ras,
                                        const Vector3 &grav_ras,
                                        double omega,
                                        double azimuth,
                                        double airDensity,
                                        double theta_0,
                                        double theta_1c,
                                        double theta_1s )
{
    _ras2sra = getRAS2SRA( azimuth, _direction );
    _sra2ras = _ras2sra.getTransposed();

    //_sra2bsa = getSRA2BSA( _beta, _direction );
    //_bsa2sra = _sra2bsa.getTransposed();

    _theta = getTheta( azimuth, theta_0, theta_1c, theta_1s );

    integrateSpanwise( vel_air_ras,
                       omg_air_ras,
                       omg_ras,
                       acc_ras,
                       eps_ras,
                       grav_ras,
                       omega,
                       airDensity,
                       _beta,
                       _beta_dot );

    _for_ras = _sra2ras * Vector3( _xforce, _yforce, _zforce );
    _mom_ras = Vector3( 0.0, 0.0, _dirFactor * _torque );
}

////////////////////////////////////////////////////////////////////////////////

void RotorBlade::integrate( double timeStep,
                            const Vector3 &vel_air_ras,
                            const Vector3 &omg_air_ras,
                            const Vector3 &omg_ras,
                            const Vector3 &acc_ras,
                            const Vector3 &eps_ras,
                            const Vector3 &grav_ras,
                            double omega,
                            double azimuth,
                            double airDensity,
                            double theta_0,
                            double theta_1c,
                            double theta_1s )
{
    _ras2sra = getRAS2SRA( azimuth, _direction );
    _sra2ras = _ras2sra.getTransposed();

    _theta = getTheta( azimuth, theta_0, theta_1c, theta_1s );

    double beta_prev = _beta;

//    integrateEulerRect( timeStep,
//                        vel_air_ras,
//                        omg_air_ras,
//                        omg_ras,
//                        acc_ras,
//                        eps_ras,
//                        grav_ras,
//                        omega,
//                        airDensity );

    integrateRungeKutta4( timeStep,
                          vel_air_ras,
                          omg_air_ras,
                          omg_ras,
                          acc_ras,
                          eps_ras,
                          grav_ras,
                          omega,
                          airDensity );

    // limiting flapping angle
    if ( Misc::isOutside( _beta_min, _beta_max, _beta ) )
    {
        //_beta_0 = Misc::satur( _beta_min, _beta_max, _beta_0 );

        double beta_new = Misc::satur( _beta_min, _beta_max, _beta );
        double beta_tc = 0.01;
        _beta = Misc::inertia( beta_new, _beta, timeStep, beta_tc );

        // back calculating flaping angle time derivatives
        if ( timeStep >= FDM_TIME_STEP_MIN )
        {
            _beta_dot = ( _beta - beta_prev ) / timeStep;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void RotorBlade::computeStateDeriv( const StateVector &stateVect,
                                    StateVector *derivVect )
{
    (*derivVect)( 0 ) = stateVect( 1 );
    (*derivVect)( 1 ) = _moment / _ib;
}

////////////////////////////////////////////////////////////////////////////////

double RotorBlade::getTheta( double azimuth,
                             double theta_0,
                             double theta_1c,
                             double theta_1s )
{
    double cosPsi = cos( azimuth );
    double sinPsi = sin( azimuth );

    return theta_0 + theta_1c * cosPsi + theta_1s * sinPsi;
}

////////////////////////////////////////////////////////////////////////////////

void RotorBlade::integrateEulerRect( double timeStep,
                                     const Vector3 &vel_air_ras,
                                     const Vector3 &omg_air_ras,
                                     const Vector3 &omg_ras,
                                     const Vector3 &acc_ras,
                                     const Vector3 &eps_ras,
                                     const Vector3 &grav_ras,
                                     double omega,
                                     double airDensity )
{
    integrateSpanwise( vel_air_ras,
                       omg_air_ras,
                       omg_ras,
                       acc_ras,
                       eps_ras,
                       grav_ras,
                       omega,
                       airDensity,
                       _beta,
                       _beta_dot );

    computeStateDeriv( _stateVect, &_derivVect );

    _stateVect = _stateVect + _derivVect * timeStep;
}

////////////////////////////////////////////////////////////////////////////////

void RotorBlade::integrateRungeKutta4( double timeStep,
                                       const Vector3 &vel_air_ras,
                                       const Vector3 &omg_air_ras,
                                       const Vector3 &omg_ras,
                                       const Vector3 &acc_ras,
                                       const Vector3 &eps_ras,
                                       const Vector3 &grav_ras,
                                       double omega,
                                       double airDensity )
{
    StateVector xt = _stateVect;

    // k1 - derivatives calculation
    StateVector k1;
    integrateSpanwise( vel_air_ras,
                       omg_air_ras,
                       omg_ras,
                       acc_ras,
                       eps_ras,
                       grav_ras,
                       omega,
                       airDensity,
                       xt( 0 ),
                       xt( 1 ) );
    computeStateDeriv( xt, &k1 );

    xt = _stateVect + k1 * ( timeStep / 2.0 );

    // k2 - derivatives calculation
    StateVector k2;
    integrateSpanwise( vel_air_ras,
                       omg_air_ras,
                       omg_ras,
                       acc_ras,
                       eps_ras,
                       grav_ras,
                       omega,
                       airDensity,
                       xt( 0 ),
                       xt( 1 ) );
    computeStateDeriv( xt, &k2 );

    xt = _stateVect + k2 * ( timeStep / 2.0 );

    // k3 - derivatives calculation
    StateVector k3;
    integrateSpanwise( vel_air_ras,
                       omg_air_ras,
                       omg_ras,
                       acc_ras,
                       eps_ras,
                       grav_ras,
                       omega,
                       airDensity,
                       xt( 0 ),
                       xt( 1 ) );
    computeStateDeriv( xt, &k3 );

    xt = _stateVect + k3 * timeStep;

    // k4 - derivatives calculation
    StateVector k4;
    integrateSpanwise( vel_air_ras,
                       omg_air_ras,
                       omg_ras,
                       acc_ras,
                       eps_ras,
                       grav_ras,
                       omega,
                       airDensity,
                       xt( 0 ),
                       xt( 1 ) );
    computeStateDeriv( xt, &k4 );

    // integration
    _stateVect = _stateVect + ( k1 + k2 * 2.0 + k3 * 2.0 + k4 ) * ( timeStep / 6.0 );
}

////////////////////////////////////////////////////////////////////////////////

void RotorBlade::integrateSpanwise( const Vector3 &vel_air_ras,
                                    const Vector3 &omg_air_ras,
                                    const Vector3 &omg_ras,
                                    const Vector3 &acc_ras,
                                    const Vector3 &eps_ras,
                                    const Vector3 &grav_ras,
                                    double omega,
                                    double airDensity,
                                    double beta,
                                    double beta_dot )
{
    Matrix3x3 sra2bsa = getSRA2BSA( beta, _direction );
    Matrix3x3 bsa2sra = sra2bsa.getTransposed();

    // velocity relative to airflow
    Vector3 vel_air_sra = _ras2sra * vel_air_ras;
    Vector3 omg_air_sra = _ras2sra * omg_air_ras;

    // angular velocity due to rotor rotation
    Vector3 omega_r_ras( 0.0, 0.0, -_dirFactor * omega );
    Vector3 omega_r_sra = _ras2sra * omega_r_ras;

    // angular velocity due to blade flapping
    Vector3 omega_f_bsa( _dirFactor * beta_dot, 0.0, 0.0 );
    Vector3 omega_f_sra = bsa2sra * omega_f_bsa;

    // total angular velocity
    // omega_f_sra not included
    // this velocity is used to determine inertial forces
    Vector3 omg_tot_sra
            = _ras2sra * omg_ras
            + omega_r_sra
            ;
    Vector3 omg_tot_bsa = sra2bsa * omg_tot_sra;

    // total angular velocity relative to airflow
    // omega_f_sra included
    // this velocity is used to determine section airflow
    Vector3 omg_air_tot_sra
            = omg_air_sra
            + omega_r_sra
            + omega_f_sra
            ;
    Vector3 omg_air_tot_bsa = sra2bsa * omg_air_tot_sra;

    // linear velocity of flapping hinge relative to airflow
    Vector3 vel_fh_air_bsa = sra2bsa * ( vel_air_sra + omg_air_tot_sra % _pos_fh_sra );

    // accelerations
    Vector3 eps_bsa = sra2bsa * ( _ras2sra * eps_ras );
    Vector3 acc_bsa
            = sra2bsa * ( _ras2sra * acc_ras )
            + ( omg_tot_bsa % ( omg_tot_bsa % _pos_fh_sra ) ) // centrifugal force
            + ( eps_bsa % _pos_fh_sra )                       // Euler force
            ;

    // gravity acceleration
    Vector3 grav_bsa = sra2bsa * ( _ras2sra * grav_ras );

    const int steps = 10;

    double dy = _b / (double)(steps);
    double dm = _m / (double)(steps);

    _xforce = 0.0;
    _yforce = 0.0;
    _zforce = 0.0;
    _torque = 0.0;
    _moment = 0.0;

    for ( int i = 0; i < steps; i++ )
    {
        double y = ( i + 0.5 ) * dy;

        Vector3 pos_i_bsa( 0.0, _dirFactor * y, 0.0 );
        //Vector3 pos_i_sra = _pos_fh_sra + _bsa2sra * pos_i_bsa;

        // moment due to gravity
        Vector3 mom_grav_bsa = dm * ( pos_i_bsa % grav_bsa );

        // moment due to inertia
        Vector3 acc_i_bsa
                = acc_bsa
                + ( omg_tot_bsa % ( omg_tot_bsa % pos_i_bsa ) ) // centrifugal acceleration
                + ( eps_bsa % pos_i_bsa )                       // Euler acceleration
                ;
        Vector3 mom_iner_bsa = -dm * ( pos_i_bsa % acc_i_bsa );

        // moment due to
        //Vector3 for_cf_sra = -dm * ( omg_tot_sra % ( omg_tot_sra % pos_i_sra ) );
        //Vector3 for_cf_bsa = _sra2bsa * for_cf_sra;
        //Vector3 mom_cf_bsa = pos_i_bsa % for_cf_bsa;

        // velocity (relative to airflow)
        Vector3 vel_i_air_bsa = vel_fh_air_bsa + omg_air_tot_bsa % pos_i_bsa;

        // section angle of attack
        double u = -vel_i_air_bsa.u();
        double w = -vel_i_air_bsa.w();
        double angleOfAttack = Aerodynamics::getAngleOfAttack( u, w );
        double angleOfAttackTot = angleOfAttack;
        if ( fabs( u ) > 0.1 )
        {
            angleOfAttackTot += _theta + _twist.getValue( y );
            angleOfAttackTot = Angles::normalize( angleOfAttackTot, -M_PI );
        }

        // dynamic pressure
        double dynPress = 0.5 * airDensity * vel_i_air_bsa.getLength2();

        // elementary forces
        double dD = dynPress * _cd.getValue( angleOfAttackTot ) * _c;
        double dL = dynPress * _cl.getValue( angleOfAttackTot ) * _c;

        double sinAlpha = sin( angleOfAttack );
        double cosAlpha = cos( angleOfAttack );

        double dX = cosAlpha * dD - sinAlpha * dL;
        double dZ = sinAlpha * dD + cosAlpha * dL;

        Vector3 for_aero_bsa( dX, 0.0, dZ );
        Vector3 for_aero_sra = bsa2sra * for_aero_bsa;
        Vector3 mom_aero_bsa = pos_i_bsa % for_aero_sra;
        Vector3 mom_aero_sra = bsa2sra * mom_aero_bsa;

#       ifdef SIM_ROTOR_TEST
        {
            Vector3 pos_i_sra = _pos_fh_sra + bsa2sra * pos_i_bsa;

            int i1 = 3 * i;
            int i2 = i1 + 1;
            int i3 = i2 + 1;

            span[ i1 ].visible = true;
            span[ i2 ].visible = true;
            span[ i3 ].visible = true;

            span[ i1 ].b_sra = pos_i_sra;
            span[ i2 ].b_sra = pos_i_sra;
            span[ i3 ].b_sra = pos_i_sra;

            span[ i1 ].v_sra = bsa2sra * Vector3(  dX, 0.0, 0.0 );
            span[ i2 ].v_sra = bsa2sra * Vector3( 0.0, 0.0,  dZ );
            span[ i3 ].v_sra = bsa2sra * vel_i_air_bsa;
        }
#       endif

        // aerodynamic forces
        _xforce += for_aero_sra.x();
        _yforce += for_aero_sra.y();
        _zforce += for_aero_sra.z();

        _torque += _dirFactor * mom_aero_sra.z();

        // total moment about flapping hinge
        Vector3 mom_tot_bsa
                = mom_grav_bsa
                + mom_iner_bsa
                + mom_aero_bsa
                ;

        _moment += _dirFactor * mom_tot_bsa.x();
    }
}
