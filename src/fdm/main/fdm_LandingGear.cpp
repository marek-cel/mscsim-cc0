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

#include <fdm/main/fdm_LandingGear.h>
#include <fdm/main/fdm_Aircraft.h>

#include <fdm/utils/fdm_String.h>
#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

Vector3 LandingGear::getIntersection( const Vector3 &b, const Vector3 &e,
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

double LandingGear::getPacejkaCoef( double kappa,
                                    double b, double c, double d, double e )
{
    return d * sin( c * atan( b*( 1.0 - e )*kappa + e*atan( b*kappa ) ) );
}

////////////////////////////////////////////////////////////////////////////////

LandingGear::LandingGear( const Aircraft* aircraft ) :
    _aircraft ( aircraft ),

    _ctrlAngle ( 0.0 ),

    _brake_l ( 0.0 ),
    _brake_r ( 0.0 ),

    _antiskid ( false ),
    _steering ( false ),

    _onGround ( false )
{}

////////////////////////////////////////////////////////////////////////////////

LandingGear::~LandingGear() {}

////////////////////////////////////////////////////////////////////////////////

void LandingGear::init() {}

////////////////////////////////////////////////////////////////////////////////

void LandingGear::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        XmlNode wheelNode = dataNode.getFirstChildElement( "wheel" );

        while ( result == FDM_SUCCESS && wheelNode.isValid() )
        {
            Wheel wheel;

            wheel.input = 0;

            std::string name = wheelNode.getAttribute( "name" );

            wheel.steerable = String::toBool( wheelNode.getAttribute( "steerable" ), false );
            wheel.caster    = String::toBool( wheelNode.getAttribute( "caster"    ), false );

            switch ( String::toInt( wheelNode.getAttribute( "brake_group" ), 0 ) )
            {
                case 1:  wheel.group = Left;  break;
                case 2:  wheel.group = Right; break;
                default: wheel.group = None;  break;
            }

            if ( result == FDM_SUCCESS ) result = XmlUtils::read( wheelNode, wheel.r_a_bas , "attachment_point" );
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( wheelNode, wheel.r_u_bas , "unloaded_wheel"   );
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( wheelNode, wheel.k       , "stiffness"        );
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( wheelNode, wheel.c       , "damping"          );
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( wheelNode, wheel.mu_s    , "friction_static"  );
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( wheelNode, wheel.mu_k    , "friction_kinetic" );
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( wheelNode, wheel.mu_r    , "friction_rolling" );

            if ( result == FDM_SUCCESS && wheel.steerable )
            {
                result = XmlUtils::read( wheelNode, wheel.angle_max, "max_angle" );
            }

            if ( result == FDM_SUCCESS )
            {
                std::pair<Wheels::iterator,bool> temp =
                        _wheels.insert( std::pair<std::string,Wheel>( name, wheel ) );

                if ( temp.second != true )
                {
                    result = FDM_FAILURE;
                }
            }

            if ( result != FDM_SUCCESS )
            {
                Exception e;

                e.setType( Exception::FileReadingError );
                e.setInfo( "Reading XML file failed. " + XmlUtils::getErrorInfo( wheelNode ) );

                FDM_THROW( e );
            }

            wheelNode = wheelNode.getNextSiblingElement( "wheel" );
        }

        if ( result != FDM_SUCCESS )
        {
            Exception e;

            e.setType( Exception::FileReadingError );
            e.setInfo( "Reading XML file failed. " + XmlUtils::getErrorInfo( dataNode ) );

            FDM_THROW( e );
        }
    }
    else
    {
        Exception e;

        e.setType( Exception::FileReadingError );
        e.setInfo( "Reading XML file failed. " + XmlUtils::getErrorInfo( dataNode ) );

        FDM_THROW( e );
    }
}

////////////////////////////////////////////////////////////////////////////////

void LandingGear::computeForceAndMoment()
{
    _for_bas.set( 0.0, 0.0, 0.0 );
    _mom_bas.set( 0.0, 0.0, 0.0 );

    for ( Wheels::iterator it = _wheels.begin(); it != _wheels.end(); it++ )
    {
        Wheel &wheel = (*it).second;

        double position = 1.0;
        if ( wheel.input )
        {
            position = *wheel.input;
        }

        if ( position >= 1.0 )
        {
            Vector3 r_i_bas = getWheelIsect( wheel );
            Vector3 for_bas = getWheelForce( wheel, r_i_bas );

            _for_bas += for_bas;
            _mom_bas += r_i_bas ^ for_bas;
        }
    }

    if ( !_for_bas.isValid() || !_mom_bas.isValid() )
    {
        Exception e;

        e.setType( Exception::UnexpectedNaN );
        e.setInfo( "NaN detected in the landing gear model." );

        FDM_THROW( e );
    }
}

////////////////////////////////////////////////////////////////////////////////

void LandingGear::update()
{
    _onGround = _for_bas.getLength2() > 0.0;
}

////////////////////////////////////////////////////////////////////////////////

LandingGear::Wheel* LandingGear::getWheelByName( const std::string &name )
{
    Wheels::iterator it = _wheels.find( name );

    if ( it != _wheels.end() )
    {
        return &(it->second);
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////

Vector3 LandingGear::getWheelForce(const Wheel &wheel, const Vector3 &r_i_bas,
                                   double surf_coef, double vel_break )
{
    double deflection_norm = _aircraft->getNormal_BAS() * ( r_i_bas - wheel.r_u_bas );

    if ( deflection_norm > 1.0e-6 )
    {
        // intersection velocities components
        Vector3 v_i_bas = _aircraft->getVel_BAS() + ( _aircraft->getOmg_BAS() ^ r_i_bas );
        double v_norm = _aircraft->getNormal_BAS() * v_i_bas;
        Vector3 v_norm_bas = v_norm * _aircraft->getNormal_BAS();
        Vector3 v_tang_bas = v_i_bas - v_norm_bas;
        double v_tang = v_tang_bas.getLength();

        // normal force
        double for_norm = wheel.k * deflection_norm - wheel.c * v_norm;

        // longitudal and lateral directions
        Vector3 dir_lon_bas = ( _aircraft->getNormal_BAS() ^ Vector3::_uy ).getNormalized();
        Vector3 dir_lat_bas = ( Vector3::_ux ^ _aircraft->getNormal_BAS() ).getNormalized();

        // longitudal and lateral velocity components
        double vel_lon = v_tang_bas * dir_lon_bas;
        double vel_lat = v_tang_bas * dir_lat_bas;

        // steering
        double cosTurn = 1.0;
        double sinTurn = 0.0;

        if ( wheel.steerable && _steering )
        {
            double angle = Misc::satur( -wheel.angle_max, wheel.angle_max, _ctrlAngle );

            cosTurn = cos( angle );
            sinTurn = sin( angle );
        }
        else if ( wheel.caster && v_tang > vel_break )
        {
            cosTurn =  vel_lon / v_tang;
            sinTurn = -vel_lat / v_tang;
        }

        // tire velocities component
        double vel_roll = vel_lon * cosTurn - vel_lat * sinTurn;
        double vel_slip = vel_lat * cosTurn - vel_lon * sinTurn;

        // friction coefs
        double mu_surf_s = wheel.mu_s * surf_coef;
        double mu_surf_k = wheel.mu_k * surf_coef;

        double mu_roll_t = wheel.mu_r;

        double coef_roll = Misc::satur( 0.0, 1.0, fabs( vel_roll ) / vel_break ) * Misc::sign( vel_roll );
        double coef_slip = Misc::satur( 0.0, 1.0, fabs( vel_slip ) / vel_break ) * Misc::sign( vel_slip );

        // braking friction
        if ( wheel.group == Left || wheel.group == Right )
        {
            double brake = ( wheel.group == Left ) ? _brake_l : _brake_r;

            mu_roll_t += mu_surf_s * brake;

            double mu_roll_max = mu_surf_s;

            if ( _antiskid )
            {
                mu_roll_max = mu_surf_k + ( mu_surf_s - mu_surf_k ) * ( 1.0 - coef_slip );
            }
            else
            {
                mu_roll_max = mu_surf_k;
            }

            if ( mu_roll_t > mu_roll_max ) mu_roll_t = mu_roll_max;
        }

        // tire forces
        double for_norm_pos = ( for_norm < 0.0 ) ? 0.0 : for_norm;
        double for_roll_max = for_norm_pos * mu_roll_t;
        double for_slip_max = for_norm_pos * mu_surf_k;

        // continuous friction model
        double for_roll = for_roll_max * coef_roll;
        double for_slip = for_slip_max * coef_slip;

        // tangent forces
        double for_lon = -for_roll * cosTurn + for_slip * sinTurn;
        double for_lat = -for_slip * cosTurn + for_roll * sinTurn;

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
        return for_tan_bas + for_norm * _aircraft->getNormal_BAS();
    }

    return Vector3();
}

////////////////////////////////////////////////////////////////////////////////

Vector3 LandingGear::getWheelIsect( const Wheel &wheel )
{
    Vector3 r_i_bas = wheel.r_u_bas;

    Vector3 b_wgs = _aircraft->getBAS2WGS() * wheel.r_a_bas + _aircraft->getPos_WGS();
    Vector3 e_wgs = _aircraft->getBAS2WGS() * wheel.r_u_bas + _aircraft->getPos_WGS();
    Vector3 r_wgs;
    Vector3 n_wgs;

    if ( FDM_SUCCESS == _aircraft->getIsect()->getIntersection( b_wgs, e_wgs,
                                                                r_wgs, n_wgs ) )
    {
        r_i_bas = _aircraft->getWGS2BAS() * ( r_wgs - _aircraft->getPos_WGS() );
    }

    return r_i_bas;
}
