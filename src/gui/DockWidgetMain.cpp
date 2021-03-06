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

#include <gui/DockWidgetMain.h>
#include <ui_DockWidgetMain.h>

#include <gui/gui_Defines.h>

////////////////////////////////////////////////////////////////////////////////

DockWidgetMain::DockWidgetMain( QWidget *parent ) :
    QDockWidget ( parent ),
    _ui ( new Ui::DockWidgetMain ),

    _stateInp ( fdm::DataInp::Idle ),
    _stateOut ( fdm::DataOut::Idle ),

    _freeze_position ( false ),
    _freeze_attitude ( false ),
    _freeze_velocity ( false ),

    _timerId ( 0 ),

    _blink ( false )
{
    _ui->setupUi( this );
}

////////////////////////////////////////////////////////////////////////////////

DockWidgetMain::~DockWidgetMain()
{
    DELPTR( _ui );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetMain::init()
{
    _timerId = startTimer( 400 ); // low frequency button blinking
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetMain::setStateInp( fdm::DataInp::StateInp stateInp )
{
    _stateInp = stateInp;

    switch ( _stateInp )
    {
        case fdm::DataInp::Idle:   _ui->buttonStateInpIdle->setChecked( true );   break;
        case fdm::DataInp::Init:   _ui->buttonStateInpInit->setChecked( true );   break;
        case fdm::DataInp::Work:   _ui->buttonStateInpWork->setChecked( true );   break;
        case fdm::DataInp::Pause:  _ui->buttonStateInpPause->setChecked( true );  break;
        case fdm::DataInp::Stop:   _ui->buttonStateInpStop->setChecked( true );   break;
        default:                   _ui->buttonStateInpIdle->setChecked( true );   break;
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetMain::setStateOut( fdm::DataOut::StateOut stateOut )
{
    if ( _stateOut != stateOut ) _blink = false;

    _stateOut = stateOut;

    switch ( _stateOut )
    {
    default:
    case fdm::DataOut::Idle:
        _ui->buttonStateOutIdle    ->setChecked( true  );
        _ui->buttonStateOutReady   ->setChecked( false );
        _ui->buttonStateOutWorking ->setChecked( false );
        _ui->buttonStateOutPaused  ->setChecked( false );
        _ui->buttonStateOutStopped ->setChecked( false );

        _ui->buttonStateInpIdle  ->setEnabled( true  );
        _ui->buttonStateInpInit  ->setEnabled( true  );
        _ui->buttonStateInpWork  ->setEnabled( false );
        _ui->buttonStateInpPause ->setEnabled( false );
        _ui->buttonStateInpStop  ->setEnabled( false );

        _ui->buttonFreezePosition->setChecked( false );
        _ui->buttonFreezeAttitude->setChecked( false );
        _ui->buttonFreezeVelocity->setChecked( false );

        _ui->groupBoxFreezes->setEnabled( false );
        break;

    case fdm::DataOut::Initializing:
        _ui->buttonStateOutIdle    ->setChecked( false );
        _ui->buttonStateOutReady   ->setChecked( _blink );
        _ui->buttonStateOutWorking ->setChecked( false );
        _ui->buttonStateOutPaused  ->setChecked( false );
        _ui->buttonStateOutStopped ->setChecked( false );

        _ui->buttonStateInpIdle  ->setEnabled( false );
        _ui->buttonStateInpInit  ->setEnabled( true  );
        _ui->buttonStateInpWork  ->setEnabled( false );
        _ui->buttonStateInpPause ->setEnabled( false );
        _ui->buttonStateInpStop  ->setEnabled( true  );

        _ui->groupBoxFreezes->setEnabled( false );
        break;

    case fdm::DataOut::Ready:
        _ui->buttonStateOutIdle    ->setChecked( false );
        _ui->buttonStateOutReady   ->setChecked( true  );
        _ui->buttonStateOutWorking ->setChecked( false );
        _ui->buttonStateOutPaused  ->setChecked( false );
        _ui->buttonStateOutStopped ->setChecked( false );

        _ui->buttonStateInpIdle  ->setEnabled( false );
        _ui->buttonStateInpInit  ->setEnabled( true  );
        _ui->buttonStateInpWork  ->setEnabled( true  );
        _ui->buttonStateInpPause ->setEnabled( true  );
        _ui->buttonStateInpStop  ->setEnabled( true  );

        _ui->groupBoxFreezes->setEnabled( true );
        break;

    case fdm::DataOut::Working:
        _ui->buttonStateOutIdle    ->setChecked( false );
        _ui->buttonStateOutReady   ->setChecked( false );
        _ui->buttonStateOutWorking ->setChecked( true  );
        _ui->buttonStateOutPaused  ->setChecked( false );
        _ui->buttonStateOutStopped ->setChecked( false );

        _ui->buttonStateInpIdle  ->setEnabled( false );
        _ui->buttonStateInpInit  ->setEnabled( false );
        _ui->buttonStateInpWork  ->setEnabled( true  );
        _ui->buttonStateInpPause ->setEnabled( true  );
        _ui->buttonStateInpStop  ->setEnabled( true  );

        _ui->groupBoxFreezes->setEnabled( true );
        break;

    case fdm::DataOut::Paused:
        _ui->buttonStateOutIdle    ->setChecked( false );
        _ui->buttonStateOutReady   ->setChecked( false );
        _ui->buttonStateOutWorking ->setChecked( false );
        _ui->buttonStateOutPaused  ->setChecked( true  );
        _ui->buttonStateOutStopped ->setChecked( false );

        _ui->buttonStateInpIdle  ->setEnabled( false );
        _ui->buttonStateInpInit  ->setEnabled( false );
        _ui->buttonStateInpWork  ->setEnabled( true  );
        _ui->buttonStateInpPause ->setEnabled( true  );
        _ui->buttonStateInpStop  ->setEnabled( true  );

        _ui->groupBoxFreezes->setEnabled( true );
        break;

    case fdm::DataOut::Stopped:
        _ui->buttonStateOutIdle    ->setChecked( false );
        _ui->buttonStateOutReady   ->setChecked( false );
        _ui->buttonStateOutWorking ->setChecked( false );
        _ui->buttonStateOutPaused  ->setChecked( false );
        _ui->buttonStateOutStopped ->setChecked( true  );

        _ui->buttonStateInpIdle  ->setEnabled( true  );
        _ui->buttonStateInpInit  ->setEnabled( false );
        _ui->buttonStateInpWork  ->setEnabled( false );
        _ui->buttonStateInpPause ->setEnabled( false );
        _ui->buttonStateInpStop  ->setEnabled( true  );

        _ui->groupBoxFreezes->setEnabled( true );
        break;
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetMain::setTimeStep( double timeStep )
{
    _ui->spinStep->setValue( 1000.0 * timeStep );
    _ui->spinFreq->setValue( ( timeStep > 0.0 ) ? 1.0 / timeStep : 0.0 );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetMain::setFlightTime( QTime time )
{
    _ui->timeFlightTime->setTime( time );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetMain::closeEvent( QCloseEvent *event )
{
    /////////////////////////////////
    QDockWidget::closeEvent( event );
    /////////////////////////////////

    emit closed();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetMain::timerEvent( QTimerEvent *event )
{
    /////////////////////////////////
    QDockWidget::timerEvent( event );
    /////////////////////////////////

    if ( _stateOut == fdm::DataOut::Initializing )
    {
        _blink = !_blink;

        _ui->buttonStateOutReady->setChecked( _blink );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetMain::on_buttonStateInpIdle_clicked()
{
    _stateInp = fdm::DataInp::Idle;
    emit stateInpChanged( _stateInp );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetMain::on_buttonStateInpInit_clicked()
{
    _stateInp = fdm::DataInp::Init;
    emit stateInpChanged( _stateInp );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetMain::on_buttonStateInpWork_clicked()
{
    _stateInp = fdm::DataInp::Work;
    emit stateInpChanged( _stateInp );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetMain::on_buttonStateInpPause_clicked()
{
    _stateInp = fdm::DataInp::Pause;
    emit stateInpChanged( _stateInp );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetMain::on_buttonStateInpStop_clicked()
{
    _stateInp = fdm::DataInp::Stop;
    emit stateInpChanged( _stateInp );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetMain::on_buttonFreezePosition_toggled( bool checked )
{
    _freeze_position = checked;
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetMain::on_buttonFreezeAttitude_toggled( bool checked )
{
    _freeze_attitude = checked;
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetMain::on_buttonFreezeVelocity_toggled( bool checked )
{
    _freeze_velocity = checked;
}
