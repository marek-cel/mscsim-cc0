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

#include <gui/Keys.h>

#include <qnamespace.h>

////////////////////////////////////////////////////////////////////////////////

hid::Assignment::Key Keys::getKey( int key )
{
    switch ( key )
    {
    case Qt::Key_0:
        return hid::Assignment::Key0;
        break;

    case Qt::Key_1:
        return hid::Assignment::Key1;
        break;

    case Qt::Key_2:
        return hid::Assignment::Key2;
        break;

    case Qt::Key_3:
        return hid::Assignment::Key3;
        break;

    case Qt::Key_4:
        return hid::Assignment::Key4;
        break;

    case Qt::Key_5:
        return hid::Assignment::Key5;
        break;

    case Qt::Key_6:
        return hid::Assignment::Key6;
        break;

    case Qt::Key_7:
        return hid::Assignment::Key7;
        break;

    case Qt::Key_8:
        return hid::Assignment::Key8;
        break;

    case Qt::Key_9:
        return hid::Assignment::Key9;
        break;

    case Qt::Key_A:
        return hid::Assignment::KeyA;
        break;

    case Qt::Key_B:
        return hid::Assignment::KeyB;
        break;

    case Qt::Key_C:
        return hid::Assignment::KeyC;
        break;

    case Qt::Key_D:
        return hid::Assignment::KeyD;
        break;

    case Qt::Key_E:
        return hid::Assignment::KeyE;
        break;

    case Qt::Key_F:
        return hid::Assignment::KeyF;
        break;

    case Qt::Key_G:
        return hid::Assignment::KeyG;
        break;

    case Qt::Key_H:
        return hid::Assignment::KeyH;
        break;

    case Qt::Key_I:
        return hid::Assignment::KeyI;
        break;

    case Qt::Key_J:
        return hid::Assignment::KeyJ;
        break;

    case Qt::Key_K:
        return hid::Assignment::KeyK;
        break;

    case Qt::Key_L:
        return hid::Assignment::KeyL;
        break;

    case Qt::Key_M:
        return hid::Assignment::KeyM;
        break;

    case Qt::Key_N:
        return hid::Assignment::KeyN;
        break;

    case Qt::Key_O:
        return hid::Assignment::KeyO;
        break;

    case Qt::Key_P:
        return hid::Assignment::KeyP;
        break;

    case Qt::Key_Q:
        return hid::Assignment::KeyQ;
        break;

    case Qt::Key_R:
        return hid::Assignment::KeyR;
        break;

    case Qt::Key_S:
        return hid::Assignment::KeyS;
        break;

    case Qt::Key_T:
        return hid::Assignment::KeyT;
        break;

    case Qt::Key_U:
        return hid::Assignment::KeyU;
        break;

    case Qt::Key_V:
        return hid::Assignment::KeyV;
        break;

    case Qt::Key_W:
        return hid::Assignment::KeyW;
        break;

    case Qt::Key_X:
        return hid::Assignment::KeyX;
        break;

    case Qt::Key_Y:
        return hid::Assignment::KeyY;
        break;

    case Qt::Key_Z:
        return hid::Assignment::KeyZ;
        break;

    case Qt::Key_QuoteLeft:
        return hid::Assignment::KeyBackquote;
        break;

    case Qt::Key_Minus:
        return hid::Assignment::KeyMinus;
        break;

    case Qt::Key_Equal:
        return hid::Assignment::KeyEquals;
        break;

    case Qt::Key_BraceLeft:
        return hid::Assignment::KeyLeftBracket;
        break;

    case Qt::Key_BraceRight:
        return hid::Assignment::KeyRightBracket;
        break;

    case Qt::Key_Semicolon:
        return hid::Assignment::KeySemicolon;
        break;

    case Qt::Key_Apostrophe:
        return hid::Assignment::KeyQuote;
        break;

    case Qt::Key_Comma:
        return hid::Assignment::KeyComma;
        break;

    case Qt::Key_Period:
        return hid::Assignment::KeyPeriod;
        break;

    case Qt::Key_Slash:
        return hid::Assignment::KeySlash;
        break;

    case Qt::Key_Space:
        return hid::Assignment::KeySpace;
        break;

    case Qt::Key_Left:
        return hid::Assignment::KeyLeft;
        break;

    case Qt::Key_Right:
        return hid::Assignment::KeyRight;
        break;

    case Qt::Key_Up:
        return hid::Assignment::KeyUp;
        break;

    case Qt::Key_Down:
        return hid::Assignment::KeyDown;
        break;

    case Qt::Key_Insert:
        return hid::Assignment::KeyInsert;
        break;

    case Qt::Key_Delete:
        return hid::Assignment::KeyDelete;
        break;

    case Qt::Key_Home:
        return hid::Assignment::KeyHome;
        break;

    case Qt::Key_End:
        return hid::Assignment::KeyEnd;
        break;

    case Qt::Key_PageUp:
        return hid::Assignment::KeyPageUp;
        break;

    case Qt::Key_PageDown:
        return hid::Assignment::KeyPageDown;
        break;

    case Qt::Key_F1:
        return hid::Assignment::KeyF1;
        break;

    case Qt::Key_F2:
        return hid::Assignment::KeyF2;
        break;

    case Qt::Key_F3:
        return hid::Assignment::KeyF3;
        break;

    case Qt::Key_F4:
        return hid::Assignment::KeyF4;
        break;

    case Qt::Key_F5:
        return hid::Assignment::KeyF5;
        break;

    case Qt::Key_F6:
        return hid::Assignment::KeyF6;
        break;

    case Qt::Key_F7:
        return hid::Assignment::KeyF7;
        break;

    case Qt::Key_F8:
        return hid::Assignment::KeyF8;
        break;

    case Qt::Key_F9:
        return hid::Assignment::KeyF9;
        break;

    case Qt::Key_F10:
        return hid::Assignment::KeyF10;
        break;

    case Qt::Key_F11:
        return hid::Assignment::KeyF11;
        break;

    case Qt::Key_F12:
        return hid::Assignment::KeyF12;
        break;
    }

    return (hid::Assignment::Key)(-1);
}
