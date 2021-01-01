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

#include <cgi/cgi_Colors.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

const osg::Vec3 Colors::_black = osg::Vec3( 0.00f, 0.00f, 0.00f );
const osg::Vec3 Colors::_white = osg::Vec3( 1.00f, 1.00f, 1.00f );

const osg::Vec3 Colors::_blue    = osg::Vec3( 0.00f, 0.00f, 1.00f );
const osg::Vec3 Colors::_cyan    = osg::Vec3( 0.00f, 1.00f, 1.00f );
const osg::Vec3 Colors::_green   = osg::Vec3( 0.00f, 0.50f, 0.00f );
const osg::Vec3 Colors::_grey    = osg::Vec3( 0.50f, 0.50f, 0.50f );
const osg::Vec3 Colors::_lime    = osg::Vec3( 0.00f, 1.00f, 0.00f );
const osg::Vec3 Colors::_magenta = osg::Vec3( 1.00f, 0.00f, 1.00f );
const osg::Vec3 Colors::_maroon  = osg::Vec3( 0.50f, 0.00f, 0.00f );
const osg::Vec3 Colors::_navy    = osg::Vec3( 0.00f, 0.00f, 0.50f );
const osg::Vec3 Colors::_olive   = osg::Vec3( 0.50f, 0.50f, 0.00f );
const osg::Vec3 Colors::_orange  = osg::Vec3( 1.00f, 0.65f, 0.00f );
const osg::Vec3 Colors::_purple  = osg::Vec3( 0.50f, 0.00f, 0.50f );
const osg::Vec3 Colors::_red     = osg::Vec3( 1.00f, 0.00f, 0.00f );
const osg::Vec3 Colors::_teal    = osg::Vec3( 0.00f, 0.50f, 0.50f );
const osg::Vec3 Colors::_yellow  = osg::Vec3( 1.00f, 1.00f, 0.00f );

const osg::Vec3 Colors::_amber = osg::Vec3( 1.00f, 0.75f, 0.00f );

const osg::Vec3 Colors::_hud = osg::Vec3( 0.05f, 0.7f, 0.05f );

const osg::Vec3 Colors::_sky[] = {
    osg::Vec3(   5.0f/255.0f,   5.0f/255.0f,   8.0f/255.0f ), //  0) 05:20 (-10 deg)
    osg::Vec3(  45.0f/255.0f,  45.0f/255.0f,  47.0f/255.0f ), //  1) 05:30 ( -7 deg)
    osg::Vec3(  85.0f/255.0f,  86.0f/255.0f,  87.0f/255.0f ), //  2) 05:40 ( -5 deg)
    osg::Vec3( 126.0f/255.0f, 126.0f/255.0f, 126.0f/255.0f ), //  3) 05:50 ( -2 deg)
    osg::Vec3( 168.0f/255.0f, 168.0f/255.0f, 166.0f/255.0f ), //  4) 06:00 (  0 deg)
    osg::Vec3( 169.0f/255.0f, 175.0f/255.0f, 183.0f/255.0f ), //  5) 06:10 (  3 deg)
    osg::Vec3( 173.0f/255.0f, 184.0f/255.0f, 201.0f/255.0f ), //  6) 06:20 (  5 deg)
    osg::Vec3( 177.0f/255.0f, 193.0f/255.0f, 219.0f/255.0f ), //  7) 06:30 (  8 deg)
    osg::Vec3( 182.0f/255.0f, 203.0f/255.0f, 238.0f/255.0f )  //  8) 06:40 ( 10 deg)
};

const osg::Vec3 Colors::_fog[] = {
    osg::Vec3(   6.0f/255.0f,   4.0f/255.0f,   6.0f/255.0f ), //  0) 05:20 (-10 deg)
    osg::Vec3(  46.0f/255.0f,  43.0f/255.0f,  45.0f/255.0f ), //  1) 05:30 ( -7 deg)
    osg::Vec3(  86.0f/255.0f,  82.0f/255.0f,  84.0f/255.0f ), //  2) 05:40 ( -5 deg)
    osg::Vec3( 126.0f/255.0f, 121.0f/255.0f, 123.0f/255.0f ), //  3) 05:40 ( -2 deg)
    osg::Vec3( 166.0f/255.0f, 160.0f/255.0f, 162.0f/255.0f ), //  4) 06:00 (  0 deg)
    osg::Vec3( 184.0f/255.0f, 179.0f/255.0f, 181.0f/255.0f ), //  5) 06:10 (  3 deg)
    osg::Vec3( 201.0f/255.0f, 198.0f/255.0f, 200.0f/255.0f ), //  6) 06:20 (  5 deg)
    osg::Vec3( 219.0f/255.0f, 217.0f/255.0f, 219.0f/255.0f ), //  7) 06:30 (  8 deg)
    osg::Vec3( 236.0f/255.0f, 236.0f/255.0f, 238.0f/255.0f )  //  8) 06:40 ( 10 deg)
};

const osg::Vec3 Colors::_sun[] = {
    osg::Vec3( 249.0f/255.0f, 216.0f/255.0f, 163.0f/255.0f ), //  0
    osg::Vec3( 249.0f/255.0f, 218.0f/255.0f, 169.0f/255.0f ), //  1
    osg::Vec3( 250.0f/255.0f, 221.0f/255.0f, 177.0f/255.0f ), //  2
    osg::Vec3( 250.0f/255.0f, 224.0f/255.0f, 184.0f/255.0f ), //  3
    osg::Vec3( 251.0f/255.0f, 226.0f/255.0f, 191.0f/255.0f ), //  4
    osg::Vec3( 251.0f/255.0f, 229.0f/255.0f, 198.0f/255.0f ), //  5
    osg::Vec3( 252.0f/255.0f, 232.0f/255.0f, 205.0f/255.0f ), //  6
    osg::Vec3( 253.0f/255.0f, 234.0f/255.0f, 212.0f/255.0f ), //  7
    osg::Vec3( 253.0f/255.0f, 237.0f/255.0f, 219.0f/255.0f ), //  8
    osg::Vec3( 254.0f/255.0f, 240.0f/255.0f, 227.0f/255.0f ), //  9
    osg::Vec3( 255.0f/255.0f, 253.0f/255.0f, 250.0f/255.0f )  // 10
};

const osg::Vec3 Colors::_moon = osg::Vec3( 0.05f, 0.05f, 0.05f );

