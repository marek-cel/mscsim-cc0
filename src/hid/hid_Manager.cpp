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

#include <hid/hid_Manager.h>

#include <cmath>
#include <cstring>

#include <Common.h>

#include <hid/hid_Joysticks.h>

////////////////////////////////////////////////////////////////////////////////

using namespace hid;

////////////////////////////////////////////////////////////////////////////////

Manager* Manager::_instance = NULLPTR;

////////////////////////////////////////////////////////////////////////////////

const std::string Manager::_actionNames[] = {
    "Trigger",
    "A/P Disc",
    "CWS",
    "Roll (Axis)",
    "Roll: Bank Left",
    "Roll: Bank Right",
    "Pitch (Axis)",
    "Pitch: Nose Up",
    "Pitch: Nose Down",
    "Yaw (Axis)",
    "Yaw: Turn Left",
    "Yaw: Turn Right",
    "Trim Roll (Axis)",
    "Trim Roll: Bank Left",
    "Trim Roll: Bank Right",
    "Trim Pitch (Axis)",
    "Trim Pitch: Nose Up",
    "Trim Pitch: Nose Down",
    "Trim Yaw (Axis)",
    "Trim Yaw: Turn Left",
    "Trim Yaw: Turn Right",
    "Trim Reset",
    "Wheel Brake Left (Axis)",
    "Wheel Brake Left: Apply",
    "Wheel Brake Right (Axis)",
    "Wheel Brake Right: Apply",
    "Parking Brake: Toggle",
    "Landing Gear: Toggle",
    "Flaps: Extend",
    "Flaps: Retract",
    "Airbrake: Extend",
    "Airbrake: Retract",
    "Spoilers: Toggle",
    "Collective (Axis)",
    "Collective: Increase",
    "Collective: Decrease",
    "Throttle 1 (Axis)",
    "Throttle 2 (Axis)",
    "Throttle 3 (Axis)",
    "Throttle 4 (Axis)",
    "Throttle: Increase",
    "Throttle: Decrease",
    "Mixture 1 (Axis)",
    "Mixture 2 (Axis)",
    "Mixture 3 (Axis)",
    "Mixture 4 (Axis)",
    "Mixture: Rich",
    "Mixture: Lean",
    "Propeller 1 (Axis)",
    "Propeller 2 (Axis)",
    "Propeller 3 (Axis)",
    "Propeller 4 (Axis)",
    "Propeller: Increase",
    "Propeller: Decrease"
};

#if ( HID_MAX_ACTIONS != 54 )
#   error 'HID_MAX_ACTIONS' has been changed! Check code above this line!
#endif

const std::string Manager::_keysNames[] = {
    "0", "1", "2", "3", "4", "5", "6", "7", "8", "9",
    "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M",
    "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z",
    "`", "-", "=", "[", "]", ";", "'", ",", ".", "/",
    "Space",
    "Left", "Right", "Up", "Down",
    "Insert", "Delete", "Home", "End", "Page Up", "Page Down",
    "F1", "F2", "F3", "F4", "F5", "F6", "F7", "F8", "F9", "F10", "F11", "F12"
};

#if ( HID_MAX_KEYS != 69 )
#   error 'HID_MAX_KEYS' has been changed! Check code following this line!
#endif

const double Manager::_speedCtrl       = 1.0;
const double Manager::_speedTrim       = 0.1;
const double Manager::_speedBrakes     = 2.0;
const double Manager::_speedGear       = 0.25;
const double Manager::_speedFlaps      = 0.25;
const double Manager::_speedAirbrake   = 0.5;
const double Manager::_speedSpoilers   = 2.0;
const double Manager::_speedCollective = 0.5;
const double Manager::_speedThrottle   = 0.5;
const double Manager::_speedMixture    = 0.25;
const double Manager::_speedPropeller  = 0.25;

////////////////////////////////////////////////////////////////////////////////

Assignment::POVs Manager::getPOV( short pov_deg )
{
    Assignment::POVs result = Assignment::Centered;

    if ( !( pov_deg < 0 ) )
    {
        if ( pov_deg < 90 )
        {
            if ( pov_deg > 0 )
                result = Assignment::NorthEast;
            else
                result = Assignment::North;
        }
        else if ( pov_deg < 180 )
        {
            if ( pov_deg > 90 )
                result = Assignment::SouthEast;
            else
                result = Assignment::East;
        }
        else if ( pov_deg < 270 )
        {
            if ( pov_deg > 180 )
                result = Assignment::SouthWest;
            else
                result = Assignment::South;
        }
        else
        {
            if ( pov_deg > 270 )
                result = Assignment::NorthWest;
            else
                result = Assignment::West;
        }
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////

bool Manager::isAxis( Assignment::Action action )
{
    return ( action == Assignment::RollAxis
          || action == Assignment::PitchAxis
          || action == Assignment::YawAxis
          || action == Assignment::TrimRollAxis
          || action == Assignment::TrimPitchAxis
          || action == Assignment::TrimYawAxis
          || action == Assignment::BrakeLeftAxis
          || action == Assignment::BrakeRightAxis
          || action == Assignment::CollectiveAxis
          || action == Assignment::ThrottleAxis1
          || action == Assignment::ThrottleAxis2
          || action == Assignment::ThrottleAxis3
          || action == Assignment::ThrottleAxis4
          || action == Assignment::MixtureAxis1
          || action == Assignment::MixtureAxis2
          || action == Assignment::MixtureAxis3
          || action == Assignment::MixtureAxis4
          || action == Assignment::PropellerAxis1
          || action == Assignment::PropellerAxis2
          || action == Assignment::PropellerAxis3
          || action == Assignment::PropellerAxis4 );

#   if ( HID_MAX_ACTIONS != 54 )
#       error 'HID_MAX_ACTIONS' has been changed! Check code above this line!
#   endif
}

////////////////////////////////////////////////////////////////////////////////

Manager::Manager()
{
    for ( int i = 0; i < HID_MAX_ACTIONS; i++ )
    {
        _assignments[ i ].type = Assignment::None;

        memset( &(_assignments[ i ].data), 0, sizeof(Assignment::DeviceData) );
    }

    for ( int i = 0; i < HID_MAX_KEYS; i++ ) _keysState[ i ] = false;

    reset();
}

////////////////////////////////////////////////////////////////////////////////

Manager::~Manager() {}

////////////////////////////////////////////////////////////////////////////////

void Manager::init()
{
    Joysticks::instance()->init();
}

////////////////////////////////////////////////////////////////////////////////

void Manager::reset( bool onGround )
{
    _timeStep = 0.0;

    _trigger = false;
    _ap_disc = false;
    _cws = false;

    _ctrlRoll  = 0.0;
    _ctrlPitch = 0.0;
    _ctrlYaw   = 0.0;

    _trimRoll  = 0.0;
    _trimPitch = 0.0;
    _trimYaw   = 0.0;

    _brakeLeft    = 0.0;
    _brakeRight   = 0.0;
    _parkingBrake = 0.0;

    _landingGear = onGround ? 1.0 : 0.0;

    _flaps    = 0.0;
    _airbrake = 0.0;
    _spoilers = 0.0;

    _collective = 0.0;

    _commonThrottle  = onGround ? 0.0 : 1.0;
    _commonMixture   = 1.0;
    _commonPropeller = 1.0;

    for ( int i = 0; i < FDM_MAX_ENGINES; i++ )
    {
        _throttle  [ i ] = onGround ? 0.0 : 1.0;
        _mixture   [ i ] = 1.0;
        _propeller [ i ] = 1.0;
    }

    _prevFlapsExtend        = false;
    _prevFlapsRetract       = false;
    _prevLandingGearToggle  = false;
    _prevParkingBrakeToggle = false;
    _prevSpoilersToggle     = false;

    _stateLandingGear  = onGround;
    _stateParkingBrake = false;
    _stateSpoilers     = false;

    _notch = 0;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::update( double timeStep )
{
    _timeStep = timeStep;

    Joysticks::instance()->update();

    updateAxisActions();
    updateMiscActions();
}

////////////////////////////////////////////////////////////////////////////////

void Manager::setAssingment( Assignment::Action action, const Assignment &assignment )
{
    _assignments[ action ] = assignment;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::setKeysState( bool keysState[] )
{
    for ( unsigned int i = 0; i < HID_MAX_KEYS; i++ )
    {
        _keysState[ i ] = keysState[ i ];
    }
}

////////////////////////////////////////////////////////////////////////////////

void Manager::setNotches( const std::vector< double > &notches )
{
    _notches.clear();
    _notches = notches;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::getAxisValue( const Assignment &assignment, double *value, int absolute )
{
    if ( assignment.type == Assignment::Joystick )
    {
        Joysticks::Data joyData = Joysticks::instance()->getData( assignment.data.joystick.joystickId );

        if ( joyData.active )
        {
            (*value) = joyData.axis[ assignment.data.joystick.axisId ];

            if ( assignment.data.joystick.inverted ) (*value) *= -1.0f;

            if ( absolute ) (*value) = ( (*value) + 1.0f ) / 2.0f;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Manager::getRealValue( Assignment::Action decreaseAction,
                            Assignment::Action increaseAction,
                            double *value,
                            double speed,
                            double min,
                            double max,
                            bool autocenter )
{
    bool tempDecrease = getButtState( _assignments[ decreaseAction ] );
    bool tempIncrease = getButtState( _assignments[ increaseAction ] );

    if ( autocenter && !tempDecrease && !tempIncrease )
    {
        double delta = speed * _timeStep;

        if ( (*value) > 0.0 ) (*value) -= ( (*value) >  delta ) ? delta : 0.0;
        if ( (*value) < 0.0 ) (*value) += ( (*value) < -delta ) ? delta : 0.0;
    }
    else
    {
        if ( tempDecrease && (*value) > min ) (*value) -= speed * _timeStep;
        if ( tempIncrease && (*value) < max ) (*value) += speed * _timeStep;
    }

    if ( (*value) < min ) (*value) = min;
    if ( (*value) > max ) (*value) = max;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::getRealValue( Assignment::Action applyAction,
                            double *value,
                            double speed,
                            double min,
                            double max )
{
    bool tempApply = getButtState( _assignments[ applyAction ] );

    if ( !tempApply && (*value) > min ) (*value) -= speed * _timeStep;
    if (  tempApply && (*value) < max ) (*value) += speed * _timeStep;

    if ( (*value) < min ) (*value) = min;
    if ( (*value) > max ) (*value) = max;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::getRealValue( Assignment::Action toggleAction,
                            bool *togglePrev,
                            bool *state,
                            double *value,
                            double speed,
                            double min,
                            double max )
{
    bool toggle = getButtState( _assignments[ toggleAction ] );

    if ( toggle && !(*togglePrev) )
    {
        (*state) = !(*state);
    }

    (*togglePrev) = toggle;

    if ( !(*state) && (*value) > min ) (*value)  -= speed * _timeStep;
    if (  (*state) && (*value) < max ) (*value)  += speed * _timeStep;

    if      ( (*value) < min ) (*value) = min;
    else if ( (*value) > max ) (*value) = max;
}

////////////////////////////////////////////////////////////////////////////////

bool Manager::getButtState( const Assignment &assignment )
{
    bool state = false;

    if ( assignment.type == Assignment::Joystick )
    {
        Joysticks::Data joyData = Joysticks::instance()->getData( assignment.data.joystick.joystickId );

        if ( joyData.active )
        {
            if ( assignment.data.joystick.buttonId >= 0
              && assignment.data.joystick.buttonId < joyData.buttCount )
            {
                state = joyData.butt[ assignment.data.joystick.buttonId ];
            }
            else if ( assignment.data.joystick.povId >= 0
                   && assignment.data.joystick.povId < joyData.povsCount )
            {
                if ( assignment.data.joystick.direction != Assignment::Centered )
                {
                    state = ( getPOV( joyData.povs[ assignment.data.joystick.povId ] )
                          & assignment.data.joystick.direction ) != 0;
                }
            }
        }
    }
    else if ( assignment.type == Assignment::Keyboard )
    {
        if ( assignment.data.keyboard.keyId != -1 )
        {
            state = _keysState[ assignment.data.keyboard.keyId ];
        }
    }

    return state;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updateAxisActions()
{
    // roll
    if ( _assignments[ Assignment::RollAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::RollBankLeft,
                      Assignment::RollBankRight,
                      &_ctrlRoll, _speedCtrl, -1.0f, 1.0f, true );
    }
    else
    {
        getAxisValue( _assignments[ Assignment::RollAxis ], &_ctrlRoll );
    }

    // pitch
    if ( _assignments[ Assignment::PitchAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::PitchNoseDown,
                      Assignment::PitchNoseUp,
                      &_ctrlPitch, _speedCtrl, -1.0f, 1.0f, true );
    }
    else
    {
        getAxisValue( _assignments[ Assignment::PitchAxis ], &_ctrlPitch );
    }

    // yaw
    if ( _assignments[ Assignment::YawAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::YawTurnLeft,
                      Assignment::YawTurnRight,
                      &_ctrlYaw, _speedCtrl, -1.0f, 1.0f, true );
    }
    else
    {
        getAxisValue( _assignments[ Assignment::YawAxis ], &_ctrlYaw );
    }

    // trim roll
    if ( _assignments[ Assignment::TrimRollAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::TrimRollBankLeft,
                      Assignment::TrimRollBankRight,
                      &_trimRoll, _speedTrim, -1.0f, 1.0f );
    }
    else
    {
        getAxisValue( _assignments[ Assignment::TrimRollAxis ], &_trimRoll );
    }

    // trim pitch
    if ( _assignments[ Assignment::TrimPitchAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::TrimPitchNoseDown,
                      Assignment::TrimPitchNoseUp,
                      &_trimPitch, _speedTrim, -1.0f, 1.0f );
    }
    else
    {
        getAxisValue( _assignments[ Assignment::TrimPitchAxis ], &_trimPitch );
    }

    // trim yaw
    if ( _assignments[ Assignment::TrimYawAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::TrimYawTurnLeft,
                      Assignment::TrimYawTurnRight,
                      &_trimYaw, _speedTrim, -1.0f, 1.0f );
    }
    else
    {
        getAxisValue( _assignments[ Assignment::TrimYawAxis ], &_trimYaw );
    }

    // trim reset
    if ( getButtState( _assignments[ Assignment::TrimReset ] ) )
    {
        _trimRoll  = 0.0f;
        _trimPitch = 0.0f;
        _trimYaw   = 0.0f;
    }

    // brake left
    if ( _assignments[ Assignment::BrakeLeftAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::BrakeLeftApply,
                      &_brakeLeft, _speedBrakes, 0.0f, 1.0f );
    }
    else
    {
        getAxisValue( _assignments[ Assignment::BrakeLeftAxis ], &_brakeLeft, 1 );
    }

    // brake right
    if ( _assignments[ Assignment::BrakeRightAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::BrakeRightApply,
                      &_brakeRight, _speedBrakes, 0.0f, 1.0f );
    }
    else
    {
        getAxisValue( _assignments[ Assignment::BrakeRightAxis ], &_brakeRight, 1 );
    }

    // collective
    if ( _assignments[ Assignment::CollectiveAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::CollectiveDecreade,
                      Assignment::CollectiveIncrease,
                      &_collective, _speedCollective, 0.0f, 1.0f );
    }
    else
    {
        getAxisValue( _assignments[ Assignment::CollectiveAxis ], &_collective, 1 );
    }

#   if ( FDM_MAX_ENGINES != 4 )
#       error 'FDM_MAX_ENGINES' has been changed! Check code following this line!
#   endif

    // throttle
    if ( _assignments[ Assignment::ThrottleAxis1 ].type == Assignment::None
      || _assignments[ Assignment::ThrottleAxis2 ].type == Assignment::None
      || _assignments[ Assignment::ThrottleAxis3 ].type == Assignment::None
      || _assignments[ Assignment::ThrottleAxis4 ].type == Assignment::None )
    {
        getRealValue( Assignment::ThrottleDecrease,
                      Assignment::ThrottleIncrease,
                      &_commonThrottle, _speedThrottle, 0.0, 1.0 );

        _throttle[ 0 ] = _commonThrottle;
        _throttle[ 1 ] = _commonThrottle;
        _throttle[ 2 ] = _commonThrottle;
        _throttle[ 3 ] = _commonThrottle;
    }

    getAxisValue( _assignments[ Assignment::ThrottleAxis1 ], &_throttle[ 0 ], 1 );
    getAxisValue( _assignments[ Assignment::ThrottleAxis2 ], &_throttle[ 1 ], 1 );
    getAxisValue( _assignments[ Assignment::ThrottleAxis3 ], &_throttle[ 2 ], 1 );
    getAxisValue( _assignments[ Assignment::ThrottleAxis4 ], &_throttle[ 3 ], 1 );

    // mixture
    if ( _assignments[ Assignment::MixtureAxis1 ].type == Assignment::None
      || _assignments[ Assignment::MixtureAxis2 ].type == Assignment::None
      || _assignments[ Assignment::MixtureAxis3 ].type == Assignment::None
      || _assignments[ Assignment::MixtureAxis4 ].type == Assignment::None )
    {
        getRealValue( Assignment::MixtureLean,
                      Assignment::MixtureRich,
                      &_commonMixture, _speedMixture, 0.0f, 1.0f );

        _mixture[ 0 ] = _commonMixture;
        _mixture[ 1 ] = _commonMixture;
        _mixture[ 2 ] = _commonMixture;
        _mixture[ 3 ] = _commonMixture;
    }

    getAxisValue( _assignments[ Assignment::MixtureAxis1 ], &_mixture[ 0 ], 1 );
    getAxisValue( _assignments[ Assignment::MixtureAxis2 ], &_mixture[ 1 ], 1 );
    getAxisValue( _assignments[ Assignment::MixtureAxis3 ], &_mixture[ 2 ], 1 );
    getAxisValue( _assignments[ Assignment::MixtureAxis4 ], &_mixture[ 3 ], 1 );

    // propeller
    if ( _assignments[ Assignment::PropellerAxis1 ].type == Assignment::None
      || _assignments[ Assignment::PropellerAxis1 ].type == Assignment::None
      || _assignments[ Assignment::PropellerAxis1 ].type == Assignment::None
      || _assignments[ Assignment::PropellerAxis1 ].type == Assignment::None )
    {
        getRealValue( Assignment::PropellerCoarse,
                      Assignment::PropellerFine,
                      &_commonPropeller, _speedPropeller, 0.0f, 1.0f );

        _propeller[ 0 ] = _commonPropeller;
        _propeller[ 1 ] = _commonPropeller;
        _propeller[ 2 ] = _commonPropeller;
        _propeller[ 3 ] = _commonPropeller;
    }

    getAxisValue( _assignments[ Assignment::PropellerAxis1 ], &_propeller[ 0 ], 1 );
    getAxisValue( _assignments[ Assignment::PropellerAxis2 ], &_propeller[ 1 ], 1 );
    getAxisValue( _assignments[ Assignment::PropellerAxis3 ], &_propeller[ 2 ], 1 );
    getAxisValue( _assignments[ Assignment::PropellerAxis4 ], &_propeller[ 3 ], 1 );
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updateMiscActions()
{
    _trigger = getButtState( _assignments[ Assignment::Trigger ] );
    _ap_disc = getButtState( _assignments[ Assignment::AP_Disc ] );
    _cws     = getButtState( _assignments[ Assignment::CWS ] );

    // parking brake
    getRealValue( Assignment::ParkingBrakeToggle,
                  &_prevParkingBrakeToggle, &_stateParkingBrake,
                  &_parkingBrake, _speedBrakes, 0.0f, 1.0f );

    if ( _stateParkingBrake )
    {
        if ( _parkingBrake > _brakeLeft  ) _brakeLeft  = _parkingBrake;
        if ( _parkingBrake > _brakeRight ) _brakeRight = _parkingBrake;
    }

    // landing gear
    getRealValue( Assignment::LandingGearToggle,
                  &_prevLandingGearToggle, &_stateLandingGear,
                  &_landingGear, _speedGear, 0.0f, 1.0f );

    // flaps
    if ( _notches.size() > 0 )
    {
        bool flapsExtend  = getButtState( _assignments[ Assignment::FlapsExtend  ] );
        bool flapsRetract = getButtState( _assignments[ Assignment::FlapsRetract ] );

        if ( flapsExtend  && !_prevFlapsExtend )
        {
            if ( _notch + 1 < (int)_notches.size() )
            {
                _notch = _notch + 1;
            }
        }


        if ( flapsRetract && !_prevFlapsRetract )
        {
            if ( _notch > 0 )
            {
                _notch = _notch - 1;
            }
        }

        _prevFlapsExtend  = flapsExtend;
        _prevFlapsRetract = flapsRetract;

        double notch = _notches[ _notch ];
        double delta = notch - _flaps;

        if ( fabs( delta ) > _speedFlaps * _timeStep )
        {
            if ( _flaps > notch ) _flaps -= _speedFlaps * _timeStep;
            if ( _flaps < notch ) _flaps += _speedFlaps * _timeStep;
        }
        else
        {
            _flaps = notch;
        }
    }
    else
    {
        getRealValue( Assignment::FlapsRetract,
                      Assignment::FlapsExtend,
                      &_flaps, _speedFlaps, 0.0f, 1.0f );
    }

    // airbrake
    getRealValue( Assignment::AirbrakeRetract,
                  Assignment::AirbrakeExtend,
                  &_airbrake, _speedAirbrake, 0.0f, 1.0f );

    // spoilers
    getRealValue( Assignment::SpoilersToggle,
                  &_prevSpoilersToggle, &_stateSpoilers,
                  &_spoilers, _speedSpoilers, 0.0f, 1.0f );
}
