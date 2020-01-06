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

#include <gui/DialogEnvr.h>
#include <ui_DialogEnvr.h>

#include <cmath>

#include <cgi/cgi_Defines.h>
#include <gui/gui_Defines.h>

////////////////////////////////////////////////////////////////////////////////

DialogEnvr::DialogEnvr( QWidget *parent ) :
    QDialog ( parent ),
    _ui ( new Ui::DialogEnvr ),

    _temperature_0 ( 288.15 ),
    _pressure_0 ( 101325.0 ),

    _windDirection ( 0.0 ),
    _windSpeed     ( 0.0 ),
    _turbulence    ( 0.0 ),

    _windShear ( fdm::DataInp::Environment::None ),

    _visibility ( 0.0 ),

    _cloudsType ( Data::CGI::Environment::Clouds::Block )
{
    _ui->setupUi( this );

    double area_sq_m = M_PI * CGI_SKYDOME_RADIUS * CGI_SKYDOME_RADIUS;
    double area_sq_km = area_sq_m / 1000.0 / 1000.0;
    double max_clouds = 100.0 * CGI_CLOUDS_MAX_COUNT / area_sq_km;
    _ui->doubleSpinBoxCloudsBlockCount->setMaximum( max_clouds );

    memset( &_blockClouds, 0, sizeof(BlockClouds) );
    memset( &_layerClouds, 0, sizeof(LayerClouds) );

    _blockClouds.count = 0;
    _blockClouds.base_asl = 500.0;
    _blockClouds.thickness = 500.0;

    _layerClouds.cover = Data::CGI::Environment::Clouds::Data::Layer::SKC;
    _layerClouds.base_asl = 100.0;

    settingsRead();
}

////////////////////////////////////////////////////////////////////////////////

DialogEnvr::~DialogEnvr()
{
    settingsSave();

    DELPTR( _ui );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::readData()
{
    _ui->spinBoxSeaLevelTemp->setValue( _ui->comboSeaLevelTemp->convert( _temperature_0 ) );
    _ui->spinBoxSeaLevelPress->setValue( _ui->comboSeaLevelPress->convert( _pressure_0 ) );

    _ui->spinBoxWindDir->setValue( _ui->comboWindDir->convert( _windDirection ) );
    _ui->spinBoxWindSpeed->setValue( _ui->comboWindSpeed->convert( _windSpeed ) );
    _ui->sliderTurbulence->setValue( 100.0f * _turbulence );

    _ui->sliderVisibility->setValue( _visibility / 100.0f );

    if ( _cloudsType == Data::CGI::Environment::Clouds::Block )
    {
        _ui->radioButtonCloudsTypeBlock->setChecked( true );
    }
    else if ( _cloudsType == Data::CGI::Environment::Clouds::Layer )
    {
        _ui->radioButtonCloudsTypeLayer->setChecked( true );
    }

    double area_sq_m = M_PI * CGI_SKYDOME_RADIUS * CGI_SKYDOME_RADIUS;
    double area_sq_km = area_sq_m / 1000.0 / 1000.0;
    _ui->doubleSpinBoxCloudsBlockCount->setValue( 100.0 * _blockClouds.count / area_sq_km );
    _ui->spinBoxCloudsBlockBaseASL->setValue( _ui->comboCloudsBlockBaseASL->convert( _blockClouds.base_asl ) );
    _ui->spinBoxCloudsBlockThickness->setValue( _ui->comboCloudsBlockThickness->convert( _blockClouds.thickness ) );

    _ui->comboCloudsLayerCover->setCurrentIndex( _layerClouds.cover );
    _ui->spinBoxCloudsLayerBaseASL->setValue( _ui->comboCloudsLayerBaseASL->convert( _layerClouds.base_asl ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::saveData()
{
    _temperature_0 = _ui->comboSeaLevelTemp->invert( _ui->spinBoxSeaLevelTemp->value() );
    _pressure_0    = _ui->comboSeaLevelPress->invert( _ui->spinBoxSeaLevelPress->value() );

    _windDirection = _ui->comboWindDir->invert( _ui->spinBoxWindDir->value() );
    _windSpeed     = _ui->comboWindSpeed->invert( _ui->spinBoxWindSpeed->value() );
    _turbulence    = (double)_ui->sliderTurbulence->value() / 100.0;

    _visibility = 100.0f * _ui->sliderVisibility->value();

    if ( _ui->radioButtonCloudsTypeBlock->isChecked() )
        _cloudsType = Data::CGI::Environment::Clouds::Block;
    else
        _cloudsType = Data::CGI::Environment::Clouds::Layer;

    double area_sq_m = M_PI * CGI_SKYDOME_RADIUS * CGI_SKYDOME_RADIUS;
    double area_sq_km = area_sq_m / 1000.0 / 1000.0;
    _blockClouds.count     = _ui->doubleSpinBoxCloudsBlockCount->value() * area_sq_km / 100.0;
    _blockClouds.base_asl  = _ui->comboCloudsBlockBaseASL->invert( _ui->spinBoxCloudsBlockBaseASL->value() );
    _blockClouds.thickness = _ui->comboCloudsBlockThickness->invert( _ui->spinBoxCloudsBlockThickness->value() );

    _layerClouds.cover = intToCover( _ui->comboCloudsLayerCover->currentIndex() );
    _layerClouds.base_asl = _ui->comboCloudsLayerBaseASL->invert( _ui->spinBoxCloudsLayerBaseASL->value() );
}

////////////////////////////////////////////////////////////////////////////////

DialogEnvr::Cover DialogEnvr::intToCover( int index, Cover def )
{
    switch ( index )
    {
    case Data::CGI::Environment::Clouds::Data::Layer::SKC:
        return Data::CGI::Environment::Clouds::Data::Layer::SKC;
        break;

    case Data::CGI::Environment::Clouds::Data::Layer::FEW:
        return Data::CGI::Environment::Clouds::Data::Layer::FEW;
        break;

    case Data::CGI::Environment::Clouds::Data::Layer::SCT:
        return Data::CGI::Environment::Clouds::Data::Layer::SCT;
        break;

    case Data::CGI::Environment::Clouds::Data::Layer::BKN:
        return Data::CGI::Environment::Clouds::Data::Layer::BKN;
        break;

    case Data::CGI::Environment::Clouds::Data::Layer::OVC:
        return Data::CGI::Environment::Clouds::Data::Layer::OVC;
        break;
    }

    return def;
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::settingsRead()
{
    QSettings settings( SIM_ORG_NAME, SIM_APP_NAME );

    settings.beginGroup( "dialog_envr" );

    restoreGeometry( settings.value( "geometry" ).toByteArray() );

    settingsRead_EnvrData( settings );
    settingsRead_UnitCombos( settings );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::settingsRead_EnvrData( QSettings &settings )
{
    settings.beginGroup( "envr_data" );

    _temperature_0 = settings.value( "sea_level_temp"  , 288.15f   ).toFloat();
    _pressure_0    = settings.value( "sea_level_press" , 101325.0f ).toFloat();

    _windDirection = settings.value( "wind_dir"   , 0.0 ).toFloat();
    _windSpeed     = settings.value( "wind_speed" , 0.0 ).toFloat();
    _turbulence    = settings.value( "turbulence" , 0.0 ).toFloat();

    _visibility = settings.value( "visibility", CGI_SKYDOME_RADIUS ).toFloat();

    switch ( settings.value( "clouds_type", Data::CGI::Environment::Clouds::Block ).toInt() )
    {
    case Data::CGI::Environment::Clouds::Block:
        _cloudsType = Data::CGI::Environment::Clouds::Block;
        break;

    case Data::CGI::Environment::Clouds::Layer:
        _cloudsType = Data::CGI::Environment::Clouds::Layer;
        break;
    }

    _blockClouds.count     = settings.value( "clouds_block_count" , _blockClouds.count     ).toInt();
    _blockClouds.base_asl  = settings.value( "clouds_block_base"  , _blockClouds.base_asl  ).toFloat();
    _blockClouds.thickness = settings.value( "clouds_block_thick" , _blockClouds.thickness ).toFloat();

    _layerClouds.cover = intToCover( settings.value( "clouds_layer_cover",
                               Data::CGI::Environment::Clouds::Data::Layer::SKC ).toInt() );
    _layerClouds.base_asl  = settings.value( "clouds_layer_base"  , _layerClouds.base_asl  ).toFloat();

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::settingsRead_UnitCombos( QSettings &settings )
{
    settings.beginGroup( "unit_combos" );

    _ui->comboSeaLevelTemp->setCurrentIndex( settings.value( "sea_level_temp", 1 ).toInt() );
    _ui->comboSeaLevelPress->setCurrentIndex( settings.value( "sea_level_press", 1 ).toInt() );

    _ui->comboWindDir->setCurrentIndex( settings.value( "wind_dir", 1 ).toInt() );
    _ui->comboWindSpeed->setCurrentIndex( settings.value( "wind_speed", 0 ).toInt() );

    _ui->comboVisibility->setCurrentIndex( settings.value( "visibility", 2 ).toInt() );

    _ui->comboCloudsBlockBaseASL->setCurrentIndex( settings.value( "clouds_block_base", 0 ).toInt() );
    _ui->comboCloudsBlockThickness->setCurrentIndex( settings.value( "clouds_block_thick", 0 ).toInt() );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::settingsSave()
{
    QSettings settings( SIM_ORG_NAME, SIM_APP_NAME );

    settings.beginGroup( "dialog_envr" );

    settings.setValue( "geometry" , saveGeometry() );

    settingsSave_EnvrData( settings );
    settingsSave_UnitCombos( settings );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::settingsSave_EnvrData( QSettings &settings )
{
    settings.beginGroup( "envr_data" );

    settings.setValue( "sea_level_temp"  , _temperature_0 );
    settings.setValue( "sea_level_press" , _pressure_0 );

    settings.setValue( "wind_dir"   , _windDirection );
    settings.setValue( "wind_speed" , _windSpeed );
    settings.setValue( "turbulence" , _turbulence );

    settings.setValue( "visibility", _visibility );

    settings.setValue( "clouds_type", _cloudsType );

    settings.setValue( "clouds_block_count" , _blockClouds.count     );
    settings.setValue( "clouds_block_base"  , _blockClouds.base_asl  );
    settings.setValue( "clouds_block_thick" , _blockClouds.thickness );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::settingsSave_UnitCombos( QSettings &settings )
{
    settings.beginGroup( "unit_combos" );

    settings.setValue( "sea_level_temp"  , _ui->comboSeaLevelTemp->currentIndex() );
    settings.setValue( "sea_level_press" , _ui->comboSeaLevelPress->currentIndex() );

    settings.setValue( "wind_dir"   , _ui->comboWindDir->currentIndex() );
    settings.setValue( "wind_speed" , _ui->comboWindSpeed->currentIndex() );

    settings.setValue( "visibility", _ui->comboVisibility->currentIndex() );

    settings.setValue( "clouds_block_base"  , _ui->comboCloudsBlockBaseASL->currentIndex() );
    settings.setValue( "clouds_block_thick" , _ui->comboCloudsBlockThickness->currentIndex() );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_comboSeaLevelTemp_currentIndexChanged( int /*index*/ )
{
    float value = _ui->comboSeaLevelTemp->invertPrev( _ui->spinBoxSeaLevelTemp->value() );

    _ui->spinBoxSeaLevelTemp->setMinimum( _ui->comboSeaLevelTemp->convert( 273.15f - 50.0f ) );
    _ui->spinBoxSeaLevelTemp->setMaximum( _ui->comboSeaLevelTemp->convert( 273.15f + 50.0f ) );

    _ui->spinBoxSeaLevelTemp->setValue( _ui->comboSeaLevelTemp->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_comboSeaLevelPress_currentIndexChanged( int index )
{
    float value = _ui->comboSeaLevelPress->invertPrev( _ui->spinBoxSeaLevelPress->value() );

    if ( index == 0 )
    {
        _ui->spinBoxSeaLevelPress->setDecimals( 0 );
    }
    else if ( index == 2 )
    {
        _ui->spinBoxSeaLevelPress->setDecimals( 5 );
    }
    else if ( index == 3 )
    {
        _ui->spinBoxSeaLevelPress->setDecimals( 3 );
    }
    else
    {
        _ui->spinBoxSeaLevelPress->setDecimals( 2 );
    }

    _ui->spinBoxSeaLevelPress->setMinimum( _ui->comboSeaLevelPress->convert( 101325.0f - 5000.0f ) );
    _ui->spinBoxSeaLevelPress->setMaximum( _ui->comboSeaLevelPress->convert( 101325.0f + 5000.0f ) );

    _ui->spinBoxSeaLevelPress->setValue( _ui->comboSeaLevelPress->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_comboWindDir_currentIndexChanged( int index )
{
    float value = _ui->comboWindDir->invertPrev( _ui->spinBoxWindDir->value() );

    if ( index == 0 )
    {
        // rad
        _ui->spinBoxWindDir->setDecimals( 2 );
        _ui->spinBoxWindDir->setMaximum( 2.0 * M_PI );
    }
    else
    {
        // deg
        _ui->spinBoxWindDir->setDecimals( 0 );
        _ui->spinBoxWindDir->setMaximum( 360.0 );
    }

    _ui->spinBoxWindDir->setValue( _ui->comboWindDir->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_comboWindSpeed_currentIndexChanged( int /*index*/ )
{
    float value = _ui->comboWindSpeed->invertPrev( _ui->spinBoxWindSpeed->value() );

    _ui->spinBoxWindSpeed->setMaximum( _ui->comboWindSpeed->convert( 30.0f ) );
    _ui->spinBoxWindSpeed->setValue( _ui->comboWindSpeed->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_comboVisibility_currentIndexChanged( int index )
{
    float value = 100.0f * _ui->sliderVisibility->value();

    if ( index == 0 || index == 1 )
    {
        _ui->spinBoxVisibility->setDecimals( 0 );
    }
    else
    {
        _ui->spinBoxVisibility->setDecimals( 1 );
    }

    _ui->spinBoxVisibility->setMaximum( _ui->comboVisibility->convert( CGI_SKYDOME_RADIUS ) );
    _ui->spinBoxVisibility->setValue( _ui->comboVisibility->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_sliderTurbulence_valueChanged( int value )
{
    _ui->spinBoxTurbulence->setValue( value );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_sliderVisibility_valueChanged( int value )
{
    _ui->spinBoxVisibility->setValue( _ui->comboVisibility->convert( 100.0f * value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_comboCloudsBlockBaseASL_currentIndexChanged( int /*index*/ )
{
    float value = _ui->comboCloudsBlockBaseASL->invertPrev( _ui->spinBoxCloudsBlockBaseASL->value() );

    _ui->spinBoxCloudsBlockBaseASL->setMinimum( _ui->comboCloudsBlockBaseASL->convert( 0.0f ) );
    _ui->spinBoxCloudsBlockBaseASL->setMaximum( _ui->comboCloudsBlockBaseASL->convert( 10000.0f ) );
    _ui->spinBoxCloudsBlockBaseASL->setValue( _ui->comboCloudsBlockBaseASL->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_comboCloudsBlockThickness_currentIndexChanged( int /*index*/ )
{
    float value = _ui->comboCloudsBlockThickness->invertPrev( _ui->spinBoxCloudsBlockThickness->value() );

    _ui->spinBoxCloudsBlockThickness->setMinimum( _ui->comboCloudsBlockThickness->convert( 100.0f ) );
    _ui->spinBoxCloudsBlockThickness->setMaximum( _ui->comboCloudsBlockThickness->convert( 10000.0f ) );
    _ui->spinBoxCloudsBlockThickness->setValue( _ui->comboCloudsBlockThickness->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_radioButtonCloudsTypeBlock_clicked( bool checked )
{
    if ( checked )
    {
        _ui->stackedWidgetClouds->setCurrentIndex( 0 );
    }
    else
    {
        _ui->stackedWidgetClouds->setCurrentIndex( 1 );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_radioButtonCloudsTypeLayer_clicked( bool checked )
{
    if ( checked )
    {
        _ui->stackedWidgetClouds->setCurrentIndex( 1 );
    }
    else
    {
        _ui->stackedWidgetClouds->setCurrentIndex( 0 );
    }
}
