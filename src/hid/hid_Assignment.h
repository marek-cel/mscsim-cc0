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
#ifndef HID_ASSIGNMENT_H
#define HID_ASSIGNMENT_H

////////////////////////////////////////////////////////////////////////////////

#define HID_MAX_ACTIONS 54
#define HID_MAX_KEYS    57

////////////////////////////////////////////////////////////////////////////////

namespace hid
{

/** */
struct Assignment
{
    /** */
    enum Action
    {
        Trigger             = 0,    ///< 0:  Trigger
        AP_Disc             = 1,    ///< 1:  Autopilot Disconnect
        CWS                 = 2,    ///< 2:  Control Wheel Steering
        RollAxis            = 3,    ///< 3:  Roll (Axis)
        RollBankLeft        = 4,    ///< 4:  Roll: Bank Left
        RollBankRight       = 5,    ///< 5:  Roll: Bank Right
        PitchAxis           = 6,    ///< 6:  Pitch (Axis)
        PitchNoseUp         = 7,    ///< 7:  Pitch: Nose Up
        PitchNoseDown       = 8,    ///< 8:  Pitch: Nose Down
        YawAxis             = 9,    ///< 9:  Yaw (Axis)
        YawTurnLeft         = 10,   ///< 10: Yaw: Turn Left
        YawTurnRight        = 11,   ///< 11: Yaw: Turn Right
        TrimRollAxis        = 12,   ///< 12: Trim Roll (Axis)
        TrimRollBankLeft    = 13,   ///< 13: Trim Roll: Bank Left
        TrimRollBankRight   = 14,   ///< 14: Trim Roll: Bank Right
        TrimPitchAxis       = 15,   ///< 15: Trim Pitch (Axis)
        TrimPitchNoseUp     = 16,   ///< 16: Trim Pitch: Nose Up
        TrimPitchNoseDown   = 17,   ///< 17: Trim Pitch: Nose Down
        TrimYawAxis         = 18,   ///< 18: Trim Yaw (Axis)
        TrimYawTurnLeft     = 19,   ///< 19: Trim Yaw: Turn Left
        TrimYawTurnRight    = 20,   ///< 20: Trim Yaw: Turn Right
        TrimReset           = 21,   ///< 21: Trim Reset
        BrakeLeftAxis       = 22,   ///< 22: Wheel Brake Left (Axis)
        BrakeLeftApply      = 23,   ///< 23: Wheel Brake Left: Apply
        BrakeRightAxis      = 24,   ///< 24: Wheel Brake Right (Axis)
        BrakeRightApply     = 25,   ///< 25: Wheel Brake Right: Apply
        ParkingBrakeToggle  = 26,   ///< 26: Parking Brake: Toggle
        LandingGearToggle   = 27,   ///< 27: Landing Gear: Toggle
        FlapsExtend         = 28,   ///< 28: Flaps: Extend
        FlapsRetract        = 29,   ///< 29: Flaps: Retract
        AirbrakeExtend      = 30,   ///< 30: Airbrake: Extend
        AirbrakeRetract     = 31,   ///< 31: Airbrake: Retract
        SpoilersToggle      = 32,   ///< 32: Spoilers: Toggle
        CollectiveAxis      = 33,   ///< 33: Collective (Axis)
        CollectiveIncrease  = 34,   ///< 34: Collective: Increase
        CollectiveDecreade  = 35,   ///< 35: Collective: Decrease
        ThrottleAxis1       = 36,   ///< 36: Throttle 1 (Axis)
        ThrottleAxis2       = 37,   ///< 37; Throttle 2 (Axis)
        ThrottleAxis3       = 38,   ///< 38: Throttle 3 (Axis)
        ThrottleAxis4       = 39,   ///< 39: Throttle 4 (Axis)
        ThrottleIncrease    = 40,   ///< 40: Throttle: Increase
        ThrottleDecrease    = 41,   ///< 41: Throttle: Decrease
        MixtureAxis1        = 42,   ///< 42: Mixture 1 (Axis)
        MixtureAxis2        = 43,   ///< 43: Mixture 2 (Axis)
        MixtureAxis3        = 44,   ///< 44: Mixture 3 (Axis)
        MixtureAxis4        = 45,   ///< 45: Mixture 4 (Axis)
        MixtureRich         = 46,   ///< 46: Mixture: Rich
        MixtureLean         = 47,   ///< 47: Mixture: Lean
        PropellerAxis1      = 48,   ///< 48: Propeller 1 (Axis)
        PropellerAxis2      = 49,   ///< 49: Propeller 2 (Axis)
        PropellerAxis3      = 50,   ///< 50: Propeller 3 (Axis)
        PropellerAxis4      = 51,   ///< 51: Propeller 4 (Axis)
        PropellerIncrease   = 52,   ///< 52: Propeller: Increase
        PropellerDecrease   = 53    ///< 53: Propeller: Decrease
    };

#   if ( HID_MAX_ACTIONS != 54 )
#       error 'HID_MAX_ACTIONS' has been changed! Check code above this line!
#   endif

    /** */
    enum DeviceType
    {
        None     = 0,               ///< 0: none
        Keyboard = 1,               ///< 1: keyboard
        Joystick = 2                ///< 2: joystick
    };

    /** */
    enum Key
    {
        Key0 = 0,                   ///< 0:  "0"
        Key1,                       ///< 1:  "1"
        Key2,                       ///< 2:  "2"
        Key3,                       ///< 3:  "3"
        Key4,                       ///< 4:  "4"
        Key5,                       ///< 5:  "5"
        Key6,                       ///< 6:  "6"
        Key7,                       ///< 7:  "7"
        Key8,                       ///< 8:  "8"
        Key9,                       ///< 9:  "9"

        KeyA,                       ///< 10: "a"
        KeyB,                       ///< 11: "b"
        KeyC,                       ///< 12: "c"
        KeyD,                       ///< 13: "d"
        KeyE,                       ///< 14: "e"
        KeyF,                       ///< 15: "f"
        KeyG,                       ///< 16: "g"
        KeyH,                       ///< 17: "h"
        KeyI,                       ///< 18: "i"
        KeyJ,                       ///< 19: "j"
        KeyK,                       ///< 20: "k"
        KeyL,                       ///< 21: "l"
        KeyM,                       ///< 22: "m"
        KeyN,                       ///< 23: "n"
        KeyO,                       ///< 24: "o"
        KeyP,                       ///< 25: "p"
        KeyQ,                       ///< 26: "q"
        KeyR,                       ///< 27: "r"
        KeyS,                       ///< 28: "s"
        KeyT,                       ///< 29: "t"
        KeyU,                       ///< 30: "u"
        KeyV,                       ///< 31: "v"
        KeyW,                       ///< 32: "w"
        KeyX,                       ///< 33: "x"
        KeyY,                       ///< 34: "y"
        KeyZ,                       ///< 35: "z"

        KeyBackquote,               ///< 36: "`"
        KeyMinus,                   ///< 37: "-"
        KeyEquals,                  ///< 38: "="
        KeyLeftBracket,             ///< 39: "["
        KeyRightBracket,            ///< 40: "]"
        KeySemicolon,               ///< 41: ";"
        KeyQuote,                   ///< 42: "'"
        KeyComma,                   ///< 43: ","
        KeyPeriod,                  ///< 44: "."
        KeySlash,                   ///< 45: "/"

        KeySpace,                   ///< 46: space

        KeyLeft,                    ///< 47: left
        KeyRight,                   ///< 48: right
        KeyUp,                      ///< 49: up
        KeyDown,                    ///< 50: down

        KeyInsert,                  ///< 51: insert
        KeyDelete,                  ///< 52: delete
        KeyHome,                    ///< 53: home
        KeyEnd,                     ///< 54: end
        KeyPageUp,                  ///< 55: page up
        KeyPageDown                 ///< 56: page down
    };

#       if ( HID_MAX_KEYS != 57 )
#           error 'HID_MAX_KEYS' has been changed! Check code following this line!
#       endif

    /** */
    enum POVs
    {
        Centered = 0x00,            ///<
        North    = 0x01,            ///<
        East     = 0x02,            ///<
        South    = 0x04,            ///<
        West     = 0x08,            ///<

        NorthEast = North | East,   ///<
        SouthEast = South | East,   ///<
        SouthWest = South | West,   ///<
        NorthWest = North | West    ///<
    };

    /** */
    struct KeyboardData
    {
        short keyId;                ///< key ID
    };

    /** */
    struct JoystickData
    {
        short joystickId;           ///< joystick ID
        short axisId;               ///< axis ID
        bool  inverted;             ///< is inverted
        short buttonId;             ///< button ID
        short povId;                ///< POV ID
        POVs  direction;            ///< POV direction
    };

    /** */
    union DeviceData
    {
        KeyboardData keyboard;      ///< keyboard data
        JoystickData joystick;      ///< joystick data
    };

    DeviceType type;                ///< input device type
    DeviceData data;                ///< input device data
};

} // end of hid namepsace

////////////////////////////////////////////////////////////////////////////////

#endif // HID_ASSIGNMENT_H
