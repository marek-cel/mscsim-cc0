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

#include <gui/DockWidgetProp.h>
#include <ui_DockWidgetProp.h>

#include <gui/Aircrafts.h>
#include <gui/gui_Defines.h>

////////////////////////////////////////////////////////////////////////////////

DockWidgetProp::DockWidgetProp( QWidget *parent ) :
    QDockWidget ( parent ),
    _ui ( new Ui::DockWidgetProp )
{
    _ui->setupUi( this );

    _label[ 0 ] = _ui->label_1;
    _label[ 1 ] = _ui->label_2;
    _label[ 2 ] = _ui->label_3;
    _label[ 3 ] = _ui->label_4;

    _pushButtonState    [ 0 ] = _ui->pushButtonState_1;
    _pushButtonAB       [ 0 ] = _ui->pushButtonAB_1;
    _pushButtonFuel     [ 0 ] = _ui->pushButtonFuel_1;
    _pushButtonIgnition [ 0 ] = _ui->pushButtonIgnition_1;
    _pushButtonStart    [ 0 ] = _ui->pushButtonStart_1;

    _pushButtonState    [ 1 ] = _ui->pushButtonState_2;
    _pushButtonAB       [ 1 ] = _ui->pushButtonAB_2;
    _pushButtonFuel     [ 1 ] = _ui->pushButtonFuel_2;
    _pushButtonIgnition [ 1 ] = _ui->pushButtonIgnition_2;
    _pushButtonStart    [ 1 ] = _ui->pushButtonStart_2;

    _pushButtonState    [ 2 ] = _ui->pushButtonState_3;
    _pushButtonAB       [ 2 ] = _ui->pushButtonAB_3;
    _pushButtonFuel     [ 2 ] = _ui->pushButtonFuel_3;
    _pushButtonIgnition [ 2 ] = _ui->pushButtonIgnition_3;
    _pushButtonStart    [ 2 ] = _ui->pushButtonStart_3;

    _pushButtonState    [ 3 ] = _ui->pushButtonState_4;
    _pushButtonAB       [ 3 ] = _ui->pushButtonAB_4;
    _pushButtonFuel     [ 3 ] = _ui->pushButtonFuel_4;
    _pushButtonIgnition [ 3 ] = _ui->pushButtonIgnition_4;
    _pushButtonStart    [ 3 ] = _ui->pushButtonStart_4;

    _spinRPM  [ 0 ] = _ui->spinRPM_1;
    _spinPROP [ 0 ] = _ui->spinPROP_1;
    _spinNG   [ 0 ] = _ui->spinNG_1;
    _spinN1   [ 0 ] = _ui->spinN1_1;
    _spinN2   [ 0 ] = _ui->spinN2_1;
    _spinTRQ  [ 0 ] = _ui->spinTRQ_1;
    _spinEPR  [ 0 ] = _ui->spinEPR_1;
    _spinMAP  [ 0 ] = _ui->spinMAP_1;
    _spinEGT  [ 0 ] = _ui->spinEGT_1;
    _spinCHT  [ 0 ] = _ui->spinCHT_1;
    _spinTIT  [ 0 ] = _ui->spinTIT_1;
    _spinTOT  [ 0 ] = _ui->spinTOT_1;
    _spinITT  [ 0 ] = _ui->spinITT_1;
    _spinFF   [ 0 ] = _ui->spinFF_1;

    _spinRPM  [ 1 ] = _ui->spinRPM_2;
    _spinPROP [ 1 ] = _ui->spinPROP_2;
    _spinNG   [ 1 ] = _ui->spinNG_2;
    _spinN1   [ 1 ] = _ui->spinN1_2;
    _spinN2   [ 1 ] = _ui->spinN2_2;
    _spinTRQ  [ 1 ] = _ui->spinTRQ_2;
    _spinEPR  [ 1 ] = _ui->spinEPR_2;
    _spinMAP  [ 1 ] = _ui->spinMAP_2;
    _spinEGT  [ 1 ] = _ui->spinEGT_2;
    _spinCHT  [ 1 ] = _ui->spinCHT_2;
    _spinTIT  [ 1 ] = _ui->spinTIT_2;
    _spinTOT  [ 1 ] = _ui->spinTOT_2;
    _spinITT  [ 1 ] = _ui->spinITT_2;
    _spinFF   [ 1 ] = _ui->spinFF_2;

    _spinRPM  [ 2 ] = _ui->spinRPM_3;
    _spinPROP [ 2 ] = _ui->spinPROP_3;
    _spinNG   [ 2 ] = _ui->spinNG_3;
    _spinN1   [ 2 ] = _ui->spinN1_3;
    _spinN2   [ 2 ] = _ui->spinN2_3;
    _spinTRQ  [ 2 ] = _ui->spinTRQ_3;
    _spinEPR  [ 2 ] = _ui->spinEPR_3;
    _spinMAP  [ 2 ] = _ui->spinMAP_3;
    _spinEGT  [ 2 ] = _ui->spinEGT_3;
    _spinCHT  [ 2 ] = _ui->spinCHT_3;
    _spinTIT  [ 2 ] = _ui->spinTIT_3;
    _spinTOT  [ 2 ] = _ui->spinTOT_3;
    _spinITT  [ 2 ] = _ui->spinITT_3;
    _spinFF   [ 2 ] = _ui->spinFF_3;

    _spinRPM  [ 3 ] = _ui->spinRPM_4;
    _spinPROP [ 3 ] = _ui->spinPROP_4;
    _spinNG   [ 3 ] = _ui->spinNG_4;
    _spinN1   [ 3 ] = _ui->spinN1_4;
    _spinN2   [ 3 ] = _ui->spinN2_4;
    _spinTRQ  [ 3 ] = _ui->spinTRQ_4;
    _spinEPR  [ 3 ] = _ui->spinEPR_4;
    _spinMAP  [ 3 ] = _ui->spinMAP_4;
    _spinEGT  [ 3 ] = _ui->spinEGT_4;
    _spinCHT  [ 3 ] = _ui->spinCHT_4;
    _spinTIT  [ 3 ] = _ui->spinTIT_4;
    _spinTOT  [ 3 ] = _ui->spinTOT_4;
    _spinITT  [ 3 ] = _ui->spinITT_4;
    _spinFF   [ 3 ] = _ui->spinFF_4;

    settingsRead();
}

////////////////////////////////////////////////////////////////////////////////

DockWidgetProp::~DockWidgetProp()
{
    settingsSave();

    DELPTR( _ui );
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetProp::getFuel( int index ) const
{
    if ( index < FDM_MAX_ENGINES )
    {
        return _pushButtonFuel[ index ]->isChecked();
    }

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetProp::getIgnition( int index ) const
{
    if ( index < FDM_MAX_ENGINES )
    {
        return _pushButtonIgnition[ index ]->isChecked();
    }

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetProp::getStarter( int index ) const
{
    if ( index < FDM_MAX_ENGINES )
    {
        return _pushButtonStart[ index ]->isDown();
    }

    return false;
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setAircraftType( int typeIndex )
{
    Aircrafts::Propulsion propulsion = Aircrafts::instance()->getAircraft( typeIndex ).propulsion;

    if ( propulsion.engines > 0 )
    {
        _ui->scrollArea->setVisible( true );

        bool visible[] =
        {
            true,
            propulsion.engines > 1,
            propulsion.engines > 2,
            propulsion.engines > 3
        };

        // labels
        _ui->labelRPM  ->setVisible( propulsion.rpm  );
        _ui->labelPROP ->setVisible( propulsion.prop );
        _ui->labelNG   ->setVisible( propulsion.ng   );
        _ui->labelN1   ->setVisible( propulsion.n1   );
        _ui->labelN2   ->setVisible( propulsion.n2   );
        _ui->labelTRQ  ->setVisible( propulsion.trq  );
        _ui->labelEPR  ->setVisible( propulsion.epr  );
        _ui->labelMAP  ->setVisible( propulsion.map  );
        _ui->labelEGT  ->setVisible( propulsion.egt  );
        _ui->labelCHT  ->setVisible( propulsion.cht  );
        _ui->labelTIT  ->setVisible( propulsion.tit  );
        _ui->labelTOT  ->setVisible( propulsion.tot  );
        _ui->labelITT  ->setVisible( propulsion.itt  );

        // combos
        _ui->comboRPM  ->setVisible( propulsion.rpm  );
        _ui->comboPROP ->setVisible( propulsion.prop );
        _ui->comboNG   ->setVisible( propulsion.ng   );
        _ui->comboN1   ->setVisible( propulsion.n1   );
        _ui->comboN2   ->setVisible( propulsion.n2   );
        _ui->comboTRQ  ->setVisible( propulsion.trq  );
        _ui->comboEPR  ->setVisible( propulsion.epr  );
        _ui->comboMAP  ->setVisible( propulsion.map  );
        _ui->comboEGT  ->setVisible( propulsion.egt  );
        _ui->comboCHT  ->setVisible( propulsion.cht  );
        _ui->comboTIT  ->setVisible( propulsion.tit  );
        _ui->comboTOT  ->setVisible( propulsion.tot  );
        _ui->comboITT  ->setVisible( propulsion.itt  );

        for ( int i = 0; i < 4; i++ )
        {
            _label[ i ]->setVisible( visible[ i ] );

            _pushButtonState    [ i ]->setVisible( visible[ i ] );
            _pushButtonAB       [ i ]->setVisible( visible[ i ] && propulsion.ab );
            _pushButtonFuel     [ i ]->setVisible( visible[ i ] );
            _pushButtonIgnition [ i ]->setVisible( visible[ i ] );
            _pushButtonStart    [ i ]->setVisible( visible[ i ] );

            _spinRPM  [ i ]->setVisible( visible[ i ] && propulsion.rpm );
            _spinPROP [ i ]->setVisible( visible[ i ] && propulsion.prop );
            _spinNG   [ i ]->setVisible( visible[ i ] && propulsion.ng );
            _spinN1   [ i ]->setVisible( visible[ i ] && propulsion.n1 );
            _spinN2   [ i ]->setVisible( visible[ i ] && propulsion.n2 );
            _spinTRQ  [ i ]->setVisible( visible[ i ] && propulsion.trq );
            _spinEPR  [ i ]->setVisible( visible[ i ] && propulsion.epr );
            _spinMAP  [ i ]->setVisible( visible[ i ] && propulsion.map );
            _spinEGT  [ i ]->setVisible( visible[ i ] && propulsion.egt );
            _spinCHT  [ i ]->setVisible( visible[ i ] && propulsion.cht );
            _spinTIT  [ i ]->setVisible( visible[ i ] && propulsion.tit );
            _spinTOT  [ i ]->setVisible( visible[ i ] && propulsion.tot );
            _spinITT  [ i ]->setVisible( visible[ i ] && propulsion.itt );
            _spinFF   [ i ]->setVisible( visible[ i ] );
        }
    }
    else
    {
        _ui->scrollArea->setVisible( false );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setState( unsigned int index, bool working )
{
    if ( index < FDM_MAX_ENGINES )
    {
        _pushButtonState[ index ]->setChecked( working );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setAB( unsigned int index, bool afterburner )
{
    if ( index < FDM_MAX_ENGINES )
    {
        _pushButtonAB[ index ]->setChecked( afterburner );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setRPM( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        _spinRPM[ index ]->setValue( _ui->comboRPM->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setPROP( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        _spinPROP[ index ]->setValue( _ui->comboPROP->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setNG( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        _spinNG[ index ]->setValue( _ui->comboNG->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setN1( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        _spinN1[ index ]->setValue( _ui->comboN1->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setN2( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        _spinN2[ index ]->setValue( _ui->comboN2->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setTRQ( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        _spinTRQ[ index ]->setValue( _ui->comboTRQ->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setEPR( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        _spinEPR[ index ]->setValue( _ui->comboEPR->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setMAP( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        _spinMAP[ index ]->setValue( _ui->comboMAP->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setEGT( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        _spinEGT[ index ]->setValue( _ui->comboEGT->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setCHT( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        _spinCHT[ index ]->setValue( _ui->comboCHT->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setTIT( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        _spinTIT[ index ]->setValue( _ui->comboTIT->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setTOT( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        _spinTOT[ index ]->setValue( _ui->comboTOT->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setITT( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        _spinITT[ index ]->setValue( _ui->comboITT->convert( val ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetProp::setFF( unsigned int index, float val )
{
    if ( index < FDM_MAX_ENGINES )
    {
        _spinFF[ index ]->setValue( _ui->comboFF->convert( val ) );
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

    _ui->comboRPM->setCurrentIndex( settings.value( "rpm", 2 ).toInt() );
    _ui->comboPROP->setCurrentIndex( settings.value( "prop", 2 ).toInt() );
    _ui->comboNG->setCurrentIndex( settings.value( "ng", 1 ).toInt() );
    _ui->comboN1->setCurrentIndex( settings.value( "n1", 1 ).toInt() );
    _ui->comboN2->setCurrentIndex( settings.value( "n2", 1 ).toInt() );
    _ui->comboTRQ->setCurrentIndex( settings.value( "trq", 1 ).toInt() );
    _ui->comboEPR->setCurrentIndex( settings.value( "epr", 1 ).toInt() );
    _ui->comboMAP->setCurrentIndex( settings.value( "map", 1 ).toInt() );
    _ui->comboEGT->setCurrentIndex( settings.value( "egt", 1 ).toInt() );
    _ui->comboCHT->setCurrentIndex( settings.value( "cht", 1 ).toInt() );
    _ui->comboTIT->setCurrentIndex( settings.value( "tit", 1 ).toInt() );
    _ui->comboTOT->setCurrentIndex( settings.value( "tot", 1 ).toInt() );
    _ui->comboITT->setCurrentIndex( settings.value( "itt", 1 ).toInt() );
    _ui->comboFF->setCurrentIndex( settings.value( "ff", 1 ).toInt() );

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

    settings.setValue( "rpm"  , _ui->comboRPM->currentIndex() );
    settings.setValue( "prop" , _ui->comboPROP->currentIndex() );
    settings.setValue( "ng"   , _ui->comboNG->currentIndex() );
    settings.setValue( "n1"   , _ui->comboN1->currentIndex() );
    settings.setValue( "n2"   , _ui->comboN2->currentIndex() );
    settings.setValue( "trq"  , _ui->comboTRQ->currentIndex() );
    settings.setValue( "epr"  , _ui->comboEPR->currentIndex() );
    settings.setValue( "map"  , _ui->comboMAP->currentIndex() );
    settings.setValue( "egt"  , _ui->comboEGT->currentIndex() );
    settings.setValue( "cht"  , _ui->comboCHT->currentIndex() );
    settings.setValue( "tit"  , _ui->comboTIT->currentIndex() );
    settings.setValue( "tot"  , _ui->comboTOT->currentIndex() );
    settings.setValue( "itt"  , _ui->comboITT->currentIndex() );
    settings.setValue( "ff"   , _ui->comboFF->currentIndex() );

    settings.endGroup();
}
