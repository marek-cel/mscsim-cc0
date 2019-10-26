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

#include <fdm/utils/fdm_Units.h>
#include <fdm/utils/fdm_WGS84.h>

#include <gui/Aircrafts.h>
#include <gui/Locations.h>

#include <gui/DialogTime.h>

#include <gui/gui_Defines.h>

////////////////////////////////////////////////////////////////////////////////

DialogInit::DialogInit( QWidget *parent ) :
    QDialog ( parent ),
    _ui ( new Ui::DialogInit ),

    _typeIndex ( 0 ),

    _lat ( 0.0f ),
    _lon ( 0.0f ),
    _alt ( 0.0f ),
    _psi ( 0.0f ),
    _ias ( 0.0f ),

    _engine ( true )
{
    _ui->setupUi( this );

    for ( int i = 0; i < Aircrafts::instance()->getCount(); i++ )
    {
        _ui->comboAircrafts->addItem( QIcon(), Aircrafts::instance()->getAircraft( i ).name );
    }

    for ( int i = 0; i < Locations::instance()->getCount(); i++ )
    {
        _ui->comboLocations->addItem( QIcon(), Locations::instance()->getLocation( i ).name );
    }

    settingsRead();
}

////////////////////////////////////////////////////////////////////////////////

DialogInit::~DialogInit()
{
    settingsSave();

    DELPTR( _ui );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::readData()
{
    _ui->comboAircrafts->setCurrentIndex( _typeIndex );
    _ui->comboLocations->setCurrentIndex( -1 );

    _ui->checkBoxOnFinal->setEnabled( false );
    _ui->checkBoxOnFinal->setChecked( false );

    _ui->spinDistance->setValue( 0.0 );

    _ui->spinInitLat->setValue( _ui->comboInitLat->convert( _lat ) );
    _ui->spinInitLon->setValue( _ui->comboInitLon->convert( _lon ) );
    _ui->spinInitAlt->setValue( _ui->comboInitAlt->convert( _alt ) );
    _ui->spinInitPsi->setValue( _ui->comboInitPsi->convert( _psi ) );
    _ui->spinInitIAS->setValue( _ui->comboInitIAS->convert( _ias ) );

    _ui->dateInit->setDate( _dateTime.date() );
    _ui->timeInit->setTime( _dateTime.time() );

    _ui->checkBoxEngineOn->setChecked( _engine );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::saveData()
{
    int typeIndexPrev = _typeIndex;

    _typeIndex = _ui->comboAircrafts->currentIndex();

    if ( _ui->checkBoxOnFinal->isChecked() && _ui->spinDistance->value() != 0.0 )
    {
        int index = _ui->comboLocations->currentIndex();

        if ( index >= 0 && index < Locations::instance()->getCount() )
        {
            double dist = _ui->comboDistance->invert( _ui->spinDistance->value() );

            fdm::Vector3 pos_bas( -dist, 0.0, 0.0 );

            double psi = _ui->comboInitPsi->invert( _ui->spinInitPsi->value() );

            fdm::Vector3 pos_ned = fdm::Matrix3x3( fdm::Angles( 0.0, 0.0, -psi ) ) * pos_bas;

            fdm::WGS84::Geo pos_geo;

            pos_geo.lat = _ui->comboInitLat->invert( _ui->spinInitLat->value() );
            pos_geo.lon = _ui->comboInitLon->invert( _ui->spinInitLon->value() );
            pos_geo.alt = 0.0;//Locations::instance()->getLocation( index ).elev;

            fdm::WGS84 wgs( pos_geo );

            fdm::Vector3 pos_wgs = wgs.getPos_WGS() + wgs.getNED2WGS() * pos_ned;

            wgs.setPos_WGS( pos_wgs );

            _lat = wgs.getPos_Geo().lat;
            _lon = wgs.getPos_Geo().lon;

            double slope = Locations::instance()->getLocation( index ).slope;

            if ( dist < 0.0 ) slope = 0.0;

            _alt = Locations::instance()->getLocation( index ).elev + dist * tan( slope );
        }
    }
    else
    {
        _lat = _ui->comboInitLat->invert( _ui->spinInitLat->value() );
        _lon = _ui->comboInitLon->invert( _ui->spinInitLon->value() );
        _alt = _ui->comboInitAlt->invert( _ui->spinInitAlt->value() );
    }

    _psi = _ui->comboInitPsi->invert( _ui->spinInitPsi->value() );
    _ias = _ui->comboInitIAS->invert( _ui->spinInitIAS->value() );

    _dateTime.setDate( _ui->dateInit->date() );
    _dateTime.setTime( _ui->timeInit->time() );

    _engine = _ui->checkBoxEngineOn->isChecked();

    if ( typeIndexPrev != _typeIndex )
    {
        emit typeIndexChanged( _typeIndex );
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

    _typeIndex = settings.value( "type_index", 0 ).toInt();

    if ( Locations::instance()->getCount() > 0 )
    {
        _lat = settings.value( "lat", Locations::instance()->getLocation( 0 ).lat ).toFloat();
        _lon = settings.value( "lon", Locations::instance()->getLocation( 0 ).lon ).toFloat();
        _alt = settings.value( "alt", Locations::instance()->getLocation( 0 ).alt ).toFloat();
        _psi = settings.value( "psi", Locations::instance()->getLocation( 0 ).hdg ).toFloat();
        _ias = settings.value( "ias", 0.0 ).toFloat();
    }
    else
    {
        _lat = settings.value( "lat", 0.0 ).toFloat();
        _lon = settings.value( "lon", 0.0 ).toFloat();
        _alt = settings.value( "alt", 0.0 ).toFloat();
        _psi = settings.value( "psi", 0.0 ).toFloat();
        _ias = settings.value( "ias", 0.0 ).toFloat();
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

    _dateTime.setDate( date );
    _dateTime.setTime( time );

    _engine = settings.value( "engine", 1 ).toInt() != 0;

    _ui->comboAircrafts->setCurrentIndex( _typeIndex );

    _ui->spinInitLat->setValue( _ui->comboInitLat->convert( _lat ) );
    _ui->spinInitLon->setValue( _ui->comboInitLon->convert( _lon ) );
    _ui->spinInitAlt->setValue( _ui->comboInitAlt->convert( _alt ) );
    _ui->spinInitPsi->setValue( _ui->comboInitPsi->convert( _psi ) );
    _ui->spinInitIAS->setValue( _ui->comboInitIAS->convert( _ias ) );

    _ui->dateInit->setDate( _dateTime.date() );
    _ui->timeInit->setTime( _dateTime.time() );

    _ui->checkBoxEngineOn->setChecked( _engine );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::settingsRead_UnitCombos( QSettings &settings )
{
    settings.beginGroup( "unit_combos" );

    _ui->comboDistance->setCurrentIndex( settings.value( "distance", 0 ).toInt() );

    _ui->comboInitLat->setCurrentIndex( settings.value( "lat", 1 ).toInt() );
    _ui->comboInitLon->setCurrentIndex( settings.value( "lon", 1 ).toInt() );
    _ui->comboInitAlt->setCurrentIndex( settings.value( "alt", 0 ).toInt() );
    _ui->comboInitPsi->setCurrentIndex( settings.value( "psi", 1 ).toInt() );
    _ui->comboInitIAS->setCurrentIndex( settings.value( "ias", 0 ).toInt() );

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

    settings.setValue( "type_index" , _typeIndex );

    settings.setValue( "lat", _lat );
    settings.setValue( "lon", _lon );
    settings.setValue( "alt", _alt );
    settings.setValue( "psi", _psi );
    settings.setValue( "ias", _ias );

    settings.setValue( "date_y", _dateTime.date().year()   );
    settings.setValue( "date_m", _dateTime.date().month()  );
    settings.setValue( "date_d", _dateTime.date().day()    );
    settings.setValue( "time_h", _dateTime.time().hour()   );
    settings.setValue( "time_m", _dateTime.time().minute() );

    settings.setValue( "engine", _engine ? 1 : 0 );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::settingsSave_UnitCombos( QSettings &settings )
{
    settings.beginGroup( "unit_combos" );

    settings.setValue( "distance", _ui->comboDistance->currentIndex() );

    settings.setValue( "lat", _ui->comboInitLat->currentIndex() );
    settings.setValue( "lon", _ui->comboInitLon->currentIndex() );
    settings.setValue( "alt", _ui->comboInitAlt->currentIndex() );
    settings.setValue( "psi", _ui->comboInitPsi->currentIndex() );
    settings.setValue( "ias", _ui->comboInitIAS->currentIndex() );

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

        _ui->spinInitLat->setValue( _ui->comboInitLat->convert( lat ) );
        _ui->spinInitLon->setValue( _ui->comboInitLon->convert( lon ) );
        _ui->spinInitAlt->setValue( _ui->comboInitAlt->convert( ( alt > 1.0e-6 ) ? alt : 0.0f ) );
        _ui->spinInitPsi->setValue( _ui->comboInitPsi->convert( hdg ) );

        if ( Locations::instance()->getLocation( index ).runway )
        {
            _ui->checkBoxOnFinal->setEnabled( true );
        }
        else
        {
            _ui->checkBoxOnFinal->setEnabled( false );
            _ui->checkBoxOnFinal->setChecked( false );
        }
    }
    else
    {
        _ui->checkBoxOnFinal->setEnabled( false );
        _ui->checkBoxOnFinal->setChecked( false );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_checkBoxOnFinal_toggled( bool checked )
{
    _ui->labelDistance->setEnabled( checked );
    _ui->spinDistance->setEnabled( checked );
    _ui->comboDistance->setEnabled( checked );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_spinInitLat_valueChanged( double /*arg1*/ )
{
    _ui->checkBoxOnFinal->setEnabled( false );
    _ui->checkBoxOnFinal->setChecked( false );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_spinInitLon_valueChanged( double /*arg1*/ )
{
    _ui->checkBoxOnFinal->setEnabled( false );
    _ui->checkBoxOnFinal->setChecked( false );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_spinInitAlt_valueChanged( double /*arg1*/ )
{
    _ui->checkBoxOnFinal->setEnabled( false );
    _ui->checkBoxOnFinal->setChecked( false );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_spinInitPsi_valueChanged( double /*arg1*/ )
{
    _ui->checkBoxOnFinal->setEnabled( false );
    _ui->checkBoxOnFinal->setChecked( false );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_comboDistance_currentIndexChanged( int )
{
    float value = _ui->comboDistance->invertPrev( _ui->spinDistance->value() );

    float max  = fdm::Units::nmi2m( 10.0 );
    float step = fdm::Units::nmi2m( 1.0 );

    _ui->spinDistance->setMinimum( -_ui->comboDistance->convert( max ) );
    _ui->spinDistance->setMaximum(  _ui->comboDistance->convert( max ) );

    _ui->spinDistance->setSingleStep( _ui->comboDistance->convert( step ) );

    _ui->spinDistance->setValue( _ui->comboDistance->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_comboInitLat_currentIndexChanged( int index )
{
    float value = _ui->comboInitLat->invertPrev( _ui->spinInitLat->value() );

    if ( index == 0 )
    {
        // rad
        _ui->spinInitLat->setDecimals( 8 );
        _ui->spinInitLat->setMinimum( -M_PI / 2.0 );
        _ui->spinInitLat->setMaximum(  M_PI / 2.0 );
    }
    else
    {
        // deg
        _ui->spinInitLat->setDecimals( 6 );
        _ui->spinInitLat->setMinimum( -90.0 );
        _ui->spinInitLat->setMaximum(  90.0 );
    }

    _ui->spinInitLat->setValue( _ui->comboInitLat->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_comboInitLon_currentIndexChanged( int index )
{
    float value = _ui->comboInitLon->invertPrev( _ui->spinInitLon->value() );

    if ( index == 0 )
    {
        // rad
        _ui->spinInitLon->setDecimals( 8 );
        _ui->spinInitLon->setMinimum( -M_PI );
        _ui->spinInitLon->setMaximum(  M_PI );
    }
    else
    {
        // deg
        _ui->spinInitLon->setDecimals( 6 );
        _ui->spinInitLon->setMinimum( -180.0 );
        _ui->spinInitLon->setMaximum(  180.0 );
    }

    _ui->spinInitLon->setValue( _ui->comboInitLon->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_comboInitAlt_currentIndexChanged( int /*index*/ )
{
    float value = _ui->comboInitAlt->invertPrev( _ui->spinInitAlt->value() );

    _ui->spinInitAlt->setValue( _ui->comboInitAlt->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_comboInitPsi_currentIndexChanged( int index )
{
    float value = _ui->comboInitPsi->invertPrev( _ui->spinInitPsi->value() );

    if ( index == 0 )
    {
        // rad
        _ui->spinInitPsi->setDecimals( 2 );
        _ui->spinInitPsi->setMaximum( 2.0 * M_PI );
    }
    else
    {
        // deg
        _ui->spinInitPsi->setDecimals( 0 );
        _ui->spinInitPsi->setMaximum( 360.0 );
    }

    _ui->spinInitPsi->setValue( _ui->comboInitPsi->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_comboInitIAS_currentIndexChanged( int /*index*/ )
{
    float value = _ui->comboInitIAS->invertPrev( _ui->spinInitIAS->value() );

    _ui->spinInitIAS->setValue( _ui->comboInitIAS->convert( value ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_pushButtonTime_clicked()
{
    QTime time_utc = _ui->timeInit->time();
    time_utc = DialogTime::getTimeUTC( _ui->spinInitLon->value(), time_utc, this );
    _ui->timeInit->setTime( time_utc );
}

////////////////////////////////////////////////////////////////////////////////

void DialogInit::on_checkBoxEngineOn_toggled( bool checked )
{
    _engine = checked;
}
