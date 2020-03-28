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

#include <gui/KeyHandler.h>

#include <gui/WidgetOTW.h>

#include <hid/hid_Manager.h>

////////////////////////////////////////////////////////////////////////////////

KeyHandler::KeyHandler( WidgetOTW *widgetOTW ) :
    _widgetOTW ( widgetOTW )
{
    for ( int i = 0; i < HID_MAX_KEYS; i++ ) _keysState[ i ] = false;
}

////////////////////////////////////////////////////////////////////////////////

bool KeyHandler::handle( const osgGA::GUIEventAdapter &ea, osgGA::GUIActionAdapter & )
{
#   ifndef SIM_NOKEYINPUT
    switch( ea.getEventType() )
    {
    case osgGA::GUIEventAdapter::KEYDOWN:
        return handleKeyDn( ea );
        break;

    case osgGA::GUIEventAdapter::KEYUP:
        return handleKeyUp( ea );
        break;

    default:
        return false;
    }
#   endif

    return false;
}

////////////////////////////////////////////////////////////////////////////////

void KeyHandler::update()
{
    hid::Manager::instance()->setKeysState( _keysState );
}

////////////////////////////////////////////////////////////////////////////////

void KeyHandler::keyDn( hid::Assignment::Key key )
{
    _keysState[ key ] = true;
}

////////////////////////////////////////////////////////////////////////////////

void KeyHandler::keyUp( hid::Assignment::Key key )
{
    _keysState[ key ] = false;
}

////////////////////////////////////////////////////////////////////////////////

bool KeyHandler::handleKeyDn( const osgGA::GUIEventAdapter &ea )
{
    switch ( ea.getKey() )
    {
    case osgGA::GUIEventAdapter::KEY_0:
    case osgGA::GUIEventAdapter::KEY_KP_0:
        _keysState[ hid::Assignment::Key0 ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_1:
    case osgGA::GUIEventAdapter::KEY_KP_1:
        _keysState[ hid::Assignment::Key1 ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_2:
    case osgGA::GUIEventAdapter::KEY_KP_2:
        _keysState[ hid::Assignment::Key2 ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_3:
    case osgGA::GUIEventAdapter::KEY_KP_3:
        _keysState[ hid::Assignment::Key3 ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_4:
    case osgGA::GUIEventAdapter::KEY_KP_4:
        _keysState[ hid::Assignment::Key4 ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_5:
    case osgGA::GUIEventAdapter::KEY_KP_5:
        _keysState[ hid::Assignment::Key5 ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_6:
    case osgGA::GUIEventAdapter::KEY_KP_6:
        _keysState[ hid::Assignment::Key6 ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_7:
    case osgGA::GUIEventAdapter::KEY_KP_7:
        _keysState[ hid::Assignment::Key7 ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_8:
    case osgGA::GUIEventAdapter::KEY_KP_8:
        _keysState[ hid::Assignment::Key8 ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_9:
    case osgGA::GUIEventAdapter::KEY_KP_9:
        _keysState[ hid::Assignment::Key9 ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_A:
    case 'A':
        _keysState[ hid::Assignment::KeyA ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_B:
    case 'B':
        _keysState[ hid::Assignment::KeyB ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_C:
    case 'C':
        _keysState[ hid::Assignment::KeyC ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_D:
    case 'D':
        _keysState[ hid::Assignment::KeyD ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_E:
    case 'E':
        _keysState[ hid::Assignment::KeyE ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_F:
    case 'F':
        _keysState[ hid::Assignment::KeyF ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_G:
    case 'G':
        _keysState[ hid::Assignment::KeyG ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_H:
    case 'H':
        _keysState[ hid::Assignment::KeyH ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_I:
    case 'I':
        _keysState[ hid::Assignment::KeyI ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_J:
    case 'J':
        _keysState[ hid::Assignment::KeyJ ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_K:
    case 'K':
        _keysState[ hid::Assignment::KeyK ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_L:
    case 'L':
        _keysState[ hid::Assignment::KeyL ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_M:
    case 'M':
        _keysState[ hid::Assignment::KeyM ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_N:
    case 'N':
        _keysState[ hid::Assignment::KeyN ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_O:
    case 'O':
        _keysState[ hid::Assignment::KeyO ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_P:
    case 'P':
        _keysState[ hid::Assignment::KeyP ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Q:
    case 'Q':
        _keysState[ hid::Assignment::KeyQ ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_R:
    case 'R':
        _keysState[ hid::Assignment::KeyR ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_S:
    case 'S':
        _keysState[ hid::Assignment::KeyS ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_T:
    case 'T':
        _keysState[ hid::Assignment::KeyT ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_U:
    case 'U':
        _keysState[ hid::Assignment::KeyU ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_V:
    case 'V':
        _keysState[ hid::Assignment::KeyV ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_W:
    case 'W':
        _keysState[ hid::Assignment::KeyW ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_X:
    case 'X':
        _keysState[ hid::Assignment::KeyX ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Y:
    case 'Y':
        _keysState[ hid::Assignment::KeyY ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Z:
    case 'Z':
        _keysState[ hid::Assignment::KeyZ ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Backquote:
        _keysState[ hid::Assignment::KeyBackquote ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Minus:
        _keysState[ hid::Assignment::KeyMinus ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Equals:
        _keysState[ hid::Assignment::KeyEquals ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Leftbracket:
        _keysState[ hid::Assignment::KeyLeftBracket ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Rightbracket:
        _keysState[ hid::Assignment::KeyRightBracket ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Semicolon:
        _keysState[ hid::Assignment::KeySemicolon ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Quote:
        _keysState[ hid::Assignment::KeyQuote ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Comma:
        _keysState[ hid::Assignment::KeyComma ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Period:
        _keysState[ hid::Assignment::KeyPeriod ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Slash:
        _keysState[ hid::Assignment::KeySlash ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Space:
        _keysState[ hid::Assignment::KeySpace ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Left:
    case osgGA::GUIEventAdapter::KEY_KP_Left:
        _keysState[ hid::Assignment::KeyLeft ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Right:
    case osgGA::GUIEventAdapter::KEY_KP_Right:
        _keysState[ hid::Assignment::KeyRight ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Up:
    case osgGA::GUIEventAdapter::KEY_KP_Up:
        _keysState[ hid::Assignment::KeyUp ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Down:
    case osgGA::GUIEventAdapter::KEY_KP_Down:
        _keysState[ hid::Assignment::KeyDown ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Insert:
    case osgGA::GUIEventAdapter::KEY_KP_Insert:
        _keysState[ hid::Assignment::KeyInsert ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Delete:
    case osgGA::GUIEventAdapter::KEY_KP_Delete:
        _keysState[ hid::Assignment::KeyDelete ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Home:
    case osgGA::GUIEventAdapter::KEY_KP_Home:
        _keysState[ hid::Assignment::KeyHome ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_End:
    case osgGA::GUIEventAdapter::KEY_KP_End:
        _keysState[ hid::Assignment::KeyEnd ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Page_Up:
    case osgGA::GUIEventAdapter::KEY_KP_Page_Up:
        _keysState[ hid::Assignment::KeyPageUp ] = true;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Page_Down:
    case osgGA::GUIEventAdapter::KEY_KP_Page_Down:
        _keysState[ hid::Assignment::KeyPageDown ] = true;
        return true;
        break;
    }

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool KeyHandler::handleKeyUp( const osgGA::GUIEventAdapter &ea )
{
    switch ( ea.getKey() )
    {
    case osgGA::GUIEventAdapter::KEY_0:
    case osgGA::GUIEventAdapter::KEY_KP_0:
        _keysState[ hid::Assignment::Key0 ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_1:
    case osgGA::GUIEventAdapter::KEY_KP_1:
        _keysState[ hid::Assignment::Key1 ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_2:
    case osgGA::GUIEventAdapter::KEY_KP_2:
        _keysState[ hid::Assignment::Key2 ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_3:
    case osgGA::GUIEventAdapter::KEY_KP_3:
        _keysState[ hid::Assignment::Key3 ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_4:
    case osgGA::GUIEventAdapter::KEY_KP_4:
        _keysState[ hid::Assignment::Key4 ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_5:
    case osgGA::GUIEventAdapter::KEY_KP_5:
        _keysState[ hid::Assignment::Key5 ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_6:
    case osgGA::GUIEventAdapter::KEY_KP_6:
        _keysState[ hid::Assignment::Key6 ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_7:
    case osgGA::GUIEventAdapter::KEY_KP_7:
        _keysState[ hid::Assignment::Key7 ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_8:
    case osgGA::GUIEventAdapter::KEY_KP_8:
        _keysState[ hid::Assignment::Key8 ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_9:
    case osgGA::GUIEventAdapter::KEY_KP_9:
        _keysState[ hid::Assignment::Key9 ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_A:
    case 'A':
        _keysState[ hid::Assignment::KeyA ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_B:
    case 'B':
        _keysState[ hid::Assignment::KeyB ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_C:
    case 'C':
        _keysState[ hid::Assignment::KeyC ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_D:
    case 'D':
        _keysState[ hid::Assignment::KeyD ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_E:
    case 'E':
        _keysState[ hid::Assignment::KeyE ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_F:
    case 'F':
        _keysState[ hid::Assignment::KeyF ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_G:
    case 'G':
        _keysState[ hid::Assignment::KeyG ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_H:
    case 'H':
        _keysState[ hid::Assignment::KeyH ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_I:
    case 'I':
        _keysState[ hid::Assignment::KeyI ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_J:
    case 'J':
        _keysState[ hid::Assignment::KeyJ ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_K:
    case 'K':
        _keysState[ hid::Assignment::KeyK ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_L:
    case 'L':
        _keysState[ hid::Assignment::KeyL ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_M:
    case 'M':
        _keysState[ hid::Assignment::KeyM ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_N:
    case 'N':
        _keysState[ hid::Assignment::KeyN ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_O:
    case 'O':
        _keysState[ hid::Assignment::KeyO ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_P:
    case 'P':
        _keysState[ hid::Assignment::KeyP ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Q:
    case 'Q':
        _keysState[ hid::Assignment::KeyQ ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_R:
    case 'R':
        _keysState[ hid::Assignment::KeyR ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_S:
    case 'S':
        _keysState[ hid::Assignment::KeyS ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_T:
    case 'T':
        _keysState[ hid::Assignment::KeyT ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_U:
    case 'U':
        _keysState[ hid::Assignment::KeyU ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_V:
    case 'V':
        _keysState[ hid::Assignment::KeyV ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_W:
    case 'W':
        _keysState[ hid::Assignment::KeyW ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_X:
    case 'X':
        _keysState[ hid::Assignment::KeyX ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Y:
    case 'Y':
        _keysState[ hid::Assignment::KeyY ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Z:
    case 'Z':
        _keysState[ hid::Assignment::KeyZ ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Backquote:
        _keysState[ hid::Assignment::KeyBackquote ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Minus:
        _keysState[ hid::Assignment::KeyMinus ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Equals:
        _keysState[ hid::Assignment::KeyEquals ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Leftbracket:
        _keysState[ hid::Assignment::KeyLeftBracket ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Rightbracket:
        _keysState[ hid::Assignment::KeyRightBracket ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Semicolon:
        _keysState[ hid::Assignment::KeySemicolon ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Quote:
        _keysState[ hid::Assignment::KeyQuote ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Comma:
        _keysState[ hid::Assignment::KeyComma ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Period:
        _keysState[ hid::Assignment::KeyPeriod ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Slash:
        _keysState[ hid::Assignment::KeySlash ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Space:
        _keysState[ hid::Assignment::KeySpace ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Left:
    case osgGA::GUIEventAdapter::KEY_KP_Left:
        _keysState[ hid::Assignment::KeyLeft ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Right:
    case osgGA::GUIEventAdapter::KEY_KP_Right:
        _keysState[ hid::Assignment::KeyRight ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Up:
    case osgGA::GUIEventAdapter::KEY_KP_Up:
        _keysState[ hid::Assignment::KeyUp ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Down:
    case osgGA::GUIEventAdapter::KEY_KP_Down:
        _keysState[ hid::Assignment::KeyDown ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Insert:
    case osgGA::GUIEventAdapter::KEY_KP_Insert:
        _keysState[ hid::Assignment::KeyInsert ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Delete:
    case osgGA::GUIEventAdapter::KEY_KP_Delete:
        _keysState[ hid::Assignment::KeyDelete ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Home:
    case osgGA::GUIEventAdapter::KEY_KP_Home:
        _keysState[ hid::Assignment::KeyHome ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_End:
    case osgGA::GUIEventAdapter::KEY_KP_End:
        _keysState[ hid::Assignment::KeyEnd ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Page_Up:
    case osgGA::GUIEventAdapter::KEY_KP_Page_Up:
        _keysState[ hid::Assignment::KeyPageUp ] = false;
        return true;
        break;

    case osgGA::GUIEventAdapter::KEY_Page_Down:
    case osgGA::GUIEventAdapter::KEY_KP_Page_Down:
        _keysState[ hid::Assignment::KeyPageDown ] = false;
        return true;
        break;
    }

    return false;
}
