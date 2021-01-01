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

#include <gui/DockWidgetData.h>
#include <ui_DockWidgetData.h>

#include <cmath>

#include <gui/gui_Defines.h>

////////////////////////////////////////////////////////////////////////////////

DockWidgetData::DockWidgetData( QWidget *parent ) :
    QDockWidget ( parent ),
    _ui ( new Ui::DockWidgetData )
{
    _ui->setupUi( this );

    reset();

    settingsRead();
}

////////////////////////////////////////////////////////////////////////////////

DockWidgetData::~DockWidgetData()
{
    settingsSave();
    
    DELPTR( _ui );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::reset()
{
    _altitude_asl = 0.0;
    _altitude_agl = 0.0;

    _airspeed   = 0.0;
    _climbRate  = 0.0;
    _machNumber = 0.0;

    _rollAngle  = 0.0;
    _pitchAngle = 0.0;
    _heading    = 0.0;

    _angleOfAttack = 0.0;
    _sideslipAngle = 0.0;

    _trackAngle = 0.0;
    _climbAngle = 0.0;

    _rollRate  = 0.0;
    _pitchRate = 0.0;
    _yawRate   = 0.0;
    _turnRate  = 0.0;

    _Gx = 0.0;
    _Gy = 0.0;
    _Gz = 1.0;

    _minGz = 1.0;
    _maxGz = 1.0;

    setAltitudeASL( _altitude_asl );
    setAltitudeAGL( _altitude_agl );
    setAirspeed( _airspeed );
    setClimbRate( _climbRate );
    setMachNumber( _machNumber );
    setRollAngle( _rollAngle );
    setPitchAngle( _pitchAngle );
    setHeading( _heading );
    setAngleOfAttack( _angleOfAttack );
    setSideslipAngle( _sideslipAngle );
    setTrackAngle( _trackAngle );
    setClimbAngle( _climbAngle );
    setRollRate( _rollRate );
    setPitchRate( _pitchRate );
    setYawRate( _yawRate );
    setTurnRate( _turnRate );
    setGx( _Gx );
    setGy( _Gy );
    setGz( _Gz );
    _ui->spinMaxGz->setValue( _ui->comboMaxGz->convert( _maxGz ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setAltitudeASL( double altitude_asl )
{
    _altitude_asl = altitude_asl;
    _ui->spinAltitudeASL->setValue( _ui->comboAltitudeASL->convert( _altitude_asl ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setAltitudeAGL( double altitude_agl )
{
    _altitude_agl = altitude_agl;
    _ui->spinAltitudeAGL->setValue( _ui->comboAltitudeAGL->convert( _altitude_agl ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setAirspeed( double airspeed )
{
    _airspeed = airspeed;
    _ui->spinAirspeed->setValue( _ui->comboAirspeed->convert( _airspeed ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setIAS( double ias )
{
    _ias = ias;
    _ui->spinIAS->setValue( _ui->comboIAS->convert( _ias ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setClimbRate( double climbRate )
{
    _climbRate = climbRate;
    _ui->spinClimbRate->setValue( _ui->comboClimbRate->convert( _climbRate ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setMachNumber( double machNumber )
{
    _machNumber = machNumber;
    _ui->spinMachNumber->setValue( _ui->comboMachNumber->convert( _machNumber ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setRollAngle( double rollAngle )
{
    _rollAngle = rollAngle;
    _ui->spinRollAngle->setValue( _ui->comboRollAngle->convert( _rollAngle ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setPitchAngle( double pitchAngle )
{
    _pitchAngle = pitchAngle;
    _ui->spinPitchAngle->setValue( _ui->comboPitchAngle->convert( _pitchAngle ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setHeading( double heading )
{
    _heading = heading;
    _ui->spinHeading->setValue( _ui->comboHeading->convert( _heading ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setAngleOfAttack( double angleOfAttack )
{
    _angleOfAttack = angleOfAttack;
    _ui->spinAngleOfAttack->setValue( _ui->comboAngleOfAttack->convert( _angleOfAttack ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setSideslipAngle( double sideslipAngle )
{
    _sideslipAngle = sideslipAngle;
    _ui->spinSideslipAngle->setValue( _ui->comboSideslipAngle->convert( _sideslipAngle ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setClimbAngle( double climbAngle )
{
    _climbAngle = climbAngle;
    _ui->spinClimbAngle->setValue( _ui->comboClimbAngle->convert( _climbAngle ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setTrackAngle( double trackAngle )
{
    _trackAngle = trackAngle;
    _ui->spinTrackAngle->setValue( _ui->comboTrackAngle->convert( _trackAngle ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setRollRate( double rollRate )
{
    _rollRate = rollRate;
    _ui->spinRollRate->setValue( _ui->comboRollRate->convert( _rollRate ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setPitchRate( double pitchRate )
{
    _pitchRate = pitchRate;
    _ui->spinPitchRate->setValue( _ui->comboPitchRate->convert( _pitchRate ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setYawRate( double yawRate )
{
    _yawRate = yawRate;
    _ui->spinYawRate->setValue( _ui->comboYawRate->convert( _yawRate ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setTurnRate( double turnRate )
{
    _turnRate = turnRate;
    _ui->spinTurnRate->setValue( _ui->comboTurnRate->convert( _turnRate ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setGx( double Gx )
{
    _Gx = Gx;
    _ui->spinGx->setValue( _ui->comboGx->convert( _Gx ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setGy( double Gy )
{
    _Gy = Gy;
    _ui->spinGy->setValue( _ui->comboGy->convert( _Gy ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::setGz( double Gz )
{
    _Gz = Gz;

    if ( _Gz > _maxGz ) _maxGz = _Gz;
    if ( _Gz < _minGz ) _minGz = _Gz;

    _ui->spinGz->setValue( _ui->comboGz->convert( _Gz ) );

    _ui->spinMaxGz->setValue( _ui->comboMaxGz->convert( _maxGz ) );
    _ui->spinMinGz->setValue( _ui->comboMinGz->convert( _minGz ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::closeEvent( QCloseEvent *event )
{
    /////////////////////////////////
    QDockWidget::closeEvent( event );
    /////////////////////////////////

    emit closed();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::settingsRead()
{
    QSettings settings( SIM_ORG_NAME, SIM_APP_NAME );
    
    settings.beginGroup( "dock_widget_data" );

    settingsRead_Highlight( settings );
    settingsRead_UnitCombos( settings );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::settingsRead_Highlight( QSettings &settings )
{
    settings.beginGroup( "highlight" );

    _ui->spinAltitudeASL   ->setHighlighted( settings.value( "altitude_asl"    , 0 ).toBool() );
    _ui->spinAltitudeAGL   ->setHighlighted( settings.value( "altitude_agl"    , 0 ).toBool() );
    _ui->spinAirspeed      ->setHighlighted( settings.value( "airspeed"        , 0 ).toBool() );
    _ui->spinIAS           ->setHighlighted( settings.value( "ias"             , 0 ).toBool() );
    _ui->spinClimbRate     ->setHighlighted( settings.value( "climb_rate"      , 0 ).toBool() );
    _ui->spinMachNumber    ->setHighlighted( settings.value( "mach_number"     , 0 ).toBool() );
    _ui->spinRollAngle     ->setHighlighted( settings.value( "roll_angle"      , 0 ).toBool() );
    _ui->spinPitchAngle    ->setHighlighted( settings.value( "pitch_angle"     , 0 ).toBool() );
    _ui->spinHeading       ->setHighlighted( settings.value( "heading"         , 0 ).toBool() );
    _ui->spinAngleOfAttack ->setHighlighted( settings.value( "angle_of_attack" , 0 ).toBool() );
    _ui->spinSideslipAngle ->setHighlighted( settings.value( "sideslip_angle"  , 0 ).toBool() );
    _ui->spinClimbAngle    ->setHighlighted( settings.value( "climb_angle"     , 0 ).toBool() );
    _ui->spinTrackAngle    ->setHighlighted( settings.value( "track_angle"     , 0 ).toBool() );
    _ui->spinRollRate      ->setHighlighted( settings.value( "roll_rate"       , 0 ).toBool() );
    _ui->spinPitchRate     ->setHighlighted( settings.value( "pitch_rate"      , 0 ).toBool() );
    _ui->spinYawRate       ->setHighlighted( settings.value( "yaw_rate"        , 0 ).toBool() );
    _ui->spinTurnRate      ->setHighlighted( settings.value( "turn_rate"       , 0 ).toBool() );
    _ui->spinGx            ->setHighlighted( settings.value( "gx"              , 0 ).toBool() );
    _ui->spinGy            ->setHighlighted( settings.value( "gy"              , 0 ).toBool() );
    _ui->spinGz            ->setHighlighted( settings.value( "gz"              , 0 ).toBool() );
    _ui->spinMaxGz         ->setHighlighted( settings.value( "max_gz"          , 0 ).toBool() );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::settingsRead_UnitCombos( QSettings &settings )
{
    settings.beginGroup( "unit_combos" );

    _ui->comboAltitudeASL   ->setCurrentIndex( settings.value( "altitude_asl"    , 1 ).toInt() );
    _ui->comboAltitudeAGL   ->setCurrentIndex( settings.value( "altitude_agl"    , 1 ).toInt() );
    _ui->comboAirspeed      ->setCurrentIndex( settings.value( "airspeed"        , 4 ).toInt() );
    _ui->comboIAS           ->setCurrentIndex( settings.value( "ias"             , 4 ).toInt() );
    _ui->comboClimbRate     ->setCurrentIndex( settings.value( "climb_rate"      , 1 ).toInt() );
    _ui->comboMachNumber    ->setCurrentIndex( settings.value( "mach_number"     , 0 ).toInt() );
    _ui->comboRollAngle     ->setCurrentIndex( settings.value( "roll_angle"      , 1 ).toInt() );
    _ui->comboPitchAngle    ->setCurrentIndex( settings.value( "pitch_angle"     , 1 ).toInt() );
    _ui->comboHeading       ->setCurrentIndex( settings.value( "heading"         , 1 ).toInt() );
    _ui->comboAngleOfAttack ->setCurrentIndex( settings.value( "angle_of_attack" , 1 ).toInt() );
    _ui->comboSideslipAngle ->setCurrentIndex( settings.value( "sideslip_angle"  , 1 ).toInt() );
    _ui->comboClimbAngle    ->setCurrentIndex( settings.value( "climb_angle"     , 1 ).toInt() );
    _ui->comboTrackAngle    ->setCurrentIndex( settings.value( "track_angle"     , 1 ).toInt() );
    _ui->comboRollRate      ->setCurrentIndex( settings.value( "roll_rate"       , 1 ).toInt() );
    _ui->comboPitchRate     ->setCurrentIndex( settings.value( "pitch_rate"      , 1 ).toInt() );
    _ui->comboYawRate       ->setCurrentIndex( settings.value( "yaw_rate"        , 1 ).toInt() );
    _ui->comboTurnRate      ->setCurrentIndex( settings.value( "turn_rate"       , 1 ).toInt() );
    _ui->comboGx            ->setCurrentIndex( settings.value( "gx"              , 0 ).toInt() );
    _ui->comboGy            ->setCurrentIndex( settings.value( "gy"              , 0 ).toInt() );
    _ui->comboGz            ->setCurrentIndex( settings.value( "gz"              , 0 ).toInt() );
    _ui->comboMaxGz         ->setCurrentIndex( settings.value( "max_gz"          , 0 ).toInt() );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::settingsSave()
{
    QSettings settings( SIM_ORG_NAME, SIM_APP_NAME );

    settings.beginGroup( "dock_widget_data" );

    settingsSave_Highlight( settings );
    settingsSave_UnitCombos( settings );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::settingsSave_Highlight( QSettings &settings )
{
    settings.beginGroup( "highlight" );

    settings.setValue( "altitude_asl"    , _ui->spinAltitudeASL   ->isHighlighted() ? 1 : 0 );
    settings.setValue( "altitude_agl"    , _ui->spinAltitudeAGL   ->isHighlighted() ? 1 : 0 );
    settings.setValue( "airspeed"        , _ui->spinAirspeed      ->isHighlighted() ? 1 : 0 );
    settings.setValue( "ias"             , _ui->spinIAS           ->isHighlighted() ? 1 : 0 );
    settings.setValue( "climb_rate"      , _ui->spinClimbRate     ->isHighlighted() ? 1 : 0 );
    settings.setValue( "mach_number"     , _ui->spinMachNumber    ->isHighlighted() ? 1 : 0 );
    settings.setValue( "roll_angle"      , _ui->spinRollAngle     ->isHighlighted() ? 1 : 0 );
    settings.setValue( "pitch_angle"     , _ui->spinPitchAngle    ->isHighlighted() ? 1 : 0 );
    settings.setValue( "heading"         , _ui->spinHeading       ->isHighlighted() ? 1 : 0 );
    settings.setValue( "angle_of_attack" , _ui->spinAngleOfAttack ->isHighlighted() ? 1 : 0 );
    settings.setValue( "sideslip_angle"  , _ui->spinSideslipAngle ->isHighlighted() ? 1 : 0 );
    settings.setValue( "climb_angle"     , _ui->spinClimbAngle    ->isHighlighted() ? 1 : 0 );
    settings.setValue( "track_angle"     , _ui->spinTrackAngle    ->isHighlighted() ? 1 : 0 );
    settings.setValue( "roll_rate"       , _ui->spinRollRate      ->isHighlighted() ? 1 : 0 );
    settings.setValue( "pitch_rate"      , _ui->spinPitchRate     ->isHighlighted() ? 1 : 0 );
    settings.setValue( "yaw_rate"        , _ui->spinYawRate       ->isHighlighted() ? 1 : 0 );
    settings.setValue( "turn_rate"       , _ui->spinTurnRate      ->isHighlighted() ? 1 : 0 );
    settings.setValue( "gx"              , _ui->spinGx            ->isHighlighted() ? 1 : 0 );
    settings.setValue( "gy"              , _ui->spinGy            ->isHighlighted() ? 1 : 0 );
    settings.setValue( "gz"              , _ui->spinGz            ->isHighlighted() ? 1 : 0 );
    settings.setValue( "max_gz"          , _ui->spinMaxGz         ->isHighlighted() ? 1 : 0 );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::settingsSave_UnitCombos( QSettings &settings )
{
    settings.beginGroup( "unit_combos" );

    settings.setValue( "altitude_asl"    , _ui->comboAltitudeASL   ->currentIndex() );
    settings.setValue( "altitude_agl"    , _ui->comboAltitudeAGL   ->currentIndex() );
    settings.setValue( "airspeed"        , _ui->comboAirspeed      ->currentIndex() );
    settings.setValue( "ias"             , _ui->comboIAS           ->currentIndex() );
    settings.setValue( "climb_rate"      , _ui->comboClimbRate     ->currentIndex() );
    settings.setValue( "mach_number"     , _ui->comboMachNumber    ->currentIndex() );
    settings.setValue( "roll_angle"      , _ui->comboRollAngle     ->currentIndex() );
    settings.setValue( "pitch_angle"     , _ui->comboPitchAngle    ->currentIndex() );
    settings.setValue( "heading"         , _ui->comboHeading       ->currentIndex() );
    settings.setValue( "angle_of_attack" , _ui->comboAngleOfAttack ->currentIndex() );
    settings.setValue( "sideslip_angle"  , _ui->comboSideslipAngle ->currentIndex() );
    settings.setValue( "climb_angle"     , _ui->comboClimbAngle    ->currentIndex() );
    settings.setValue( "track_angle"     , _ui->comboTrackAngle    ->currentIndex() );
    settings.setValue( "roll_rate"       , _ui->comboRollRate      ->currentIndex() );
    settings.setValue( "pitch_rate"      , _ui->comboPitchRate     ->currentIndex() );
    settings.setValue( "yaw_rate"        , _ui->comboYawRate       ->currentIndex() );
    settings.setValue( "turn_rate"       , _ui->comboTurnRate      ->currentIndex() );
    settings.setValue( "gx"              , _ui->comboGx            ->currentIndex() );
    settings.setValue( "gy"              , _ui->comboGy            ->currentIndex() );
    settings.setValue( "gz"              , _ui->comboGz            ->currentIndex() );
    settings.setValue( "max_gz"          , _ui->comboMaxGz         ->currentIndex() );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboAltitudeASL_currentIndexChanged( int /*index*/ )
{
    setAltitudeASL( _altitude_asl );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboAltitudeAGL_currentIndexChanged( int /*index*/ )
{
    setAltitudeAGL( _altitude_agl );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboAirspeed_currentIndexChanged( int /*index*/ )
{
    setAirspeed( _airspeed );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboIAS_currentIndexChanged( int /*index*/ )
{
    setIAS( _ias );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboClimbRate_currentIndexChanged( int /*index*/ )
{
    setClimbRate( _climbRate );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboMachNumber_currentIndexChanged( int /*index*/ )
{
    setMachNumber( _machNumber );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboRollAngle_currentIndexChanged( int /*index*/ )
{
    setRollAngle( _rollAngle );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboPitchAngle_currentIndexChanged( int /*index*/ )
{
    setPitchAngle( _pitchAngle );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboHeading_currentIndexChanged( int /*index*/ )
{
    setHeading( _heading );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboAngleOfAttack_currentIndexChanged( int /*index*/ )
{
    setAngleOfAttack( _angleOfAttack );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboSideslipAngle_currentIndexChanged( int /*index*/ )
{
    setSideslipAngle( _sideslipAngle );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboClimbAngle_currentIndexChanged( int /*index*/ )
{
    setClimbAngle( _climbAngle );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboTrackAngle_currentIndexChanged( int /*index*/ )
{
    setTrackAngle( _trackAngle );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboRollRate_currentIndexChanged( int /*index*/ )
{
    setRollRate( _rollRate );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboPitchRate_currentIndexChanged( int /*index*/ )
{
    setPitchRate( _pitchRate );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboYawRate_currentIndexChanged( int /*index*/ )
{
    setYawRate( _yawRate );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboTurnRate_currentIndexChanged( int /*index*/ )
{
    setTurnRate( _turnRate );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboGx_currentIndexChanged( int /*index*/ )
{
    setGx( _Gx );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboGy_currentIndexChanged( int /*index*/ )
{
    setGy( _Gy );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboGz_currentIndexChanged( int /*index*/ )
{
    setGz( _Gz );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboMinGz_currentIndexChanged( int /*index*/ )
{
    setGz( _Gz );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_comboMaxGz_currentIndexChanged( int /*index*/ )
{
    setGz( _Gz );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetData::on_buttonResetGz_clicked()
{
    _minGz = _Gz;
    _maxGz = _Gz;

    _ui->spinMinGz->setValue( _ui->comboMinGz->convert( _minGz ) );
    _ui->spinMaxGz->setValue( _ui->comboMaxGz->convert( _maxGz ) );
}
