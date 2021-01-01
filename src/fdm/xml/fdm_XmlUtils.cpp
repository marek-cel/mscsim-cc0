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
 *
 ******************************************************************************/

#include <fdm/xml/fdm_XmlUtils.h>

//#include <cstdio>

#include <fdm/utils/fdm_String.h>
#include <fdm/utils/fdm_Units.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

std::string XmlUtils::getErrorInfo( const XmlNode &node )
{
    std::string info;

    info.clear();

    if ( node.isValid() )
    {
        info += "Reading file: \"";
        info += node.getFile();
        info += "\" near line: ";
        info += String::toString( (int)node.getLine() );
        info += " failed.";
    }
    else
    {
        info += "Invalid node.";
    }

    return info;
}

////////////////////////////////////////////////////////////////////////////////

int XmlUtils::read( const XmlNode &node, std::string *str )
{
    if ( node.isValid() )
    {
        XmlNode textNode = node.getFirstChild();

        if ( textNode.isValid() && textNode.isText() )
        {
            (*str) = textNode.getText();
            return FDM_SUCCESS;
        }
    }

    return FDM_FAILURE;
}

////////////////////////////////////////////////////////////////////////////////

int XmlUtils::read( const XmlNode &node, int *data )
{
    if ( node.isValid() )
    {
        XmlNode textNode = node.getFirstChild();

        if ( textNode.isValid() && textNode.isText() )
        {
            std::string text = String::stripLeadingSpaces( textNode.getText() );

            int data_temp = String::toInt( text );

            if ( Misc::isValid( data_temp ) )
            {
                (*data) = data_temp;
                return FDM_SUCCESS;
            }
        }
    }

    return FDM_FAILURE;
}

////////////////////////////////////////////////////////////////////////////////

int XmlUtils::read( const XmlNode &node, double *data )
{
    if ( node.isValid() )
    {
        XmlNode textNode = node.getFirstChild();

        double factor = String::toDouble( node.getAttribute( "factor" ), 1.0 );

        if ( textNode.isValid() && textNode.isText() )
        {
            std::string text = String::stripLeadingSpaces( textNode.getText() );

            double data_temp = String::toDouble( text );

            if ( Misc::isValid( data_temp ) )
            {
                if ( node.hasAttribute( "unit" ) )
                {
                    Units::fptr converter = Units::getConverter( node.getAttribute( "unit" ).c_str() );

                    if ( converter )
                        data_temp = (*converter)( data_temp );
                    else
                        return FDM_FAILURE;
                }

                (*data) = data_temp * factor;
                return FDM_SUCCESS;
            }
        }
    }

    return FDM_FAILURE;
}

////////////////////////////////////////////////////////////////////////////////

int XmlUtils::read( const XmlNode &node, Matrix3x3 *data )
{
    if ( node.isValid() )
    {
        XmlNode textNode = node.getFirstChild();

        if ( textNode.isValid() && textNode.isText() )
        {
            double xx = std::numeric_limits< double >::quiet_NaN();
            double xy = std::numeric_limits< double >::quiet_NaN();
            double xz = std::numeric_limits< double >::quiet_NaN();

            double yx = std::numeric_limits< double >::quiet_NaN();
            double yy = std::numeric_limits< double >::quiet_NaN();
            double yz = std::numeric_limits< double >::quiet_NaN();

            double zx = std::numeric_limits< double >::quiet_NaN();
            double zy = std::numeric_limits< double >::quiet_NaN();
            double zz = std::numeric_limits< double >::quiet_NaN();

            std::string text = String::stripLeadingSpaces( textNode.getText() );

            int val_read = sscanf( text.c_str(),
                                   "%lf %lf %lf %lf %lf %lf %lf %lf %lf",
                                   &xx, &xy, &xz,
                                   &yx, &yy, &yz,
                                   &zx, &zy, &zz );

            if ( val_read == 9 )
            {
                data->xx() = xx;
                data->xy() = xy;
                data->xz() = xz;

                data->yx() = yx;
                data->yy() = yy;
                data->yz() = yz;

                data->zx() = zx;
                data->zy() = zy;
                data->zz() = zz;

                return FDM_SUCCESS;
            }
        }
    }

    return FDM_FAILURE;
}

////////////////////////////////////////////////////////////////////////////////

int XmlUtils::read( const XmlNode &node, Vector3 *data )
{
    if ( node.isValid() )
    {
        XmlNode textNode = node.getFirstChild();

        if ( textNode.isValid() && textNode.isText() )
        {
            double x = std::numeric_limits< double >::quiet_NaN();
            double y = std::numeric_limits< double >::quiet_NaN();
            double z = std::numeric_limits< double >::quiet_NaN();

            std::string text = String::stripLeadingSpaces( textNode.getText() );

            int val_read = sscanf( text.c_str(), "%lf %lf %lf", &x, &y, &z );

            if ( val_read == 3 )
            {
                if ( node.hasAttribute( "unit" ) )
                {
                    Units::fptr converter = Units::getConverter( node.getAttribute( "unit" ).c_str() );

                    if ( converter )
                    {
                        x = (*converter)( x );
                        y = (*converter)( y );
                        z = (*converter)( z );
                    }
                    else
                    {
                        return FDM_FAILURE;
                    }
                }

                data->x() = x;
                data->y() = y;
                data->z() = z;

                return FDM_SUCCESS;
            }
        }
    }

    return FDM_FAILURE;
}

////////////////////////////////////////////////////////////////////////////////

int XmlUtils::read( const XmlNode &node, Table1 *table )
{
    std::vector< double > keyValues;
    std::vector< double > tableData;

    if ( node.isValid() )
    {
        XmlNode textNode = node.getFirstChild();

        double factor = String::toDouble( node.getAttribute( "factor" ), 1.0 );
        bool has_unit = node.hasAttribute( "unit" );
        Units::fptr converter = Units::getConverter( node.getAttribute( "unit" ).c_str() );

        if ( textNode.isValid() && textNode.isText() )
        {
            unsigned int offset = 0;
            unsigned int result = 0;

            std::string text = String::stripLeadingSpaces( textNode.getText() );

            do
            {
                double key = 0.0;
                double val = 0.0;

                unsigned int ch_read = 0;

                result = sscanf( text.c_str() + offset,
                                 "%lf %lf \n%n", &key, &val, &ch_read );

                offset += ch_read;

                if ( result == 2 )
                {
                    if ( has_unit )
                    {
                        if ( converter )
                            val = (*converter)( val );
                        else
                            return FDM_FAILURE;
                    }

                    keyValues.push_back( key );
                    tableData.push_back( val * factor );
                }
            }
            while ( result == 2 );

            if ( keyValues.size() == tableData.size() && keyValues.size() )
            {
                (*table) = Table1( keyValues, tableData );

                return FDM_SUCCESS;
            }
        }
    }

    return FDM_FAILURE;
}

////////////////////////////////////////////////////////////////////////////////

int XmlUtils::read( const XmlNode &node, Table2 *table )
{
    std::vector< double > colValues;
    std::vector< double > rowValues;
    std::vector< double > tableData;

    if ( node.isValid() )
    {
        XmlNode textNode = node.getFirstChild();

        double factor = String::toDouble( node.getAttribute( "factor" ), 1.0 );
        bool has_unit = node.hasAttribute( "unit" );
        Units::fptr converter = Units::getConverter( node.getAttribute( "unit" ).c_str() );

        if ( textNode.isValid() && textNode.isText() )
        {
            unsigned int offset = 0;
            unsigned int result = 0;

            std::string text = String::stripLeadingSpaces( textNode.getText() );

            // column keys
            std::string line = String::getFirstLine( text );

            do
            {
                unsigned int charsRead = 0;

                double key = 0.0;

                result = sscanf( line.c_str() + offset,
                                 "%lf%n", &key, &charsRead );

                offset += charsRead;

                if ( result == 1 )
                {
                    colValues.push_back( key );
                }
            }
            while ( result == 1 );

            // table rows
            do
            {
                unsigned int charsRead = 0;

                double key = 0.0;

                result = sscanf( text.c_str() + offset,
                                 "%lf%n", &key, &charsRead );

                offset += charsRead;

                if ( result == 1 )
                {
                    rowValues.push_back( key );

                    // table data
                    for ( unsigned int i = 0; i < colValues.size(); i++ )
                    {
                        double val = 0.0;

                        if ( i < colValues.size() - 1 )
                        {
                            result = sscanf( text.c_str() + offset,
                                             "%lf%n", &val, &charsRead );
                        }
                        else
                        {
                            result = sscanf( text.c_str() + offset,
                                             "%lf \n%n", &val, &charsRead );
                        }

                        offset += charsRead;

                        if ( result == 1 )
                        {
                            if ( has_unit )
                            {
                                if ( converter )
                                    val = (*converter)( val );
                                else
                                    return FDM_FAILURE;
                            }

                            tableData.push_back( val * factor );
                        }
                    }
                }
            }
            while ( result == 1 );

            if ( rowValues.size() * colValues.size() == tableData.size() )
            {
                (*table) = Table2( rowValues, colValues, tableData );
                return FDM_SUCCESS;
            }
        }
    }

    return FDM_FAILURE;
}

////////////////////////////////////////////////////////////////////////////////

int XmlUtils::read( const XmlNode &node, PID *pid, double min, double max )
{
    if ( node.isValid() )
    {
        int result = FDM_SUCCESS;

        double kp = 0.0;
        double ki = 0.0;
        double kd = 0.0;

        double temp_min = min;
        double temp_max = max;

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( node, &kp, "kp", true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( node, &ki, "ki", true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( node, &kd, "kd", true );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( node, &temp_min, "min", true );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( node, &temp_max, "max", true );

        if ( result == FDM_SUCCESS )
        {
            if ( temp_min < min ) temp_min = min;
            if ( temp_max > max ) temp_max = max;

            pid->setKp( kp );
            pid->setKi( ki );
            pid->setKd( kd );

            pid->setMin( temp_min );
            pid->setMax( temp_max );

            return FDM_SUCCESS;
        }
    }

    return FDM_FAILURE;
}

////////////////////////////////////////////////////////////////////////////////

void XmlUtils::throwError( const char *file, int line, const XmlNode &node )
{
    Exception e;

    e.setType( Exception::FileReadingError );
    e.setInfo( "Reading XML file failed. " + XmlUtils::getErrorInfo( node ) );

    e.setFile( file );
    e.setLine( line );

    throw e;
}
