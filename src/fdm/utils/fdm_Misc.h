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
#ifndef FDM_MISC_H
#define FDM_MISC_H

////////////////////////////////////////////////////////////////////////////////

#include <math.h>
#include <stddef.h>

#ifdef _MSC_VER
#   include <float.h>
#endif

#include <fdm/fdm_Defines.h>

#ifdef _MSC_VER
#   ifdef max
#       undef max
#   endif
#   ifdef min
#       undef min
#   endif
#endif

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief Miscellaneous utilities.
 */
class FDMEXPORT Misc
{
public:

    inline static double inertia( double u, double y, double dt, double tc )
    {
        return y + ( 1.0 - exp( -dt / tc ) ) * ( u - y );
    }

    /**
     * Checks if given varaible is Infinite.
     * @param val double precision value to test
     * @return function returns TRUE if tested value is Infinite
     */
    inline static bool isInf( const double &val )
    {
#       ifdef _MSC_VER
        return !( _finite( val ) );
#       else
        return isinf( val );
#       endif
    }

    /**
     * Checks if given varaible is NaN.
     * @param val double precision value to test
     * @return function returns TRUE if tested value is NaN
     */
    inline static bool isNaN( const double &val )
    {
        return ( val != val );
    }

    /**
     * Checks if given varaible is Infinite or NaN.
     * @param val double precision value to test
     * @return function returns FALSE if tested value is Infinite or NaN
     */
    inline static bool isValid( const double &val )
    {
        return !( isNaN( val ) || isInf( val ) );
    }

    /**
     * Checks if given array is Infinite or NaN.
     * @param array double precision array to test
     * @param size the size of given array
     * @return function returns FALSE if tested array is Infinite or NaN
     */
    inline static bool isValid( const double array[], unsigned int size )
    {
        for ( unsigned int i = 0; i < size; i++ )
        {
            if ( isNaN( array[ i ] ) || isInf( array[ i ] ) ) return false;
        }

        return true;
    }

    /**
     * Maximum.
     * @param v1 first value to compare
     * @param v2 second value to campare
     * @return maximum value
     */
    inline static double max( const double &v1, const double &v2 )
    {
        return ( v1 > v2 ) ? v1 : v2;
    }

    /**
     * Minimum.
     * @param v1 first value to compare
     * @param v2 second value to campare
     * @return minimum value
     */
    inline static double min( const double &v1, const double &v2 )
    {
        return ( v1 < v2 ) ? v1 : v2;
    }

    /**
     * Power 2 (square) function.
     * @param val argument
     * @return power 2 (square)
     */
    inline static double pow2( const double &val )
    {
        return val * val;
    }

    /**
     * Power 3 (cube) function.
     * @param val argument
     * @return power 3 (cube)
     */
    inline static double pow3( const double &val )
    {
        return val * val * val;
    }

    /**
     * Power 4 function.
     * @param val argument
     * @return power 4
     */
    inline static double pow4( const double &val )
    {
        return val * val * val * val;
    }

    /**
     * Power 5 function.
     * @param val argument
     * @return power 5
     */
    inline static double pow5( const double &val )
    {
        return val * val * val * val * val;
    }

    /**
     * Saturation function. Returns value limited to the given range.
     * @param min minimum possible value
     * @param max maximum possible value
     * @param val variable to test
     * @return min if val less than min, max if val larger than max, val if val larger than min and less than max
     */
    inline static double satur( const double &min, const double &max, const double &val )
    {
        if      ( val < min ) return min;
        else if ( val > max ) return max;

        return val;
    }

    /**
     * Deadband function. Returns zero within the given deadband.
     * @param start deadband start
     * @param end deadband end
     * @param val variable to test
     * @return zero if value is greater than min and less than max
     */
    inline static double deadband( const double &start, const double &end, const double &val )
    {
        if      ( val > end   ) return val - end;
        else if ( val < start ) return val - start;

        return 0.0;
    }

    /**
     * Signum function.
     * @param val input value
     * @return 1 if val is possitive, -1 when val is negative, 0 if val is zero
     */
    inline static double sign( const double &val )
    {
        if      ( val < 0.0 ) return -1.0;
        else if ( val > 0.0 ) return  1.0;

        return 0.0;
    }
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_MISC_H
