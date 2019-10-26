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

#include <gui/DockWidgetAuto.h>
#include <ui_DockWidgetAuto.h>

#include <QSettings>

#include <Common.h>
#include <Data.h>

#include <fdm/fdm_Exception.h>
#include <fdm/utils/fdm_Units.h>
#include <fdm/xml/fdm_XmlDoc.h>

#include <hid/hid_Manager.h>

////////////////////////////////////////////////////////////////////////////////

DockWidgetAuto::DockWidgetAuto( QWidget *parent ) :
    QDockWidget ( parent ),
    _ui ( new Ui::DockWidgetAuto ),

    _autopilot      ( NULLPTR ),
    _autopilot_c172 ( NULLPTR ),

    _altitude ( 100.0 ),
    _climbRate ( 0.0 ),

    _timerId ( 0 )
{
    _ui->setupUi( this );

    settingsRead();

    _timerId = startTimer( 1000.0 * GUI_TIME_STEP );
}

////////////////////////////////////////////////////////////////////////////////

DockWidgetAuto::~DockWidgetAuto()
{
    if ( _timerId ) killTimer( _timerId );

    settingsSave();

    DELPTR( _autopilot );

    DELPTR( _ui );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::init()
{
    try
    {
        if ( !_autopilot )
        {
            switch ( Data::get()->aircraftType )
            {
            case fdm::DataInp::C172:
                _autopilot = _autopilot_c172 = new fdm::C172_Autopilot();
                break;

            default:
                _autopilot = NULLPTR;
                break;
            }

            if ( _autopilot ) _autopilot->init();
        }
    }
    catch ( fdm::Exception &e )
    {
        Log::e() << e.getInfo() << std::endl;

        while ( e.hasCause() )
        {
            e = e.getCause();
            Log::e() << e.getInfo() << std::endl;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::stop()
{
    DELPTR( _autopilot );
    _autopilot_c172 = NULLPTR;
}

////////////////////////////////////////////////////////////////////////////////

double DockWidgetAuto::getAirspeed() const
{
    if ( _autopilot )
        return _autopilot->getAirspeed();

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

double DockWidgetAuto::getAltitude() const
{
    if ( _autopilot )
        return _autopilot->getAltitude();

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

double DockWidgetAuto::getCourse() const
{
    return _ui->spinBox_CRS->value();
}

////////////////////////////////////////////////////////////////////////////////

double DockWidgetAuto::getHeading() const
{
    if ( _autopilot )
        return _autopilot->getHeading();

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

double DockWidgetAuto::getFreqNav() const
{
    return _ui->spinBoxFreqActive->value();
}

////////////////////////////////////////////////////////////////////////////////

double DockWidgetAuto::getCmdRoll() const
{
    if ( _autopilot )
        return _autopilot->getCmdRoll();

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

double DockWidgetAuto::getCmdPitch() const
{
    if ( _autopilot )
        return _autopilot->getCmdPitch();

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

double DockWidgetAuto::getCtrlRoll() const
{
    if ( _autopilot )
        return _autopilot->getCtrlRoll();

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

double DockWidgetAuto::getCtrlPitch() const
{
    if ( _autopilot )
        return _autopilot->getCtrlPitch();

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

double DockWidgetAuto::getCtrlYaw() const
{
    if ( _autopilot )
        return _autopilot->getCtrlYaw();

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetAuto::isActiveAP() const
{
    if ( _autopilot )
        return _autopilot->isActiveAP();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetAuto::isActiveFD() const
{
    if ( _autopilot )
        return _autopilot->isActiveFD();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetAuto::isActiveYD() const
{
    if ( _autopilot )
        return _autopilot->isActiveYD();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetAuto::isActiveALT() const
{
    if ( _autopilot_c172 )
        return _autopilot_c172->isActiveALT();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetAuto::isActiveIAS() const
{
    if ( _autopilot_c172 )
        return _autopilot_c172->isActiveIAS();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetAuto::isActiveVS() const
{
    if ( _autopilot_c172 )
        return _autopilot_c172->isActiveVS();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetAuto::isActiveARM() const
{
    if ( _autopilot_c172 )
        return _autopilot_c172->isActiveARM();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetAuto::isActiveGS() const
{
    if ( _autopilot_c172 )
        return _autopilot_c172->isActiveGS();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetAuto::isActiveHDG() const
{
    if ( _autopilot_c172 )
        return _autopilot_c172->isActiveHDG();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetAuto::isActiveNAV() const
{
    if ( _autopilot_c172 )
        return _autopilot_c172->isActiveNAV();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetAuto::isActiveAPR() const
{
    if ( _autopilot_c172 )
        return _autopilot_c172->isActiveAPR();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetAuto::isActiveBC() const
{
    if ( _autopilot_c172 )
        return _autopilot_c172->isActiveBC();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::closeEvent( QCloseEvent *event )
{
    /////////////////////////////////
    QDockWidget::closeEvent( event );
    /////////////////////////////////

    emit closed();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::timerEvent( QTimerEvent *event )
{
    /////////////////////////////////
    QDockWidget::timerEvent( event );
    /////////////////////////////////

    if ( Data::get()->stateOut == fdm::DataOut::Idle )
    {
        updateIdle();
    }
    else if ( isWorking() )
    {
        updateWork();
    }
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetAuto::isWorking()
{
    return ( Data::get()->stateOut == fdm::DataOut::Working
          || Data::get()->stateOut == fdm::DataOut::Frozen );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::settingsRead()
{
    QSettings settings( SIM_ORG_NAME, SIM_APP_NAME );

    settings.beginGroup( "dock_widget_auto" );

    double freq_active  = settings.value( "freq_active"  , 108.0  ).toDouble();
    double freq_standby = settings.value( "freq_standby" , 117.95 ).toDouble();

    _ui->spinBoxFreqActive  ->setValue( freq_active  );
    _ui->spinBoxFreqStandby ->setValue( freq_standby );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::settingsSave()
{
    QSettings settings( SIM_ORG_NAME, SIM_APP_NAME );

    settings.beginGroup( "dock_widget_auto" );

    settings.setValue( "freq_active"  , _ui->spinBoxFreqActive  ->value() );
    settings.setValue( "freq_standby" , _ui->spinBoxFreqStandby ->value() );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::updateIdle()
{
    _ui->labelAP->setEnabled( false );
    _ui->labelFD->setEnabled( false );
    _ui->labelYD->setEnabled( false );

    _ui->labelALT->setEnabled( false );
    _ui->labelIAS->setEnabled( false );

    _ui->labelHDG->setEnabled( false );
    _ui->labelNAV->setEnabled( false );
    _ui->labelAPR->setEnabled( false );
    _ui->labelBC->setEnabled( false );

    _ui->labelNAV_ARM->setEnabled( false );
    _ui->labelAPR_ARM->setEnabled( false );

    _ui->labelSR->setEnabled( false );
    _ui->labelHB->setEnabled( false );

    _ui->labelTRIM->setEnabled( false );

    _ui->labelVS->setEnabled( false );
    _ui->labelARM->setEnabled( false );

    _altitude = fdm::Units::ft2m( 100.0 );
    _climbRate = 0.0;

    _ui->spinBox_CRS->setValue( 0.0 );
    _ui->spinBox_HDG->setValue( 0.0 );

    _ui->pushButtonShowALT->setChecked( true );
    _ui->spinBoxALT_VS->setValue( fdm::Units::m2ft( _altitude ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::updateWork()
{
    if ( _autopilot )
    {
        _ui->spinBoxALT_VS->setReadOnly( false );

        if ( _autopilot_c172 )
        {
            _autopilot_c172->update( GUI_TIME_STEP,
                                     Data::get()->ownship.roll,
                                     Data::get()->ownship.pitch,
                                     Data::get()->ownship.heading,
                                     Data::get()->ownship.altitude_asl,
                                     Data::get()->ownship.airspeed,
                                     Data::get()->ownship.turnRate,
                                     Data::get()->ownship.yawRate,
                                     Data::get()->ownship.climbRate,
                                     Data::get()->navigation.nav_distance,
                                     Data::get()->navigation.nav_deviation,
                                     Data::get()->navigation.nav_cdi != Data::Navigation::NONE,
                                     Data::get()->navigation.ils_gs_deviation,
                                     Data::get()->navigation.ils_gs_visible,
                                     _ui->pushButtonDN->isDown(),
                                     _ui->pushButtonUP->isDown() );

            if ( hid::Manager::instance()->getAP_Disc() )
            {
                _autopilot_c172->disengage();
            }

            _ui->labelAP->setEnabled( _autopilot_c172->getLampAP() );
            _ui->labelFD->setEnabled( _autopilot_c172->getLampFD() );
            _ui->labelYD->setEnabled( _autopilot_c172->getLampYD() );

            _ui->labelALT->setEnabled( _autopilot_c172->getLampALT() );
            _ui->labelIAS->setEnabled( _autopilot_c172->getLampIAS() );

            _ui->labelHDG->setEnabled( _autopilot_c172->getLampHDG() );
            _ui->labelNAV->setEnabled( _autopilot_c172->getLampNAV() );
            _ui->labelAPR->setEnabled( _autopilot_c172->getLampAPR() );
            _ui->labelBC->setEnabled( _autopilot_c172->getLampBC() );

            _ui->labelNAV_ARM->setEnabled( _autopilot_c172->getLampNAV_ARM() );
            _ui->labelAPR_ARM->setEnabled( _autopilot_c172->getLampAPR_ARM() );

            _ui->labelSR->setEnabled( _autopilot_c172->getLampSR() );
            _ui->labelHB->setEnabled( _autopilot_c172->getLampHB() );

            _ui->labelTRIM->setEnabled( _autopilot_c172->getLampTRIM() );

            _ui->labelVS->setEnabled( _autopilot_c172->getLampVS() );
            _ui->labelARM->setEnabled( _autopilot_c172->getLampARM() );

            if ( _ui->pushButtonShowALT->isChecked() )
                _ui->spinBoxALT_VS->setReadOnly( _autopilot_c172->isActiveALT() );
            else
                _ui->spinBoxALT_VS->setReadOnly( false );
        }

        if ( _ui->pushButtonDN->isDown() || _ui->pushButtonUP->isDown() )
        {
            _altitude  = _autopilot->getAltitude();
            _climbRate = _autopilot->getClimbRate();

            if ( _ui->pushButtonShowVS->isChecked() )
                _ui->spinBoxALT_VS->setValue( fdm::Units::mps2fpm( _climbRate ) );
            else
                _ui->spinBoxALT_VS->setValue( fdm::Units::m2ft( _altitude ) );
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonAP_clicked()
{
    if ( isWorking() )
    {
        if ( _autopilot_c172 ) _autopilot_c172->onPressedAP();
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonFD_clicked()
{
    if ( isWorking() )
    {
        if ( _autopilot_c172 )
        {
            if ( !_autopilot_c172->isActiveFD() )
                _autopilot_c172->setPitch( Data::get()->ownship.pitch );

            _autopilot_c172->onPressedFD();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonALT_clicked()
{
    if ( isWorking() )
    {
        if ( _autopilot_c172 )
        {
            if ( !_autopilot_c172->isActiveALT() )
                _altitude = Data::get()->ownship.altitude_asl;

            _autopilot_c172->setAltitude( _altitude );
            _autopilot_c172->onPressedALT();
        }

        if ( _ui->pushButtonShowALT->isChecked() )
        {
            _ui->spinBoxALT_VS->setValue( fdm::Units::m2ft( _altitude ) );
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonIAS_clicked()
{
    if ( isWorking() )
    {
        if ( _autopilot_c172 )
        {
            if ( !_autopilot_c172->isActiveIAS() )
                _autopilot_c172->setAirspeed( Data::get()->ownship.airspeed );

            _autopilot_c172->onPressedIAS();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonENG_clicked()
{
    if ( isWorking() )
    {
        if ( _autopilot_c172 )
        {
            if ( !_autopilot_c172->isActiveVS() )
            {
                _climbRate = Data::get()->ownship.climbRate;

                if ( _ui->pushButtonShowVS->isChecked() )
                    _climbRate = fdm::Units::fpm2mps( _ui->spinBoxALT_VS->value() );
            }

            _autopilot_c172->setClimbRate( _climbRate );
            _autopilot_c172->onPressedENG();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonARM_clicked()
{
    if ( isWorking() )
    {
        if ( _autopilot_c172 )
        {
            if ( !_autopilot_c172->isActiveARM() )
            {
                _altitude = Data::get()->ownship.altitude_asl;

                if ( _ui->pushButtonShowALT->isChecked() )
                    _altitude = fdm::Units::ft2m( _ui->spinBoxALT_VS->value() );
            }

            _autopilot_c172->setAltitude( _altitude );
            _autopilot_c172->onPressedARM();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonHDG_clicked()
{
    if ( isWorking() )
    {
        if ( _autopilot_c172 )
        {
            _autopilot_c172->setHeading( fdm::Units::deg2rad( _ui->spinBox_HDG->value() ) );
            _autopilot_c172->onPressedHDG();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonNAV_clicked()
{
    if ( isWorking() )
    {
        if ( _autopilot_c172 ) _autopilot_c172->onPressedNAV();
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonAPR_clicked()
{
    if ( isWorking() )
    {
        if ( _autopilot_c172 ) _autopilot_c172->onPressedAPR();
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonBC_clicked()
{
    if ( isWorking() )
    {
        if ( _autopilot_c172 ) _autopilot_c172->onPressedBC();
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonYD_clicked()
{
    if ( isWorking() )
    {
        if ( _autopilot_c172 ) _autopilot_c172->onPressedYD();
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonSoftRide_clicked()
{
    if ( isWorking() )
    {
        if ( _autopilot_c172 ) _autopilot_c172->onPressedSoftRide();
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonHalfBank_clicked()
{
    if ( isWorking() )
    {
        if ( _autopilot_c172 ) _autopilot_c172->onPressedHalfBank();
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonTest_pressed()
{
    if ( isWorking() )
    {
        if ( _autopilot_c172 ) _autopilot_c172->onPressedTest();
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonTest_released()
{
    if ( isWorking() )
    {
        if ( _autopilot_c172 ) _autopilot_c172->onReleasedTest();
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButton_CRS_clicked()
{


    if ( Data::get()->navigation.nav_cdi != Data::Navigation::NONE )
    {
        double bearing = Data::get()->navigation.nav_bearing;
        double bearing_rel = bearing - Data::get()->ownship.heading;

        if ( bearing_rel < -M_PI ) bearing_rel += 2.0 * M_PI;
        if ( bearing_rel >  M_PI ) bearing_rel -= 2.0 * M_PI;

        if ( bearing_rel < -M_PI_2 || M_PI_2 < bearing_rel )
            bearing += M_PI;

        double bearing_deg = floor( fdm::Units::rad2deg( bearing ) + 0.5 );

        while ( bearing_deg <   0.0 ) bearing_deg += 360.0;
        while ( bearing_deg > 360.0 ) bearing_deg -= 360.0;

        _ui->spinBox_CRS->setValue( bearing_deg );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButton_HDG_clicked()
{
    double heading = floor( fdm::Units::rad2deg( Data::get()->ownship.heading ) + 0.5 );
    _ui->spinBox_HDG->setValue( heading );
}


////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_spinBox_CRS_valueChanged( double arg1 )
{
    double psi = arg1;

    if ( psi < 0.0 || psi >= 360.0 )
    {
        if ( psi < 0.0 )
            psi += 360.0;
        else
            psi -= 360.0;

        _ui->spinBox_CRS->setValue( psi );
    }
    else
    {
        //if ( _autopilot ) _autopilot->setCourse( fdm::Units::deg2rad( psi ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_spinBox_HDG_valueChanged( double arg1 )
{
    double psi = arg1;

    if ( psi < 0.0 || psi >= 360.0 )
    {
        if ( psi < 0.0 )
            psi += 360.0;
        else
            psi -= 360.0;

        _ui->spinBox_HDG->setValue( psi );
    }
    else
    {
        if ( _autopilot ) _autopilot->setHeading( fdm::Units::deg2rad( psi ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_spinBoxALT_VS_editingFinished()
{
    if ( _autopilot )
    {
        double val = _ui->spinBoxALT_VS->value();

        if ( _ui->pushButtonShowVS->isChecked() )
        {
            _climbRate = fdm::Units::fpm2mps( val );
        }
        else if ( _ui->pushButtonShowALT->isChecked() )
        {
            _altitude = fdm::Units::ft2m( val );
        }

        _autopilot->setAltitude( _altitude );
        _autopilot->setClimbRate( _climbRate );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonShowVS_clicked( bool checked )
{
    if ( checked )
    {
        double climbRate = fdm::Units::mps2fpm( _climbRate );

        if ( _autopilot )
        {
            _ui->spinBoxALT_VS->setMinimum( fdm::Units::mps2fpm( _autopilot->getMinClimbRate() ) );
            _ui->spinBoxALT_VS->setMaximum( fdm::Units::mps2fpm( _autopilot->getMaxClimbRate() ) );
        }
        else
        {
            _ui->spinBoxALT_VS->setMinimum( -5000.0 );
            _ui->spinBoxALT_VS->setMaximum(  5000.0 );
        }

        _ui->spinBoxALT_VS->setSingleStep( 100.0 );
        _ui->spinBoxALT_VS->setValue( climbRate );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonShowALT_clicked( bool checked )
{
    if ( checked )
    {
        double altitude = fdm::Units::m2ft( _altitude );

        if ( _autopilot )
        {
            _ui->spinBoxALT_VS->setMinimum( fdm::Units::m2ft( _autopilot->getMinAltitude() ) );
            _ui->spinBoxALT_VS->setMaximum( fdm::Units::m2ft( _autopilot->getMaxAltitude() ) );
        }
        else
        {
            _ui->spinBoxALT_VS->setMinimum(   100.0 );
            _ui->spinBoxALT_VS->setMaximum( 50000.0 );
        }

        _ui->spinBoxALT_VS->setSingleStep( 100.0 );
        _ui->spinBoxALT_VS->setValue( altitude );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_spinBoxFreqStandby_editingFinished()
{
    double freq = 0.05 * (int)( 20.0 * _ui->spinBoxFreqStandby->value() );
    _ui->spinBoxFreqStandby->setValue( freq );
}


////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonSwitchFreq_clicked()
{
    double standby = _ui->spinBoxFreqStandby->value();
    double active  = _ui->spinBoxFreqActive->value();

    _ui->spinBoxFreqStandby->setValue( active );
    _ui->spinBoxFreqActive->setValue( standby );
}
