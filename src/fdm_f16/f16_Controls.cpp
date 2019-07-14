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
    m_aircraft ( aircraft ),

    m_channelRoll      ( 0 ),
    m_channelPitch     ( 0 ),
    m_channelYaw       ( 0 ),
    m_channelRollTrim  ( 0 ),
    m_channelPitchTrim ( 0 ),
    m_channelYawTrim   ( 0 ),
    m_channelAirbrake  ( 0 ),
    m_channelBrakeL    ( 0 ),
    m_channelBrakeR    ( 0 ),
    m_channelNoseWheel ( 0 ),

    m_flcs ( 0 ),

    m_airbrake_max ( 0.0 ),

    m_airbrake      ( 0.0 ),
    m_airbrake_norm ( 0.0 ),
    m_brake_l       ( 0.0 ),
    m_brake_r       ( 0.0 ),
    m_nose_wheel    ( 0.0 ),

    m_angleOfAttack ( 0.0 ),
    m_g_y ( 0.0 ),
    m_g_z ( 0.0 ),
    m_rollRate ( 0.0 ),
    m_pitchRate ( 0.0 ),
    m_yawRate ( 0.0 ),
    m_ctrlLat ( 0.0 ),
    m_trimLat ( 0.0 ),
    m_ctrlLon ( 0.0 ),
    m_trimLon ( 0.0 ),
    m_ctrlYaw ( 0.0 ),
    m_trimYaw ( 0.0 ),
    m_statPress ( 0.0 ),
    m_dynPress ( 0.0 )
{
    m_flcs = new F16_FLCS();
}

////////////////////////////////////////////////////////////////////////////////

F16_Controls::~F16_Controls()
{
    if ( m_flcs ) delete m_flcs;
    m_flcs = 0;
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

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_airbrake_max, "airbrake_max" );

        if ( result == FDM_SUCCESS )
        {
            m_flcs->setAilerons_max( ailerons_max );
            m_flcs->setElevator_max( elevator_max );
            m_flcs->setRudder_max( rudder_max );
            m_flcs->setFlaps_le_max( flaps_le_max );
        }
        else
        {
            Exception e;

            e.setType( Exception::FileReadingError );
            e.setInfo( "Reading XML file failed. " + XmlUtils::getErrorInfo( dataNode ) );

            FDM_THROW( e );
        }
    }
    else
    {
        Exception e;

        e.setType( Exception::FileReadingError );
        e.setInfo( "Reading XML file failed. " + XmlUtils::getErrorInfo( dataNode ) );

        FDM_THROW( e );
    }
}

////////////////////////////////////////////////////////////////////////////////

void F16_Controls::init()
{
    m_channelRoll      = getChannelByName( "roll"       );
    m_channelPitch     = getChannelByName( "pitch"      );
    m_channelYaw       = getChannelByName( "yaw"        );
    m_channelRollTrim  = getChannelByName( "roll_trim"  );
    m_channelPitchTrim = getChannelByName( "pitch_trim" );
    m_channelYawTrim   = getChannelByName( "yaw_trim"   );
    m_channelAirbrake  = getChannelByName( "airbrake"   );
    m_channelBrakeL    = getChannelByName( "brake_l"    );
    m_channelBrakeR    = getChannelByName( "brake_r"    );
    m_channelNoseWheel = getChannelByName( "nose_wheel" );

    if ( 0 != m_channelRoll
      && 0 != m_channelPitch
      && 0 != m_channelYaw
      && 0 != m_channelRollTrim
      && 0 != m_channelPitchTrim
      && 0 != m_channelYawTrim
      && 0 != m_channelAirbrake
      && 0 != m_channelBrakeL
      && 0 != m_channelBrakeR
      && 0 != m_channelNoseWheel )
    {
        m_channelRoll      ->input = &m_aircraft->getDataInp()->controls.roll;
        m_channelPitch     ->input = &m_aircraft->getDataInp()->controls.pitch;
        m_channelYaw       ->input = &m_aircraft->getDataInp()->controls.yaw;
        m_channelRollTrim  ->input = &m_aircraft->getDataInp()->controls.trim_roll;
        m_channelPitchTrim ->input = &m_aircraft->getDataInp()->controls.trim_pitch;
        m_channelYawTrim   ->input = &m_aircraft->getDataInp()->controls.trim_yaw;
        m_channelAirbrake  ->input = &m_aircraft->getDataInp()->controls.airbrake;
        m_channelBrakeL    ->input = &m_aircraft->getDataInp()->controls.brake_l;
        m_channelBrakeR    ->input = &m_aircraft->getDataInp()->controls.brake_r;
        m_channelNoseWheel ->input = &m_aircraft->getDataInp()->controls.nose_wheel;
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

    m_airbrake_norm = m_channelAirbrake->output;
    m_airbrake = m_airbrake_norm * m_airbrake_max;

    m_brake_l = m_channelBrakeL->output;
    m_brake_r = m_channelBrakeR->output;

    m_nose_wheel = m_channelNoseWheel->output;

    // 1000 Hz
    const unsigned int steps = ceil( m_aircraft->getTimeStep() / 0.001 );

    const double timeStep = m_aircraft->getTimeStep() / ( (double)steps );
    const double delta_angleOfAttack = m_aircraft->getAngleOfAttack()  - m_angleOfAttack;
    const double delta_g_y = m_aircraft->getGForce().y() - m_g_y;
    const double delta_g_z = m_aircraft->getGForce().z() - m_g_z;
    const double delta_rollRate  = m_aircraft->getOmg_BAS()( i_p ) - m_rollRate;
    const double delta_pitchRate = m_aircraft->getOmg_BAS()( i_q ) - m_pitchRate;
    const double delta_yawRate   = m_aircraft->getOmg_BAS()( i_r ) - m_yawRate;
    const double delta_ctrlLat = m_channelRoll->output      - m_ctrlLat;
    const double delta_trimLat = m_channelRollTrim->output  - m_trimLat;
    const double delta_ctrlLon = m_channelPitch->output     - m_ctrlLon;
    const double delta_trimLon = m_channelPitchTrim->output - m_trimLon;
    const double delta_ctrlYaw = m_channelYaw->output       - m_ctrlYaw;
    const double delta_trimYaw = m_channelYawTrim->output   - m_trimYaw;
    const double delta_statPress = m_aircraft->getEnvir()->getPressure() - m_statPress;
    const double delta_dynPress  = m_aircraft->getDynPress()             - m_dynPress;

    for ( unsigned int i = 0; i < steps; i++ )
    {
        const double coef = ( (double)( i + 1 ) ) / ( (double)steps );

        double angleOfAttack = m_angleOfAttack + coef * delta_angleOfAttack;
        double g_y = m_g_y + coef * delta_g_y;
        double g_z = m_g_z + coef * delta_g_z;
        double rollRate  = m_rollRate  + coef * delta_rollRate;
        double pitchRate = m_pitchRate + coef * delta_pitchRate;
        double yawRate   = m_yawRate   + coef * delta_yawRate;
        double ctrlLat   = m_ctrlLat   + coef * delta_ctrlLat;
        double trimLat   = m_trimLat   + coef * delta_trimLat;
        double ctrlLon   = m_ctrlLon   + coef * delta_ctrlLon;
        double trimLon   = m_trimLon   + coef * delta_trimLon;
        double ctrlYaw   = m_ctrlYaw   + coef * delta_ctrlYaw;
        double trimYaw   = m_trimYaw   + coef * delta_trimYaw;
        double statPress = m_statPress + coef * delta_statPress;
        double dynPress  = m_dynPress  + coef * delta_dynPress;

        m_flcs->update( timeStep, angleOfAttack,
                        g_y, g_z,
                        rollRate, pitchRate, yawRate,
                        ctrlLat, trimLat,
                        ctrlLon, trimLon,
                        ctrlYaw, trimYaw,
                        statPress, dynPress,
                        false, false,
                        m_aircraft->getDataInp()->controls.lg_handle,
                        m_aircraft->getGear()->getOnGround() );

//        m_flcs->update( m_aircraft->getTimeStep(),
//                        m_aircraft->getAngleOfAttack(),
//                        m_aircraft->getGForce().y(), m_aircraft->getGForce().z(),
//                        m_aircraft->getOmg_BAS()( i_p ), m_aircraft->getOmg_BAS()( i_q ), m_aircraft->getOmg_BAS()( i_r ),
//                        m_channelRoll->output  , m_channelRollTrim->output,
//                        m_channelPitch->output , m_channelPitchTrim->output,
//                        m_channelYaw->output   , m_channelYawTrim->output,
//                        m_aircraft->getEnvir()->getPressure(), m_aircraft->getDynPress(),
//                        false, false, m_aircraft->getGear()->isDown() );
    }

    m_angleOfAttack = m_aircraft->getAngleOfAttack();
    m_g_y = m_aircraft->getGForce().y();
    m_g_z = m_aircraft->getGForce().z();
    m_rollRate  = m_aircraft->getOmg_BAS()( i_p );
    m_pitchRate = m_aircraft->getOmg_BAS()( i_q );
    m_yawRate   = m_aircraft->getOmg_BAS()( i_r );
    m_ctrlLat = m_channelRoll->output;
    m_trimLat = m_channelRollTrim->output;
    m_ctrlLon = m_channelPitch->output;
    m_trimLon = m_channelPitchTrim->output;
    m_ctrlYaw = m_channelYaw->output;
    m_trimYaw = m_channelYawTrim->output;
    m_statPress = m_aircraft->getEnvir()->getPressure();
    m_dynPress  = m_aircraft->getDynPress();
}
