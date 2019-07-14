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

#include <fdm/utils/fdm_Table2D.h>

#include <math.h>
#include <limits>
#include <sstream>

#include <fdm/fdm_Exception.h>
#include <fdm/utils/fdm_Misc.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

Table2D::Table2D() :
    m_rows ( 0 ),
    m_cols ( 0 ),
    m_size ( 0 ),
    m_rowValues ( 0 ),
    m_colValues ( 0 ),
    m_tableData ( 0 ),
    m_interpolData ( 0 )
{}

////////////////////////////////////////////////////////////////////////////////

Table2D::Table2D( const std::vector< double > &rowValues,
                  const std::vector< double > &colValues,
                  const std::vector< double > &tableData ) :
    m_rows ( 0 ),
    m_cols ( 0 ),
    m_size ( 0 ),
    m_rowValues ( 0 ),
    m_colValues ( 0 ),
    m_tableData ( 0 ),
    m_interpolData ( 0 )
{
    if ( rowValues.size() * colValues.size() == tableData.size() )
    {
        m_size = tableData.size();

        if ( m_size > 0 )
        {
            m_rows = rowValues.size();
            m_cols = colValues.size();

            m_rowValues = new double [ m_rows ];
            m_colValues = new double [ m_cols ];
            m_tableData = new double [ m_size ];

            m_interpolData = new double [ m_size ];

            for ( unsigned int i = 0; i < m_rows; i++ ) m_rowValues[ i ] = rowValues[ i ];
            for ( unsigned int i = 0; i < m_cols; i++ ) m_colValues[ i ] = colValues[ i ];

            for ( unsigned int i = 0; i < m_size; i++ )
            {
                m_tableData[ i ] = tableData[ i ];
                m_interpolData[ i ] = 0.0;
            }

            updateInterpolationData();
        }
    }
    else
    {
        Exception e;

        e.setType( Exception::UnknownException );
        e.setInfo( "Invalid table size." );

        FDM_THROW( e );
    }
}

////////////////////////////////////////////////////////////////////////////////

Table2D::Table2D( const Table2D &table ) :
    m_rows ( table.m_rows ),
    m_cols ( table.m_cols ),
    m_size ( table.m_size ),
    m_rowValues ( 0 ),
    m_colValues ( 0 ),
    m_tableData ( 0 ),
    m_interpolData ( 0 )
{
    if ( m_size > 0 )
    {
        m_rowValues = new double [ m_rows ];
        m_colValues = new double [ m_cols ];
        m_tableData = new double [ m_size ];

        m_interpolData = new double [ m_size ];

        for ( unsigned int i = 0; i < m_rows; i++ ) m_rowValues[ i ] = table.m_rowValues[ i ];
        for ( unsigned int i = 0; i < m_cols; i++ ) m_colValues[ i ] = table.m_colValues[ i ];

        for ( unsigned int i = 0; i < m_size; i++ )
        {
            m_tableData[ i ] = table.m_tableData[ i ];
            m_interpolData[ i ] = table.m_interpolData[ i ] ;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

Table2D::~Table2D()
{
    if ( m_rowValues ) delete m_rowValues;
    m_rowValues = 0;

    if ( m_colValues ) delete m_colValues;
    m_colValues = 0;

    if ( m_tableData ) delete m_tableData;
    m_tableData = 0;

    if ( m_interpolData ) delete m_interpolData;
    m_interpolData = 0;
}

////////////////////////////////////////////////////////////////////////////////

double Table2D::getValue( double rowValue, double colValue ) const
{
    if ( m_size > 0 )
    {
        if ( rowValue < m_rowValues[ 0 ] ) return getValue( m_rowValues[ 0 ], colValue );
        if ( colValue < m_colValues[ 0 ] ) return getValue( rowValue, m_colValues[ 0 ] );

        if ( rowValue > m_rowValues[ m_rows - 1 ] ) return getValue( m_rowValues[ m_rows - 1 ], colValue );
        if ( colValue > m_colValues[ m_cols - 1 ] ) return getValue( rowValue, m_colValues[ m_cols - 1 ] );

        unsigned int row_1 = 0;
        unsigned int row_2 = 0;

        for ( unsigned int r = 1; r < m_rows; r++ )
        {
            row_1 = r - 1;
            row_2 = r;

            if ( rowValue >= m_rowValues[ row_1 ] && rowValue < m_rowValues[ row_2 ] ) break;
        }

        unsigned int col_1 = 0;
        unsigned int col_2 = 0;

        for ( unsigned int c = 1; c < m_cols; c++ )
        {
            col_1 = c - 1;
            col_2 = c;

            if ( colValue >= m_colValues[ col_1 ] && colValue < m_colValues[ col_2 ] ) break;
        }

        double result_1 = ( colValue - m_colValues[ col_1 ] ) * m_interpolData[ row_1 * m_cols + col_1 ]
                        + m_tableData[ row_1 * m_cols + col_1 ];

        double result_2 = ( colValue - m_colValues[ col_1 ] ) * m_interpolData[ row_2 * m_cols + col_1 ]
                        + m_tableData[ row_2 * m_cols + col_1 ];

        double rowDelta  = m_rowValues[ row_2 ] - m_rowValues[ row_1 ];
        double rowFactor = 0.0;

        if ( fabs( rowDelta ) > 1.0e-16 )
        {
            rowFactor = ( rowValue - m_rowValues[ row_1 ] ) / rowDelta;
        }

        return rowFactor * ( result_2 - result_1 ) + result_1;
    }
    else
    {
        Exception e;

        e.setType( Exception::UnknownException );
        e.setInfo( "Invalid table size." );

        FDM_THROW( e );
    }

    return std::numeric_limits< double >::quiet_NaN();
}

////////////////////////////////////////////////////////////////////////////////

double Table2D::getValueByIndex( unsigned int rowIndex, unsigned int colIndex ) const
{
    if ( m_rows > 0 && rowIndex < m_rows
      && m_cols > 0 && colIndex < m_cols )
    {
        return m_tableData[ rowIndex * m_cols + colIndex ];
    }

    return std::numeric_limits< double >::quiet_NaN();
}

////////////////////////////////////////////////////////////////////////////////

bool Table2D::isValid() const
{
    bool result = ( m_size > 0 ) ? true : false;

    if ( result )
    {
        for ( unsigned int c = 0; c < m_cols; c++ )
        {
            if ( result ) result = Misc::isValid( m_colValues[ c ] );

            if ( c > 0 )
            {
                if ( result ) result = m_colValues[ c - 1 ] < m_colValues[ c ];
            }

            if ( !result ) break;
        }

        for ( unsigned int r = 0; r < m_rows; r++ )
        {
            if ( result ) result = Misc::isValid( m_rowValues[ r ] );

            if ( r > 0 )
            {
                if ( result ) result = m_rowValues[ r - 1 ] < m_rowValues[ r ];
            }

            if ( !result ) break;
        }

        for ( unsigned int i = 0; i < m_size; i++ )
        {
            if ( result ) result = Misc::isValid( m_tableData[ i ] );
            if ( result ) result = Misc::isValid( m_interpolData[ i ] );

            if ( !result ) break;
        }
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////

std::string Table2D::toString()
{
    std::stringstream ss;

    ss << "\t";

    for ( unsigned int c = 0; c < m_cols; c++ )
    {
        ss << m_colValues[ c ] << ",\t";
    }

    ss << std::endl;

    for ( unsigned int r = 0; r < m_rows; r++ )
    {
        ss << m_rowValues[ r ] << "\t";

        for ( unsigned int c = 0; c < m_cols; c++ )
        {
            ss << m_tableData[ r * m_cols + c ] << ",\t";
        }

        ss << std::endl;
    }

    return ss.str();
}

////////////////////////////////////////////////////////////////////////////////

const Table2D& Table2D::operator= ( const Table2D &table )
{
    if ( m_rowValues ) delete m_rowValues;
    m_rowValues = 0;

    if ( m_colValues ) delete m_colValues;
    m_colValues = 0;

    if ( m_tableData ) delete m_tableData;
    m_tableData = 0;

    if ( m_interpolData ) delete m_interpolData;
    m_interpolData = 0;

    m_rows = table.m_rows;
    m_cols = table.m_cols;
    m_size = table.m_size;

    if ( m_size > 0 )
    {
        m_rowValues = new double [ m_rows ];
        m_colValues = new double [ m_cols ];
        m_tableData = new double [ m_size ];

        m_interpolData = new double [ m_size ];

        for ( unsigned int i = 0; i < m_rows; i++ ) m_rowValues[ i ] = table.m_rowValues[ i ];
        for ( unsigned int i = 0; i < m_cols; i++ ) m_colValues[ i ] = table.m_colValues[ i ];

        for ( unsigned int i = 0; i < m_size; i++ )
        {
            m_tableData[ i ] = table.m_tableData[ i ];
            m_interpolData[ i ] = table.m_interpolData[ i ] ;
        }
    }

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void Table2D::updateInterpolationData()
{
    for ( unsigned int r = 0; r < m_rows; r++ )
    {
        for ( unsigned int c = 0; c < m_cols - 1; c++ )
        {
            m_interpolData[ r * m_cols + c ] =
                ( m_tableData[ r * m_cols + c + 1 ] - m_tableData[ r * m_cols + c ] )
              / ( m_colValues[ c + 1 ] - m_colValues[ c ] );
        }
    }
}
