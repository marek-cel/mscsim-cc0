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

#include <fdm/models/fdm_Blade.h>

#include <fdm/main/fdm_Aerodynamics.h>

#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

Matrix3x3 Blade::getRAS2AAS( double psi )
{
    double tempPsi = -psi + M_PI / 2.0;

    Matrix3x3 result;

//    result(0,0) = -1.0;
//    result(0,1) =  0.0;
//    result(0,2) =  0.0;

//    result(1,0) =  0.0;
//    result(1,1) =  1.0;
//    result(1,2) =  0.0;

//    result(2,0) =  0.0;
//    result(2,1) =  0.0;
//    result(2,2) = -1.0;

    double cosPsi = cos( tempPsi );
    double sinPsi = sin( tempPsi );

    result(0,0) = -cosPsi;
    result(0,1) = -sinPsi;
    result(0,2) =  0.0;

    result(1,0) = -sinPsi;
    result(1,1) =  cosPsi;
    result(1,2) =  0.0;

    result(2,0) =  0.0;
    result(2,1) =  0.0;
    result(2,2) = -1.0;

    return result;
}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3 Blade::getAAS2BAS( double beta )
{
    Matrix3x3 result;

    double cosBeta = cos( beta );
    double sinBeta = sin( beta );

    result = Matrix3x3::createIdentityMatrix();

//    result(0,0) =  1.0;
//    result(0,1) =  0.0;
//    result(0,2) =  0.0;

//    result(1,0) =  0.0;
//    result(1,1) =  cosBeta;
//    result(1,2) =  sinBeta;

//    result(2,0) =  0.0;
//    result(2,1) = -sinBeta;
//    result(2,2) =  cosBeta;

//    result(0,0) =  1.0;
//    result(0,1) =  0.0;
//    result(0,2) =  0.0;

//    result(1,0) =  0.0;
//    result(1,1) =  cosBeta;
//    result(1,2) = -sinBeta;

//    result(2,0) =  0.0;
//    result(2,1) =  sinBeta;
//    result(2,2) =  cosBeta;

    return result;
}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3 Blade::getRAS2BAS( double psi, double beta )
{
    return getRAS2AAS( psi ) * getAAS2BAS( beta );
}

////////////////////////////////////////////////////////////////////////////////

Blade::Blade() :
    _b ( 0.0 ),
    _c ( 0.0 ),
    _e ( 0.0 ),
    _m ( 0.0 ),

    _beta_min ( 0.0 ),
    _beta_max ( 0.0 ),

    _twist_0 ( 0.0 ),
    _twist_rate ( 0.0 ),

    _sb ( 0.0 ),
    _ib ( 0.0 ),

    _thrust ( 0.0 ),
    _hforce ( 0.0 ),
    _yforce ( 0.0 ),
    _torque ( 0.0 ),
    _moment ( 0.0 ),

    _beta_0 ( 0.0 ),
    _beta_1 ( 0.0 ),
    _beta_2 ( 0.0 ),

    _beta ( _beta_0 ),

    _theta ( 0.0 )
{
    _cd = Table::createOneRecordTable( 0.0 );
    _cl = Table::createOneRecordTable( 0.0 );

    _ras2aas = Matrix3x3::createIdentityMatrix();
    _aas2ras = Matrix3x3::createIdentityMatrix();
    _aas2bas = Matrix3x3::createIdentityMatrix();
    _bas2aas = Matrix3x3::createIdentityMatrix();
    _ras2bas = Matrix3x3::createIdentityMatrix();
    _bas2ras = Matrix3x3::createIdentityMatrix();
}

////////////////////////////////////////////////////////////////////////////////

Blade::~Blade() {}

////////////////////////////////////////////////////////////////////////////////

void Blade::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _m , "blade_mass"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _b , "blade_span" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _c , "blade_chord"  );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _e , "hinge_offset" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _beta_min, "beta_min" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _beta_max, "beta_max" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _twist_0    , "twist_0" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _twist_rate , "twist_rate" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cd, "cd" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cl, "cl" );

        if ( result == FDM_SUCCESS )
        {
            _r_fh_aas = Vector3( 0.0, _e, 0.0 );

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

void Blade::computeForceAndMoment( const Vector3 &vel_air_ras,
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
    update( vel_air_ras,
            omg_air_ras,
            omg_ras,
            acc_ras,
            eps_ras,
            grav_ras,
            omega,
            azimuth,
            airDensity,
            theta_0,
            theta_1c,
            theta_1s );
}

////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fdm/utils/fdm_Units.h>
void Blade::integrate( double timeStep,
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
    update( vel_air_ras,
            omg_air_ras,
            omg_ras,
            acc_ras,
            eps_ras,
            grav_ras,
            omega,
            azimuth,
            airDensity,
            theta_0,
            theta_1c,
            theta_1s );

    double beta_0_prev = _beta_0;
    double beta_1_prev = _beta_1;

    double moment = _moment;

    if ( 0 )
    {
        // limiting flapping angle
        if ( _beta_0 < _beta_min || _beta_0 > _beta_max )
        {
            double delta = 0.0;

            if ( _beta_0 < _beta_min )
                delta = _beta_0 - _beta_min;
            else
                delta = _beta_0 - _beta_max;

            moment -= delta * fabs( delta ) * 1.0e7;
            moment -= _beta_1 * 1.0e4;
        }
    }

    // flaping angle time 2nd derivative
    _beta_2 = moment / _ib;

    // flapping angle and flaping angle time derivative Euler integration
    _beta_1 += _beta_2 * timeStep;
    _beta_0 += _beta_1 * timeStep;

    // limiting flapping angle
    _beta_0 = Misc::satur( _beta_min, _beta_max, _beta_0 );

    //std::cout << "beta= " << Units::rad2deg( _beta_0 ) << std::endl;

    // back calculating flaping angle time derivatives
    if ( timeStep >= FDM_TIME_STEP_MIN )
    {
        _beta_1 = ( _beta_0 - beta_0_prev ) / timeStep;
        _beta_2 = ( _beta_1 - beta_1_prev ) / timeStep;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Blade::update( const Vector3 &vel_air_ras,
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
    // zeroize results
    _thrust = 0.0;
    _hforce = 0.0;
    _yforce = 0.0;
    _torque = 0.0;
    _moment = 0.0;

    // transform matrices
    _ras2aas = getRAS2AAS( azimuth );
    _aas2ras = _ras2aas.getTransposed();

    _aas2bas = getAAS2BAS( _beta );
    _bas2aas = _aas2bas.getTransposed();

    _ras2bas = _ras2aas * _aas2bas;
    _bas2ras = _ras2bas.getTransposed();

    // feathering angle
    double cosPsi = cos( azimuth );
    double sinPsi = sin( azimuth );

    _theta = theta_0 + theta_1c * cosPsi + theta_1s * sinPsi;

    // convert parameters
    Vector3 vel_air_aas = _ras2aas * vel_air_ras;
    Vector3 omg_air_aas = _ras2aas * omg_air_ras;
    Vector3 omg_aas     = _ras2aas * omg_ras;
    Vector3 acc_aas     = _ras2aas * acc_ras;
    Vector3 eps_aas     = _ras2aas * eps_ras;
    Vector3 grav_aas    = _ras2aas * grav_ras;

    // rotor angular velocity expressed in BAAS
    // Notice
    Vector3 omg_r_aas( 0.0, 0.0, omega );

    // integration along blade span
    const int steps_y = 20;

    const double coef = 1.0 / (double)( steps_y );
    const double dy = _b * coef;
    const double dm = _m * coef;

    for ( int i = 0; i < steps_y; i++ )
    {
        // center of element coordiantes
        double y = ( i + 0.5 ) * dy;
        Vector3 r_fh_aas = _bas2aas * Vector3( 0.0, y, 0.0 );
        Vector3 r_rh_aas = _r_fh_aas + r_fh_aas;
        double r = r_rh_aas.getLength();

        //std::cout << r_rh_aas.toString() << std::endl;

        // flapping motion
        Vector3 omg_f_aas( _beta_1, 0.0, 0.0 );

        // acceleration of element
        Vector3 a_aas = acc_aas
                      + ( omg_aas % ( omg_aas % r_rh_aas ) )
                      + ( eps_aas % r_rh_aas )
                      // rotor rotation centrifugal
                      + ( omg_r_aas % ( omg_r_aas % r_rh_aas ) )
                      // flapping motion centrifugal
                      + ( omg_f_aas % ( omg_f_aas % r_fh_aas ) )
                      // acceleration due to gravity
                      - grav_aas;
        //std::cout << a_aas.toString() << std::endl;
        //std::cout << ( omg_r_aas % ( omg_r_aas % r_rh_aas ) ).toString() << std::endl;

        // velocity (relative to airflow)
        Vector3 v_air_aas = vel_air_aas
                          + ( omg_air_aas % r_rh_aas )
                          + ( omg_r_aas   % r_rh_aas )
                          + ( omg_f_aas   % r_fh_aas );
        Vector3 v_air_bas = _aas2bas * v_air_aas;

        // section angle of attack
        double uv = -v_air_bas.x();
        double w  = -v_air_bas.z();
        double angleOfAttack = Aerodynamics::getAngleOfAttack( uv, w ) + _theta;
        //std::cout << Units::rad2deg( angleOfAttack ) << std::endl;

        // dynamic pressure
        double dynPress = 0.5 * airDensity * v_air_bas.getLength2();

        // elementary forces
        double dD = dynPress * _cd.getValue( angleOfAttack ) * _c;
        double dL = dynPress * _cl.getValue( angleOfAttack ) * _c;

        double sinAlpha = sin( angleOfAttack );
        double cosAlpha = cos( angleOfAttack );

        double dX = cosAlpha * dD - sinAlpha * dL;
        double dZ = sinAlpha * dD + cosAlpha * dL;

        Vector3 d_for_bfas( dX, 0.0, dZ );
        Vector3 d_for_ras = _bas2ras * d_for_bfas;

        double dQ = r * dX;
        double dM = y * dZ;

        _hforce += dy * d_for_ras.x() * -1.0;
        _yforce += dy * d_for_ras.y();
        _thrust += dy * d_for_ras.z() * -1.0;
        _torque += dy * dQ;
        _moment += dy * dM - ( r_fh_aas % ( dm * a_aas ) ).x();

//        std::cout << ( dm * a_aas ).toString();
//        std::cout << " ; ";
//        std::cout << ( r_fh_aas % ( dm * a_aas ) ).toString();
//        std::cout << std::endl;
    }
}
