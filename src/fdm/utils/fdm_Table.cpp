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

#include <fdm/utils/fdm_Table.h>

#include <math.h>
#include <limits>
#include <sstream>

#include <fdm/fdm_Exception.h>
#include <fdm/utils/fdm_Misc.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

Table Table::createOneRecordTable( double val )
{
    std::vector< double > keyValues;
    std::vector< double > tableData;

    keyValues.push_back( 0.0 );
    tableData.push_back( val );

    return Table( keyValues, tableData );
}

////////////////////////////////////////////////////////////////////////////////

Table::Table() :
    m_size ( 0 ),
    m_keyValues ( 0 ),
    m_tableData ( 0 ),
    m_interpolData ( 0 )
{}

////////////////////////////////////////////////////////////////////////////////

Table::Table( const std::vector< double > &keyValues,
              const std::vector< double > &tableData ) :
    m_size ( 0 ),
    m_keyValues ( 0 ),
    m_tableData ( 0 ),
    m_interpolData ( 0 )
{
    if ( keyValues.size() == tableData.size() )
    {
        m_size = keyValues.size();

        if ( m_size > 0 )
        {
            m_keyValues = new double [ m_size ];
            m_tableData = new double [ m_size ];

            m_interpolData = new double [ m_size ];

            for ( unsigned int i = 0; i < m_size; i++ )
            {
                m_keyValues[ i ] = keyValues[ i ];
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

Table::Table( const Table &table ) :
    m_size ( table.m_size ),
    m_keyValues ( 0 ),
    m_tableData ( 0 ),
    m_interpolData ( 0 )
{
    if ( m_size > 0 )
    {
        m_keyValues = new double [ m_size ];
        m_tableData = new double [ m_size ];
        m_interpolData = new double [ m_size ];

        for ( unsigned int i = 0; i < m_size; i++ )
        {
            m_keyValues    [ i ] = table.m_keyValues    [ i ];
            m_tableData    [ i ] = table.m_tableData    [ i ];
            m_interpolData [ i ] = table.m_interpolData [ i ];
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

Table::~Table()
{
    if ( m_keyValues ) delete m_keyValues;
    m_keyValues = 0;

    if ( m_tableData ) delete m_tableData;
    m_tableData = 0;

    if ( m_interpolData ) delete m_interpolData;
    m_interpolData = 0;
}

////////////////////////////////////////////////////////////////////////////////

double Table::getIndexValue( unsigned int keyIndex ) const
{
    if ( m_size > 0 && keyIndex < m_size )
    {
        return m_keyValues[ keyIndex ];
    }

    return std::numeric_limits< double >::quiet_NaN();
}

////////////////////////////////////////////////////////////////////////////////

double Table::getKeyOfValueMin() const
{
    double result = std::numeric_limits< double >::quiet_NaN();
    double min_value = std::numeric_limits< double >::max();

    for ( unsigned int i = 1; i < m_size; i++ )
    {
        if ( m_tableData[ i ] < min_value )
        {
            result = m_keyValues[ i ];
            min_value = m_tableData[ i ];
        }
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////

double Table::getKeyOfValueMax() const
{
    double result = std::numeric_limits< double >::quiet_NaN();
    double max_value = std::numeric_limits< double >::min();

    for ( unsigned int i = 1; i < m_size; i++ )
    {
        if ( m_tableData[ i ] > max_value )
        {
            result = m_keyValues[ i ];
            max_value = m_tableData[ i ];
        }
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////

double Table::getValue( double keyValue ) const
{
    if ( m_size > 0 )
    {
        if ( keyValue < m_keyValues[ 0 ] )
            return getValueFirst();

        if ( keyValue > m_keyValues[ m_size - 1 ] )
            return getValueLast();

        unsigned int key_1 = 0;
        unsigned int key_2 = 0;

        for ( unsigned int i = 1; i < m_size; i++ )
        {
            key_1 = i - 1;
            key_2 = i;

            if ( keyValue >= m_keyValues[ key_1 ]
              && keyValue <  m_keyValues[ key_2 ] )
            {
                break;
            }
        }

        return ( keyValue - m_keyValues[ key_1 ] ) * m_interpolData[ key_1 ]
                + m_tableData[ key_1 ];
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

double Table::getValueByIndex( unsigned int keyIndex ) const
{
    if ( m_size > 0 && keyIndex < m_size )
    {
        return m_tableData[ keyIndex ];
    }

    return std::numeric_limits< double >::quiet_NaN();
}

////////////////////////////////////////////////////////////////////////////////

double Table::getFirstValue() const
{
    return getValueByIndex( 0 );
}

////////////////////////////////////////////////////////////////////////////////

double Table::getLastValue() const
{
    return getValueByIndex( m_size - 1 );
}

////////////////////////////////////////////////////////////////////////////////

double Table::getValueFirst() const
{
    if ( m_size > 0 )
    {
        return m_tableData[ 0 ];
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

double Table::getValueLast() const
{
    if ( m_size > 0 )
    {
        return m_tableData[ m_size - 1 ];
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

double Table::getValueMin() const
{
    double result = std::numeric_limits< double >::max();

    for ( unsigned int i = 0; i < m_size; i++ )
    {
        if ( m_tableData[ i ] < result )
        {
            result = m_tableData[ i ];
        }
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////

double Table::getValueMax() const
{
    double result = std::numeric_limits< double >::min();

    for ( unsigned int i = 0; i < m_size; i++ )
    {
        if ( m_tableData[ i ] > result )
        {
            result = m_tableData[ i ];
        }
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////

bool Table::isValid() const
{
    bool result = ( m_size > 0 ) ? true : false;

    for ( unsigned int i = 0; i < m_size; i++ )
    {
        if ( result ) result = Misc::isValid( m_keyValues[ i ] );
        if ( result ) result = Misc::isValid( m_tableData[ i ] );
        if ( result ) result = Misc::isValid( m_interpolData[ i ] );

        if ( i > 0 )
        {
            if ( result ) result = m_keyValues[ i - 1 ] < m_keyValues[ i ];
        }

        if ( !result ) break;
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////

std::string Table::toString()
{
    std::stringstream ss;

    for ( unsigned int i = 0; i < m_size; i++ )
    {
        ss << m_keyValues[ i ] << "\t" << m_tableData[ i ] << std::endl;
    }

    return ss.str();
}

////////////////////////////////////////////////////////////////////////////////

const Table& Table::operator= ( const Table &table )
{
    if ( m_keyValues ) delete m_keyValues;
    m_keyValues = 0;

    if ( m_tableData ) delete m_tableData;
    m_tableData = 0;

    if ( m_interpolData ) delete m_interpolData;
    m_interpolData = 0;

    m_size = table.m_size;

    if ( m_size > 0 )
    {
        m_keyValues = new double [ m_size ];
        m_tableData = new double [ m_size ];

        m_interpolData = new double [ m_size ];

        for ( unsigned int i = 0; i < m_size; i++ )
        {
            m_keyValues    [ i ] = table.m_keyValues    [ i ];
            m_tableData    [ i ] = table.m_tableData    [ i ];
            m_interpolData [ i ] = table.m_interpolData [ i ];
        }
    }

    return (*this);
}

////////////////////////////////////////////////////////////////////////////////

Table Table::operator+ ( const Table &table ) const
{
    std::vector< double > keyValues;
    std::vector< double > tableData;

    for ( unsigned int i = 0; i < m_size; i++ )
    {
        double keyValue = m_keyValues[ i ];

        keyValues.push_back( keyValue );
        tableData.push_back( getValue( keyValue ) + table.getValue( keyValue ) );
    }

    return Table( keyValues, tableData );
}

////////////////////////////////////////////////////////////////////////////////

Table Table::operator* ( double val ) const
{
    std::vector< double > keyValues;
    std::vector< double > tableData;

    for ( unsigned int i = 0; i < m_size; i++ )
    {
        keyValues.push_back( m_keyValues[ i ] );
        tableData.push_back( m_tableData[ i ] * val );
    }

    return Table( keyValues, tableData );
}

////////////////////////////////////////////////////////////////////////////////

void Table::updateInterpolationData()
{
    for ( unsigned int i = 0; i < m_size - 1; i++ )
    {
        m_interpolData[ i ] = ( m_tableData[ i + 1 ] - m_tableData[ i ] )
                         / ( m_keyValues[ i + 1 ] - m_keyValues[ i ] );
    }
}
