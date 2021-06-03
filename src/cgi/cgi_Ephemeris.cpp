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

#include <cgi/cgi_Ephemeris.h>

#include <cmath>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

double Ephemeris::dayOfYear( DateTime dateTime )
{
    bool leapYear = false;

    if ( dateTime.year % 4 == 0 )
    {
        if ( dateTime.year % 100 != 0 || dateTime.year % 400 == 0 )
        {
            leapYear = true;
        }
    }

    double doy = 0.0;

    if ( dateTime.month  <  1 ) dateTime.month  = 1;
    if ( dateTime.month  > 12 ) dateTime.month  = 12;
    if ( dateTime.day    > 31 ) dateTime.day    = 31;
    if ( dateTime.hour   > 23 ) dateTime.hour   = 23;
    if ( dateTime.minute > 59 ) dateTime.minute = 59;
    if ( dateTime.second > 59 ) dateTime.second = 59;

    switch ( dateTime.month )
    {
        case 1:  doy =  0.0; break;
        case 2:  doy = 31.0; break;
        case 3:  doy = ( leapYear ) ?  60.0 :  59.0; break;
        case 4:  doy = ( leapYear ) ?  91.0 :  90.0; break;
        case 5:  doy = ( leapYear ) ? 121.0 : 120.0; break;
        case 6:  doy = ( leapYear ) ? 152.0 : 151.0; break;
        case 7:  doy = ( leapYear ) ? 182.0 : 181.0; break;
        case 8:  doy = ( leapYear ) ? 213.0 : 212.0; break;
        case 9:  doy = ( leapYear ) ? 244.0 : 243.0; break;
        case 10: doy = ( leapYear ) ? 274.0 : 273.0; break;
        case 11: doy = ( leapYear ) ? 305.0 : 304.0; break;
        case 12: doy = ( leapYear ) ? 335.0 : 334.0; break;
    }

    doy += (double)( dateTime.day - 1.0 );
    doy += (double)dateTime.hour   / 24.0;
    doy += (double)dateTime.minute / 24.0 / 60.0;
    doy += (double)dateTime.second / 24.0 / 60.0 / 60.0;

    return doy;
}

////////////////////////////////////////////////////////////////////////////////

double Ephemeris::daysInYear( unsigned short year )
{
    if ( year % 4 == 0 )
    {
        if ( year % 100 != 0 || year % 400 == 0 )
        {
            return 366.0;
        }
    }

    return 365.0;
}

////////////////////////////////////////////////////////////////////////////////

double Ephemeris::daysSinceJ2000( DateTime dateTime )
{
    double days = 0.0;

    double y = dateTime.year;
    double m = dateTime.month;
    double d = dateTime.day;

    days = 367.0 * y - 7.0 * ( y + ( m + 9.0 ) / 12.0 ) / 4.0 + 275.0 * m / 9.0 + d - 730530.0;

    days += dateTime.hour   / 24.0;
    days += dateTime.minute / 24.0 / 60.0;
    days += dateTime.second / 24.0 / 60.0 / 60.0;

    return days;
}

////////////////////////////////////////////////////////////////////////////////

double Ephemeris::julianDay( DateTime dateTime )
{
    double jd = 0.0;

    // Meeus J.: Astronomical Algorithms, p.61
    double y = dateTime.year;
    double m = dateTime.month;
    double d = dateTime.day;

    if ( m == 1 || m == 2 )
    {
        y = y - 1;
        m = 12 + m;
    }

    double a = (int)( y / 100.0 );
    double b = 2.0 - a + (int)( a / 4.0 );

    jd = (int)( 365.25 * ( y + 4716.0 ) ) + (int)( 30.6001 * ( m + 1.0 ) )
       + d + b - 1524.5;

    jd += dateTime.hour   / 24.0;
    jd += dateTime.minute / 24.0 / 60.0;
    jd += dateTime.second / 24.0 / 60.0 / 60.0;

    return jd;
}

////////////////////////////////////////////////////////////////////////////////

void Ephemeris::computeElevAndAzim( double alpha, double delta,
                                    double &elev, double &azim,
                                    double sinLat, double cosLat,
                                    double lst )
{
    double lha = lst - alpha;
    while ( lha < -M_PI ) lha += 2.0 * M_PI;
    while ( lha >  M_PI ) lha -= 2.0 * M_PI;

    double cosLha = cos( lha );

    double sinDelta = sin( delta );
    double cosDelta = cos( delta );

    double sinElev = sinDelta*sinLat + cosDelta*cosLha*cosLat;

    if ( sinElev >  1.0 ) sinElev =  1.0;
    if ( sinElev < -1.0 ) sinElev = -1.0;

    elev = asin( sinElev );

    double cosElev = cos( elev );

    double cosAzim = ( sinDelta*cosLat - cosLha*cosDelta*sinLat ) / cosElev;
    cosAzim = fabs( cosAzim );

    if ( cosAzim >  1.0 ) cosAzim =  1.0;
    if ( cosAzim < -1.0 ) cosAzim = -1.0;

    if ( lha < 0.0 )
        azim = M_PI - acos( cosAzim );
    else
        azim = M_PI + acos( cosAzim );
}

////////////////////////////////////////////////////////////////////////////////

Ephemeris::Ephemeris() :
    _jd ( 0.0 ),
    _jc ( 0.0 ),

    _sunAlpha ( 0.0 ),
    _sunDelta ( 0.0 ),
    _sunElev ( 0.0 ),
    _sunAzim ( 0.0 ),

    _moonAlpha ( 0.0 ),
    _moonDelta ( 0.0 ),
    _moonElev ( 0.0 ),
    _moonAzim ( 0.0 )
{}

////////////////////////////////////////////////////////////////////////////////

void Ephemeris::update( DateTime dateTime, double lat, double lon )
{
    // Meeus J.: Astronomical Algorithms, p.87
    _jd = julianDay( dateTime );
    _jc = ( _jd - 2451545.0 ) / 36525.0;

    _ut = dateTime.hour
        + dateTime.minute / 60.0f
        + dateTime.second / 3600.0f;

    double T0 = 6.69737455833333
              + 2400.05133690722 * _jc
              + 2.58622222e-5 * _jc*_jc
              - 1.72222222e-9 * _jc*_jc*_jc
              + 1.00273790935 * _ut;
    while ( T0 > 24.0 ) T0 -= 24.0;
    while ( T0 <  0.0 ) T0 += 24.0;

    // Greenwich sidereal time
    _gst = M_PI * T0 / 12.0;

    // local sidereal time angle
    _lst = _gst + lon;

    const double sinLat = sin( lat );
    const double cosLat = cos( lat );

    // obliquity of the ecliptic
    double epsilon = 0.409093 - 0.000227 * _jc;

    double cosEpsilon = cos( epsilon );
    double sinEpsilon = sin( epsilon );

    // mean anomaly
    double M = 6.240041 + 628.302 * _jc;

    while ( M > 2.0*M_PI ) M -= 2.0 * M_PI;
    while ( M <      0.0 ) M += 2.0 * M_PI;

    // Sun ecliptic longitude
    double sunLambda = 4.894968 + 628.331951 * _jc
                     + ( 0.033417 - 0.000084 * _jc ) * sin( M )
                     + 0.000351 * sin( 2.0*M );

    while ( sunLambda > 2.0*M_PI ) sunLambda -= 2.0 * M_PI;
    while ( sunLambda <      0.0 ) sunLambda += 2.0 * M_PI;

    double cosSunLambda = cos( sunLambda );
    double sinSunLambda = sin( sunLambda );

    // Sun right ascension
    _sunAlpha = atan2( (double)(sinSunLambda * cosEpsilon), (double)cosSunLambda );
    while ( _sunAlpha > 2.0*M_PI ) _sunAlpha -= 2.0 * M_PI;
    while ( _sunAlpha <      0.0 ) _sunAlpha += 2.0 * M_PI;

    // Sun declination
    _sunDelta = asin( sinSunLambda * sinEpsilon );

    // Moon
    double l_p = 3.8104 + 8399.7091 * _jc;
    double m   = 6.2300 +  628.3019 * _jc;
    double f   = 1.6280 + 8433.4663 * _jc;
    double m_p = 2.3554 + 8328.6911 * _jc;
    double d   = 5.1985 + 7771.3772 * _jc;

    // Moon ecliptic longitude
    double moonLambda
            = l_p
            + 0.1098 * sin( m_p )
            + 0.0222 * sin( 2.0*d - m_p )
            + 0.0115 * sin( 2.0*d )
            + 0.0037 * sin( 2.0*m_p )
            - 0.0032 * sin( m )
            - 0.0020 * sin( 2.0*f )
            + 0.0010 * sin( 2.0*d - 2*m_p )
            + 0.0010 * sin( 2.0*d - m - m_p )
            + 0.0009 * sin( 2.0*d + m_p )
            + 0.0008 * sin( 2.0*d - m )
            + 0.0007 * sin( m_p - m)
            - 0.0006 * sin( d )
            - 0.0005 * sin( m + m_p );

    double sinMoonLambda = sin( moonLambda );
    double cosMoonLambda = cos( moonLambda );

    // Moon ecliptic latitude
    double moonBeta
            = 0.0895 * sin( f )
            + 0.0049 * sin( m_p + f )
            + 0.0048 * sin( m_p - f )
            + 0.0030 * sin( 2.0*d - f )
            + 0.0010 * sin( 2.0*d + f - m_p )
            + 0.0008 * sin( 2.0*d - f - m_p )
            + 0.0006 * sin( 2.0*d + f );

    double sinMoonBeta = sin( moonBeta );
    double cosMoonBeta = cos( moonBeta );
    double tanMoonBeta = tan( moonBeta );

    // Moon right ascension
    _moonAlpha = atan2( sinMoonLambda*cosEpsilon - tanMoonBeta*sinEpsilon, cosMoonLambda );

    while ( _moonAlpha > 2.0*M_PI ) _moonAlpha -= 2.0 * M_PI;
    while ( _moonAlpha <      0.0 ) _moonAlpha += 2.0 * M_PI;

    // Moon declination
    _moonDelta = asin( sinMoonBeta*cosEpsilon + cosMoonBeta*sinEpsilon*sinMoonLambda );

    // Sun elevation and azimuth
    computeElevAndAzim( _sunAlpha, _sunDelta, _sunElev, _sunAzim,
                        sinLat, cosLat, _lst );

    // Moon elevation and azimuth
    computeElevAndAzim( _moonAlpha, _moonDelta, _moonElev, _moonAzim,
                        sinLat, cosLat, _lst );
}
