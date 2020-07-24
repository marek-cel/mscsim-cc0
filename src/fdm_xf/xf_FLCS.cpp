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

#include <fdm_xf/xf_FLCS.h>

#include <algorithm>

#include <fdm/sys/fdm_Lag.h>
#include <fdm/utils/fdm_Misc.h>
#include <fdm/utils/fdm_Units.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

XF_FLCS::XF_FLCS() :
    _ailerons_max ( 0.0 ),
    _elevator_max ( 0.0 ),
    _rudder_max   ( 0.0 ),
    _flaps_le_max ( 0.0 ),

    _ailerons_max_deg ( 0.0 ),
    _elevator_max_deg ( 0.0 ),
    _rudder_max_deg   ( 0.0 ),
    _flaps_le_max_deg ( 0.0 ),

    _ailerons      ( 0.0 ),
    _ailerons_norm ( 0.0 ),
    _elevator      ( 0.0 ),
    _elevator_norm ( 0.0 ),
    _elevons       ( 0.0 ),
    _rudder        ( 0.0 ),
    _rudder_norm   ( 0.0 ),
    _flaps_le      ( 0.0 ),
    _flaps_le_norm ( 0.0 ),
    _flaps_te      ( 0.0 ),
    _flaps_te_norm ( 0.0 ),

    _timeStep ( 0.0 ),

    _cat   ( CAT_I  ),
    _gains ( Cruise ),

    _alpha_lef ( FDM_NULLPTR ),

    _flaps_int ( 0.0 ),
    _flaps_com ( 0.0 ),

    _stick_lat    ( FDM_NULLPTR ),
    _p_com_lag    ( FDM_NULLPTR ),
    _p_com_pos    ( FDM_NULLPTR ),
    _p_com_neg    ( FDM_NULLPTR ),
    _omg_p_lag    ( FDM_NULLPTR ),
    _omg_p_fil    ( FDM_NULLPTR ),
    _delta_fl_lag ( FDM_NULLPTR ),
    _delta_fr_lag ( FDM_NULLPTR ),

    _delta_flc ( 0.0 ),
    _delta_frc ( 0.0 ),
    _delta_fl  ( 0.0 ),
    _delta_fr  ( 0.0 ),
    _delta_ac  ( 0.0 ),
    _delta_a   ( 0.0 ),

    _stick_lon  ( FDM_NULLPTR ),
    _alpha_lag  ( FDM_NULLPTR ),
    _g_com_lag  ( FDM_NULLPTR ),
    _omg_q_lag  ( FDM_NULLPTR ),
    _omg_q_fil  ( FDM_NULLPTR ),
    _g_z_input  ( FDM_NULLPTR ),
    _sca_bias_1 ( FDM_NULLPTR ),
    _sca_bias_2 ( FDM_NULLPTR ),
    _sca_bias_3 ( FDM_NULLPTR ),
    _u_sca_fil  ( FDM_NULLPTR ),
    _u_sca_fil2 ( FDM_NULLPTR ),
    _actuator_l ( FDM_NULLPTR ),
    _actuator_r ( FDM_NULLPTR ),

    _pitch_int ( 0.0 ),
    _delta_htl ( 0.0 ),
    _delta_htr ( 0.0 ),
    _delta_h   ( 0.0 ),
    _delta_d   ( 0.0 ),

    _pedals      ( FDM_NULLPTR ),
    _omg_r_lag   ( FDM_NULLPTR ),
    _omg_p_yaw   ( FDM_NULLPTR ),
    _u_sum_ll1   ( FDM_NULLPTR ),
    _u_sum_ll2   ( FDM_NULLPTR ),
    _delta_r_fil ( FDM_NULLPTR ),
    _delta_r_lag ( FDM_NULLPTR ),

    _delta_r   ( 0.0 ),

    _gun_compensation ( 0.0 )
{
    // lef
    _alpha_lef = new LeadLag( 2.0, 7.25, 1.0, 7.25 );

    // lat
    _stick_lat    = new Lag( 1.0 / 60.0 );
    _p_com_lag    = new Lag( 1.0 / 10.0 );
    _p_com_pos    = new LeadLag( 6.0, 0.0, 1.0, 20.0 );
    _p_com_neg    = new LeadLag( 6.0, 0.0, 1.0, 20.0 );
    _omg_p_lag    = new Lag( 1.0 / 50.0 );
    _omg_p_fil    = new Filter2( 4.0, 64.0, 6400.0, 1.0, 80.0, 6400.0 );
    _delta_fl_lag = new Lag( 1.0 / 20.0 );
    _delta_fr_lag = new Lag( 1.0 / 20.0 );

    // lon
    _stick_lon  = new Lag( 1.0 / 60.0 );
    _alpha_lag  = new Lag( 1.0 / 10.0 );
    _g_com_lag  = new Lag( 1.0 / 8.3 );
    _omg_q_lag  = new Lag( 1.0 / 50.0 );
    _omg_q_fil  = new LeadLag( 1.0, 0.0, 1.0, 1.0 );
    _g_z_input  = new Lag( 1.0 / 50.0 );
    _sca_bias_1 = new Lag( 1.0 / 10.0 );
    _sca_bias_2 = new Lag( 1.0 / 0.125 );
    _sca_bias_3 = new Lag( 1.0 / 0.125 );
    _u_sca_fil  = new LeadLag( 3.0, 12.0, 1.0, 12.0 );
    _u_sca_fil2 = new Filter2( 2.0, 20.0, 3500.0, 1.0, 40.0, 3500.0 );
    _actuator_l = new Lag( 1.0 / 20.0 );
    _actuator_r = new Lag( 1.0 / 20.0 );

    // yaw
    _pedals      = new Lag( 1.0 / 60.0 );
    _omg_r_lag   = new Lag( 1.0 / 50.0 );
    _omg_p_yaw   = new Filter2( 1.0, 0.0, 3025.0, 1.0, 110.0, 3025.0 );
    _u_sum_ll1   = new LeadLag( 3.0, 15.0, 1.0, 15.0 );
    _u_sum_ll2   = new LeadLag( 1.5,  0.0, 1.0,  1.0 );
    _delta_r_fil = new Filter2( 1.0, 0.0, 1225.0, 1.0, 70.0, 1225.0 );
    _delta_r_lag = new Lag( 1.0 / 20.0 );
}

////////////////////////////////////////////////////////////////////////////////

XF_FLCS::~XF_FLCS()
{
    // lef
    FDM_DELPTR( _alpha_lef );

    // lat
    FDM_DELPTR( _stick_lat );
    FDM_DELPTR( _p_com_lag );
    FDM_DELPTR( _p_com_pos );
    FDM_DELPTR( _p_com_neg );
    FDM_DELPTR( _omg_p_lag );
    FDM_DELPTR( _omg_p_fil );
    FDM_DELPTR( _delta_fl_lag );
    FDM_DELPTR( _delta_fr_lag );

    // lon
    FDM_DELPTR( _stick_lon );
    FDM_DELPTR( _alpha_lag );
    FDM_DELPTR( _g_com_lag );
    FDM_DELPTR( _omg_q_lag );
    FDM_DELPTR( _omg_q_fil );
    FDM_DELPTR( _g_z_input );
    FDM_DELPTR( _sca_bias_1 );
    FDM_DELPTR( _sca_bias_2 );
    FDM_DELPTR( _sca_bias_3 );
    FDM_DELPTR( _u_sca_fil );
    FDM_DELPTR( _u_sca_fil2 );
    FDM_DELPTR( _actuator_l );
    FDM_DELPTR( _actuator_r );

    // yaw
    FDM_DELPTR( _pedals );
    FDM_DELPTR( _omg_r_lag );
    FDM_DELPTR( _omg_p_yaw );
    FDM_DELPTR( _u_sum_ll1 );
    FDM_DELPTR( _u_sum_ll2 );
    FDM_DELPTR( _delta_r_fil );
    FDM_DELPTR( _delta_r_lag );
}

////////////////////////////////////////////////////////////////////////////////

void XF_FLCS::update( double timeStep, double angleOfAttack,
                       double g_y, double g_z,
                       double rollRate, double pitchRate, double yawRate,
                       double ctrlLat, double trimLat,
                       double ctrlLon, double trimLon,
                       double ctrlYaw, double trimYaw,
                       double statPress, double dynPress,
                       bool alt_flaps_ext, bool refuel_door_open,
                       bool lg_handle_dn, bool touchdown )
{
    if ( timeStep > 0.0 )
    {
        _timeStep = timeStep;

        // (AD-A055-417, p.20, Note A)
        // 646 psf = 30,930.6473 Pa
        if ( ( dynPress < 30930.6473 && refuel_door_open ) || lg_handle_dn || alt_flaps_ext )
        {
            _gains = Landing;
        }
        else
        {
            _gains = Cruise;
        }

        // stanby gains
        if ( 0 )
        {
            // (AD-A055-417, p.20)
            //   200 psf =   9,576.0518 Pa
            // 1,400 psf =  67,032.3626 Pa
            // 2,116 psf = 101,314.6280 Pa
            dynPress = ( _gains == Landing ) ? 9576.0518 : 67032.3626;
            statPress = 101314.628;
        }

        double q_p = dynPress / statPress;

        updateTEF( q_p, alt_flaps_ext, lg_handle_dn );
        updateLEF( angleOfAttack, q_p );
        updateLat( ctrlLat, trimLat, rollRate );
        updateLon( ctrlLon, trimLon, pitchRate, angleOfAttack, q_p, dynPress, g_z, touchdown );
        updateYaw( ctrlYaw, trimYaw, yawRate, q_p, g_y );
    }
}

////////////////////////////////////////////////////////////////////////////////

void XF_FLCS::setAilerons_max( double ailerons_max )
{
    _ailerons_max = ailerons_max;
    _ailerons_max_deg = Units::rad2deg( _ailerons_max );
}

////////////////////////////////////////////////////////////////////////////////

void XF_FLCS::setElevator_max( double elevator_max )
{
    _elevator_max = elevator_max;
    _elevator_max_deg = Units::rad2deg( _elevator_max );
}

////////////////////////////////////////////////////////////////////////////////

void XF_FLCS::setRudder_max( double rudder_max )
{
    _rudder_max = rudder_max;
    _rudder_max_deg = Units::rad2deg( _rudder_max );
}

////////////////////////////////////////////////////////////////////////////////

void XF_FLCS::setFlaps_le_max( double flaps_le_max )
{
    _flaps_le_max = flaps_le_max;
    _flaps_le_max_deg = Units::rad2deg( _flaps_le_max );
}

////////////////////////////////////////////////////////////////////////////////

void XF_FLCS::updateLEF( double angleOfAttack, double q_p )
{
    _alpha_lef->update( Units::rad2deg( angleOfAttack ), _timeStep );

    // (NASA-TP-1538, p.34)
    // delta_lef = 1.38 (2s+7.25)/(s+7.25) alpha - 9.05 q/p_s + 1.45
    double flaps_le_deg = 1.38 * _alpha_lef->getValue()
            - 9.05 * q_p + 1.45;

    _flaps_le = Misc::satur( 0.0, _flaps_le_max, Units::deg2rad( flaps_le_deg ) );
    _flaps_le_norm = _flaps_le / _flaps_le_max;
}

////////////////////////////////////////////////////////////////////////////////

void XF_FLCS::updateTEF( double q_p, bool alt_flaps_ext, bool lg_handle_dn )
{
    // (AD-A055-417, p.20)
    double flaps_com = ( alt_flaps_ext || lg_handle_dn ) ? 20.0 : 0.0;

    double flaps_trans = Misc::satur( -2.0, 2.0, getGainF9( q_p ) );
    double flaps_limit = Misc::satur( -0.625, 0.625, flaps_com + flaps_trans - _flaps_int );
    _flaps_int = _flaps_int + 8.0 * _timeStep * flaps_limit;
    _flaps_com = _flaps_int + 1.5;

    double flaperon_l = Misc::satur( -_ailerons_max, _ailerons_max, Units::deg2rad( _delta_fl ) );
    double flaperon_r = Misc::satur( -_ailerons_max, _ailerons_max, Units::deg2rad( _delta_fr ) );

    double flaps_te_r = flaperon_r - _ailerons;
    double flaps_te_l = flaperon_l + _ailerons;

    _flaps_te_norm = 0.5 * ( flaps_te_r + flaps_te_l ) / _ailerons_max;
    _flaps_te = _flaps_te_norm * _ailerons_max - Units::deg2rad( 1.5 );
}

////////////////////////////////////////////////////////////////////////////////

void XF_FLCS::updateLat( double ctrlLat, double trimLat,
                          double rollRate )
{
    // (AD-A055-417, p.20)
    double omg_p_deg = Units::rad2deg( rollRate );

    _stick_lat->update( ctrlLat, _timeStep );

    double p_com = _stick_lat->getValue();

    if ( _gains == Landing ) p_com *= 0.542;

    double p_loop_pos = std::max( 0.0, _p_com_pos->getValue() );
    double p_loop_neg = std::min( 0.0, _p_com_neg->getValue() );
    _p_com_lag->update( p_com - p_loop_pos - p_loop_neg, _timeStep );

    _p_com_pos->update( std::max( 0.0, _p_com_lag->getValue() ), _timeStep );
    _p_com_neg->update( std::min( 0.0, _p_com_lag->getValue() ), _timeStep );

    _omg_p_lag->update( omg_p_deg, _timeStep );
    _omg_p_fil->update( _omg_p_lag->getValue(), _timeStep );

    double roll_ap_tie_in = 0.0; // TODO
    double roll_control = _omg_p_fil->getValue()
            - ( _p_com_lag->getValue() + trimLat * 1.67 )
            - roll_ap_tie_in
            + 1.67 * _gun_compensation;

    double ailerons_com = Misc::satur( -_ailerons_max_deg, _ailerons_max_deg, 0.12 * roll_control );

    double limit_fl = std::max( 0.0, _delta_flc - 21.5 );
    double limit_fr = std::max( 0.0, _delta_frc - 21.5 );

    double flaperons_max_deg = Units::rad2deg( _ailerons_max );
    _delta_flc = Misc::satur( -flaperons_max_deg, flaperons_max_deg, _flaps_com - ailerons_com - limit_fr );
    _delta_frc = Misc::satur( -flaperons_max_deg, flaperons_max_deg, _flaps_com + ailerons_com - limit_fl );

    _delta_ac = _delta_frc - _delta_flc;

    _delta_fl_lag->update( _delta_flc, _timeStep );
    _delta_fr_lag->update( _delta_frc, _timeStep );

    double flaperons_delta_max = 80.0 * _timeStep;
    _delta_fl = getSurfaceMaxRate( _delta_fl, _delta_fl_lag->getValue(), flaperons_delta_max );
    _delta_fr = getSurfaceMaxRate( _delta_fr, _delta_fr_lag->getValue(), flaperons_delta_max );

    _delta_a = 0.5 * ( _delta_fr - _delta_fl );

    _ailerons = Misc::satur( -_ailerons_max, _ailerons_max, Units::deg2rad( _delta_a ) );
    _ailerons_norm = _ailerons / _ailerons_max;
}

////////////////////////////////////////////////////////////////////////////////

void XF_FLCS::updateLon( double ctrlLon, double trimLon,
                          double pitchRate,
                          double angleOfAttack, double q_p, double dynPress, double g_z,
                          bool touchdown )
{
    // (AD-A055-417, p.20)
    double alpha_deg = Units::rad2deg( angleOfAttack );
    double omg_q_deg = Units::rad2deg( pitchRate );

    _alpha_lag->update( Misc::satur( -5.0, 30.0, alpha_deg ), _timeStep );
    _stick_lon->update( ctrlLon   , _timeStep );
    _g_z_input->update( g_z - 1.0 , _timeStep );
    _omg_q_lag->update( omg_q_deg , _timeStep );
    _omg_q_fil->update( _omg_q_lag->getValue(), _timeStep );

    double g_com = _stick_lon->getValue() + trimLon;
    double g_max =  8.0;
    double g_min = -4.0;

    // negative g limit (AD-A055-417, p.20 - F1)
    if ( _gains == Cruise )
    {
        if ( dynPress < 1628.0 ) // 34 psf
        {
            g_min = -1.0;
        }
        else if ( dynPress < 8810.0 ) // 184 psf
        {
            g_min = -1.0 - ( 3.0 / ( 8810.0 - 1628.0 ) ) * ( dynPress - 1628.0 );
        }
    }

    _g_com_lag->update( Misc::satur( g_min, g_max, g_com ) * ( touchdown ? 1.0 : 0.5 ), _timeStep );

    double q_gained = 0.7 * getGainF3( dynPress ) * _omg_q_fil->getValue();
    double aoa_limit = std::max( 0.0, 0.5 * ( _alpha_lag->getValue() - 20.4 + q_gained ) );

    double pitch_ap_tie_in = 0.0; // TODO
    double g_command = aoa_limit - _g_com_lag->getValue() - pitch_ap_tie_in;

    _sca_bias_1->update( touchdown ? 0.0 : 6.0, _timeStep );
    _sca_bias_2->update( _gains == Landing ? 9.0 : 0.0, _timeStep );
    _sca_bias_3->update( _gains == Landing ? 1.0 : 0.0, _timeStep );

    double aoa_bias = 9.0 - _sca_bias_2->getValue() + _sca_bias_1->getValue();

    double u_sca_1 = 0.161 * ( q_gained + _alpha_lag->getValue() - aoa_bias );
    double u_sca_2 = ( touchdown ? 0.231 : 0.167 ) * _omg_q_fil->getValue()
            + 0.5 * _g_z_input->getValue();

    double u_sca = std::max( 0.0, u_sca_1 ) //+ std::min( 0.0, u_sca_1 ) * m_sca_bias_3->getValue()
            + u_sca_2;

    _u_sca_fil->update( u_sca, _timeStep );
    _u_sca_fil2->update( _u_sca_fil->getValue(), _timeStep );

    double pitch_gained = 3.0 * getGainF3( dynPress ) * ( g_command + _u_sca_fil2->getValue() );
    double alpha_gained = getGainF2( q_p ) * _alpha_lag->getValue();

    double k_a = 2000.0; // open loop amplifier gain (AD-A055-417, p.22)
    double pitch_out = _pitch_int + pitch_gained;
    double pitch_nfl = 5.0 * Misc::deadband( -_elevator_max_deg, _elevator_max_deg, pitch_out + alpha_gained );
    double pitch_inp = ( touchdown ? -0.5 * _pitch_int : pitch_gained - pitch_nfl )
            - k_a * Misc::deadband( -_elevator_max_deg, _elevator_max_deg, _pitch_int );

    // pitch integrating
    _pitch_int = _pitch_int + 5.0 * pitch_inp * _timeStep;

    double selector_input = _pitch_int + pitch_gained + alpha_gained;

    double delta_dc = 0.5 * getGainF10( q_p ) * _delta_ac;

    _actuator_l->update( selector_input - delta_dc, _timeStep );
    _actuator_r->update( selector_input + delta_dc, _timeStep );

    double elevator_delta_max = 60.0 * _timeStep;
    _delta_htl = getSurfaceMaxRate( _delta_htl, _actuator_l->getValue(), elevator_delta_max );
    _delta_htr = getSurfaceMaxRate( _delta_htr, _actuator_r->getValue(), elevator_delta_max );

    _delta_htl = Misc::satur( -_elevator_max_deg, _elevator_max_deg, _delta_htl );
    _delta_htr = Misc::satur( -_elevator_max_deg, _elevator_max_deg, _delta_htr );

    _delta_h = 0.5 * ( _delta_htl + _delta_htr );
    _delta_d = 0.5 * ( _delta_htr - _delta_htl );

    _elevator = Units::deg2rad( _delta_h );
    _elevator_norm = _elevator / _elevator_max;

    _elevons = Units::deg2rad( _delta_d );
}

////////////////////////////////////////////////////////////////////////////////

void XF_FLCS::updateYaw( double ctrlYaw, double trimYaw,
                          double yawRate,
                          double q_p, double g_y )
{
    double omg_r_deg = Units::rad2deg( yawRate  );

    _pedals->update( ctrlYaw, _timeStep );
    _omg_r_lag->update( omg_r_deg, _timeStep );
    _omg_p_yaw->update( _omg_p_lag->getValue(), _timeStep );

    double r_com = _pedals->getValue() + trimYaw;
    double u_sum = _omg_r_lag->getValue() - ( 1.0 / 57.3 ) * _omg_p_yaw->getValue() * _alpha_lag->getValue();

    _u_sum_ll1->update( u_sum, _timeStep );
    _u_sum_ll2->update( _u_sum_ll1->getValue(), _timeStep );

    // Aileron Rudder Interconnect (ARI)
    double ari_gain = 0.0;

    // (AD-A055-417, p.20)
    // (NASA-TP-1538, p.216)
    double alpha_abs = fabs( _alpha_lag->getValue() );
    if ( alpha_abs < 10.0 )
    {
        ari_gain = 1.0 - alpha_abs / 10.0;
    }
    double ari = //0.0375 * _alpha_lag->getValue()
        - 0.65 * ari_gain * _alpha_lag->getValue() * getGainF7( q_p );

    double u_gy = -g_y; // TODO
    double r_auto = getGainF8( q_p ) * ( _u_sum_ll2->getValue() + 19.32 * u_gy ) + 0.5 * _delta_ac * ari;

    double delta_rc = r_com + r_auto;

    _delta_r_fil->update( delta_rc, _timeStep );
    _delta_r_lag->update( _delta_r_fil->getValue(), _timeStep );

    double rudder_delta_max = 120.0 * _timeStep;
    _delta_r = getSurfaceMaxRate( _delta_r, _delta_r_lag->getValue(), rudder_delta_max );
    _delta_r = Misc::satur( -_rudder_max_deg, _rudder_max_deg, _delta_r );

    _rudder = Units::deg2rad( _delta_r );
    _rudder_norm = _rudder / _rudder_max;
}

////////////////////////////////////////////////////////////////////////////////

double XF_FLCS::getGainF2( double /*q_p*/ )
{
//    double gain = 0.5;  // (NASA-TP-1538, p.210)
    double gain = 0.38; // (AD-A202-599, p.3-12)

//    // (AD-A055-417, p.20 - F2)
//    if ( q_p <= 0.53 )
//    {
//        gain = 0.5;
//    }
//    else if ( q_p <= 1.79 )
//    {
//        gain = 0.5 - 1.5 * ( q_p - 0.53 ) / ( 1.79 - 0.53 );
//    }
//    else
//    {
//        gain = -1.0;
//    }

    return gain;
}

////////////////////////////////////////////////////////////////////////////////

double XF_FLCS::getGainF3( double dynPress )
{
    double gain = 1.0;

    // (AD-A055-417, p.20 - F3)
    if ( dynPress > 143640.0 ) // 3,000 psf
    {
        gain = 0.083;
    }
    else if ( dynPress > 38304.0 ) // 800 psf
    {
        gain = 0.533 - ( 0.533 - 0.083 ) / ( 143640.0 - 38304.0 ) * ( dynPress - 38304.0 );
    }
    else if ( dynPress > 14364.0 ) // 300 psf
    {
        gain = 1.0 - ( 1.0 - 0.533 ) / ( 38304.0 - 14364.0 ) * ( dynPress - 14364.0 );
    }

    return gain;
}

////////////////////////////////////////////////////////////////////////////////

double XF_FLCS::getGainF7( double q_p )
{
    double gain = 1.0;

    // (AD-A055-417, p.20 - F7)
    if ( q_p <= 0.187 )
    {
        gain = 0.0;
    }
    else if ( 0.187 <= q_p && q_p < 1.129 )
    {
        gain = ( q_p - 0.187 ) / ( 1.129 - 0.187 );
    }
//    else if ( 1.709 <= q_p && q_p < 3.29 )
//    {
//        gain = 1.0 - ( q_p - 1.709 ) / ( 3.29 - 1.709 );
//    }
    else if ( 1.129 <= q_p && q_p < 1.2 )
    {
        gain = 1.0 - ( q_p - 1.129 ) / ( 1.2 - 1.129 );
    }
    else
    {
        gain = 0.0;
    }

    return gain;
}

////////////////////////////////////////////////////////////////////////////////

double XF_FLCS::getGainF8( double q_p )
{
    double gain = 0.5; // (NASA-TP-1538, p.216 & AD-A202-599, p.3-12)

//    // (AD-A055-417, p.20 - F8)
//    if ( q_p < 2.04 )
//    {
//        gain = 0.5;
//    }
//    else if ( q_p < 3.23 )
//    {
//        gain = 0.5 + 0.5 * ( q_p - 2.04 ) / ( 3.23 - 2.04 );
//    }
//    else
//    {
//        gain = 1.0;
//    }

    if ( q_p > 1.0 && q_p <= 1.2 )
    {
        gain = 0.5 - 0.5 * ( q_p - 1.0 ) / ( 1.2 - 1.0 );
    }
    else if ( q_p > 1.0 )
    {
        gain = 0.0;
    }

    return gain;
}

////////////////////////////////////////////////////////////////////////////////

double XF_FLCS::getGainF9( double q_p )
{
    double gain = 0.0;

    // (AD-A055-417, p.20 - F9)
    if ( q_p > 1.008 )
    {
        gain = -2.0;
    }
    else if ( q_p > 0.787 )
    {
        gain = 0.0 - 2.0 * ( q_p - 0.787 ) / ( 1.008 - 0.787 );
    }

    return gain;
}

////////////////////////////////////////////////////////////////////////////////

double XF_FLCS::getGainF10( double q_p )
{
    double gain = 0.5;

    // (AD-A055-417, p.20 - F10)
    if ( q_p > 1.132 )
    {
        gain = 0.5;
    }
    else if ( q_p > 0.694 )
    {
        gain = 0.25 + 0.25 * ( q_p - 0.694 ) / ( 1.132 - 0.694 );
    }

    return gain;
}

////////////////////////////////////////////////////////////////////////////////

double XF_FLCS::getSurfaceMaxRate( double d_old, double d_new, double delta_max )
{
    if ( fabs( d_new - d_old ) < delta_max )
    {
        return d_new;
    }
    else
    {
        return d_old + Misc::sign( d_new - d_old ) * delta_max;
    }
}
