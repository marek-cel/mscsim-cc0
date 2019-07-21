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

#include <gui/DockWidgetProp.h>
#include <ui_DockWidgetProp.h>

#include <gui/Aircrafts.h>
#include <gui/gui_Defines.h>

////////////////////////////////////////////////////////////////////////////////

DockWidgetProp::DockWidgetProp( QWidget *parent ) :
    QDockWidget ( parent ),
    m_ui ( new Ui::DockWidgetProp )
{
    m_ui->setupUi( this );

    m_label[ 0 ] = m_ui->label_1;
    m_label[ 1 ] = m_ui->label_2;
    m_label[ 2 ] = m_ui->label_3;
    m_label[ 3 ] = m_ui->label_4;

    m_pushButtonState    [ 0 ] = m_ui->pushButtonState_1;
    m_pushButtonAB       [ 0 ] = m_ui->pushButtonAB_1;
    m_pushButtonFuel     [ 0 ] = m_ui->pushButtonFuel_1;
    m_pushButtonIgnition [ 0 ] = m_ui->pushButtonIgnition_1;
    m_pushButtonStart    [ 0 ] = m_ui->pushButtonStart_1;

    m_pushButtonState    [ 1 ] = m_ui->pushButtonState_2;
    m_pushButtonAB       [ 1 ] = m_ui->pushButtonAB_2;
    m_pushButtonFuel     [ 1 ] = m_ui->pushButtonFuel_2;
    m_pushButtonIgnition [ 1 ] = m_ui->pushButtonIgnition_2;
    m_pushButtonStart    [ 1 ] = m_ui->pushButtonStart_2;

    m_pushButtonState    [ 2 ] = m_ui->pushButtonState_3;
    m_pushButtonAB       [ 2 ] = m_ui->pushButtonAB_3;
    m_pushButtonFuel     [ 2 ] = m_ui->pushButtonFuel_3;
    m_pushButtonIgnition [ 2 ] = m_ui->pushButtonIgnition_3;
    m_pushButtonStart    [ 2 ] = m_ui->pushButtonStart_3;

    m_pushButtonState    [ 3 ] = m_ui->pushButtonState_4;
    m_pushButtonAB       [ 3 ] = m_ui->pushButtonAB_4;
    m_pushButtonFuel     [ 3 ] = m_ui->pushButtonFuel_4;
    m_pushButtonIgnition [ 3 ] = m_ui->pushButtonIgnition_4;
    m_pushButtonStart    [ 3 ] = m_ui->pushButtonStart_4;

    m_spinRPM  [ 0 ] = m_ui->spinRPM_1;
    m_spinPROP [ 0 ] = m_ui->spinPROP_1;
    m_spinNG   [ 0 ] = m_ui->spinNG_1;
    m_spinN1   [ 0 ] = m_ui->spinN1_1;
    m_spinN2   [ 0 ] = m_ui->spinN2_1;
    m_spinTRQ  [ 0 ] = m_ui->spinTRQ_1;
    m_spinEPR  [ 0 ] = m_ui->spinEPR_1;
    m_spinMAP  [ 0 ] = m_ui->spinMAP_1;
    m_spinEGT  [ 0 ] = m_ui->spinEGT_1;
    m_spinTIT  [ 0 ] = m_ui->spinTIT_1;
    m_spinTOT  [ 0 ] = m_ui->spinTOT_1;
    m_spinITT  [ 0 ] = m_ui->spinITT_1;
    m_spinFF   [ 0 ] = m_ui->spinFF_1;

    m_spinRPM  [ 1 ] = m_ui->spinRPM_2;
    m_spinPROP [ 1 ] = m_ui->spinPROP_2;
    m_spinNG   [ 1 ] = m_ui->spinNG_2;
    m_spinN1   [ 1 ] = m_ui->spinN1_2;
    m_spinN2   [ 1 ] = m_ui->spinN2_2;
    m_spinTRQ  [ 1 ] = m_ui->spinTRQ_2;
    m_spinEPR  [ 1 ] = m_ui->spinEPR_2;
    m_spinMAP  [ 1 ] = m_ui->spinMAP_2;
    m_spinEGT  [ 1 ] = m_ui->spinEGT_2;
    m_spinTIT  [ 1 ] = m_ui->spinTIT_2;
    m_spinTOT  [ 1 ] = m_ui->spinTOT_2;
    m_spinITT  [ 1 ] = m_ui->spinITT_2;
    m_spinFF   [ 1 ] = m_ui->spinFF_2;

    m_spinRPM  [ 2 ] = m_ui->spinRPM_3;
    m_spinPROP [ 2 ] = m_ui->spinPROP_3;
    m_spinNG   [ 2 ] = m_ui->spinNG_3;
    m_spinN1   [ 2 ] = m_ui->spinN1_3;
    m_spinN2   [ 2 ] = m_ui->spinN2_3;
    m_spinTRQ  [ 2 ] = m_ui->spinTRQ_3;
    m_spinEPR  [ 2 ] = m_ui->spinEPR_3;
    m_spinMAP  [ 2 ] = m_ui->spinMAP_3;
    m_spinEGT  [ 2 ] = m_ui->spinEGT_3;
    m_spinTIT  [ 2 ] = m_ui->spinTIT_3;
    m_spinTOT  [ 2 ] = m_ui->spinTOT_3;
    m_spinITT  [ 2 ] = m_ui->spinITT_3;
    m_spinFF   [ 2 ] = m_ui->spinFF_3;

    m_spinRPM  [ 3 ] = m_ui->spinRPM_4;
    m_spinPROP [ 3 ] = m_ui->spinPROP_4;
    m_spinNG   [ 3 ] = m_ui->spinNG_4;
    m_spinN1   [ 3 ] = m_ui->spinN1_4;
    m_spinN2   [ 3 ] = m_ui->spinN2_4;
    m_spinTRQ  [ 3 ] = m_ui->spinTRQ_4;
    m_spinEPR  [ 3 ] = m_ui->spinEPR_4;
    m_spinMAP  [ 3 ] = m_ui->spinMAP_4;
    m_spinEGT  [ 3 ] = m_ui->spinEGT_4;
    m_spinTIT  [ 3 ] = m_ui->spinTIT_4;
    m_spinTOT  [ 3 ] = m_ui->spinTOT_4;
    m_spinITT  [ 3 ] = m_ui->spinITT_4;
    m_spinFF   [ 3 ] = m_ui->spinFF_4;

    settingsRead();
}

////////////////////////////////////////////////////////////////////////////////

DockWidgetProp::~DockWidgetProp()
{
    settingsSave();

    if ( m_ui ) delete m_ui;
    m_ui = 0;
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetProp::getFuel( int index ) const
{
    if ( index < FDM_MAX_ENGINES )
    {
        return m_pushButtonFuel[ index ]->isChecked();
    }

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetProp::getIgnition( int index ) const
{
    if ( index < FDM_MAX_ENGINES )
    {
        return m_pushButtonIgnition[ index ]->isChecked();
    }

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetProp::getStarter( int index ) const
{
    if ( index < FDM_MAX_ENGINES )
    {
        return m_pushButtonStart[ index ]->isDown();
    }

    return false;
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setAircraftType( int typeIndex )
{
    Aircrafts::Propulsion propulsion = Aircrafts::instance()->getAircraft( typeIndex ).propulsion;

    if ( propulsion.engines > 0 )
    {
        m_ui->scrollArea->setVisible( true );

        bool visible[] =
        {
            true,
            propulsion.engines > 1,
            propulsion.engines > 2,
            propulsion.engines > 3
        };

        // labels
        m_ui->labelRPM  ->setVisible( propulsion.rpm  );
        m_ui->labelPROP ->setVisible( propulsion.prop );
        m_ui->labelNG   ->setVisible( propulsion.ng   );
        m_ui->labelN1   ->setVisible( propulsion.n1   );
        m_ui->labelN2   ->setVisible( propulsion.n2   );
        m_ui->labelTRQ  ->setVisible( propulsion.trq  );
        m_ui->labelEPR  ->setVisible( propulsion.epr  );
        m_ui->labelMAP  ->setVisible( propulsion.map  );
        m_ui->labelEGT  ->setVisible( propulsion.egt  );
        m_ui->labelTIT  ->setVisible( propulsion.tit  );
        m_ui->labelTOT  ->setVisible( propulsion.tot  );
        m_ui->labelITT  ->setVisible( propulsion.itt  );

        // combos
        m_ui->comboRPM  ->setVisible( propulsion.rpm  );
        m_ui->comboPROP ->setVisible( propulsion.prop );
        m_ui->comboNG   ->setVisible( propulsion.ng   );
        m_ui->comboN1   ->setVisible( propulsion.n1   );
        m_ui->comboN2   ->setVisible( propulsion.n2   );
        m_ui->comboTRQ  ->setVisible( propulsion.trq  );
        m_ui->comboEPR  ->setVisible( propulsion.epr  );
        m_ui->comboMAP  ->setVisible( propulsion.map  );
        m_ui->comboEGT  ->setVisible( propulsion.egt  );
        m_ui->comboTIT  ->setVisible( propulsion.tit  );
        m_ui->comboTOT  ->setVisible( propulsion.tot  );
        m_ui->comboITT  ->setVisible( propulsion.itt  );

        for ( int i = 0; i < 4; i++ )
        {
            m_label[ i ]->setVisible( visible[ i ] );

            m_pushButtonState    [ i ]->setVisible( visible[ i ] );
            m_pushButtonAB       [ i ]->setVisible( visible[ i ] && propulsion.ab );
            m_pushButtonFuel     [ i ]->setVisible( visible[ i ] );
            m_pushButtonIgnition [ i ]->setVisible( visible[ i ] );
            m_pushButtonStart    [ i ]->setVisible( visible[ i ] );

            m_spinRPM  [ i ]->setVisible( visible[ i ] && propulsion.rpm );
            m_spinPROP [ i ]->setVisible( visible[ i ] && propulsion.prop );
            m_spinNG   [ i ]->setVisible( visible[ i ] && propulsion.ng );
            m_spinN1   [ i ]->setVisible( visible[ i ] && propulsion.n1 );
            m_spinN2   [ i ]->setVisible( visible[ i ] && propulsion.n2 );
            m_spinTRQ  [ i ]->setVisible( visible[ i ] && propulsion.trq );
            m_spinEPR  [ i ]->setVisible( visible[ i ] && propulsion.epr );
            m_spinMAP  [ i ]->setVisible( visible[ i ] && propulsion.map );
            m_spinEGT  [ i ]->setVisible( visible[ i ] && propulsion.egt );
            m_spinTIT  [ i ]->setVisible( visible[ i ] && propulsion.tit );
            m_spinTOT  [ i ]->setVisible( visible[ i ] && propulsion.tot );
            m_spinITT  [ i ]->setVisible( visible[ i ] && propulsion.itt );
            m_spinFF   [ i ]->setVisible( visible[ i ] );
        }
    }
    else
    {
        m_ui->scrollArea->setVisible( false );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setState( unsigned int index, bool working )
{
    if ( index < FDM_MAX_ENGINES )
    {
        m_pushButtonState[ index ]->setChecked( working );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setAB( unsigned int index, bool afterburner )
{
    if ( index < FDM_MAX_ENGINES )
    {
        m_pushButtonAB[ index ]->setChecked( afterburner );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setRPM( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        m_spinRPM[ index ]->setValue( m_ui->comboRPM->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setPROP( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        m_spinPROP[ index ]->setValue( m_ui->comboPROP->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setNG( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        m_spinNG[ index ]->setValue( m_ui->comboNG->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setN1( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        m_spinN1[ index ]->setValue( m_ui->comboN1->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setN2( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        m_spinN2[ index ]->setValue( m_ui->comboN2->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setTRQ( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        m_spinTRQ[ index ]->setValue( m_ui->comboTRQ->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setEPR( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        m_spinEPR[ index ]->setValue( m_ui->comboEPR->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setMAP( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        m_spinMAP[ index ]->setValue( m_ui->comboMAP->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setEGT( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        m_spinEGT[ index ]->setValue( m_ui->comboEGT->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setTIT( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        m_spinTIT[ index ]->setValue( m_ui->comboTIT->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setTOT( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        m_spinTOT[ index ]->setValue( m_ui->comboTOT->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setITT( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        m_spinITT[ index ]->setValue( m_ui->comboITT->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setFF( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        m_spinFF[ index ]->setValue( m_ui->comboFF->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::closeEvent( QCloseEvent *event )
{
    /////////////////////////////////
    QDockWidget::closeEvent( event );
    /////////////////////////////////

    emit closed();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::settingsRead()
{
    QSettings settings( SIM_ORG_NAME, SIM_APP_NAME );

    settings.beginGroup( "dock_widget_prop" );

    settingsRead_UnitCombos( settings );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::settingsRead_UnitCombos( QSettings &settings )
{
    settings.beginGroup( "unit_combos" );

    m_ui->comboRPM->setCurrentIndex( settings.value( "rpm", 2 ).toInt() );
    m_ui->comboPROP->setCurrentIndex( settings.value( "prop", 2 ).toInt() );
    m_ui->comboNG->setCurrentIndex( settings.value( "ng", 1 ).toInt() );
    m_ui->comboN1->setCurrentIndex( settings.value( "n1", 1 ).toInt() );
    m_ui->comboN2->setCurrentIndex( settings.value( "n2", 1 ).toInt() );
    m_ui->comboTRQ->setCurrentIndex( settings.value( "trq", 1 ).toInt() );
    m_ui->comboEPR->setCurrentIndex( settings.value( "epr", 1 ).toInt() );
    m_ui->comboMAP->setCurrentIndex( settings.value( "map", 1 ).toInt() );
    m_ui->comboEGT->setCurrentIndex( settings.value( "egt", 1 ).toInt() );
    m_ui->comboTIT->setCurrentIndex( settings.value( "tit", 1 ).toInt() );
    m_ui->comboTOT->setCurrentIndex( settings.value( "tot", 1 ).toInt() );
    m_ui->comboITT->setCurrentIndex( settings.value( "itt", 1 ).toInt() );
    m_ui->comboFF->setCurrentIndex( settings.value( "ff", 1 ).toInt() );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::settingsSave()
{
    QSettings settings( SIM_ORG_NAME, SIM_APP_NAME );

    settings.beginGroup( "dock_widget_prop" );

    settingsSave_UnitCombos( settings );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::settingsSave_UnitCombos( QSettings &settings )
{
    settings.beginGroup( "unit_combos" );

    settings.setValue( "rpm"  , m_ui->comboRPM->currentIndex() );
    settings.setValue( "prop" , m_ui->comboPROP->currentIndex() );
    settings.setValue( "ng"   , m_ui->comboNG->currentIndex() );
    settings.setValue( "n1"   , m_ui->comboN1->currentIndex() );
    settings.setValue( "n2"   , m_ui->comboN2->currentIndex() );
    settings.setValue( "trq"  , m_ui->comboTRQ->currentIndex() );
    settings.setValue( "epr"  , m_ui->comboEPR->currentIndex() );
    settings.setValue( "map"  , m_ui->comboMAP->currentIndex() );
    settings.setValue( "egt"  , m_ui->comboEGT->currentIndex() );
    settings.setValue( "tit"  , m_ui->comboTIT->currentIndex() );
    settings.setValue( "tot"  , m_ui->comboTOT->currentIndex() );
    settings.setValue( "itt"  , m_ui->comboITT->currentIndex() );
    settings.setValue( "ff"   , m_ui->comboFF->currentIndex() );

    settings.endGroup();
}
