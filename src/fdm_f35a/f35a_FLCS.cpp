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

#include <fdm_f35a/f35a_FLCS.h>

#include <fdm/utils/fdm_Units.h>

#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

F35A_FLCS::F35A_FLCS() :
    _ctrl_input_roll  ( Table1::oneRecordTable( 0.0 ) ),
    _ctrl_input_pitch ( Table1::oneRecordTable( 0.0 ) ),
    _pitch_rate_gain  ( Table1::oneRecordTable( 0.0 ) ),
    _lef_aoa_flaps    ( Table1::oneRecordTable( 0.0 ) ),

    _pid_roll    ( 0.0, 0.0, 0.0, -1.0, 1.0 ),
    _pid_pitch_1 ( 0.0, 0.0, 0.0, -1.0, 1.0 ),
    _pid_pitch_2 ( 0.0, 0.0, 0.0, -1.0, 1.0 ),
    _pid_yaw     ( 0.0, 0.0, 0.0, -1.0, 1.0 ),

    _timeStep ( 0.0 ),

    _max_rate_ailerons ( 0.0 ),
    _max_rate_elevator ( 0.0 ),
    _max_rate_rudder   ( 0.0 ),
    _max_rate_flaps_le ( 0.0 ),
    _max_rate_flaps_te ( 0.0 ),

    _roll_rate_gain ( 0.0 ),
    _gforce_gain    ( 0.0 ),
    _aoa_gain       ( 0.0 ),
    _yaw_rate_gain  ( 0.0 ),

    _lef_time_const ( 0.0 ),

    _norm_ailerons ( 0.0 ),
    _norm_elevator ( 0.0 ),
    _norm_rudder   ( 0.0 ),
    _norm_flaps_le ( 0.0 ),
    _norm_flaps_te ( 0.0 )
{
    _pid_roll    .setAntiWindup( PID::Calculation );
    _pid_pitch_1 .setAntiWindup( PID::Calculation );
    _pid_pitch_2 .setAntiWindup( PID::Calculation );
    _pid_yaw     .setAntiWindup( PID::Calculation );
}

////////////////////////////////////////////////////////////////////////////////

F35A_FLCS::~F35A_FLCS() {}

////////////////////////////////////////////////////////////////////////////////

void F35A_FLCS::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        // maximum controls rates
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_max_rate_ailerons , "max_rate_ailerons" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_max_rate_elevator , "max_rate_elevator" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_max_rate_rudder   , "max_rate_rudder"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_max_rate_flaps_le , "max_rate_flaps_le" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_max_rate_flaps_te , "max_rate_flaps_te" );

        XmlNode nodeRoll  = dataNode.getFirstChildElement( "ctrl_roll"  );
        XmlNode nodePitch = dataNode.getFirstChildElement( "ctrl_pitch" );
        XmlNode nodeYaw   = dataNode.getFirstChildElement( "ctrl_yaw"   );

        // roll
        if ( nodeRoll.isValid() )
        {
            double ctrl_tc = 0.0;
            double rate_tc = 0.0;

            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodeRoll, &ctrl_tc, "ctrl_tc" );
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodeRoll, &rate_tc, "rate_tc" );

            _lag_ctrl_roll.setTimeConst( ctrl_tc );
            _lag_rate_roll.setTimeConst( rate_tc );

            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodeRoll, &_ctrl_input_roll, "ctrl_input" );

            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodeRoll, &_roll_rate_gain, "roll_rate_gain" );

            XmlNode nodePID = nodeRoll.getFirstChildElement( "pid" );
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodePID, &_pid_roll, -1.0, 1.0 );
        }
        else
        {
            result = FDM_FAILURE;
        }

        // pitch
        if ( nodePitch.isValid() )
        {
            double ctrl_tc = 0.0;
            double rate_tc = 0.0;

            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodePitch, &ctrl_tc, "ctrl_tc" );
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodePitch, &rate_tc, "rate_tc" );

            _lag_ctrl_pitch.setTimeConst( ctrl_tc );
            _lag_rate_pitch.setTimeConst( rate_tc );

            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodePitch, &_ctrl_input_pitch, "ctrl_input" );

            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodePitch, &_gforce_gain , "gforce_gain" );
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodePitch, &_aoa_gain    , "aoa_gain"    );

            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodePitch, &_pitch_rate_gain, "pitch_rate_gain" );
            if ( result == FDM_SUCCESS ) _pitch_rate_gain.multiplyKeys( Units::mb2pa() );

            XmlNode nodePID_1 = nodePitch.getFirstChildElement( "pid_1" );
            XmlNode nodePID_2 = nodePitch.getFirstChildElement( "pid_2" );

            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodePID_1, &_pid_pitch_1, -1.0, 1.0 );
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodePID_2, &_pid_pitch_2, -1.0, 1.0 );
        }
        else
        {
            result = FDM_FAILURE;
        }

        // yaw
        if ( nodeYaw.isValid() )
        {
            double ctrl_tc = 0.0;
            double rate_tc = 0.0;

            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodeYaw, &ctrl_tc, "ctrl_tc" );
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodeYaw, &rate_tc, "rate_tc" );

            _lag_ctrl_yaw.setTimeConst( ctrl_tc );
            _lag_rate_yaw.setTimeConst( rate_tc );

            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodeYaw, &_yaw_rate_gain, "yaw_rate_gain" );

            XmlNode nodePID = nodeYaw.getFirstChildElement( "pid" );
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodePID, &_pid_yaw, -1.0, 1.0 );
        }
        else
        {
            result = FDM_FAILURE;
        }

        // leading edge flaps
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_lef_time_const, "lef_time_const" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_lef_aoa_flaps, "lef_aoa_flaps" );
        if ( result == FDM_SUCCESS ) _lef_aoa_flaps.multiplyKeys( Units::deg2rad() );

        if ( result != FDM_SUCCESS ) XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
    else
    {
        XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
}

////////////////////////////////////////////////////////////////////////////////

void F35A_FLCS::update( double timeStep,
                        double ctrlLat, double trimLat,
                        double ctrlLon, double trimLon,
                        double ctrlYaw, double trimYaw,
                        const Vector3 &omg_bas,
                        const Vector3 &gforce_bas,
                        const Vector3 &grav_bas,
                        double angleOfAttack,
                        double statPress, double dynPress,
                        bool lg_handle_dn )
{
    if ( timeStep > 0.0 )
    {
        _timeStep = timeStep;

        updateCtrlRoll  ( timeStep, ctrlLat, trimLat, omg_bas );
        updateCtrlPitch ( timeStep, ctrlLon, trimLon, omg_bas, gforce_bas, grav_bas, statPress, dynPress, angleOfAttack );
        updateCtrlYaw   ( timeStep, ctrlYaw, trimYaw, omg_bas );

        updateFlapsLE( timeStep, angleOfAttack );
        updateFlapsTE( timeStep, lg_handle_dn  );
    }
}

////////////////////////////////////////////////////////////////////////////////

void F35A_FLCS::updateCtrlRoll( double timeStep,
                                double ctrlLat, double trimLat,
                                const Vector3 &omg_bas )
{
    _lag_ctrl_roll.update( timeStep, ctrlLat );
    _lag_rate_roll.update( timeStep, omg_bas.p() );

    double ctrl_filtered = _lag_ctrl_roll.getValue();
    double rate_filtered = _lag_rate_roll.getValue();

    double command = _ctrl_input_roll.getValue( ctrl_filtered );

    double error = command - _roll_rate_gain * rate_filtered;

    _pid_roll.update( timeStep, error );

    double setpoint = -_pid_roll.getValue();

    _norm_ailerons = Misc::rate( timeStep, _max_rate_ailerons, _norm_ailerons, setpoint );
    _norm_ailerons = Misc::satur( -1.0, 1.0, _norm_ailerons );
}

////////////////////////////////////////////////////////////////////////////////

void F35A_FLCS::updateCtrlPitch( double timeStep,
                                 double ctrlLon, double trimLon,
                                 const Vector3 &omg_bas,
                                 const Vector3 &gforce_bas,
                                 const Vector3 &grav_bas,
                                 double statPress, double dynPress,
                                 double angleOfAttack )
{
    // NASA-TP-1689, p.49

    _lag_ctrl_pitch.update( timeStep, ctrlLon );
    _lag_rate_pitch.update( timeStep, omg_bas.q() );

    double ctrl_filtered = _lag_ctrl_pitch.getValue();
    double rate_filtered = _lag_rate_pitch.getValue();

    double command = _ctrl_input_pitch.getValue( ctrl_filtered );

    double acc_grav = grav_bas.getLength();
    double gz_wo_grav = gforce_bas.z() - ( grav_bas.z() / acc_grav );

    double pitch_rate_gain = _pitch_rate_gain.getValue( dynPress );

    double error = command - ( _gforce_gain * gz_wo_grav
                             + pitch_rate_gain * rate_filtered
                             + _aoa_gain * angleOfAttack );

    _pid_pitch_1.update( timeStep, error );
    _pid_pitch_2.update( timeStep, error );

    double setpoint = -( _pid_pitch_1.getValue() + _pid_pitch_2.getValue() );

    _norm_elevator = Misc::rate( timeStep, _max_rate_elevator , _norm_elevator , setpoint );
    _norm_elevator = Misc::satur( -1.0, 1.0, _norm_elevator );
}

////////////////////////////////////////////////////////////////////////////////

void F35A_FLCS::updateCtrlYaw( double timeStep,
                               double ctrlYaw, double trimYaw,
                               const Vector3 &omg_bas )
{
    _lag_ctrl_yaw.update( timeStep, ctrlYaw );
    _lag_rate_yaw.update( timeStep, omg_bas.r() );

    double ctrl_filtered = _lag_ctrl_yaw.getValue();
    double rate_filtered = _lag_rate_yaw.getValue();

    double error = -_yaw_rate_gain * rate_filtered;

    _pid_yaw.update( timeStep, error );

    double setpoint = -_pid_yaw.getValue() * ( 1.0 - fabs( ctrl_filtered ) ) + ctrl_filtered;

    _norm_rudder = Misc::rate( timeStep, _max_rate_rudder, _norm_rudder, setpoint );
    _norm_rudder = Misc::satur( -1.0, 1.0, _norm_rudder );
}

////////////////////////////////////////////////////////////////////////////////

void F35A_FLCS::updateFlapsLE( double timeStep, double angleOfAttack )
{
    double setpoint = Misc::inertia( _lef_aoa_flaps.getValue( angleOfAttack ),
                                     _norm_flaps_le, timeStep, _lef_time_const );

    _norm_flaps_le = Misc::rate( timeStep, _max_rate_flaps_le, _norm_flaps_le, setpoint );
    _norm_flaps_le = Misc::satur(  0.0, 1.0, _norm_flaps_le );
}

////////////////////////////////////////////////////////////////////////////////

void F35A_FLCS::updateFlapsTE( double timeStep, bool lg_handle_dn )
{
    double setpoint = lg_handle_dn ? 1.0 : 0.0;

    _norm_flaps_te = Misc::rate( timeStep, _max_rate_flaps_te, _norm_flaps_te, setpoint );
    _norm_flaps_te = Misc::satur(  0.0, 1.0, _norm_flaps_te );
}
