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

#include <gui/DialogInit.h>
#include <ui_DialogInit.h>

#include <math.h>

#include <gui/Aircrafts.h>
#include <gui/Locations.h>

#include <gui/gui_Defines.h>

////////////////////////////////////////////////////////////////////////////////

DialogInit::DialogInit( QWidget *parent ) :
    QDialog ( parent ),
    m_ui ( new Ui::DialogInit ),

    m_typeIndex ( 0 ),

    m_lat ( 0.0f ),
    m_lon ( 0.0f ),
    m_alt ( 0.0f ),
    m_psi ( 0.0f ),
    m_ias ( 0.0f ),

    m_engine ( true )
{
    m_ui->setupUi( this );

    for ( int i = 0; i < Aircrafts::instance()->getCount(); i++ )
    {
        m_ui->comboAircrafts->addItem( QIcon(), Aircrafts::instance()->getAircraft( i ).name );
    }

    for ( int i = 0; i < Locations::instance()->getCount(); i++ )
    {
        m_ui->comboLocations->addItem( QIcon(), Locations::instance()->getLocation( i ).name );
    }

    settingsRead();
}

////////////////////////////////////////////////////////////////////////////////

DialogInit::~DialogInit()
{
    settingsSave();

    if ( m_ui ) delete m_ui;
    m_ui = 0;
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::readData()
{
    m_ui->comboAircrafts->setCurrentIndex( m_typeIndex );
    m_ui->comboLocations->setCurrentIndex( -1 );

    m_ui->spinInitLat->setValue( m_ui->comboInitLat->convert( m_lat ) );
    m_ui->spinInitLon->setValue( m_ui->comboInitLon->convert( m_lon ) );
    m_ui->spinInitAlt->setValue( m_ui->comboInitAlt->convert( m_alt ) );
    m_ui->spinInitPsi->setValue( m_ui->comboInitPsi->convert( m_psi ) );
    m_ui->spinInitIAS->setValue( m_ui->comboInitIAS->convert( m_ias ) );

    m_ui->dateInit->setDate( m_dateTime.date() );
    m_ui->timeInit->setTime( m_dateTime.time() );

    m_ui->checkBoxEngineOn->setChecked( m_engine );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::saveData()
{
    int typeIndexPrev = m_typeIndex;

    m_typeIndex = m_ui->comboAircrafts->currentIndex();

    m_lat = m_ui->comboInitLat->invert( m_ui->spinInitLat->value() );
    m_lon = m_ui->comboInitLon->invert( m_ui->spinInitLon->value() );
    m_alt = m_ui->comboInitAlt->invert( m_ui->spinInitAlt->value() );
    m_psi = m_ui->comboInitPsi->invert( m_ui->spinInitPsi->value() );
    m_ias = m_ui->comboInitIAS->invert( m_ui->spinInitIAS->value() );

    m_dateTime.setDate( m_ui->dateInit->date() );
    m_dateTime.setTime( m_ui->timeInit->time() );

    m_engine = m_ui->checkBoxEngineOn->isChecked();

    if ( typeIndexPrev != m_typeIndex )
    {
        emit typeIndexChanged( m_typeIndex );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::settingsRead()
{
    QSettings settings( SIM_ORG_NAME, SIM_APP_NAME );

    settings.beginGroup( "dialog_init" );

    restoreGeometry( settings.value( "geometry" ).toByteArray() );

    settingsRead_InitData( settings );
    settingsRead_UnitCombos( settings );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::settingsRead_InitData( QSettings &settings )
{
    settings.beginGroup( "init_data" );

    m_typeIndex = settings.value( "type_index", 0 ).toInt();

    if ( Locations::instance()->getCount() > 0 )
    {
        m_lat = settings.value( "lat", Locations::instance()->getLocation( 0 ).lat ).toFloat();
        m_lon = settings.value( "lon", Locations::instance()->getLocation( 0 ).lon ).toFloat();
        m_alt = settings.value( "alt", Locations::instance()->getLocation( 0 ).alt ).toFloat();
        m_psi = settings.value( "psi", Locations::instance()->getLocation( 0 ).hdg ).toFloat();
        m_ias = settings.value( "ias", 0.0 ).toFloat();
    }
    else
    {
        m_lat = settings.value( "lat", 0.0 ).toFloat();
        m_lon = settings.value( "lon", 0.0 ).toFloat();
        m_alt = settings.value( "alt", 0.0 ).toFloat();
        m_psi = settings.value( "psi", 0.0 ).toFloat();
        m_ias = settings.value( "ias", 0.0 ).toFloat();
    }

    short date_y = settings.value( "date_y", 2000 ).toInt();
    short date_m = settings.value( "date_m",    1 ).toInt();
    short date_d = settings.value( "date_d",    1 ).toInt();
    short time_h = settings.value( "time_h",   12 ).toInt();
    short time_m = settings.value( "time_m",    0 ).toInt();

    QDate date;
    QTime time;

    date.setYMD( date_y, date_m, date_d );
    time.setHMS( time_h, time_m, 0 );

    m_dateTime.setDate( date );
    m_dateTime.setTime( time );

    m_engine = settings.value( "engine", 1 ).toInt() != 0;

    m_ui->comboAircrafts->setCurrentIndex( m_typeIndex );

    m_ui->spinInitLat->setValue( m_ui->comboInitLat->convert( m_lat ) );
    m_ui->spinInitLon->setValue( m_ui->comboInitLon->convert( m_lon ) );
    m_ui->spinInitAlt->setValue( m_ui->comboInitAlt->convert( m_alt ) );
    m_ui->spinInitPsi->setValue( m_ui->comboInitPsi->convert( m_psi ) );
    m_ui->spinInitIAS->setValue( m_ui->comboInitIAS->convert( m_ias ) );

    m_ui->dateInit->setDate( m_dateTime.date() );
    m_ui->timeInit->setTime( m_dateTime.time() );

    m_ui->checkBoxEngineOn->setChecked( m_engine );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::settingsRead_UnitCombos( QSettings &settings )
{
    settings.beginGroup( "unit_combos" );

    m_ui->comboInitLat->setCurrentIndex( settings.value( "lat", 1 ).toInt() );
    m_ui->comboInitLon->setCurrentIndex( settings.value( "lon", 1 ).toInt() );
    m_ui->comboInitAlt->setCurrentIndex( settings.value( "alt", 0 ).toInt() );
    m_ui->comboInitPsi->setCurrentIndex( settings.value( "psi", 1 ).toInt() );
    m_ui->comboInitIAS->setCurrentIndex( settings.value( "ias", 0 ).toInt() );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::settingsSave()
{
    QSettings settings( SIM_ORG_NAME, SIM_APP_NAME );

    settings.beginGroup( "dialog_init" );

    settings.setValue( "geometry" , saveGeometry() );

    settingsSave_InitData( settings );
    settingsSave_UnitCombos( settings );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::settingsSave_InitData( QSettings &settings )
{
    settings.beginGroup( "init_data" );

    settings.setValue( "type_index" , m_typeIndex );

    settings.setValue( "lat", m_lat );
    settings.setValue( "lon", m_lon );
    settings.setValue( "alt", m_alt );
    settings.setValue( "psi", m_psi );
    settings.setValue( "ias", m_ias );

    settings.setValue( "date_y", m_dateTime.date().year()   );
    settings.setValue( "date_m", m_dateTime.date().month()  );
    settings.setValue( "date_d", m_dateTime.date().day()    );
    settings.setValue( "time_h", m_dateTime.time().hour()   );
    settings.setValue( "time_m", m_dateTime.time().minute() );

    settings.setValue( "engine", m_engine ? 1 : 0 );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::settingsSave_UnitCombos( QSettings &settings )
{
    settings.beginGroup( "unit_combos" );

    settings.setValue( "lat", m_ui->comboInitLat->currentIndex() );
    settings.setValue( "lon", m_ui->comboInitLon->currentIndex() );
    settings.setValue( "alt", m_ui->comboInitAlt->currentIndex() );
    settings.setValue( "psi", m_ui->comboInitPsi->currentIndex() );
    settings.setValue( "ias", m_ui->comboInitIAS->currentIndex() );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_comboLocations_currentIndexChanged( int index )
{
    if ( index > -1 )
    {
        float lat = Locations::instance()->getLocation( index ).lat;
        float lon = Locations::instance()->getLocation( index ).lon;
        float alt = Locations::instance()->getLocation( index ).alt;
        float hdg = Locations::instance()->getLocation( index ).hdg;

        m_ui->spinInitLat->setValue( m_ui->comboInitLat->convert( lat ) );
        m_ui->spinInitLon->setValue( m_ui->comboInitLon->convert( lon ) );
        m_ui->spinInitAlt->setValue( m_ui->comboInitAlt->convert( ( alt > 1.0e-6 ) ? alt : 0.0f ) );
        m_ui->spinInitPsi->setValue( m_ui->comboInitPsi->convert( hdg ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_comboInitLat_currentIndexChanged( int index )
{
    float value = m_ui->comboInitLat->invertPrev( m_ui->spinInitLat->value() );

    if ( index == 0 )
    {
        // rad
        m_ui->spinInitLat->setDecimals( 8 );
        m_ui->spinInitLat->setMinimum( -M_PI / 2.0 );
        m_ui->spinInitLat->setMaximum(  M_PI / 2.0 );
    }
    else
    {
        // deg
        m_ui->spinInitLat->setDecimals( 6 );
        m_ui->spinInitLat->setMinimum( -90.0 );
        m_ui->spinInitLat->setMaximum(  90.0 );
    }

    m_ui->spinInitLat->setValue( m_ui->comboInitLat->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_comboInitLon_currentIndexChanged( int index )
{
    float value = m_ui->comboInitLon->invertPrev( m_ui->spinInitLon->value() );

    if ( index == 0 )
    {
        // rad
        m_ui->spinInitLon->setDecimals( 8 );
        m_ui->spinInitLon->setMinimum( -M_PI );
        m_ui->spinInitLon->setMaximum(  M_PI );
    }
    else
    {
        // deg
        m_ui->spinInitLon->setDecimals( 6 );
        m_ui->spinInitLon->setMinimum( -180.0 );
        m_ui->spinInitLon->setMaximum(  180.0 );
    }

    m_ui->spinInitLon->setValue( m_ui->comboInitLon->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_comboInitAlt_currentIndexChanged( int /*index*/ )
{
    float value = m_ui->comboInitAlt->invertPrev( m_ui->spinInitAlt->value() );

    m_ui->spinInitAlt->setValue( m_ui->comboInitAlt->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_comboInitPsi_currentIndexChanged( int index )
{
    float value = m_ui->comboInitPsi->invertPrev( m_ui->spinInitPsi->value() );

    if ( index == 0 )
    {
        // rad
        m_ui->spinInitPsi->setDecimals( 2 );
        m_ui->spinInitPsi->setMaximum( 2.0 * M_PI );
    }
    else
    {
        // deg
        m_ui->spinInitPsi->setDecimals( 0 );
        m_ui->spinInitPsi->setMaximum( 360.0 );
    }

    m_ui->spinInitPsi->setValue( m_ui->comboInitPsi->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_comboInitIAS_currentIndexChanged( int /*index*/ )
{
    float value = m_ui->comboInitIAS->invertPrev( m_ui->spinInitIAS->value() );

    m_ui->spinInitIAS->setValue( m_ui->comboInitIAS->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_checkBoxEngineOn_toggled( bool checked )
{
    m_engine = checked;
}
