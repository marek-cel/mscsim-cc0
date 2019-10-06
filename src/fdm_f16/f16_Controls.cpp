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

#include <fdm_f16/f16_Controls.h>
#include <fdm_f16/f16_Aircraft.h>

#include <fdm/utils/fdm_Units.h>
#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

F16_Controls::F16_Controls( const F16_Aircraft *aircraft ) :
    Controls( aircraft ),
    _aircraft ( aircraft ),

    _channelRoll      ( 0 ),
    _channelPitch     ( 0 ),
    _channelYaw       ( 0 ),
    _channelRollTrim  ( 0 ),
    _channelPitchTrim ( 0 ),
    _channelYawTrim   ( 0 ),
    _channelAirbrake  ( 0 ),
    _channelBrakeL    ( 0 ),
    _channelBrakeR    ( 0 ),
    _channelNoseWheel ( 0 ),

    _flcs ( 0 ),

    _airbrake_max ( 0.0 ),

    _airbrake      ( 0.0 ),
    _airbrake_norm ( 0.0 ),
    _brake_l       ( 0.0 ),
    _brake_r       ( 0.0 ),
    _nose_wheel    ( 0.0 ),

    _angleOfAttack ( 0.0 ),
    _g_y ( 0.0 ),
    _g_z ( 0.0 ),
    _rollRate ( 0.0 ),
    _pitchRate ( 0.0 ),
    _yawRate ( 0.0 ),
    _ctrlLat ( 0.0 ),
    _trimLat ( 0.0 ),
    _ctrlLon ( 0.0 ),
    _trimLon ( 0.0 ),
    _ctrlYaw ( 0.0 ),
    _trimYaw ( 0.0 ),
    _statPress ( 0.0 ),
    _dynPress ( 0.0 )
{
    _flcs = new F16_FLCS();
}

////////////////////////////////////////////////////////////////////////////////

F16_Controls::~F16_Controls()
{
    FDM_DELPTR( _flcs );
}

////////////////////////////////////////////////////////////////////////////////

void F16_Controls::readData( XmlNode &dataNode )
{
    ///////////////////////////////
    Controls::readData( dataNode );
    ///////////////////////////////

    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        double ailerons_max = 0.0;
        double elevator_max = 0.0;
        double rudder_max   = 0.0;
        double flaps_le_max = 0.0;

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, ailerons_max , "ailerons_max" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, elevator_max , "elevator_max" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, rudder_max   , "rudder_max"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, flaps_le_max , "flaps_le_max" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _airbrake_max, "airbrake_max" );

        if ( result == FDM_SUCCESS )
        {
            _flcs->setAilerons_max( ailerons_max );
            _flcs->setElevator_max( elevator_max );
            _flcs->setRudder_max( rudder_max );
            _flcs->setFlaps_le_max( flaps_le_max );
        }
        else
        {
            XmlUtils::throwError( __FILE__, __LINE__, dataNode );
        }
    }
    else
    {
        XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
}

////////////////////////////////////////////////////////////////////////////////

void F16_Controls::init()
{
    _channelRoll      = getChannelByName( "roll"       );
    _channelPitch     = getChannelByName( "pitch"      );
    _channelYaw       = getChannelByName( "yaw"        );
    _channelRollTrim  = getChannelByName( "roll_trim"  );
    _channelPitchTrim = getChannelByName( "pitch_trim" );
    _channelYawTrim   = getChannelByName( "yaw_trim"   );
    _channelAirbrake  = getChannelByName( "airbrake"   );
    _channelBrakeL    = getChannelByName( "brake_l"    );
    _channelBrakeR    = getChannelByName( "brake_r"    );
    _channelNoseWheel = getChannelByName( "nose_wheel" );

    if ( 0 != _channelRoll
      && 0 != _channelPitch
      && 0 != _channelYaw
      && 0 != _channelRollTrim
      && 0 != _channelPitchTrim
      && 0 != _channelYawTrim
      && 0 != _channelAirbrake
      && 0 != _channelBrakeL
      && 0 != _channelBrakeR
      && 0 != _channelNoseWheel )
    {
        _channelRoll      ->input = &_aircraft->getDataInp()->controls.roll;
        _channelPitch     ->input = &_aircraft->getDataInp()->controls.pitch;
        _channelYaw       ->input = &_aircraft->getDataInp()->controls.yaw;
        _channelRollTrim  ->input = &_aircraft->getDataInp()->controls.trim_roll;
        _channelPitchTrim ->input = &_aircraft->getDataInp()->controls.trim_pitch;
        _channelYawTrim   ->input = &_aircraft->getDataInp()->controls.trim_yaw;
        _channelAirbrake  ->input = &_aircraft->getDataInp()->controls.airbrake;
        _channelBrakeL    ->input = &_aircraft->getDataInp()->controls.brake_l;
        _channelBrakeR    ->input = &_aircraft->getDataInp()->controls.brake_r;
        _channelNoseWheel ->input = &_aircraft->getDataInp()->controls.nose_wheel;
    }
    else
    {
        Exception e;

        e.setType( Exception::UnknownException );
        e.setInfo( "Obtaining control channels failed." );

        FDM_THROW( e );
    }

    /////////////////
    Controls::init();
    /////////////////
}

////////////////////////////////////////////////////////////////////////////////

void F16_Controls::update()
{
    ///////////////////
    Controls::update();
    ///////////////////

    _airbrake_norm = _channelAirbrake->output;
    _airbrake = _airbrake_norm * _airbrake_max;

    _brake_l = _channelBrakeL->output;
    _brake_r = _channelBrakeR->output;

    _nose_wheel = _channelNoseWheel->output;

    // 1000 Hz
    const unsigned int steps = ceil( _aircraft->getTimeStep() / 0.001 );

    const double timeStep = _aircraft->getTimeStep() / ( (double)steps );
    const double delta_angleOfAttack = _aircraft->getAngleOfAttack() - _angleOfAttack;
    const double delta_g_y = _aircraft->getGForce().y() - _g_y;
    const double delta_g_z = _aircraft->getGForce().z() - _g_z;
    const double delta_rollRate  = _aircraft->getOmg_BAS()( _ip ) - _rollRate;
    const double delta_pitchRate = _aircraft->getOmg_BAS()( _iq ) - _pitchRate;
    const double delta_yawRate   = _aircraft->getOmg_BAS()( _ir ) - _yawRate;
    const double delta_ctrlLat = _channelRoll->output      - _ctrlLat;
    const double delta_trimLat = _channelRollTrim->output  - _trimLat;
    const double delta_ctrlLon = _channelPitch->output     - _ctrlLon;
    const double delta_trimLon = _channelPitchTrim->output - _trimLon;
    const double delta_ctrlYaw = _channelYaw->output       - _ctrlYaw;
    const double delta_trimYaw = _channelYawTrim->output   - _trimYaw;
    const double delta_statPress = _aircraft->getEnvir()->getPressure() - _statPress;
    const double delta_dynPress  = _aircraft->getDynPress()             - _dynPress;

    for ( unsigned int i = 0; i < steps; i++ )
    {
        const double coef = ( (double)( i + 1 ) ) / ( (double)steps );

        double angleOfAttack = _angleOfAttack + coef * delta_angleOfAttack;
        double g_y = _g_y + coef * delta_g_y;
        double g_z = _g_z + coef * delta_g_z;
        double rollRate  = _rollRate  + coef * delta_rollRate;
        double pitchRate = _pitchRate + coef * delta_pitchRate;
        double yawRate   = _yawRate   + coef * delta_yawRate;
        double ctrlLat   = _ctrlLat   + coef * delta_ctrlLat;
        double trimLat   = _trimLat   + coef * delta_trimLat;
        double ctrlLon   = _ctrlLon   + coef * delta_ctrlLon;
        double trimLon   = _trimLon   + coef * delta_trimLon;
        double ctrlYaw   = _ctrlYaw   + coef * delta_ctrlYaw;
        double trimYaw   = _trimYaw   + coef * delta_trimYaw;
        double statPress = _statPress + coef * delta_statPress;
        double dynPress  = _dynPress  + coef * delta_dynPress;

        _flcs->update( timeStep, angleOfAttack,
                       g_y, g_z,
                       rollRate, pitchRate, yawRate,
                       ctrlLat, trimLat,
                       ctrlLon, trimLon,
                       ctrlYaw, trimYaw,
                       statPress, dynPress,
                       false, false,
                       _aircraft->getDataInp()->controls.lgh,
                       _aircraft->getGear()->getOnGround() );

//        _flcs->update( _aircraft->getTimeStep(),
//                       _aircraft->getAngleOfAttack(),
//                       _aircraft->getGForce().y(), _aircraft->getGForce().z(),
//                       _aircraft->getOmg_BAS()( _i_p ), _aircraft->getOmg_BAS()( _i_q ), _aircraft->getOmg_BAS()( _i_r ),
//                       _channelRoll->output  , _channelRollTrim->output,
//                       _channelPitch->output , _channelPitchTrim->output,
//                       _channelYaw->output   , _channelYawTrim->output,
//                       _aircraft->getEnvir()->getPressure(), _aircraft->getDynPress(),
//                       false, false, _aircraft->getGear()->isDown() );
    }

    _angleOfAttack = _aircraft->getAngleOfAttack();
    _g_y = _aircraft->getGForce().y();
    _g_z = _aircraft->getGForce().z();
    _rollRate  = _aircraft->getOmg_BAS()( _ip );
    _pitchRate = _aircraft->getOmg_BAS()( _iq );
    _yawRate   = _aircraft->getOmg_BAS()( _ir );
    _ctrlLat = _channelRoll->output;
    _trimLat = _channelRollTrim->output;
    _ctrlLon = _channelPitch->output;
    _trimLon = _channelPitchTrim->output;
    _ctrlYaw = _channelYaw->output;
    _trimYaw = _channelYawTrim->output;
    _statPress = _aircraft->getEnvir()->getPressure();
    _dynPress  = _aircraft->getDynPress();
}
