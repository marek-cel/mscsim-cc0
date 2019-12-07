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

#include <fdm/utils/fdm_Units.h>
#include <fdm/xml/fdm_XmlDoc.h>

#include <hid/hid_Manager.h>

////////////////////////////////////////////////////////////////////////////////

DockWidgetAuto::DockWidgetAuto( QWidget *parent ) :
    QDockWidget ( parent ),
    _ui ( new Ui::DockWidgetAuto ),
    _ap ( NULLPTR ),
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

    DELPTR( _ui );
}

////////////////////////////////////////////////////////////////////////////////

double DockWidgetAuto::getCourse() const
{
    return _ui->spinBoxCRS->value();
}

////////////////////////////////////////////////////////////////////////////////

double DockWidgetAuto::getFreqNav() const
{
    return _ui->spinBoxFreqActive->value();
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
    else if ( _ap->isWorking() )
    {
        updateWork();
    }
}

////////////////////////////////////////////////////////////////////////////////

double DockWidgetAuto::normalizeHeading( double heading )
{
    if      ( heading < 0.0 )
        heading += 360.0;
    else if ( heading >= 360.0 )
        heading -= 360.0;

    return heading;
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

    _ap->setAltitude( fdm::Units::ft2m( 100.0 ) );
    _ap->setClimbRate( 0.0 );

    _ui->spinBoxCRS->setValue( 0.0 );
    _ui->spinBoxHDG->setValue( 0.0 );

    _ui->pushButtonShowALT->setChecked( true );
    _ui->spinBoxALT_VS->setValue( fdm::Units::m2ft( _ap->getAltitude() ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::updateWork()
{
    _ap->update( GUI_TIME_STEP, _ui->pushButtonDN->isDown(), _ui->pushButtonUP->isDown() );

    _ui->spinBoxALT_VS->setReadOnly( _ap->isInited() );

    _ui->labelAP->setEnabled( _ap->getLampAP() );
    _ui->labelFD->setEnabled( _ap->getLampFD() );
    _ui->labelYD->setEnabled( _ap->getLampYD() );

    _ui->labelALT->setEnabled( _ap->getLampALT() );
    _ui->labelIAS->setEnabled( _ap->getLampIAS() );

    _ui->labelHDG->setEnabled( _ap->getLampHDG() );
    _ui->labelNAV->setEnabled( _ap->getLampNAV() );
    _ui->labelAPR->setEnabled( _ap->getLampAPR() );
    _ui->labelBC ->setEnabled( _ap->getLampBC() );

    _ui->labelNAV_ARM->setEnabled( _ap->getLampNAV_ARM() );
    _ui->labelAPR_ARM->setEnabled( _ap->getLampAPR_ARM() );

    _ui->labelSR->setEnabled( _ap->getLampSR() );
    _ui->labelHB->setEnabled( _ap->getLampHB() );

    _ui->labelTRIM->setEnabled( _ap->getLampTRIM() );

    _ui->labelVS ->setEnabled( _ap->getLampVS() );
    _ui->labelARM->setEnabled( _ap->getLampARM() );

    if ( _ui->pushButtonShowALT->isChecked() )
        _ui->spinBoxALT_VS->setReadOnly( _ap->isActiveALT() );
    else
        _ui->spinBoxALT_VS->setReadOnly( false );

    if ( _ui->pushButtonDN->isDown() || _ui->pushButtonUP->isDown() )
    {
        if ( _ui->pushButtonShowVS->isChecked() )
            _ui->spinBoxALT_VS->setValue( fdm::Units::mps2fpm( _ap->getClimbRate() ) );
        else
            _ui->spinBoxALT_VS->setValue( fdm::Units::m2ft( _ap->getAltitude() ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonAP_clicked()
{
    _ap->onPressedAP();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonFD_clicked()
{
    _ap->onPressedFD();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonALT_clicked()
{
    _ap->onPressedALT();

    if ( _ui->pushButtonShowALT->isChecked() )
        _ui->spinBoxALT_VS->setValue( fdm::Units::m2ft( _ap->getAltitude() ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonIAS_clicked()
{
    _ap->onPressedIAS();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonENG_clicked()
{
    _ap->onPressedENG();

    if ( _ui->pushButtonShowVS->isChecked() )
        _ap->setClimbRate( fdm::Units::fpm2mps( _ui->spinBoxALT_VS->value() ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonARM_clicked()
{
    _ap->onPressedARM();

    if ( _ui->pushButtonShowALT->isChecked() )
        _ap->setAltitude( fdm::Units::ft2m( _ui->spinBoxALT_VS->value() ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonHDG_clicked()
{
    _ap->onPressedHDG( fdm::Units::deg2rad( _ui->spinBoxHDG->value() ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonNAV_clicked()
{
    _ap->onPressedNAV( fdm::Units::deg2rad( _ui->spinBoxCRS->value() ) );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonAPR_clicked()
{
    _ap->onPressedAPR();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonBC_clicked()
{
    _ap->onPressedBC();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonYD_clicked()
{
    _ap->onPressedYD();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonSoftRide_clicked()
{
    _ap->onPressedSoftRide();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonHalfBank_clicked()
{
    _ap->onPressedHalfBank();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonTest_pressed()
{
    _ap->onPressedTest();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonTest_released()
{
    _ap->onReleasedTest();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonSetCRS_clicked()
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

        _ui->spinBoxCRS->setValue( bearing_deg );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonSetHDG_clicked()
{
    double heading = floor( fdm::Units::rad2deg( Data::get()->ownship.heading ) + 0.5 );
    _ui->spinBoxHDG->setValue( heading );
}


////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_spinBoxCRS_valueChanged( double arg1 )
{
    if ( arg1 < 0.0 || arg1 >= 360.0 )
    {
        _ui->spinBoxCRS->setValue( normalizeHeading( arg1 ) );
    }
    else
    {
        _ap->setCourse( fdm::Units::deg2rad( arg1 ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_spinBoxHDG_valueChanged( double arg1 )
{
    if ( arg1 < 0.0 || arg1 >= 360.0 )
    {
        _ui->spinBoxHDG->setValue( normalizeHeading( arg1 ) );
    }
    else
    {
        _ap->setHeading( fdm::Units::deg2rad( arg1 ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_spinBoxALT_VS_editingFinished()
{
    double val = _ui->spinBoxALT_VS->value();

    if ( _ui->pushButtonShowVS->isChecked() )
    {
        _ap->setClimbRate( fdm::Units::fpm2mps( val ) );
    }
    else if ( _ui->pushButtonShowALT->isChecked() )
    {
        _ap->setAltitude( fdm::Units::ft2m( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonShowVS_clicked( bool checked )
{
    if ( checked )
    {
        double climbRate = fdm::Units::mps2fpm( _ap->getClimbRate() );

        _ui->spinBoxALT_VS->setMinimum( fdm::Units::mps2fpm( _ap->getMinClimbRate() ) );
        _ui->spinBoxALT_VS->setMaximum( fdm::Units::mps2fpm( _ap->getMaxClimbRate() ) );

        _ui->spinBoxALT_VS->setSingleStep( 100.0 );
        _ui->spinBoxALT_VS->setValue( climbRate );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetAuto::on_pushButtonShowALT_clicked( bool checked )
{
    if ( checked )
    {
        double altitude = fdm::Units::m2ft( _ap->getAltitude() );

        _ui->spinBoxALT_VS->setMinimum( fdm::Units::m2ft( _ap->getMinAltitude() ) );
        _ui->spinBoxALT_VS->setMaximum( fdm::Units::m2ft( _ap->getMaxAltitude() ) );

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
