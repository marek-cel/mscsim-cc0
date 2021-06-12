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
 ******************************************************************************/

#include <gui/DialogMass.h>
#include <ui_DialogMass.h>

#include <gui/Aircrafts.h>

////////////////////////////////////////////////////////////////////////////////

DialogMass::DialogMass( QWidget *parent ) :
    QDialog ( parent ),
    _ui ( new Ui::DialogMass ),

    _type ( -1 ),

    _pilot_1 ( 0.0 ),
    _pilot_2 ( 0.0 ),
    _fuel_tank_1 ( 0.0 ),
    _fuel_tank_2 ( 0.0 ),
    _fuel_tank_3 ( 0.0 ),
    _fuel_tank_4 ( 0.0 ),
    _fuel_tank_5 ( 0.0 ),
    _fuel_tank_6 ( 0.0 ),
    _fuel_tank_7 ( 0.0 ),
    _fuel_tank_8 ( 0.0 ),
    _cabin ( 0.0 ),
    _trunk ( 0.0 ),
    _slung ( 0.0 )
{
    _ui->setupUi( this );

    _ui->spinBoxTotal->setHighlightColor( QColor( 0xff, 0x0, 0x0 ) );
    _ui->spinBoxTotal->setToggleOnDblClick( false );

    settingsRead();
}

////////////////////////////////////////////////////////////////////////////////

DialogMass::~DialogMass()
{
    settingsSave();

    DELPTR( _ui );
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::readData()
{
    _ui->spinBoxPilot_1->setValue( _ui->comboBoxPilot_1->convert( _pilot_1 ) );
    _ui->spinBoxPilot_2->setValue( _ui->comboBoxPilot_2->convert( _pilot_2 ) );

    _ui->spinBoxFuelTank_1->setValue( _ui->comboBoxFuelTank_1->convert( _fuel_tank_1 ) );
    _ui->spinBoxFuelTank_2->setValue( _ui->comboBoxFuelTank_2->convert( _fuel_tank_2 ) );
    _ui->spinBoxFuelTank_3->setValue( _ui->comboBoxFuelTank_3->convert( _fuel_tank_3 ) );
    _ui->spinBoxFuelTank_4->setValue( _ui->comboBoxFuelTank_4->convert( _fuel_tank_4 ) );
    _ui->spinBoxFuelTank_5->setValue( _ui->comboBoxFuelTank_5->convert( _fuel_tank_5 ) );
    _ui->spinBoxFuelTank_6->setValue( _ui->comboBoxFuelTank_6->convert( _fuel_tank_6 ) );
    _ui->spinBoxFuelTank_7->setValue( _ui->comboBoxFuelTank_7->convert( _fuel_tank_7 ) );
    _ui->spinBoxFuelTank_8->setValue( _ui->comboBoxFuelTank_8->convert( _fuel_tank_8 ) );

    _ui->spinBoxCabin->setValue( _ui->comboBoxCabin->convert( _cabin ) );
    _ui->spinBoxTrunk->setValue( _ui->comboBoxTrunk->convert( _trunk ) );
    _ui->spinBoxSlung->setValue( _ui->comboBoxSlung->convert( _slung ) );

    updateResults();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::saveData()
{
    _pilot_1 = _ui->comboBoxPilot_1->invert( _ui->spinBoxPilot_1->value() );
    _pilot_2 = _ui->comboBoxPilot_2->invert( _ui->spinBoxPilot_2->value() );

    _fuel_tank_1 = _ui->comboBoxFuelTank_1->invert( _ui->spinBoxFuelTank_1->value() );
    _fuel_tank_2 = _ui->comboBoxFuelTank_2->invert( _ui->spinBoxFuelTank_2->value() );
    _fuel_tank_3 = _ui->comboBoxFuelTank_3->invert( _ui->spinBoxFuelTank_3->value() );
    _fuel_tank_4 = _ui->comboBoxFuelTank_4->invert( _ui->spinBoxFuelTank_4->value() );
    _fuel_tank_5 = _ui->comboBoxFuelTank_5->invert( _ui->spinBoxFuelTank_5->value() );
    _fuel_tank_6 = _ui->comboBoxFuelTank_6->invert( _ui->spinBoxFuelTank_6->value() );
    _fuel_tank_7 = _ui->comboBoxFuelTank_7->invert( _ui->spinBoxFuelTank_7->value() );
    _fuel_tank_8 = _ui->comboBoxFuelTank_8->invert( _ui->spinBoxFuelTank_8->value() );

    _cabin = _ui->comboBoxCabin->invert( _ui->spinBoxCabin->value() );
    _trunk = _ui->comboBoxTrunk->invert( _ui->spinBoxTrunk->value() );
    _slung = _ui->comboBoxSlung->invert( _ui->spinBoxSlung->value() );
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::setAircraftType( int type )
{
    Aircrafts::Masses masses = Aircrafts::instance()->getAircraft( type ).masses;

    if ( _type != type )
    {
        _type = type;

        _pilot_1 = masses.pilot_1.def;
        _pilot_2 = masses.pilot_2.def;

        _fuel_tank_1 = masses.fuel_tank_1.def;
        _fuel_tank_2 = masses.fuel_tank_2.def;
        _fuel_tank_3 = masses.fuel_tank_3.def;
        _fuel_tank_4 = masses.fuel_tank_4.def;
        _fuel_tank_5 = masses.fuel_tank_5.def;
        _fuel_tank_6 = masses.fuel_tank_6.def;
        _fuel_tank_7 = masses.fuel_tank_7.def;
        _fuel_tank_8 = masses.fuel_tank_8.def;

        _cabin = masses.cabin.def;
        _trunk = masses.trunk.def;
        _slung = masses.slung.def;
    }

    _ui->spinBoxPilot_1->setMaximum( _ui->comboBoxPilot_1->convert( masses.pilot_1.max ) );
    _ui->spinBoxPilot_2->setMaximum( _ui->comboBoxPilot_2->convert( masses.pilot_2.max ) );

    _ui->spinBoxFuelTank_1->setMaximum( _ui->comboBoxFuelTank_1->convert( masses.fuel_tank_1.max ) );
    _ui->spinBoxFuelTank_2->setMaximum( _ui->comboBoxFuelTank_2->convert( masses.fuel_tank_2.max ) );
    _ui->spinBoxFuelTank_3->setMaximum( _ui->comboBoxFuelTank_3->convert( masses.fuel_tank_3.max ) );
    _ui->spinBoxFuelTank_4->setMaximum( _ui->comboBoxFuelTank_4->convert( masses.fuel_tank_4.max ) );
    _ui->spinBoxFuelTank_5->setMaximum( _ui->comboBoxFuelTank_5->convert( masses.fuel_tank_5.max ) );
    _ui->spinBoxFuelTank_6->setMaximum( _ui->comboBoxFuelTank_6->convert( masses.fuel_tank_6.max ) );
    _ui->spinBoxFuelTank_7->setMaximum( _ui->comboBoxFuelTank_7->convert( masses.fuel_tank_7.max ) );
    _ui->spinBoxFuelTank_8->setMaximum( _ui->comboBoxFuelTank_8->convert( masses.fuel_tank_8.max ) );

    _ui->spinBoxCabin->setMaximum( _ui->comboBoxCabin->convert( masses.cabin.max ) );
    _ui->spinBoxTrunk->setMaximum( _ui->comboBoxTrunk->convert( masses.trunk.max ) );
    _ui->spinBoxSlung->setMaximum( _ui->comboBoxTrunk->convert( masses.slung.max ) );

    _ui->labelPilot_1->setVisible( masses.pilot_1.enabled );
    _ui->labelPilot_2->setVisible( masses.pilot_2.enabled );

    _ui->labelFuelTank_1->setVisible( masses.fuel_tank_1.enabled );
    _ui->labelFuelTank_2->setVisible( masses.fuel_tank_2.enabled );
    _ui->labelFuelTank_3->setVisible( masses.fuel_tank_3.enabled );
    _ui->labelFuelTank_4->setVisible( masses.fuel_tank_4.enabled );
    _ui->labelFuelTank_5->setVisible( masses.fuel_tank_5.enabled );
    _ui->labelFuelTank_6->setVisible( masses.fuel_tank_6.enabled );
    _ui->labelFuelTank_7->setVisible( masses.fuel_tank_7.enabled );
    _ui->labelFuelTank_8->setVisible( masses.fuel_tank_8.enabled );

    _ui->labelCabin->setVisible( masses.cabin.enabled );
    _ui->labelTrunk->setVisible( masses.trunk.enabled );
    _ui->labelSlung->setVisible( masses.slung.enabled );

    _ui->labelPilot_1->setText( masses.pilot_1.name + ":" );
    _ui->labelPilot_2->setText( masses.pilot_2.name + ":" );

    _ui->labelFuelTank_1->setText( masses.fuel_tank_1.name + ":" );
    _ui->labelFuelTank_2->setText( masses.fuel_tank_2.name + ":" );
    _ui->labelFuelTank_3->setText( masses.fuel_tank_3.name + ":" );
    _ui->labelFuelTank_4->setText( masses.fuel_tank_4.name + ":" );
    _ui->labelFuelTank_5->setText( masses.fuel_tank_5.name + ":" );
    _ui->labelFuelTank_6->setText( masses.fuel_tank_6.name + ":" );
    _ui->labelFuelTank_7->setText( masses.fuel_tank_7.name + ":" );
    _ui->labelFuelTank_8->setText( masses.fuel_tank_8.name + ":" );

    _ui->labelCabin->setText( masses.cabin.name + ":" );
    _ui->labelTrunk->setText( masses.trunk.name + ":" );
    _ui->labelSlung->setText( masses.slung.name + ":" );

    _ui->spinBoxPilot_1->setVisible( masses.pilot_1.enabled );
    _ui->spinBoxPilot_2->setVisible( masses.pilot_2.enabled );

    _ui->spinBoxFuelTank_1->setVisible( masses.fuel_tank_1.enabled );
    _ui->spinBoxFuelTank_2->setVisible( masses.fuel_tank_2.enabled );
    _ui->spinBoxFuelTank_3->setVisible( masses.fuel_tank_3.enabled );
    _ui->spinBoxFuelTank_4->setVisible( masses.fuel_tank_4.enabled );
    _ui->spinBoxFuelTank_5->setVisible( masses.fuel_tank_5.enabled );
    _ui->spinBoxFuelTank_6->setVisible( masses.fuel_tank_6.enabled );
    _ui->spinBoxFuelTank_7->setVisible( masses.fuel_tank_7.enabled );
    _ui->spinBoxFuelTank_8->setVisible( masses.fuel_tank_8.enabled );

    _ui->spinBoxCabin->setVisible( masses.cabin.enabled );
    _ui->spinBoxTrunk->setVisible( masses.trunk.enabled );
    _ui->spinBoxSlung->setVisible( masses.slung.enabled );

    _ui->comboBoxPilot_1->setVisible( masses.pilot_1.enabled );
    _ui->comboBoxPilot_2->setVisible( masses.pilot_2.enabled );

    _ui->comboBoxFuelTank_1->setVisible( masses.fuel_tank_1.enabled );
    _ui->comboBoxFuelTank_2->setVisible( masses.fuel_tank_2.enabled );
    _ui->comboBoxFuelTank_3->setVisible( masses.fuel_tank_3.enabled );
    _ui->comboBoxFuelTank_4->setVisible( masses.fuel_tank_4.enabled );
    _ui->comboBoxFuelTank_5->setVisible( masses.fuel_tank_5.enabled );
    _ui->comboBoxFuelTank_6->setVisible( masses.fuel_tank_6.enabled );
    _ui->comboBoxFuelTank_7->setVisible( masses.fuel_tank_7.enabled );
    _ui->comboBoxFuelTank_8->setVisible( masses.fuel_tank_8.enabled );

    _ui->comboBoxCabin->setVisible( masses.cabin.enabled );
    _ui->comboBoxTrunk->setVisible( masses.trunk.enabled );
    _ui->comboBoxSlung->setVisible( masses.slung.enabled );

    readData();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::settingsRead()
{
    QSettings settings( SIM_ORG_NAME, SIM_APP_NAME );

    settings.beginGroup( "dialog_mass" );

    restoreGeometry( settings.value( "geometry" ).toByteArray() );

    _type = settings.value( "aircraft_type", -1 ).toInt();

    settingsRead_UnitCombos( settings ); // before mass data !!!
    settingsRead_MassData( settings );


    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::settingsRead_MassData( QSettings &settings )
{
    settings.beginGroup( "mass_data" );

    _pilot_1 = settings.value( "pilot_1", 0.0 ).toDouble();
    _pilot_2 = settings.value( "pilot_2", 0.0 ).toDouble();

    _fuel_tank_1 = settings.value( "fuel_tank_1", 0.0 ).toDouble();
    _fuel_tank_2 = settings.value( "fuel_tank_2", 0.0 ).toDouble();
    _fuel_tank_3 = settings.value( "fuel_tank_3", 0.0 ).toDouble();
    _fuel_tank_4 = settings.value( "fuel_tank_4", 0.0 ).toDouble();
    _fuel_tank_5 = settings.value( "fuel_tank_5", 0.0 ).toDouble();
    _fuel_tank_6 = settings.value( "fuel_tank_6", 0.0 ).toDouble();
    _fuel_tank_7 = settings.value( "fuel_tank_7", 0.0 ).toDouble();
    _fuel_tank_8 = settings.value( "fuel_tank_8", 0.0 ).toDouble();

    _cabin = settings.value( "cabin", 0.0 ).toDouble();
    _trunk = settings.value( "trunk", 0.0 ).toDouble();
    _slung = settings.value( "slung", 0.0 ).toDouble();

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::settingsRead_UnitCombos( QSettings &settings )
{
    settings.beginGroup( "unit_combos" );

    _ui->comboBoxPilot_1->setCurrentIndex( settings.value( "pilot_1", 0 ).toInt() );
    _ui->comboBoxPilot_2->setCurrentIndex( settings.value( "pilot_2", 0 ).toInt() );

    _ui->comboBoxFuelTank_1->setCurrentIndex( settings.value( "fuel_tank_1", 0 ).toInt() );
    _ui->comboBoxFuelTank_2->setCurrentIndex( settings.value( "fuel_tank_2", 0 ).toInt() );
    _ui->comboBoxFuelTank_3->setCurrentIndex( settings.value( "fuel_tank_3", 0 ).toInt() );
    _ui->comboBoxFuelTank_4->setCurrentIndex( settings.value( "fuel_tank_4", 0 ).toInt() );
    _ui->comboBoxFuelTank_5->setCurrentIndex( settings.value( "fuel_tank_5", 0 ).toInt() );
    _ui->comboBoxFuelTank_6->setCurrentIndex( settings.value( "fuel_tank_6", 0 ).toInt() );
    _ui->comboBoxFuelTank_7->setCurrentIndex( settings.value( "fuel_tank_7", 0 ).toInt() );
    _ui->comboBoxFuelTank_8->setCurrentIndex( settings.value( "fuel_tank_8", 0 ).toInt() );

    _ui->comboBoxCabin->setCurrentIndex( settings.value( "cabin", 0 ).toInt() );
    _ui->comboBoxTrunk->setCurrentIndex( settings.value( "trunk", 0 ).toInt() );
    _ui->comboBoxSlung->setCurrentIndex( settings.value( "slung", 0 ).toInt() );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::settingsSave()
{
    QSettings settings( SIM_ORG_NAME, SIM_APP_NAME );

    settings.beginGroup( "dialog_mass" );

    settings.setValue( "geometry" , saveGeometry() );

    settings.setValue( "aircraft_type", _type );

    settingsSave_MassData( settings );
    settingsSave_UnitCombos( settings );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::settingsSave_MassData( QSettings &settings )
{
    settings.beginGroup( "mass_data" );

    settings.setValue( "pilot_1", _pilot_1 );
    settings.setValue( "pilot_2", _pilot_2 );

    settings.setValue( "fuel_tank_1", _fuel_tank_1 );
    settings.setValue( "fuel_tank_2", _fuel_tank_2 );
    settings.setValue( "fuel_tank_3", _fuel_tank_3 );
    settings.setValue( "fuel_tank_4", _fuel_tank_4 );
    settings.setValue( "fuel_tank_5", _fuel_tank_5 );
    settings.setValue( "fuel_tank_6", _fuel_tank_6 );
    settings.setValue( "fuel_tank_7", _fuel_tank_7 );
    settings.setValue( "fuel_tank_8", _fuel_tank_8 );

    settings.setValue( "cabin", _cabin );
    settings.setValue( "trunk", _trunk );
    settings.setValue( "slung", _slung );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::settingsSave_UnitCombos( QSettings &settings )
{
    settings.beginGroup( "unit_combos" );

    settings.setValue( "pilot_1", _ui->comboBoxPilot_1->currentIndex() );
    settings.setValue( "pilot_2", _ui->comboBoxPilot_2->currentIndex() );

    settings.setValue( "fuel_tank_1", _ui->comboBoxFuelTank_1->currentIndex() );
    settings.setValue( "fuel_tank_2", _ui->comboBoxFuelTank_2->currentIndex() );
    settings.setValue( "fuel_tank_3", _ui->comboBoxFuelTank_3->currentIndex() );
    settings.setValue( "fuel_tank_4", _ui->comboBoxFuelTank_4->currentIndex() );
    settings.setValue( "fuel_tank_5", _ui->comboBoxFuelTank_5->currentIndex() );
    settings.setValue( "fuel_tank_6", _ui->comboBoxFuelTank_6->currentIndex() );
    settings.setValue( "fuel_tank_7", _ui->comboBoxFuelTank_7->currentIndex() );
    settings.setValue( "fuel_tank_8", _ui->comboBoxFuelTank_8->currentIndex() );

    settings.setValue( "cabin", _ui->comboBoxCabin->currentIndex() );
    settings.setValue( "trunk", _ui->comboBoxTrunk->currentIndex() );
    settings.setValue( "slung", _ui->comboBoxSlung->currentIndex() );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::updateResults()
{
    Aircrafts::Masses masses = Aircrafts::instance()->getAircraft( _type ).masses;

    double m_e  = masses.empty;
    double mtow = masses.mtow;

    _ui->spinBoxMTOW->setValue( _ui->comboBoxMTOW->convert( mtow ) );

    _ui->spinBoxTotal->setHighlighted( false );

    if ( m_e > 0.0 )
    {
        double m_t = m_e;

        if ( masses.pilot_1     .enabled ) m_t += _ui->comboBoxPilot_1    ->invert( _ui->spinBoxPilot_1    ->value() );
        if ( masses.pilot_2     .enabled ) m_t += _ui->comboBoxPilot_2    ->invert( _ui->spinBoxPilot_2    ->value() );
        if ( masses.fuel_tank_1 .enabled ) m_t += _ui->comboBoxFuelTank_1 ->invert( _ui->spinBoxFuelTank_1 ->value() );
        if ( masses.fuel_tank_2 .enabled ) m_t += _ui->comboBoxFuelTank_2 ->invert( _ui->spinBoxFuelTank_2 ->value() );
        if ( masses.fuel_tank_3 .enabled ) m_t += _ui->comboBoxFuelTank_3 ->invert( _ui->spinBoxFuelTank_3 ->value() );
        if ( masses.fuel_tank_4 .enabled ) m_t += _ui->comboBoxFuelTank_4 ->invert( _ui->spinBoxFuelTank_4 ->value() );
        if ( masses.fuel_tank_5 .enabled ) m_t += _ui->comboBoxFuelTank_5 ->invert( _ui->spinBoxFuelTank_5 ->value() );
        if ( masses.fuel_tank_6 .enabled ) m_t += _ui->comboBoxFuelTank_6 ->invert( _ui->spinBoxFuelTank_6 ->value() );
        if ( masses.fuel_tank_7 .enabled ) m_t += _ui->comboBoxFuelTank_7 ->invert( _ui->spinBoxFuelTank_7 ->value() );
        if ( masses.fuel_tank_8 .enabled ) m_t += _ui->comboBoxFuelTank_8 ->invert( _ui->spinBoxFuelTank_8 ->value() );
        if ( masses.cabin       .enabled ) m_t += _ui->comboBoxCabin      ->invert( _ui->spinBoxCabin      ->value() );
        if ( masses.trunk       .enabled ) m_t += _ui->comboBoxTrunk      ->invert( _ui->spinBoxTrunk      ->value() );
        if ( masses.slung       .enabled ) m_t += _ui->comboBoxSlung      ->invert( _ui->spinBoxSlung      ->value() );

        _ui->spinBoxTotal->setValue( _ui->comboBoxTotal->convert( m_t ) );
        _ui->spinBoxTotal->setHighlighted( m_t > mtow );
    }
    else
    {
        _ui->spinBoxTotal->setValue( 0.0 );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_comboBoxPilot_1_currentIndexChanged( int )
{
    double mass_kg = _ui->comboBoxPilot_1->invertPrev( _ui->spinBoxPilot_1->value() );

    Aircrafts::Masses::Mass mass = Aircrafts::instance()->getAircraft( _type ).masses.pilot_1;
    _ui->spinBoxPilot_1->setMaximum( _ui->comboBoxPilot_1->convert( mass.max ) );
    _ui->spinBoxPilot_1->setValue( _ui->comboBoxPilot_1->convert( mass_kg ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_comboBoxPilot_2_currentIndexChanged( int )
{
    double mass_kg = _ui->comboBoxPilot_1->invertPrev( _ui->spinBoxPilot_2->value() );

    Aircrafts::Masses::Mass mass = Aircrafts::instance()->getAircraft( _type ).masses.pilot_2;
    _ui->spinBoxPilot_2->setMaximum( _ui->comboBoxPilot_2->convert( mass.max ) );
    _ui->spinBoxPilot_2->setValue( _ui->comboBoxPilot_2->convert( mass_kg ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_comboBoxFuelTank_1_currentIndexChanged( int )
{
    double mass_kg = _ui->comboBoxFuelTank_1->invertPrev( _ui->spinBoxFuelTank_1->value() );

    Aircrafts::Masses::Mass mass = Aircrafts::instance()->getAircraft( _type ).masses.fuel_tank_1;
    _ui->spinBoxFuelTank_1->setMaximum( _ui->comboBoxFuelTank_1->convert( mass.max ) );
    _ui->spinBoxFuelTank_1->setValue( _ui->comboBoxFuelTank_1->convert( mass_kg ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_comboBoxFuelTank_2_currentIndexChanged( int )
{
    double mass_kg = _ui->comboBoxFuelTank_2->invertPrev( _ui->spinBoxFuelTank_2->value() );

    Aircrafts::Masses::Mass mass = Aircrafts::instance()->getAircraft( _type ).masses.fuel_tank_2;
    _ui->spinBoxFuelTank_2->setMaximum( _ui->comboBoxFuelTank_2->convert( mass.max ) );
    _ui->spinBoxFuelTank_2->setValue( _ui->comboBoxFuelTank_2->convert( mass_kg ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_comboBoxFuelTank_3_currentIndexChanged( int )
{
    double mass_kg = _ui->comboBoxFuelTank_3->invertPrev( _ui->spinBoxFuelTank_3->value() );

    Aircrafts::Masses::Mass mass = Aircrafts::instance()->getAircraft( _type ).masses.fuel_tank_3;
    _ui->spinBoxFuelTank_3->setMaximum( _ui->comboBoxFuelTank_3->convert( mass.max ) );
    _ui->spinBoxFuelTank_3->setValue( _ui->comboBoxFuelTank_3->convert( mass_kg ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_comboBoxFuelTank_4_currentIndexChanged( int )
{
    double mass_kg = _ui->comboBoxFuelTank_4->invertPrev( _ui->spinBoxFuelTank_4->value() );

    Aircrafts::Masses::Mass mass = Aircrafts::instance()->getAircraft( _type ).masses.fuel_tank_4;
    _ui->spinBoxFuelTank_4->setMaximum( _ui->comboBoxFuelTank_4->convert( mass.max ) );
    _ui->spinBoxFuelTank_4->setValue( _ui->comboBoxFuelTank_4->convert( mass_kg ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_comboBoxFuelTank_5_currentIndexChanged( int )
{
    double mass_kg = _ui->comboBoxFuelTank_5->invertPrev( _ui->spinBoxFuelTank_5->value() );

    Aircrafts::Masses::Mass mass = Aircrafts::instance()->getAircraft( _type ).masses.fuel_tank_5;
    _ui->spinBoxFuelTank_5->setMaximum( _ui->comboBoxFuelTank_5->convert( mass.max ) );
    _ui->spinBoxFuelTank_5->setValue( _ui->comboBoxFuelTank_5->convert( mass_kg ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_comboBoxFuelTank_6_currentIndexChanged( int )
{
    double mass_kg = _ui->comboBoxFuelTank_6->invertPrev( _ui->spinBoxFuelTank_6->value() );

    Aircrafts::Masses::Mass mass = Aircrafts::instance()->getAircraft( _type ).masses.fuel_tank_6;
    _ui->spinBoxFuelTank_6->setMaximum( _ui->comboBoxFuelTank_6->convert( mass.max ) );
    _ui->spinBoxFuelTank_6->setValue( _ui->comboBoxFuelTank_6->convert( mass_kg ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_comboBoxFuelTank_7_currentIndexChanged( int )
{
    double mass_kg = _ui->comboBoxFuelTank_7->invertPrev( _ui->spinBoxFuelTank_7->value() );

    Aircrafts::Masses::Mass mass = Aircrafts::instance()->getAircraft( _type ).masses.fuel_tank_7;
    _ui->spinBoxFuelTank_7->setMaximum( _ui->comboBoxFuelTank_7->convert( mass.max ) );
    _ui->spinBoxFuelTank_7->setValue( _ui->comboBoxFuelTank_7->convert( mass_kg ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_comboBoxFuelTank_8_currentIndexChanged( int )
{
    double mass_kg = _ui->comboBoxFuelTank_8->invertPrev( _ui->spinBoxFuelTank_8->value() );

    Aircrafts::Masses::Mass mass = Aircrafts::instance()->getAircraft( _type ).masses.fuel_tank_8;
    _ui->spinBoxFuelTank_8->setMaximum( _ui->comboBoxFuelTank_8->convert( mass.max ) );
    _ui->spinBoxFuelTank_8->setValue( _ui->comboBoxFuelTank_8->convert( mass_kg ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_comboBoxCabin_currentIndexChanged( int )
{
    double mass_kg = _ui->comboBoxCabin->invertPrev( _ui->spinBoxCabin->value() );

    Aircrafts::Masses::Mass mass = Aircrafts::instance()->getAircraft( _type ).masses.cabin;
    _ui->spinBoxCabin->setMaximum( _ui->comboBoxCabin->convert( mass.max ) );
    _ui->spinBoxCabin->setValue( _ui->comboBoxCabin->convert( mass_kg ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_comboBoxTrunk_currentIndexChanged( int )
{
    double mass_kg = _ui->comboBoxTrunk->invertPrev( _ui->spinBoxTrunk->value() );

    Aircrafts::Masses::Mass mass = Aircrafts::instance()->getAircraft( _type ).masses.trunk;
    _ui->spinBoxTrunk->setMaximum( _ui->comboBoxTrunk->convert( mass.max ) );
    _ui->spinBoxTrunk->setValue( _ui->comboBoxTrunk->convert( mass_kg ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_comboBoxSlung_currentIndexChanged( int )
{
    double mass_kg = _ui->comboBoxSlung->invertPrev( _ui->spinBoxSlung->value() );

    Aircrafts::Masses::Mass mass = Aircrafts::instance()->getAircraft( _type ).masses.slung;
    _ui->spinBoxSlung->setMaximum( _ui->comboBoxSlung->convert( mass.max ) );
    _ui->spinBoxSlung->setValue( _ui->comboBoxSlung->convert( mass_kg ) );
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_spinBoxPilot_1_valueChanged( double /*arg1*/ )
{
    updateResults();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_spinBoxPilot_2_valueChanged( double /*arg1*/ )
{
    updateResults();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_spinBoxFuelTank_1_valueChanged( double /*arg1*/ )
{
    updateResults();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_spinBoxFuelTank_2_valueChanged( double /*arg1*/ )
{
    updateResults();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_spinBoxFuelTank_3_valueChanged( double /*arg1*/ )
{
    updateResults();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_spinBoxFuelTank_4_valueChanged( double /*arg1*/ )
{
    updateResults();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_spinBoxFuelTank_5_valueChanged( double /*arg1*/ )
{
    updateResults();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_spinBoxFuelTank_6_valueChanged( double /*arg1*/ )
{
    updateResults();
}

void DialogMass::on_spinBoxFuelTank_7_valueChanged( double /*arg1*/ )
{
    updateResults();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_spinBoxFuelTank_8_valueChanged( double /*arg1*/ )
{
    updateResults();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_spinBoxCabin_valueChanged( double /*arg1*/ )
{
    updateResults();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_spinBoxTrunk_valueChanged( double /*arg1*/ )
{
    updateResults();
}

////////////////////////////////////////////////////////////////////////////////

void DialogMass::on_spinBoxSlung_valueChanged( double /*arg1*/ )
{
    updateResults();
}
