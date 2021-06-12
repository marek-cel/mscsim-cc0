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
 ******************************************************************************/

#include <fdm/utils/fdm_Quaternion.h>

#include <cmath>

#include <fdm/utils/fdm_Matrix3x3.h>
#include <fdm/utils/fdm_Misc.h>
#include <fdm/utils/fdm_Vector3.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

Quaternion Quaternion::createZeroRotationQuaternion()
{
    return Quaternion( 1.0, 0.0, 0.0, 0.0 );
}


////////////////////////////////////////////////////////////////////////////////

Quaternion::Quaternion()
{
    set( 0.0, 0.0, 0.0, 0.0 );
}

////////////////////////////////////////////////////////////////////////////////

Quaternion::Quaternion( const Quaternion &quat )
{
    _e0 = quat._e0;
    _ex = quat._ex;
    _ey = quat._ey;
    _ez = quat._ez;
}

////////////////////////////////////////////////////////////////////////////////

Quaternion::Quaternion( double e0, double ex, double ey, double ez )
{
    set( e0, ex, ey, ez );
}

////////////////////////////////////////////////////////////////////////////////

Quaternion::Quaternion( const Angles &angl )
{
    double phi2 = angl.phi() / 2.0;
    double tht2 = angl.tht() / 2.0;
    double psi2 = angl.psi() / 2.0;

    double sinPhi2 = sin( phi2 );
    double cosPhi2 = cos( phi2 );

    double sinTht2 = sin( tht2 );
    double cosTht2 = cos( tht2 );

    double sinPsi2 = sin( psi2 );
    double cosPsi2 = cos( psi2 );

    double cosPhi2CosPsi2 = cosPhi2 * cosPsi2;
    double cosPhi2SinPsi2 = cosPhi2 * sinPsi2;
    double sinPhi2SinPsi2 = sinPhi2 * sinPsi2;
    double sinPhi2CosPsi2 = sinPhi2 * cosPsi2;

    _e0 = ( cosPhi2CosPsi2 * cosTht2 ) + ( sinPhi2SinPsi2 * sinTht2 );
    _ex = ( sinPhi2CosPsi2 * cosTht2 ) - ( cosPhi2SinPsi2 * sinTht2 );
    _ey = ( cosPhi2CosPsi2 * sinTht2 ) + ( sinPhi2SinPsi2 * cosTht2 );
    _ez = ( cosPhi2SinPsi2 * cosTht2 ) - ( sinPhi2CosPsi2 * sinTht2 );

    normalize();
}

////////////////////////////////////////////////////////////////////////////////

Quaternion::Quaternion( double angl, const Vector3 &vect )
{
    double len_inv = 1.0 / vect.getLength();

    double cosAngl2 = cos( 0.5 * angl );
    double sinAngl2 = sin( 0.5 * angl );

    _e0 = cosAngl2;
    _ex = sinAngl2 * vect.x() * len_inv;
    _ey = sinAngl2 * vect.y() * len_inv;
    _ez = sinAngl2 * vect.z() * len_inv;
}

////////////////////////////////////////////////////////////////////////////////

bool Quaternion::isValid() const
{
    return Misc::isValid( _e0 )
        && Misc::isValid( _ex )
        && Misc::isValid( _ey )
        && Misc::isValid( _ez );
}

////////////////////////////////////////////////////////////////////////////////

void Quaternion::conjugate()
{
    _ex = -_ex;
    _ey = -_ey;
    _ez = -_ez;
}

////////////////////////////////////////////////////////////////////////////////

void Quaternion::invert()
{
    conjugate();
    normalize();
}

////////////////////////////////////////////////////////////////////////////////

double Quaternion::getLength2() const
{
    return _e0*_e0 + _ex*_ex + _ey*_ey + _ez*_ez;
}

////////////////////////////////////////////////////////////////////////////////

double Quaternion::getLength() const
{
    return sqrt( getLength2() );
}

////////////////////////////////////////////////////////////////////////////////

void Quaternion::normalize()
{
    double length = getLength();

    if ( length > 0.0 )
    {
        _e0 = _e0 / length;
        _ex = _ex / length;
        _ey = _ey / length;
        _ez = _ez / length;
    }
}

////////////////////////////////////////////////////////////////////////////////

Angles Quaternion::getAngles() const
{
    Angles result;

    double sinTht2 = _e0*_ey - _ex*_ez;

    if( sinTht2 >= 0.5 )
    {
        result.phi() =  2.0 * asin( _ex / cos( M_PI_4 ) );
        result.tht() =  M_PI_2;
        result.psi() =  0.0;
    }
    else if ( sinTht2 <= -0.5 )
    {
        result.phi() =  2.0 * asin( _ex / cos( M_PI_4 ) );
        result.tht() = -M_PI_2;
        result.psi() =  0.0;
    }
    else
    {
        result.phi() = atan2( 2.0*( _e0*_ex + _ey*_ez ), 1.0 - 2.0*( _ex*_ex + _ey*_ey ) );
        result.tht() =  asin( 2.0*sinTht2 );
        result.psi() = atan2( 2.0*( _e0*_ez + _ex*_ey ), 1.0 - 2.0*( _ey*_ey + _ez*_ez ) );
    }

    result.normalize();

    return result;
}

////////////////////////////////////////////////////////////////////////////////

Quaternion Quaternion::getConjugated() const
{
    Quaternion result( *this );

    result.conjugate();

    return result;
}

////////////////////////////////////////////////////////////////////////////////

Quaternion Quaternion::getDerivative( const Vector3 &omega, double lambda ) const
{
    Quaternion result;

    // Pamadi - Performance Stability Dynamics and Control of Airplanes, 2004, p.348
    // Sibilski - Modelowanie i symulacja dynamiki ruchu obiektow latajacych, 2004, p.34
    // Roziecki - Bifurkacyjna Analiza Dynamiki Lotu Samolotu z Wektorowaniem Ciagu, 2006, p.24
    // | e0_dot |          |  0  P  Q  R | | e0 |   | -0.5 * ( ez*R + ey*Q + ex*P ) |
    // | ex_dot |          | -P  0 -R  Q | | ex |   | -0.5 * ( ez*Q - ey*R - e0*P ) |
    // | ey_dot | = -0.5 * | -Q  R  0 -P | | ey | = | -0.5 * ( ex*R - e0*Q - ez*P ) |
    // | ez_dot |          | -R -Q  P  0 | | ez |   | -0.5 * ( ey*P - e0*R - ex*Q ) |

    result._e0 = -0.5 * ( _ez * omega.r()
                        + _ey * omega.q()
                        + _ex * omega.p() );

    result._ex = -0.5 * ( _ez * omega.q()
                        - _ey * omega.r()
                        - _e0 * omega.p() );

    result._ey = -0.5 * ( _ex * omega.r()
                        - _e0 * omega.q()
                        - _ez * omega.p() );

    result._ez = -0.5 * ( _ey * omega.p()
                        - _e0 * omega.r()
                        - _ex * omega.q() );

    // Pamadi - Performance Stability Dynamics and Control of Airplanes, 2004, p.348
    // Sibilski - Modelowanie i symulacja dynamiki ruchu obiektow latajacych, 2004, p.34
    // Roziecki - Bifurkacyjna Analiza Dynamiki Lotu Samolotu z Wektorowaniem Ciagu, 2006, p.24
    if ( lambda > 0.0 )
    {
        double epsilon = 1.0 - getLength2();
        double lambda_epsilon = lambda * epsilon;

        result._e0 += lambda_epsilon * _e0;
        result._ex += lambda_epsilon * _ex;
        result._ey += lambda_epsilon * _ey;
        result._ez += lambda_epsilon * _ez;
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////

Quaternion Quaternion::getInverted() const
{
    Quaternion result( *this );

    result.invert();

    return result;
}

////////////////////////////////////////////////////////////////////////////////

Quaternion Quaternion::getNormalized() const
{
    Quaternion result( *this );

    result.normalize();

    return result;
}

////////////////////////////////////////////////////////////////////////////////

void Quaternion::set( double e0, double ex, double ey, double ez )
{
    _e0 = e0;
    _ex = ex;
    _ey = ey;
    _ez = ez;
}

////////////////////////////////////////////////////////////////////////////////

std::string Quaternion::toString() const
{
    std::stringstream ss;

    ss << _e0 <<  "," << _ex <<  "," << _ey <<  "," << _ez;

    return ss.str();
}

////////////////////////////////////////////////////////////////////////////////

const Quaternion& Quaternion::operator= ( const Quaternion &quat )
{
    _e0 = quat._e0;
    _ex = quat._ex;
    _ey = quat._ey;
    _ez = quat._ez;

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

Quaternion Quaternion::operator+ ( const Quaternion &quat ) const
{
    Quaternion result;

    result._e0 = _e0 + quat._e0;
    result._ex = _ex + quat._ex;
    result._ey = _ey + quat._ey;
    result._ez = _ez + quat._ez;

    return result;
}

////////////////////////////////////////////////////////////////////////////////

Quaternion Quaternion::operator- ( const Quaternion &quat ) const
{
    Quaternion result;

    result._e0 = _e0 - quat._e0;
    result._ex = _ex - quat._ex;
    result._ey = _ey - quat._ey;
    result._ez = _ez - quat._ez;

    return result;
}

////////////////////////////////////////////////////////////////////////////////

Quaternion Quaternion::operator* ( double val ) const
{
    Quaternion result;

    result._e0 = _e0 * val;
    result._ex = _ex * val;
    result._ey = _ey * val;
    result._ez = _ez * val;

    return result;
}

////////////////////////////////////////////////////////////////////////////////

Quaternion Quaternion::operator* ( const Quaternion &quat ) const
{
    Quaternion result;

    result._e0 = _e0 * quat._e0
               - _ex * quat._ex
               - _ey * quat._ey
               - _ez * quat._ez;

    result._ex = _e0 * quat._ex
               + _ex * quat._e0
               + _ey * quat._ez
               - _ez * quat._ey;

    result._ey = _e0 * quat._ey
               - _ex * quat._ez
               + _ey * quat._e0
               + _ez * quat._ex;

    result._ez = _e0 * quat._ez
               + _ex * quat._ey
               - _ey * quat._ex
               + _ez * quat._e0;

    return result;
}

////////////////////////////////////////////////////////////////////////////////

Quaternion Quaternion::operator/ ( double val ) const
{
    Quaternion result;

    result._e0 = _e0 / val;
    result._ex = _ex / val;
    result._ey = _ey / val;
    result._ez = _ez / val;

    return result;
}

////////////////////////////////////////////////////////////////////////////////

Quaternion& Quaternion::operator+= ( const Quaternion &quat )
{
    _e0 += quat._e0;
    _ex += quat._ex;
    _ey += quat._ey;
    _ez += quat._ez;

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

Quaternion& Quaternion::operator-= ( const Quaternion &quat )
{
    _e0 -= quat._e0;
    _ex -= quat._ex;
    _ey -= quat._ey;
    _ez -= quat._ez;

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

Quaternion& Quaternion::operator*= ( double val )
{
    _e0 *= val;
    _ex *= val;
    _ey *= val;
    _ez *= val;

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

Quaternion& Quaternion::operator/= ( double val )
{
    _e0 /= val;
    _ex /= val;
    _ey /= val;
    _ez /= val;

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

bool Quaternion::operator== ( const Quaternion &quat ) const
{
    return ( _e0 == quat._e0 )
        && ( _ex == quat._ex )
        && ( _ey == quat._ey )
        && ( _ez == quat._ez );
}

////////////////////////////////////////////////////////////////////////////////

bool Quaternion::operator!= ( const Quaternion &quat ) const
{
    return !( (*this) == quat );
}
