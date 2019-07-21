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

#include <gui/DialogEnvr.h>
#include <ui_DialogEnvr.h>

#include <math.h>

#include <cgi/cgi_Defines.h>
#include <gui/gui_Defines.h>

////////////////////////////////////////////////////////////////////////////////

DialogEnvr::DialogEnvr( QWidget *parent ) :
    QDialog ( parent ),
    m_ui ( new Ui::DialogEnvr ),

    m_temperature_0 ( 288.15 ),
    m_pressure_0 ( 101325.0 ),

    m_windDirection ( 0.0 ),
    m_windSpeed     ( 0.0 ),
    m_turbulence    ( 0.0 ),

    m_windShear ( fdm::DataInp::Environment::None ),

    m_visibility ( 0.0 ),

    m_cloudsType ( Data::Environment::Clouds::Block )
{
    m_ui->setupUi( this );

    double area_sq_m = M_PI * CGI_SKYDOME_RADIUS * CGI_SKYDOME_RADIUS;
    double area_sq_km = area_sq_m / 1000.0 / 1000.0;
    double max_clouds = 100.0 * CGI_CLOUDS_MAX_COUNT / area_sq_km;
    m_ui->doubleSpinBoxCloudsBlockCount->setMaximum( max_clouds );

    memset( &m_blockClouds, 0, sizeof(BlockClouds) );
    memset( &m_layerClouds, 0, sizeof(LayerClouds) );

    m_blockClouds.count = 0;
    m_blockClouds.base_asl = 500.0;
    m_blockClouds.thickness = 500.0;

    settingsRead();
}

////////////////////////////////////////////////////////////////////////////////

DialogEnvr::~DialogEnvr()
{
    settingsSave();

    if ( m_ui ) delete m_ui;
    m_ui = 0;
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::readData()
{
    m_ui->spinBoxSeaLevelTemp->setValue( m_ui->comboSeaLevelTemp->convert( m_temperature_0 ) );
    m_ui->spinBoxSeaLevelPress->setValue( m_ui->comboSeaLevelPress->convert( m_pressure_0 ) );

    m_ui->spinBoxWindDir->setValue( m_ui->comboWindDir->convert( m_windDirection ) );
    m_ui->spinBoxWindSpeed->setValue( m_ui->comboWindSpeed->convert( m_windSpeed ) );
    m_ui->sliderTurbulence->setValue( 100.0f * m_turbulence );

    m_ui->sliderVisibility->setValue( m_visibility / 100.0f );

    if ( m_cloudsType == Data::Environment::Clouds::Block )
    {
        m_ui->radioButtonCloudsTypeBlock->setChecked( true );
    }
    else if ( m_cloudsType == Data::Environment::Clouds::Layer )
    {
        m_ui->radioButtonCloudsTypeLayer->setChecked( true );
    }

    double area_sq_m = M_PI * CGI_SKYDOME_RADIUS * CGI_SKYDOME_RADIUS;
    double area_sq_km = area_sq_m / 1000.0 / 1000.0;
    m_ui->doubleSpinBoxCloudsBlockCount->setValue( 100.0 * m_blockClouds.count / area_sq_km );
    m_ui->spinBoxCloudsBlockBaseASL->setValue( m_ui->comboCloudsBlockBaseASL->convert( m_blockClouds.base_asl ) );
    m_ui->spinBoxCloudsBlockThickness->setValue( m_ui->comboCloudsBlockThickness->convert( m_blockClouds.thickness ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::saveData()
{
    m_temperature_0 = m_ui->comboSeaLevelTemp->invert( m_ui->spinBoxSeaLevelTemp->value() );
    m_pressure_0    = m_ui->comboSeaLevelPress->invert( m_ui->spinBoxSeaLevelPress->value() );

    m_windDirection = m_ui->comboWindDir->invert( m_ui->spinBoxWindDir->value() );
    m_windSpeed     = m_ui->comboWindSpeed->invert( m_ui->spinBoxWindSpeed->value() );
    m_turbulence    = (double)m_ui->sliderTurbulence->value() / 100.0;

    m_visibility = 100.0f * m_ui->sliderVisibility->value();

    m_cloudsType = m_ui->radioButtonCloudsTypeBlock->isChecked() ? Data::Environment::Clouds::Block : Data::Environment::Clouds::Layer;

    double area_sq_m = M_PI * CGI_SKYDOME_RADIUS * CGI_SKYDOME_RADIUS;
    double area_sq_km = area_sq_m / 1000.0 / 1000.0;
    m_blockClouds.count     = m_ui->doubleSpinBoxCloudsBlockCount->value() * area_sq_km / 100.0;
    m_blockClouds.base_asl  = m_ui->comboCloudsBlockBaseASL->invert( m_ui->spinBoxCloudsBlockBaseASL->value() );
    m_blockClouds.thickness = m_ui->comboCloudsBlockThickness->invert( m_ui->spinBoxCloudsBlockThickness->value() );

    m_layerClouds;
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

    m_temperature_0 = settings.value( "sea_level_temp"  , 288.15f   ).toFloat();
    m_pressure_0    = settings.value( "sea_level_press" , 101325.0f ).toFloat();

    m_windDirection = settings.value( "wind_dir"   , 0.0 ).toFloat();
    m_windSpeed     = settings.value( "wind_speed" , 0.0 ).toFloat();
    m_turbulence    = settings.value( "turbulence" , 0.0 ).toFloat();

    m_visibility = settings.value( "visibility", CGI_SKYDOME_RADIUS ).toFloat();

    switch ( settings.value( "clouds_type", Data::Environment::Clouds::Block ).toInt() )
    {
    case Data::Environment::Clouds::Block:
        m_cloudsType = Data::Environment::Clouds::Block;
        break;

    case Data::Environment::Clouds::Layer:
        m_cloudsType = Data::Environment::Clouds::Layer;
        break;
    }

    m_blockClouds.count     = settings.value( "clouds_block_count" , m_blockClouds.count     ).toInt();
    m_blockClouds.base_asl  = settings.value( "clouds_block_base"  , m_blockClouds.base_asl  ).toFloat();
    m_blockClouds.thickness = settings.value( "clouds_block_thick" , m_blockClouds.thickness ).toFloat();

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::settingsRead_UnitCombos( QSettings &settings )
{
    settings.beginGroup( "unit_combos" );

    m_ui->comboSeaLevelTemp->setCurrentIndex( settings.value( "sea_level_temp", 1 ).toInt() );
    m_ui->comboSeaLevelPress->setCurrentIndex( settings.value( "sea_level_press", 1 ).toInt() );

    m_ui->comboWindDir->setCurrentIndex( settings.value( "wind_dir", 1 ).toInt() );
    m_ui->comboWindSpeed->setCurrentIndex( settings.value( "wind_speed", 0 ).toInt() );

    m_ui->comboVisibility->setCurrentIndex( settings.value( "visibility", 2 ).toInt() );

    m_ui->comboCloudsBlockBaseASL->setCurrentIndex( settings.value( "clouds_block_base", 0 ).toInt() );
    m_ui->comboCloudsBlockThickness->setCurrentIndex( settings.value( "clouds_block_thick", 0 ).toInt() );

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

    settings.setValue( "sea_level_temp"  , m_temperature_0 );
    settings.setValue( "sea_level_press" , m_pressure_0 );

    settings.setValue( "wind_dir"   , m_windDirection );
    settings.setValue( "wind_speed" , m_windSpeed );
    settings.setValue( "turbulence" , m_turbulence );

    settings.setValue( "visibility", m_visibility );

    settings.setValue( "clouds_type", m_cloudsType );

    settings.setValue( "clouds_block_count" , m_blockClouds.count     );
    settings.setValue( "clouds_block_base"  , m_blockClouds.base_asl  );
    settings.setValue( "clouds_block_thick" , m_blockClouds.thickness );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::settingsSave_UnitCombos( QSettings &settings )
{
    settings.beginGroup( "unit_combos" );

    settings.setValue( "sea_level_temp"  , m_ui->comboSeaLevelTemp->currentIndex() );
    settings.setValue( "sea_level_press" , m_ui->comboSeaLevelPress->currentIndex() );

    settings.setValue( "wind_dir"   , m_ui->comboWindDir->currentIndex() );
    settings.setValue( "wind_speed" , m_ui->comboWindSpeed->currentIndex() );

    settings.setValue( "visibility", m_ui->comboVisibility->currentIndex() );

    settings.setValue( "clouds_block_base"  , m_ui->comboCloudsBlockBaseASL->currentIndex() );
    settings.setValue( "clouds_block_thick" , m_ui->comboCloudsBlockThickness->currentIndex() );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_comboSeaLevelTemp_currentIndexChanged( int /*index*/ )
{
    float value = m_ui->comboSeaLevelTemp->invertPrev( m_ui->spinBoxSeaLevelTemp->value() );

    m_ui->spinBoxSeaLevelTemp->setMinimum( m_ui->comboSeaLevelTemp->convert( 273.15f - 50.0f ) );
    m_ui->spinBoxSeaLevelTemp->setMaximum( m_ui->comboSeaLevelTemp->convert( 273.15f + 50.0f ) );

    m_ui->spinBoxSeaLevelTemp->setValue( m_ui->comboSeaLevelTemp->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_comboSeaLevelPress_currentIndexChanged( int index )
{
    float value = m_ui->comboSeaLevelPress->invertPrev( m_ui->spinBoxSeaLevelPress->value() );

    if ( index == 0 )
    {
        m_ui->spinBoxSeaLevelPress->setDecimals( 0 );
    }
    else if ( index == 2 )
    {
        m_ui->spinBoxSeaLevelPress->setDecimals( 5 );
    }
    else if ( index == 3 )
    {
        m_ui->spinBoxSeaLevelPress->setDecimals( 3 );
    }
    else
    {
        m_ui->spinBoxSeaLevelPress->setDecimals( 2 );
    }

    m_ui->spinBoxSeaLevelPress->setMinimum( m_ui->comboSeaLevelPress->convert( 101325.0f - 5000.0f ) );
    m_ui->spinBoxSeaLevelPress->setMaximum( m_ui->comboSeaLevelPress->convert( 101325.0f + 5000.0f ) );

    m_ui->spinBoxSeaLevelPress->setValue( m_ui->comboSeaLevelPress->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_comboWindDir_currentIndexChanged( int index )
{
    float value = m_ui->comboWindDir->invertPrev( m_ui->spinBoxWindDir->value() );

    if ( index == 0 )
    {
        // rad
        m_ui->spinBoxWindDir->setDecimals( 2 );
        m_ui->spinBoxWindDir->setMaximum( 2.0 * M_PI );
    }
    else
    {
        // deg
        m_ui->spinBoxWindDir->setDecimals( 0 );
        m_ui->spinBoxWindDir->setMaximum( 360.0 );
    }

    m_ui->spinBoxWindDir->setValue( m_ui->comboWindDir->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_comboWindSpeed_currentIndexChanged( int /*index*/ )
{
    float value = m_ui->comboWindSpeed->invertPrev( m_ui->spinBoxWindSpeed->value() );

    m_ui->spinBoxWindSpeed->setMaximum( m_ui->comboWindSpeed->convert( 30.0f ) );
    m_ui->spinBoxWindSpeed->setValue( m_ui->comboWindSpeed->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_comboVisibility_currentIndexChanged( int index )
{
    float value = 100.0f * m_ui->sliderVisibility->value();

    if ( index == 0 || index == 1 )
    {
        m_ui->spinBoxVisibility->setDecimals( 0 );
    }
    else
    {
        m_ui->spinBoxVisibility->setDecimals( 1 );
    }

    m_ui->spinBoxVisibility->setMaximum( m_ui->comboVisibility->convert( CGI_SKYDOME_RADIUS ) );
    m_ui->spinBoxVisibility->setValue( m_ui->comboVisibility->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_sliderTurbulence_valueChanged( int value )
{
    m_ui->spinBoxTurbulence->setValue( value );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_sliderVisibility_valueChanged( int value )
{
    m_ui->spinBoxVisibility->setValue( m_ui->comboVisibility->convert( 100.0f * value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_comboCloudsBlockBaseASL_currentIndexChanged( int /*index*/ )
{
    float value = m_ui->comboCloudsBlockBaseASL->invertPrev( m_ui->spinBoxCloudsBlockBaseASL->value() );

    m_ui->spinBoxCloudsBlockBaseASL->setMinimum( m_ui->comboCloudsBlockBaseASL->convert( 0.0f ) );
    m_ui->spinBoxCloudsBlockBaseASL->setMaximum( m_ui->comboCloudsBlockBaseASL->convert( 10000.0f ) );
    m_ui->spinBoxCloudsBlockBaseASL->setValue( m_ui->comboCloudsBlockBaseASL->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_comboCloudsBlockThickness_currentIndexChanged( int /*index*/ )
{
    float value = m_ui->comboCloudsBlockThickness->invertPrev( m_ui->spinBoxCloudsBlockThickness->value() );

    m_ui->spinBoxCloudsBlockThickness->setMinimum( m_ui->comboCloudsBlockThickness->convert( 100.0f ) );
    m_ui->spinBoxCloudsBlockThickness->setMaximum( m_ui->comboCloudsBlockThickness->convert( 10000.0f ) );
    m_ui->spinBoxCloudsBlockThickness->setValue( m_ui->comboCloudsBlockThickness->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_radioButtonCloudsTypeBlock_clicked( bool checked )
{
    if ( checked )
    {
        m_ui->stackedWidgetClouds->setCurrentIndex( 0 );
    }
    else
    {
        m_ui->stackedWidgetClouds->setCurrentIndex( 1 );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DialogEnvr::on_radioButtonCloudsTypeLayer_clicked( bool checked )
{
    if ( checked )
    {
        m_ui->stackedWidgetClouds->setCurrentIndex( 1 );
    }
    else
    {
        m_ui->stackedWidgetClouds->setCurrentIndex( 0 );
    }
}
