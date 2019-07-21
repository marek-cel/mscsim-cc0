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

#include <hid/hid_Manager.h>

#include <iostream>
#include <memory.h>

#include <hid/hid_Joysticks.h>

////////////////////////////////////////////////////////////////////////////////

using namespace hid;

////////////////////////////////////////////////////////////////////////////////

Manager* Manager::m_instance = 0;

////////////////////////////////////////////////////////////////////////////////

const std::string Manager::m_actionNames[] = {
    "Trigger",
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

#if ( HID_MAX_ACTIONS != 52 )
#   error 'HID_MAX_ACTIONS' has been changed! Check code above this line!
#endif

const std::string Manager::m_keysNames[] = {
    "0", "1", "2", "3", "4", "5", "6", "7", "8", "9",
    "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M",
    "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z",
    "`", "-", "=", "[", "]", ";", "'", ",", ".", "/",
    "Space",
    "Left", "Right", "Up", "Down",
    "Insert", "Delete", "Home", "End", "Page Up", "Page Down"
};

#if ( HID_MAX_KEYS != 57 )
#   error 'HID_MAX_KEYS' has been changed! Check code following this line!
#endif

const double Manager::m_speedCtrl       = 1.0;
const double Manager::m_speedTrim       = 0.1;
const double Manager::m_speedBrakes     = 2.0;
const double Manager::m_speedGear       = 0.25;
const double Manager::m_speedFlaps      = 0.25;
const double Manager::m_speedAirbrake   = 0.5;
const double Manager::m_speedSpoilers   = 2.0;
const double Manager::m_speedCollective = 0.5;
const double Manager::m_speedThrottle   = 0.5;
const double Manager::m_speedMixture    = 0.25;
const double Manager::m_speedPropeller  = 0.25;

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

#   if ( HID_MAX_ACTIONS != 52 )
#       error 'HID_MAX_ACTIONS' has been changed! Check code above this line!
#   endif
}

////////////////////////////////////////////////////////////////////////////////

Manager::Manager()
{
    for ( int i = 0; i < HID_MAX_ACTIONS; i++ )
    {
        m_assignments[ i ].type = Assignment::None;

        memset( &(m_assignments[ i ].data), 0, sizeof(Assignment::DeviceData) );
    }

    for ( int i = 0; i < HID_MAX_KEYS; i++ ) m_keysState[ i ] = false;

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
    m_timeStep = 0.0;

    m_trigger = 0;

    m_ctrlRoll  = 0.0;
    m_ctrlPitch = 0.0;
    m_ctrlYaw   = 0.0;

    m_trimRoll  = 0.0;
    m_trimPitch = 0.0;
    m_trimYaw   = 0.0;

    m_brakeLeft    = 0.0;
    m_brakeRight   = 0.0;
    m_parkingBrake = 0.0;

    m_landingGear = onGround ? 1.0 : 0.0;

    m_flaps    = 0.0;
    m_airbrake = 0.0;
    m_spoilers = 0.0;

    m_collective = 0.0;

    m_commonThrottle  = 0.0;
    m_commonMixture   = 1.0;
    m_commonPropeller = 1.0;

    for ( int i = 0; i < FDM_MAX_ENGINES; i++ )
    {
        m_throttle  [ i ] = 0.0;
        m_mixture   [ i ] = 1.0;
        m_propeller [ i ] = 1.0;
    }

    m_prevLandingGearToggle  = false;
    m_prevParkingBrakeToggle = false;
    m_prevSpoilersToggle     = false;

    m_stateLandingGear  = onGround;
    m_stateParkingBrake = false;
    m_stateSpoilers     = false;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::update( double timeStep )
{
    m_timeStep = timeStep;

    Joysticks::instance()->update();

    updateAxisActions();
    updateMiscActions();
}

////////////////////////////////////////////////////////////////////////////////

void Manager::setAssingment( Assignment::Action action, const Assignment &assignment )
{
    m_assignments[ action ] = assignment;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::setKeysState( bool keysState[] )
{
    for ( unsigned int i = 0; i < HID_MAX_KEYS; i++ )
    {
        m_keysState[ i ] = keysState[ i ];
    }
}

////////////////////////////////////////////////////////////////////////////////

void Manager::getAxisValue( const Assignment &assignment, double &value, int absolute )
{
    if ( assignment.type == Assignment::Joystick )
    {
        Joysticks::Data joyData = Joysticks::instance()->getData( assignment.data.joystick.joystickId );

        if ( joyData.active )
        {
            value = joyData.axis[ assignment.data.joystick.axisId ];

            if ( assignment.data.joystick.inverted ) value *= -1.0f;

            if ( absolute ) value = ( value + 1.0f ) / 2.0f;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Manager::getRealValue( Assignment::Action decreaseAction,
                            Assignment::Action increaseAction,
                            double &value,
                            double speed,
                            double min,
                            double max,
                            bool autocenter )
{
    bool tempDecrease = getButtState( m_assignments[ decreaseAction ] );
    bool tempIncrease = getButtState( m_assignments[ increaseAction ] );

    if ( autocenter && !tempDecrease && !tempIncrease )
    {
        double delta = speed * m_timeStep;

        if ( value > 0.0 ) value = ( value >  delta ) ? value - delta : 0.0;
        if ( value < 0.0 ) value = ( value < -delta ) ? value + delta : 0.0;
    }
    else
    {
        if ( tempDecrease && value > min ) value = value - speed * m_timeStep;
        if ( tempIncrease && value < max ) value = value + speed * m_timeStep;
    }

    if ( value < min ) value = min;
    if ( value > max ) value = max;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::getRealValue( Assignment::Action applyAction,
                            double &value,
                            double speed,
                            double min,
                            double max )
{
    bool tempApply = getButtState( m_assignments[ applyAction ] );

    if ( !tempApply && value > min ) value = value - speed * m_timeStep;
    if (  tempApply && value < max ) value = value + speed * m_timeStep;

    if ( value < min ) value = min;
    if ( value > max ) value = max;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::getRealValue( Assignment::Action toggleAction,
                            bool &togglePrev,
                            bool &state,
                            double &value,
                            double speed,
                            double min,
                            double max )
{
    bool toggle = getButtState( m_assignments[ toggleAction ] );

    if ( toggle && !togglePrev )
    {
        state = !state;
    }

    togglePrev = toggle;

    if ( !state && value > min ) value  = value - speed * m_timeStep;
    if (  state && value < max ) value  = value + speed * m_timeStep;

    if      ( value < min ) value = min;
    else if ( value > max ) value = max;
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
            state = m_keysState[ assignment.data.keyboard.keyId ];
        }
    }

    return state;
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updateAxisActions()
{
    // roll
    if ( m_assignments[ Assignment::RollAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::RollBankLeft,
                      Assignment::RollBankRight,
                      m_ctrlRoll, m_speedCtrl, -1.0f, 1.0f, true );
    }
    else
    {
        getAxisValue( m_assignments[ Assignment::RollAxis ], m_ctrlRoll );
    }

    // pitch
    if ( m_assignments[ Assignment::PitchAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::PitchNoseDown,
                      Assignment::PitchNoseUp,
                      m_ctrlPitch, m_speedCtrl, -1.0f, 1.0f, true );
    }
    else
    {
        getAxisValue( m_assignments[ Assignment::PitchAxis ], m_ctrlPitch );
    }

    // yaw
    if ( m_assignments[ Assignment::YawAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::YawTurnLeft,
                      Assignment::YawTurnRight,
                      m_ctrlYaw, m_speedCtrl, -1.0f, 1.0f, true );
    }
    else
    {
        getAxisValue( m_assignments[ Assignment::YawAxis ], m_ctrlYaw );
    }

    // trim roll
    if ( m_assignments[ Assignment::TrimRollAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::TrimRollBankLeft,
                      Assignment::TrimRollBankRight,
                      m_trimRoll, m_speedTrim, -1.0f, 1.0f );
    }
    else
    {
        getAxisValue( m_assignments[ Assignment::TrimRollAxis ], m_trimRoll );
    }

    // trim pitch
    if ( m_assignments[ Assignment::TrimPitchAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::TrimPitchNoseDown,
                      Assignment::TrimPitchNoseUp,
                      m_trimPitch, m_speedTrim, -1.0f, 1.0f );
    }
    else
    {
        getAxisValue( m_assignments[ Assignment::TrimPitchAxis ], m_trimPitch );
    }

    // trim yaw
    if ( m_assignments[ Assignment::TrimYawAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::TrimYawTurnLeft,
                      Assignment::TrimYawTurnRight,
                      m_trimYaw, m_speedTrim, -1.0f, 1.0f );
    }
    else
    {
        getAxisValue( m_assignments[ Assignment::TrimYawAxis ], m_trimYaw );
    }

    // trim reset
    if ( getButtState( m_assignments[ Assignment::TrimReset ] ) )
    {
        m_trimRoll  = 0.0f;
        m_trimPitch = 0.0f;
        m_trimYaw   = 0.0f;
    }

    // brake left
    if ( m_assignments[ Assignment::BrakeLeftAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::BrakeLeftApply,
                      m_brakeLeft, m_speedBrakes, 0.0f, 1.0f );
    }
    else
    {
        getAxisValue( m_assignments[ Assignment::BrakeLeftAxis ], m_brakeLeft, 1 );
    }

    // brake right
    if ( m_assignments[ Assignment::BrakeRightAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::BrakeRightApply,
                      m_brakeRight, m_speedBrakes, 0.0f, 1.0f );
    }
    else
    {
        getAxisValue( m_assignments[ Assignment::BrakeRightAxis ], m_brakeRight, 1 );
    }

    // collective
    if ( m_assignments[ Assignment::CollectiveAxis ].type == Assignment::None )
    {
        getRealValue( Assignment::CollectiveDecreade,
                      Assignment::CollectiveIncrease,
                      m_collective, m_speedCollective, 0.0f, 1.0f );
    }
    else
    {
        getAxisValue( m_assignments[ Assignment::CollectiveAxis ], m_collective, 1 );
    }

#   if ( FDM_MAX_ENGINES != 4 )
#       error 'FDM_MAX_ENGINES' has been changed! Check code following this line!
#   endif

    // throttle
    if ( m_assignments[ Assignment::ThrottleAxis1 ].type == Assignment::None
      || m_assignments[ Assignment::ThrottleAxis2 ].type == Assignment::None
      || m_assignments[ Assignment::ThrottleAxis3 ].type == Assignment::None
      || m_assignments[ Assignment::ThrottleAxis4 ].type == Assignment::None )
    {
        getRealValue( Assignment::ThrottleDecrease,
                      Assignment::ThrottleIncrease,
                      m_commonThrottle, m_speedThrottle, 0.0, 1.0 );

        m_throttle[ 0 ] = m_commonThrottle;
        m_throttle[ 1 ] = m_commonThrottle;
        m_throttle[ 2 ] = m_commonThrottle;
        m_throttle[ 3 ] = m_commonThrottle;
    }

    getAxisValue( m_assignments[ Assignment::ThrottleAxis1 ], m_throttle[ 0 ], 1 );
    getAxisValue( m_assignments[ Assignment::ThrottleAxis2 ], m_throttle[ 1 ], 1 );
    getAxisValue( m_assignments[ Assignment::ThrottleAxis3 ], m_throttle[ 2 ], 1 );
    getAxisValue( m_assignments[ Assignment::ThrottleAxis4 ], m_throttle[ 3 ], 1 );

    // mixture
    if ( m_assignments[ Assignment::MixtureAxis1 ].type == Assignment::None
      || m_assignments[ Assignment::MixtureAxis2 ].type == Assignment::None
      || m_assignments[ Assignment::MixtureAxis3 ].type == Assignment::None
      || m_assignments[ Assignment::MixtureAxis4 ].type == Assignment::None )
    {
        getRealValue( Assignment::MixtureLean,
                      Assignment::MixtureRich,
                      m_commonMixture, m_speedMixture, 0.0f, 1.0f );

        m_mixture[ 0 ] = m_commonMixture;
        m_mixture[ 1 ] = m_commonMixture;
        m_mixture[ 2 ] = m_commonMixture;
        m_mixture[ 3 ] = m_commonMixture;
    }

    getAxisValue( m_assignments[ Assignment::MixtureAxis1 ], m_mixture[ 0 ], 1 );
    getAxisValue( m_assignments[ Assignment::MixtureAxis2 ], m_mixture[ 1 ], 1 );
    getAxisValue( m_assignments[ Assignment::MixtureAxis3 ], m_mixture[ 2 ], 1 );
    getAxisValue( m_assignments[ Assignment::MixtureAxis4 ], m_mixture[ 3 ], 1 );

    // propeller
    if ( m_assignments[ Assignment::PropellerAxis1 ].type == Assignment::None
      || m_assignments[ Assignment::PropellerAxis1 ].type == Assignment::None
      || m_assignments[ Assignment::PropellerAxis1 ].type == Assignment::None
      || m_assignments[ Assignment::PropellerAxis1 ].type == Assignment::None )
    {
        getRealValue( Assignment::PropellerDecrease,
                      Assignment::PropellerIncrease,
                      m_commonPropeller, m_speedPropeller, 0.0f, 1.0f );

        m_propeller[ 0 ] = m_commonPropeller;
        m_propeller[ 1 ] = m_commonPropeller;
        m_propeller[ 2 ] = m_commonPropeller;
        m_propeller[ 3 ] = m_commonPropeller;
    }

    getAxisValue( m_assignments[ Assignment::PropellerAxis1 ], m_propeller[ 0 ], 1 );
    getAxisValue( m_assignments[ Assignment::PropellerAxis2 ], m_propeller[ 1 ], 1 );
    getAxisValue( m_assignments[ Assignment::PropellerAxis3 ], m_propeller[ 2 ], 1 );
    getAxisValue( m_assignments[ Assignment::PropellerAxis4 ], m_propeller[ 3 ], 1 );
}

////////////////////////////////////////////////////////////////////////////////

void Manager::updateMiscActions()
{
    m_trigger = getButtState( m_assignments[ Assignment::Trigger ] );

    // parking brake
    getRealValue( Assignment::ParkingBrakeToggle,
                  m_prevParkingBrakeToggle, m_stateParkingBrake,
                  m_parkingBrake, m_speedBrakes, 0.0f, 1.0f );

    if ( m_stateParkingBrake )
    {
        if ( m_parkingBrake > m_brakeLeft  ) m_brakeLeft  = m_parkingBrake;
        if ( m_parkingBrake > m_brakeRight ) m_brakeRight = m_parkingBrake;
    }

    // landing gear
    getRealValue( Assignment::LandingGearToggle,
                  m_prevLandingGearToggle, m_stateLandingGear,
                  m_landingGear, m_speedGear, 0.0f, 1.0f );

    // flaps
    getRealValue( Assignment::FlapsRetract,
                  Assignment::FlapsExtend,
                  m_flaps, m_speedFlaps, 0.0f, 1.0f );

    // airbrake
    getRealValue( Assignment::AirbrakeRetract,
                  Assignment::AirbrakeExtend,
                  m_airbrake, m_speedAirbrake, 0.0f, 1.0f );

    // spoilers
    getRealValue( Assignment::SpoilersToggle,
                  m_prevSpoilersToggle, m_stateSpoilers,
                  m_spoilers, m_speedSpoilers, 0.0f, 1.0f );
}
