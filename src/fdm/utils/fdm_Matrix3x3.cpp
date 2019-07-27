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

#include <fdm/utils/fdm_Matrix3x3.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

Matrix3x3 Matrix3x3::createIdentityMatrix()
{
    return Matrix3x3( 1.0, 0.0, 0.0,
                      0.0, 1.0, 0.0,
                      0.0, 0.0, 1.0 );
}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3::Matrix3x3() :
    Matrix< 3,3 >()
{}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3::Matrix3x3( const Matrix3x3 &mtrx ) :
    Matrix< 3,3 >( mtrx )
{}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3::Matrix3x3( const double items[] ) :
    Matrix< 3,3 >( items )
{}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3::Matrix3x3( double xx, double xy, double xz,
                      double yx, double yy, double yz,
                      double zx, double zy, double zz ) :
    Matrix< 3,3 >()
{
    m_items[ 0 ] = xx;
    m_items[ 1 ] = xy;
    m_items[ 2 ] = xz;

    m_items[ 3 ] = yx;
    m_items[ 4 ] = yy;
    m_items[ 5 ] = yz;

    m_items[ 6 ] = zx;
    m_items[ 7 ] = zy;
    m_items[ 8 ] = zz;
}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3::Matrix3x3( const Angles &angl ) :
    Matrix< 3,3 >()
{
    double sinPhi = sin( angl.phi() );
    double cosPhi = cos( angl.phi() );

    double sinTht = sin( angl.tht() );
    double cosTht = cos( angl.tht() );

    double sinPsi = sin( angl.psi() );
    double cosPsi = cos( angl.psi() );

    double sinPhiSinTht = sinPhi * sinTht;
    double cosPhiSinTht = cosPhi * sinTht;

    m_items[ 0 ] =  cosTht * cosPsi;
    m_items[ 1 ] =  cosTht * sinPsi;
    m_items[ 2 ] = -sinTht;

    m_items[ 3 ] = -( cosPhi * sinPsi ) + ( sinPhiSinTht * cosPsi );
    m_items[ 4 ] =  ( cosPhi * cosPsi ) + ( sinPhiSinTht * sinPsi );
    m_items[ 5 ] =  ( sinPhi * cosTht );

    m_items[ 6 ] =  ( sinPhi * sinPsi ) + ( cosPhiSinTht * cosPsi );
    m_items[ 7 ] = -( sinPhi * cosPsi ) + ( cosPhiSinTht * sinPsi );
    m_items[ 8 ] =  ( cosPhi * cosTht );
}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3::Matrix3x3( const Quaternion &qtrn ) :
    Matrix< 3,3 >()
{
    double e0 = qtrn.e0();
    double ex = qtrn.ex();
    double ey = qtrn.ey();
    double ez = qtrn.ez();

    double e02 = e0*e0;
    double ex2 = ex*ex;
    double ey2 = ey*ey;
    double ez2 = ez*ez;

    m_items[ 0 ] = e02 + ex2 - ey2 - ez2;
    m_items[ 1 ] = 2.0 * ( e0*ez + ex*ey );
    m_items[ 2 ] = 2.0 * ( ex*ez - e0*ey );

    m_items[ 3 ] = 2.0 * ( ex*ey - e0*ez );
    m_items[ 4 ] = e02 - ex2 + ey2 - ez2;
    m_items[ 5 ] = 2.0 * ( e0*ex + ey*ez );

    m_items[ 6 ] = 2.0 * ( e0*ey + ex*ez );
    m_items[ 7 ] = 2.0 * ( ey*ez - e0*ex );
    m_items[ 8 ] = e02 - ex2 - ey2 + ez2;
}

////////////////////////////////////////////////////////////////////////////////

void Matrix3x3::transpose()
{
    Matrix3x3 temp( *this );

    for ( unsigned int r = 0; r < m_rows; r++ )
    {
        for ( unsigned int c = 0; c < m_cols; c++ )
        {
            m_items[ c*m_cols + r ] = temp.m_items[ r*m_cols + c ];
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

Angles Matrix3x3::getAngles() const
{
    Angles result;

    double sinTht = -m_items[ 2 ];
    double cosTht = sqrt( 1.0 - std::min( 1.0, sinTht*sinTht ) );

    result.tht() = atan2( sinTht, cosTht );

    if ( cosTht > 0.0 )
    {
        result.phi() = atan2( m_items[ 5 ],  m_items[ 8 ] );
        result.psi() = atan2( m_items[ 1 ],  m_items[ 0 ] );
    }
    else
    {
        result.phi() = atan2( m_items[ 3 ], -m_items[ 6 ] );
        result.psi() = 0.0;
    }

    result.normalize();

    return result;
}

////////////////////////////////////////////////////////////////////////////////

Quaternion Matrix3x3::getQuaternion() const
{
    Quaternion result;

    // traces
    double tr[ 4 ];

    tr[ 0 ] = 1.0 + m_items[ 0 ] + m_items[ 4 ] + m_items[ 8 ];
    tr[ 1 ] = 1.0 + m_items[ 0 ] - m_items[ 4 ] - m_items[ 8 ];
    tr[ 2 ] = 1.0 - m_items[ 0 ] + m_items[ 4 ] - m_items[ 8 ];
    tr[ 3 ] = 1.0 - m_items[ 0 ] - m_items[ 4 ] + m_items[ 8 ];

    int index = 0;
    for ( int i = 1; i < 4; i++ ) index = ( tr[ i ] > tr[ index ] ) ? i : index;

    if ( index == 0 )
    {
        result.e0() = tr[ 0 ];
        result.ex() = m_items[ 5 ] - m_items[ 7 ];
        result.ey() = m_items[ 6 ] - m_items[ 2 ];
        result.ez() = m_items[ 1 ] - m_items[ 3 ];
    }
    else if ( index == 1 )
    {
        result.e0() = m_items[ 5 ] - m_items[ 7 ];
        result.ex() = tr[ 1 ];
        result.ey() = m_items[ 1 ] + m_items[ 3 ];
        result.ez() = m_items[ 6 ] + m_items[ 2 ];
    }
    else if ( index == 2 )
    {
        result.e0() = m_items[ 6 ] - m_items[ 2 ];
        result.ex() = m_items[ 1 ] + m_items[ 3 ];
        result.ey() = tr[ 2 ];
        result.ez() = m_items[ 5 ] + m_items[ 7 ];
    }
    else
    {
        result.e0() = m_items[ 1 ] - m_items[ 3 ];
        result.ex() = m_items[ 6 ] + m_items[ 2 ];
        result.ey() = m_items[ 5 ] + m_items[ 7 ];
        result.ez() = tr[ 3 ];
    }

    result *= sqrt( 0.25 / tr[ index ] );

    result.normalize();

    return result;
}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3 Matrix3x3::getTransposed() const
{
    Matrix3x3 result( *this );

    result.transpose();

    return result;
}

////////////////////////////////////////////////////////////////////////////////

const Matrix3x3& Matrix3x3::operator= ( const Matrix3x3 &mtrx )
{
    setArray( mtrx.m_items );
    
    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3 Matrix3x3::operator+ ( const Matrix3x3 &mtrx ) const
{
    Matrix3x3 result;

    for ( unsigned int i = 0; i < m_size; i++ )
    {
        result.m_items[ i ] = m_items[ i ] + mtrx.m_items[ i ];
    }
    
    return result;
}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3 Matrix3x3::operator- ( const Matrix3x3 &mtrx ) const
{
    Matrix3x3 result;
    
    for ( unsigned int i = 0; i < m_size; i++ )
    {
        result.m_items[ i ] = m_items[ i ] - mtrx.m_items[ i ];
    }
    
    return result;
}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3 Matrix3x3::operator* ( double value ) const
{
    Matrix3x3 result;
    
    for ( unsigned int i = 0; i < m_size; i++ )
    {
        result.m_items[ i ] = m_items[ i ] * value;
    }
    
    return result;
}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3 Matrix3x3::operator* ( const Matrix3x3 &mtrx ) const
{
    Matrix3x3 result;

    for ( unsigned int r = 0; r < m_rows; r++ )
    {
        for ( unsigned int c = 0; c < m_cols; c++ )
        {
            result(r,c) = 0.0;

            for ( unsigned int i = 0; i < m_cols; i++ )
            {
                result(r,c) += ( m_items[ r*m_cols + i ] * mtrx(i,c) );
            }
        }
    }
    
    return result;
}

////////////////////////////////////////////////////////////////////////////////

Vector3 Matrix3x3::operator* ( const Vector3 &vect ) const
{
    Vector3 result;

    for ( unsigned int r = 0; r < m_rows; r++ )
    {
        result(r) = 0.0;

        for ( unsigned int c = 0; c < m_cols; c++ )
        {
            result(r) += ( m_items[ r*m_cols + c ] * vect(c) );
        }
    }
    
    return result;
}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3 Matrix3x3::operator/ ( double value ) const
{
    Matrix3x3 result;
    
    for ( unsigned int i = 0; i < m_size; i++ )
    {
        result.m_items[ i ] = m_items[ i ] / value;
    }
    
    return result;
}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3& Matrix3x3::operator+= ( const Matrix3x3 &mtrx )
{
    for ( unsigned int i = 0; i < m_size; i++ )
    {
        m_items[ i ] += mtrx.m_items[ i ];
    }
    
    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3& Matrix3x3::operator-= ( const Matrix3x3 &mtrx )
{
    for ( unsigned int i = 0; i < m_size; i++ )
    {
        m_items[ i ] -= mtrx.m_items[ i ];
    }
    
    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3& Matrix3x3::operator*= ( double value )
{
    for ( unsigned int i = 0; i < m_size; i++ )
    {
        m_items[ i ] *= value;
    }
    
    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

Matrix3x3& Matrix3x3::operator/= ( double value )
{
    for ( unsigned int i = 0; i < m_size; i++ )
    {
        m_items[ i ] /= value;
    }
    
    return (*this);
}
