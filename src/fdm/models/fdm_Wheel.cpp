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

#include <fdm/models/fdm_Wheel.h>

#include <fdm/utils/fdm_String.h>
#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

Wheel::Wheels::Wheels() {}

////////////////////////////////////////////////////////////////////////////////

Wheel::Wheels::~Wheels() {}

////////////////////////////////////////////////////////////////////////////////

int Wheel::Wheels::addWheel( const char *name, Wheel wheel )
{
    std::pair< std::map< std::string, Wheel >::iterator, bool > temp =
            _wheels.insert( std::pair< std::string, Wheel >( name, wheel ) );

    if ( temp.second == true )
    {
        return FDM_SUCCESS;
    }

    return FDM_FAILURE;
}

////////////////////////////////////////////////////////////////////////////////

Wheel* Wheel::Wheels::getWheelByName( const char *name )
{
    std::map< std::string, Wheel >::iterator it = _wheels.find( name );

    if ( it != _wheels.end() )
    {
        return &(it->second);
    }

    return FDM_NULLPTR;
}

////////////////////////////////////////////////////////////////////////////////

Vector3 Wheel::getIntersection( const Vector3 &b, const Vector3 &e,
                                const Vector3 &r, const Vector3 &n )
{
    Vector3 r_i = e;

    double num = n * ( r - b );
    double den = n * ( e - b );

    double u = 0.0;

    if ( fabs( den ) < 10e-15 )
    {
        // segment is parallel to the plane
        if ( fabs( num ) < 10e-15 )
        {
            // segment beginning is on the plane
            r_i = b;
        }
    }
    else
    {
        u = num / den;

        if ( 0.0 <= u && u <= 1.0 )
        {
            r_i = b + u * ( e - b );
        }
    }

    return r_i;
}

////////////////////////////////////////////////////////////////////////////////

double Wheel::getPacejkaCoef( double kappa,
                              double b, double c, double d, double e )
{
    return d * sin( c * atan( b*( 1.0 - e )*kappa + e*atan( b*kappa ) ) );
}

////////////////////////////////////////////////////////////////////////////////

Wheel::Wheel() :
    _input ( FDM_NULLPTR ),

    _k ( 0.0 ),
    _c ( 0.0 ),

    _mu_s ( 0.0 ),
    _mu_k ( 0.0 ),
    _mu_r ( 0.0 ),

    _delta_max ( 0.0 ),

    _d_max ( 0.0 ),
    _v_max ( 1.0 ),

    _steerable ( false ),
    _caster    ( false ),

    _brakeGroup ( None ),

    _d_roll ( 0.0 ),
    _d_slip ( 0.0 ),

    _delta ( 0.0 ),
    _brake ( 0.0 )
{}

////////////////////////////////////////////////////////////////////////////////

Wheel::~Wheel() {}

////////////////////////////////////////////////////////////////////////////////

void Wheel::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        _steerable = String::toBool( dataNode.getAttribute( "steerable" ), false );
        _caster    = String::toBool( dataNode.getAttribute( "caster"    ), false );

        switch ( String::toInt( dataNode.getAttribute( "brake_group" ), 0 ) )
        {
            case 1:  _brakeGroup = Left;  break;
            case 2:  _brakeGroup = Right; break;
            default: _brakeGroup = None;  break;
        }

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _r_a_bas , "attachment_point" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _r_u_bas , "unloaded_wheel"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _k       , "stiffness"        );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _c       , "damping"          );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _mu_s    , "friction_static"  );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _mu_k    , "friction_kinetic" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _mu_r    , "friction_rolling" );

        if ( result == FDM_SUCCESS && _steerable )
        {
            result = XmlUtils::read( dataNode, _delta_max, "max_angle", true );
        }

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _d_max, "d_max"  , true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _v_max, "v_max" , true );

        if ( result != FDM_SUCCESS ) XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
    else
    {
        XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Wheel::computeForceAndMoment( const Vector3 &vel_bas,
                                   const Vector3 &omg_bas,
                                   const Vector3 &r_c_bas,
                                   const Vector3 &n_c_bas,
                                   bool steering, bool antiskid,
                                   double surf_coef )
{
    _for_bas.zeroize();
    _mom_bas.zeroize();

    double deflection_norm = n_c_bas * ( r_c_bas - _r_u_bas );

    if ( deflection_norm > 1.0e-6 )
    {
        Vector3 dir_lon_bas;
        Vector3 dir_lat_bas;

        double cosDelta = 1.0;
        double sinDelta = 0.0;

        double v_norm = 0.0;
        double v_roll = 0.0;
        double v_slip = 0.0;

        calculateVariables( vel_bas, omg_bas, r_c_bas, n_c_bas, steering,
                            &dir_lon_bas, &dir_lat_bas,
                            &cosDelta, &sinDelta, &v_norm, &v_roll, &v_slip );

        // normal force
        double for_norm = _k * deflection_norm - _c * v_norm;

        // friction coefs
        double mu_surf_s = _mu_s * surf_coef;
        double mu_surf_k = _mu_k * surf_coef;

        double mu_roll_t = _mu_r;

        double coef_roll = 0.0;
        double coef_slip = 0.0;

        if ( _v_max > 0.0 )
        {
            coef_roll = Misc::satur( 0.0, 1.0, fabs( v_roll ) / _v_max ) * Misc::sign( v_roll );
            coef_slip = Misc::satur( 0.0, 1.0, fabs( v_slip ) / _v_max ) * Misc::sign( v_slip );
        }
        else
        {
            coef_roll = Misc::sign( v_roll );
            coef_slip = Misc::sign( v_slip );
        }

        if ( fabs( _d_roll ) < _d_max && fabs( _d_slip ) < _d_max )
        {
            // spring-like model of static friction
            coef_roll += ( 2.0 / ( 1.0 + exp( -3.0 * Misc::satur( 0.0, 1.0, fabs( _d_roll ) / _d_max ) ) ) - 1.0 ) * Misc::sign( _d_roll );
            coef_slip += ( 2.0 / ( 1.0 + exp( -3.0 * Misc::satur( 0.0, 1.0, fabs( _d_slip ) / _d_max ) ) ) - 1.0 ) * Misc::sign( _d_slip );
        }

        coef_roll = Misc::satur( -1.0, 1.0, coef_roll );
        coef_slip = Misc::satur( -1.0, 1.0, coef_slip );

        // braking friction
        mu_roll_t += mu_surf_s * _brake;

        double mu_roll_max = mu_surf_s;

        if ( antiskid )
        {
            mu_roll_max = mu_surf_k + ( mu_surf_s - mu_surf_k ) * ( 1.0 - coef_slip );
        }
        else
        {
            mu_roll_max = mu_surf_k;
        }

        if ( mu_roll_t > mu_roll_max ) mu_roll_t = mu_roll_max;

        // tire forces
        double for_norm_pos = ( for_norm < 0.0 ) ? 0.0 : for_norm;
        double for_roll_max = for_norm_pos * mu_roll_t;
        double for_slip_max = for_norm_pos * mu_surf_k;

        // continuous friction model
        double for_roll = for_roll_max * coef_roll;
        double for_slip = for_slip_max * coef_slip;

        // tangent forces
        double for_lon = -for_roll * cosDelta + for_slip * sinDelta;
        double for_lat = -for_slip * cosDelta + for_roll * sinDelta;

        // preliminary tangent force
        Vector3 for_tan_bas = for_lon * dir_lon_bas + for_lat * dir_lat_bas;

        // max friction check
        double max_fric = mu_surf_s * for_norm;
        double max_coef = max_fric / for_tan_bas.getLength();

        if ( max_coef < 1.0 && Misc::isValid( max_coef ) )
        {
            for_tan_bas = max_coef * for_tan_bas;
        }

        // resulting forces
        _for_bas = for_tan_bas + for_norm * n_c_bas;
        _mom_bas = r_c_bas % _for_bas;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Wheel::integrate( double timeStep,
                       const Vector3 &vel_bas,
                       const Vector3 &omg_bas,
                       const Vector3 &r_c_bas,
                       const Vector3 &n_c_bas,
                       bool steering )
{
    double deflection_norm = n_c_bas * ( r_c_bas - _r_u_bas );

    if ( deflection_norm > 1.0e-6 )
    {
        Vector3 dir_lon_bas;
        Vector3 dir_lat_bas;

        double cosDelta = 1.0;
        double sinDelta = 0.0;

        double v_norm = 0.0;
        double v_roll = 0.0;
        double v_slip = 0.0;

        calculateVariables( vel_bas, omg_bas, r_c_bas, n_c_bas, steering,
                            &dir_lon_bas, &dir_lat_bas,
                            &cosDelta, &sinDelta, &v_norm, &v_roll, &v_slip );

        _d_roll += v_roll * timeStep;
        _d_slip += v_slip * timeStep;

        if ( fabs( _d_roll ) > _d_max || fabs( v_roll ) > _v_max ) _d_roll = 0.0;
        if ( fabs( _d_slip ) > _d_max || fabs( v_slip ) > _v_max ) _d_slip = 0.0;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Wheel::update( double delta, double brake )
{
    _delta = delta;
    _brake = brake;
}

////////////////////////////////////////////////////////////////////////////////

void Wheel::calculateVariables( const Vector3 &vel_bas,
                                const Vector3 &omg_bas,
                                const Vector3 &r_c_bas,
                                const Vector3 &n_c_bas,
                                bool steering,
                                Vector3 *dir_lon_bas,
                                Vector3 *dir_lat_bas,
                                double *cosDelta,
                                double *sinDelta,
                                double *v_norm,
                                double *v_roll,
                                double *v_slip )
{
    // contact point velocities components
    Vector3 v_c_bas = vel_bas + ( omg_bas % r_c_bas );

    (*v_norm) = n_c_bas * v_c_bas;

    Vector3 v_norm_bas = (*v_norm) * n_c_bas;
    Vector3 v_tang_bas = v_c_bas - v_norm_bas;

    double v_tang = v_tang_bas.getLength();

    // longitudal and lateral directions
    (*dir_lon_bas) = ( n_c_bas % Vector3::ey() ).getNormalized();
    (*dir_lat_bas) = ( Vector3::ex() % n_c_bas ).getNormalized();

    // longitudal and lateral velocity components
    double vel_lon = v_tang_bas * (*dir_lon_bas);
    double vel_lat = v_tang_bas * (*dir_lat_bas);

    // steering
    double delta = 0.0;

    (*cosDelta) = 1.0;
    (*sinDelta) = 0.0;

    if ( _steerable && steering )
    {
        delta = Misc::satur( -_delta_max, _delta_max, _delta );

        (*cosDelta) = cos( delta );
        (*sinDelta) = sin( delta );
    }
    else if ( _caster && v_tang > _v_max )
    {
        (*cosDelta) =  vel_lon / v_tang;
        (*sinDelta) = -vel_lat / v_tang;

        delta = asin( (*sinDelta) );
    }

    // tire velocities component
    (*v_roll) = vel_lon * (*cosDelta) - vel_lat * (*sinDelta);
    (*v_slip) = vel_lat * (*cosDelta) - vel_lon * (*sinDelta);
}
