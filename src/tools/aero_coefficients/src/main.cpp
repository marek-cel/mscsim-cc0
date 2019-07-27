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
#ifndef MAIN_CPP
#   define MAIN_CPP
#endif

////////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "defs.h"
#include "global.h"
#include "write.h"

////////////////////////////////////////////////////////////////////////////////

using namespace std;

////////////////////////////////////////////////////////////////////////////////

void printArgs();
void printHelp();

void readArgs( char *argv[] );

////////////////////////////////////////////////////////////////////////////////

int main( int argc, char *argv[] )
{
    cout << APP_NAME << ", ver. " << APP_VER << endl;

    if ( argc == 21 )
    {
        readArgs( argv );
        printArgs();

        al_s = deg2rad( al_s );
        al_1 = deg2rad( al_1 );
        al_2 = deg2rad( al_2 );

        ad_1 = deg2rad( ad_1 );
        ad_2 = deg2rad( ad_2 );
        ad_3 = deg2rad( ad_3 );
        ad_4 = deg2rad( ad_4 );

        lift = new CoefLift( cl_s, cl_1, cl_2,
                             al_s, al_1, al_2 );

        drag = new CoefDrag( cd_0, cd_1, cd_2, cd_3, cd_4, cd_5,
                             ad_1, ad_2, ad_3, ad_4 );

        write();
    }
    else
    {
        if ( argc != 1 )
        {
            cerr << "Error! Wrong number of arguments!" << endl;
        }

        printHelp();
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////

void printArgs()
{
    cout << "   Drag Inp : " << dragInp << endl;
    cout << "   Drag Out : " << dragOut << endl;
    cout << "   Lift Inp : " << liftInp << endl;
    cout << "   Lift Out : " << liftOut << endl;
    cout << endl;
    cout << " al_s, cl_s : " << al_s << " , " << cl_s << endl;
    cout << " al_1, cl_1 : " << al_1 << " , " << cl_1 << endl;
    cout << " al_2, cl_2 : " << al_2 << " , " << cl_2 << endl;
    cout << endl;
    cout << "       cd_0 : " << cd_0 << endl;
    cout << " ad_1, cd_1 : " << ad_1 << " , " << cd_1 << endl;
    cout << " ad_2, cd_2 : " << ad_2 << " , " << cd_2 << endl;
    cout << " ad_3, cd_3 : " << ad_3 << " , " << cd_3 << endl;
    cout << " ad_4, cd_4 : " << ad_4 << " , " << cd_4 << endl;
    cout << "       cd_5 : " << cd_5 << endl;
    cout << endl;
}

////////////////////////////////////////////////////////////////////////////////

void printHelp()
{
    cout << "See:" << endl;
    cout << "  https://ntrs.nasa.gov/archive/nasa/casi.ntrs.nasa.gov/19910009728.pdf" << endl;
    cout << "  Takahashi M.: A Flight-Dynamic Helicopter Mathematical Model with a Single" << endl;
    cout << "  Flap-Lag-Torsion Main Rotor, NASA, TM-102267" << endl;
    cout << "Usage:" << endl;
    cout << "$aero_coefficients" << endl;
    cout << "  DRAG_COEF_AOA_INPUT_FILE DRAG_COEF_OUTPUT_FILE" << endl;
    cout << "  LIFT_COEF_AOA_INPUT_FILE LIFT_COEF_OUTPUT_FILE" << endl;
    cout << "  AL_S, CL_S, AL_1, CL_1, AL_2, CL_2" << endl;
    cout << "  CD_0, AD_1, CD_1, AD_2, CD_2, AD_3, CD_3, AD_4, CD_4, CD_5" << endl;
}

////////////////////////////////////////////////////////////////////////////////

void readArgs( char *argv[] )
{
    dragInp = argv[ 1 ];
    dragOut = argv[ 2 ];
    liftInp = argv[ 3 ];
    liftOut = argv[ 4 ];

    sscanf( argv[  5 ], "%lf", &al_s );
    sscanf( argv[  6 ], "%lf", &cl_s );

    sscanf( argv[  7 ], "%lf", &al_1 );
    sscanf( argv[  8 ], "%lf", &cl_1 );

    sscanf( argv[  9 ], "%lf", &al_2 );
    sscanf( argv[ 10 ], "%lf", &cl_2 );

    sscanf( argv[ 11 ], "%lf", &cd_0 );

    sscanf( argv[ 12 ], "%lf", &ad_1 );
    sscanf( argv[ 13 ], "%lf", &cd_1 );

    sscanf( argv[ 14 ], "%lf", &ad_2 );
    sscanf( argv[ 15 ], "%lf", &cd_2 );

    sscanf( argv[ 16 ], "%lf", &ad_3 );
    sscanf( argv[ 17 ], "%lf", &cd_3 );

    sscanf( argv[ 18 ], "%lf", &ad_4 );
    sscanf( argv[ 19 ], "%lf", &cd_4 );

    sscanf( argv[ 20 ], "%lf", &cd_5 );
}
