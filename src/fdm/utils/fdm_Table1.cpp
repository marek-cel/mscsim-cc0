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

#include <fdm/utils/fdm_Table1.h>

#include <cmath>
#include <limits>
#include <sstream>

#include <fdm/fdm_Exception.h>
#include <fdm/utils/fdm_Misc.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

Table1 Table1::oneRecordTable( double val )
{
    std::vector< double > keyValues;
    std::vector< double > tableData;

    keyValues.push_back( 0.0 );
    tableData.push_back( val );

    return Table1( keyValues, tableData );
}

////////////////////////////////////////////////////////////////////////////////

Table1::Table1() :
    _size ( 0 ),
    _key_values ( FDM_NULLPTR ),
    _table_data ( FDM_NULLPTR ),
    _inter_data ( FDM_NULLPTR )
{}

////////////////////////////////////////////////////////////////////////////////

Table1::Table1( const std::vector< double > &key_values,
                const std::vector< double > &table_data ) :
    _size ( 0 ),
    _key_values ( FDM_NULLPTR ),
    _table_data ( FDM_NULLPTR ),
    _inter_data ( FDM_NULLPTR )
{
    if ( key_values.size() == table_data.size() )
    {
        _size = key_values.size();

        if ( _size > 0 )
        {
            _key_values = new double [ _size ];
            _table_data = new double [ _size ];
            _inter_data = new double [ _size ];

            for ( unsigned int i = 0; i < _size; i++ )
            {
                _key_values[ i ] = key_values[ i ];
                _table_data[ i ] = table_data[ i ];
                _inter_data[ i ] = 0.0;
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

Table1::Table1( const Table1 &table ) :
    _size ( table._size ),
    _key_values ( FDM_NULLPTR ),
    _table_data ( FDM_NULLPTR ),
    _inter_data ( FDM_NULLPTR )
{
    if ( _size > 0 )
    {
        _key_values = new double [ _size ];
        _table_data = new double [ _size ];
        _inter_data = new double [ _size ];

        for ( unsigned int i = 0; i < _size; i++ )
        {
            _key_values[ i ] = table._key_values[ i ];
            _table_data[ i ] = table._table_data[ i ];
            _inter_data[ i ] = table._inter_data[ i ];
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

Table1::~Table1()
{
    FDM_DELTAB( _key_values );
    FDM_DELTAB( _table_data );
    FDM_DELTAB( _inter_data );
}

////////////////////////////////////////////////////////////////////////////////

double Table1::getIndexValue( unsigned int key_index ) const
{
    if ( _size > 0 && key_index < _size )
    {
        return _key_values[ key_index ];
    }

    return std::numeric_limits< double >::quiet_NaN();
}

////////////////////////////////////////////////////////////////////////////////

double Table1::getKeyOfValueMin() const
{
    double result = std::numeric_limits< double >::quiet_NaN();
    double min_value = std::numeric_limits< double >::max();

    for ( unsigned int i = 1; i < _size; i++ )
    {
        if ( _table_data[ i ] < min_value )
        {
            result = _key_values[ i ];
            min_value = _table_data[ i ];
        }
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////

double Table1::getKeyOfValueMin( double key_min, double key_max ) const
{
    double result = std::numeric_limits< double >::quiet_NaN();
    double min_value = std::numeric_limits< double >::max();

    for ( unsigned int i = 1; i < _size; i++ )
    {
        if ( _table_data[ i ] < min_value )
        {
            if ( _key_values[ i ] <= key_max )
            {
                if ( _key_values[ i ] >= key_min )
                {
                    result = _key_values[ i ];
                    min_value = _table_data[ i ];
                }
            }
            else
            {
                break;
            }
        }
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////

double Table1::getKeyOfValueMax() const
{
    double result = std::numeric_limits< double >::quiet_NaN();
    double max_value = std::numeric_limits< double >::min();

    for ( unsigned int i = 1; i < _size; i++ )
    {
        if ( _table_data[ i ] > max_value )
        {
            result = _key_values[ i ];
            max_value = _table_data[ i ];
        }
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////

double Table1::getKeyOfValueMax( double key_min, double key_max ) const
{
    double result = std::numeric_limits< double >::quiet_NaN();
    double min_value = std::numeric_limits< double >::min();

    for ( unsigned int i = 1; i < _size; i++ )
    {
        if ( _table_data[ i ] > min_value )
        {
            if ( _key_values[ i ] <= key_max )
            {
                if ( _key_values[ i ] >= key_min )
                {
                    result = _key_values[ i ];
                    min_value = _table_data[ i ];
                }
            }
            else
            {
                break;
            }
        }
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////

double Table1::getValue( double key_value ) const
{
    if ( _size > 0 )
    {
        if ( key_value < _key_values[ 0 ] )
            return getFirstValue();

        if ( key_value > _key_values[ _size - 1 ] )
            return getLastValue();

        unsigned int key_1 = 0;
        unsigned int key_2 = 0;

        for ( unsigned int i = 1; i < _size; i++ )
        {
            key_1 = i - 1;
            key_2 = i;

            if ( key_value >= _key_values[ key_1 ]
              && key_value <  _key_values[ key_2 ] )
            {
                break;
            }
        }

        return ( key_value - _key_values[ key_1 ] ) * _inter_data[ key_1 ]
                + _table_data[ key_1 ];
    }
    else
    {
        Exception e;

        e.setType( Exception::UnknownException );
        e.setInfo( "Invalid size of table." );

        FDM_THROW( e );
    }

    return std::numeric_limits< double >::quiet_NaN();
}

////////////////////////////////////////////////////////////////////////////////

double Table1::getValueByIndex( unsigned int key_index ) const
{
    if ( _size > 0 && key_index < _size )
    {
        return _table_data[ key_index ];
    }

    return std::numeric_limits< double >::quiet_NaN();
}

////////////////////////////////////////////////////////////////////////////////

double Table1::getFirstValue() const
{
    return getValueByIndex( 0 );
}

////////////////////////////////////////////////////////////////////////////////

double Table1::getLastValue() const
{
    return getValueByIndex( _size - 1 );
}

////////////////////////////////////////////////////////////////////////////////

double Table1::getValueMin() const
{
    double result = std::numeric_limits< double >::max();

    for ( unsigned int i = 0; i < _size; i++ )
    {
        if ( _table_data[ i ] < result )
        {
            result = _table_data[ i ];
        }
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////

double Table1::getValueMax() const
{
    double result = std::numeric_limits< double >::min();

    for ( unsigned int i = 0; i < _size; i++ )
    {
        if ( _table_data[ i ] > result )
        {
            result = _table_data[ i ];
        }
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////

bool Table1::isValid() const
{
    bool result = ( _size > 0 ) ? true : false;

    for ( unsigned int i = 0; i < _size; i++ )
    {
        if ( result ) result = Misc::isValid( _key_values[ i ] );
        if ( result ) result = Misc::isValid( _table_data[ i ] );
        if ( result ) result = Misc::isValid( _inter_data[ i ] );

        if ( i > 0 )
        {
            if ( result ) result = _key_values[ i - 1 ] < _key_values[ i ];
        }

        if ( !result ) break;
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////

void Table1::multiplyKeys( double factor )
{
    for ( unsigned int i = 0; i < _size; i++ )
    {
        _key_values[ i ] *= factor;
    }

    updateInterpolationData();
}

////////////////////////////////////////////////////////////////////////////////

void Table1::multiplyValues( double factor )
{
    for ( unsigned int i = 0; i < _size; i++ )
    {
        _table_data[ i ] *= factor;
    }

    updateInterpolationData();
}

////////////////////////////////////////////////////////////////////////////////

std::string Table1::toString()
{
    std::stringstream ss;

    for ( unsigned int i = 0; i < _size; i++ )
    {
        ss << _key_values[ i ] << "\t" << _table_data[ i ] << std::endl;
    }

    return ss.str();
}

////////////////////////////////////////////////////////////////////////////////

const Table1& Table1::operator= ( const Table1 &table )
{
    FDM_DELTAB( _key_values );
    FDM_DELTAB( _table_data );
    FDM_DELTAB( _inter_data );

    _size = table._size;

    if ( _size > 0 )
    {
        _key_values = new double [ _size ];
        _table_data = new double [ _size ];

        _inter_data = new double [ _size ];

        for ( unsigned int i = 0; i < _size; i++ )
        {
            _key_values[ i ] = table._key_values [ i ];
            _table_data[ i ] = table._table_data [ i ];
            _inter_data[ i ] = table._inter_data [ i ];
        }
    }

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

Table1 Table1::operator+ ( const Table1 &table ) const
{
    std::vector< double > keyValues;
    std::vector< double > tableData;

    for ( unsigned int i = 0; i < _size; i++ )
    {
        double keyValue = _key_values[ i ];

        keyValues.push_back( keyValue );
        tableData.push_back( getValue( keyValue ) + table.getValue( keyValue ) );
    }

    return Table1( keyValues, tableData );
}

////////////////////////////////////////////////////////////////////////////////

Table1 Table1::operator* ( double val ) const
{
    std::vector< double > keyValues;
    std::vector< double > tableData;

    for ( unsigned int i = 0; i < _size; i++ )
    {
        keyValues.push_back( _key_values[ i ] );
        tableData.push_back( _table_data[ i ] * val );
    }

    return Table1( keyValues, tableData );
}

////////////////////////////////////////////////////////////////////////////////

void Table1::updateInterpolationData()
{
    for ( unsigned int i = 0; i < _size - 1; i++ )
    {
        _inter_data[ i ] = ( _table_data[ i + 1 ] - _table_data[ i ] )
                         / ( _key_values[ i + 1 ] - _key_values[ i ] );
    }
}
