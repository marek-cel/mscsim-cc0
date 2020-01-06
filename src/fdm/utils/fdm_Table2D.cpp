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

#include <fdm/utils/fdm_Table2D.h>

#include <cmath>
#include <limits>
#include <sstream>

#include <fdm/fdm_Exception.h>
#include <fdm/utils/fdm_Misc.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

Table2D::Table2D() :
    _rows ( 0 ),
    _cols ( 0 ),
    _size ( 0 ),
    _rowValues ( FDM_NULLPTR ),
    _colValues ( FDM_NULLPTR ),
    _tableData ( FDM_NULLPTR ),
    _interpolData ( FDM_NULLPTR )
{}

////////////////////////////////////////////////////////////////////////////////

Table2D::Table2D( const std::vector< double > &rowValues,
                  const std::vector< double > &colValues,
                  const std::vector< double > &tableData ) :
    _rows ( 0 ),
    _cols ( 0 ),
    _size ( 0 ),
    _rowValues ( FDM_NULLPTR ),
    _colValues ( FDM_NULLPTR ),
    _tableData ( FDM_NULLPTR ),
    _interpolData ( FDM_NULLPTR )
{
    if ( rowValues.size() * colValues.size() == tableData.size() )
    {
        _size = tableData.size();

        if ( _size > 0 )
        {
            _rows = rowValues.size();
            _cols = colValues.size();

            _rowValues = new double [ _rows ];
            _colValues = new double [ _cols ];
            _tableData = new double [ _size ];

            _interpolData = new double [ _size ];

            for ( unsigned int i = 0; i < _rows; i++ ) _rowValues[ i ] = rowValues[ i ];
            for ( unsigned int i = 0; i < _cols; i++ ) _colValues[ i ] = colValues[ i ];

            for ( unsigned int i = 0; i < _size; i++ )
            {
                _tableData[ i ] = tableData[ i ];
                _interpolData[ i ] = 0.0;
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
    _rows ( table._rows ),
    _cols ( table._cols ),
    _size ( table._size ),
    _rowValues ( FDM_NULLPTR ),
    _colValues ( FDM_NULLPTR ),
    _tableData ( FDM_NULLPTR ),
    _interpolData ( FDM_NULLPTR )
{
    if ( _size > 0 )
    {
        _rowValues = new double [ _rows ];
        _colValues = new double [ _cols ];
        _tableData = new double [ _size ];

        _interpolData = new double [ _size ];

        for ( unsigned int i = 0; i < _rows; i++ ) _rowValues[ i ] = table._rowValues[ i ];
        for ( unsigned int i = 0; i < _cols; i++ ) _colValues[ i ] = table._colValues[ i ];

        for ( unsigned int i = 0; i < _size; i++ )
        {
            _tableData[ i ] = table._tableData[ i ];
            _interpolData[ i ] = table._interpolData[ i ] ;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

Table2D::~Table2D()
{
    FDM_DELTAB( _rowValues );
    FDM_DELTAB( _colValues );
    FDM_DELTAB( _tableData );
    FDM_DELTAB( _interpolData );
}

////////////////////////////////////////////////////////////////////////////////

double Table2D::getValue( double rowValue, double colValue ) const
{
    if ( _size > 0 )
    {
        if ( rowValue < _rowValues[ 0 ] ) return getValue( _rowValues[ 0 ], colValue );
        if ( colValue < _colValues[ 0 ] ) return getValue( rowValue, _colValues[ 0 ] );

        if ( rowValue > _rowValues[ _rows - 1 ] ) return getValue( _rowValues[ _rows - 1 ], colValue );
        if ( colValue > _colValues[ _cols - 1 ] ) return getValue( rowValue, _colValues[ _cols - 1 ] );

        unsigned int row_1 = 0;
        unsigned int row_2 = 0;

        for ( unsigned int r = 1; r < _rows; r++ )
        {
            row_1 = r - 1;
            row_2 = r;

            if ( rowValue >= _rowValues[ row_1 ] && rowValue < _rowValues[ row_2 ] ) break;
        }

        unsigned int col_1 = 0;
        unsigned int col_2 = 0;

        for ( unsigned int c = 1; c < _cols; c++ )
        {
            col_1 = c - 1;
            col_2 = c;

            if ( colValue >= _colValues[ col_1 ] && colValue < _colValues[ col_2 ] ) break;
        }

        double result_1 = ( colValue - _colValues[ col_1 ] ) * _interpolData[ row_1 * _cols + col_1 ]
                        + _tableData[ row_1 * _cols + col_1 ];

        double result_2 = ( colValue - _colValues[ col_1 ] ) * _interpolData[ row_2 * _cols + col_1 ]
                        + _tableData[ row_2 * _cols + col_1 ];

        double rowDelta  = _rowValues[ row_2 ] - _rowValues[ row_1 ];
        double rowFactor = 0.0;

        if ( fabs( rowDelta ) > 1.0e-16 )
        {
            rowFactor = ( rowValue - _rowValues[ row_1 ] ) / rowDelta;
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
    if ( _rows > 0 && rowIndex < _rows
      && _cols > 0 && colIndex < _cols )
    {
        return _tableData[ rowIndex * _cols + colIndex ];
    }

    return std::numeric_limits< double >::quiet_NaN();
}

////////////////////////////////////////////////////////////////////////////////

bool Table2D::isValid() const
{
    bool result = ( _size > 0 ) ? true : false;

    if ( result )
    {
        for ( unsigned int c = 0; c < _cols; c++ )
        {
            if ( result ) result = Misc::isValid( _colValues[ c ] );

            if ( c > 0 )
            {
                if ( result ) result = _colValues[ c - 1 ] < _colValues[ c ];
            }

            if ( !result ) break;
        }

        for ( unsigned int r = 0; r < _rows; r++ )
        {
            if ( result ) result = Misc::isValid( _rowValues[ r ] );

            if ( r > 0 )
            {
                if ( result ) result = _rowValues[ r - 1 ] < _rowValues[ r ];
            }

            if ( !result ) break;
        }

        for ( unsigned int i = 0; i < _size; i++ )
        {
            if ( result ) result = Misc::isValid( _tableData[ i ] );
            if ( result ) result = Misc::isValid( _interpolData[ i ] );

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

    for ( unsigned int c = 0; c < _cols; c++ )
    {
        ss << _colValues[ c ] << ",\t";
    }

    ss << std::endl;

    for ( unsigned int r = 0; r < _rows; r++ )
    {
        ss << _rowValues[ r ] << "\t";

        for ( unsigned int c = 0; c < _cols; c++ )
        {
            ss << _tableData[ r * _cols + c ] << ",\t";
        }

        ss << std::endl;
    }

    return ss.str();
}

////////////////////////////////////////////////////////////////////////////////

const Table2D& Table2D::operator= ( const Table2D &table )
{
    FDM_DELTAB( _rowValues );
    FDM_DELTAB( _colValues );
    FDM_DELTAB( _tableData );
    FDM_DELTAB( _interpolData );

    _rows = table._rows;
    _cols = table._cols;
    _size = table._size;

    if ( _size > 0 )
    {
        _rowValues = new double [ _rows ];
        _colValues = new double [ _cols ];
        _tableData = new double [ _size ];

        _interpolData = new double [ _size ];

        for ( unsigned int i = 0; i < _rows; i++ ) _rowValues[ i ] = table._rowValues[ i ];
        for ( unsigned int i = 0; i < _cols; i++ ) _colValues[ i ] = table._colValues[ i ];

        for ( unsigned int i = 0; i < _size; i++ )
        {
            _tableData[ i ] = table._tableData[ i ];
            _interpolData[ i ] = table._interpolData[ i ] ;
        }
    }

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

void Table2D::updateInterpolationData()
{
    for ( unsigned int r = 0; r < _rows; r++ )
    {
        for ( unsigned int c = 0; c < _cols - 1; c++ )
        {
            _interpolData[ r * _cols + c ] =
                ( _tableData[ r * _cols + c + 1 ] - _tableData[ r * _cols + c ] )
              / ( _colValues[ c + 1 ] - _colValues[ c ] );
        }
    }
}
