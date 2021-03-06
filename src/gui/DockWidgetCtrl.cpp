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

#include <gui/DockWidgetCtrl.h>
#include <ui_DockWidgetCtrl.h>

#include <gui/Aircrafts.h>

////////////////////////////////////////////////////////////////////////////////

DockWidgetCtrl::DockWidgetCtrl( QWidget *parent ) :
    QDockWidget ( parent ),
    _ui ( new Ui::DockWidgetCtrl )
{
    _ui->setupUi( this );
}

////////////////////////////////////////////////////////////////////////////////

DockWidgetCtrl::~DockWidgetCtrl()
{
    DELPTR( _ui );
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetCtrl::getABS() const
{
    return _ui->pushButtonABS->isChecked();
}

////////////////////////////////////////////////////////////////////////////////

bool DockWidgetCtrl::getNWS() const
{
    return _ui->pushButtonNWS->isChecked();
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetCtrl::setAircraftType( int typeIndex )
{
    Aircrafts::Controls controls = Aircrafts::instance()->getAircraft( typeIndex ).controls;

    _ui->groupBoxCollective->setVisible( controls.collective );
    _ui->groupBoxGear->setVisible( controls.landingGear );
    _ui->groupBoxFlaps->setVisible( controls.flaps );
    _ui->groupBoxAirbrake->setVisible( controls.airbrake );
    _ui->groupBoxSpoilers->setVisible( controls.spoilers );

    if ( controls.throttle > 0 )
    {
        _ui->groupBoxThrottle->setVisible( true );

        if ( controls.throttle > 1 )
        {
            _ui->widgetThrottle_2->setVisible( true );
        }
        else
        {
            _ui->widgetThrottle_2->setVisible( false );
        }

        if ( controls.throttle > 2 )
        {
            _ui->widgetThrottle_3->setVisible( true );
        }
        else
        {
            _ui->widgetThrottle_3->setVisible( false );
        }

        if ( controls.throttle > 3 )
        {
            _ui->widgetThrottle_4->setVisible( true );
        }
        else
        {
            _ui->widgetThrottle_4->setVisible( false );
        }
    }
    else
    {
        _ui->groupBoxThrottle->setVisible( false );
    }

    if ( controls.propeller > 0 )
    {
        _ui->groupBoxPropeller->setVisible( true );

        if ( controls.propeller > 1 )
        {
            _ui->widgetPropeller_2->setVisible( true );
        }
        else
        {
            _ui->widgetPropeller_2->setVisible( false );
        }

        if ( controls.propeller > 2 )
        {
            _ui->widgetPropeller_3->setVisible( true );
        }
        else
        {
            _ui->widgetPropeller_3->setVisible( false );
        }

        if ( controls.propeller > 3 )
        {
            _ui->widgetPropeller_4->setVisible( true );
        }
        else
        {
            _ui->widgetPropeller_4->setVisible( false );
        }
    }
    else
    {
        _ui->groupBoxPropeller->setVisible( false );
    }

    if ( controls.mixture > 0 )
    {
        _ui->groupBoxMixture->setVisible( true );

        if ( controls.mixture > 1 )
        {
            _ui->widgetMixture_2->setVisible( true );
        }
        else
        {
            _ui->widgetMixture_2->setVisible( false );
        }

        if ( controls.mixture > 2 )
        {
            _ui->widgetMixture_3->setVisible( true );
        }
        else
        {
            _ui->widgetMixture_3->setVisible( false );
        }

        if ( controls.mixture > 3 )
        {
            _ui->widgetMixture_4->setVisible( true );
        }
        else
        {
            _ui->widgetMixture_4->setVisible( false );
        }
    }
    else
    {
        _ui->groupBoxMixture->setVisible( false );
    }
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetCtrl::setCollective( double collective )
{
    _ui->barCollective->setValue( 100 * collective );
    _ui->spinBoxCollective->setValue( 100 * collective );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetCtrl::setCtrlStick( double ctrlRoll, double ctrlPitch )
{
    _ui->graphicsCtrlStick->setCtrl( 100 * ctrlRoll, 100 * ctrlPitch );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetCtrl::setTrimStick( double trimRoll, double trimPitch )
{
    _ui->graphicsCtrlStick->setTrim( 100 * trimRoll, 100 * trimPitch );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetCtrl::setCtrlPedals( double ctrlPitch )
{
    _ui->graphicsCtrlPedals->setCtrl( 100 * ctrlPitch );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetCtrl::setTrimPedals( double trimPitch )
{
    _ui->graphicsCtrlPedals->setTrim( 100 * trimPitch );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetCtrl::setBrakes( double brakeL, double brakeR )
{
    _ui->barBrakeL->setValue( 100 * brakeL );
    _ui->barBrakeR->setValue( 100 * brakeR );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetCtrl::setGear( double gear )
{
    _ui->barGear->setValue( 100 * gear );
    _ui->spinBoxGear->setValue( 100 * gear );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetCtrl::setFlaps( double flaps )
{
    _ui->barFlaps->setValue( 100 * flaps );
    _ui->spinBoxFlaps->setValue( 100 * flaps );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetCtrl::setThrottle( double throttle_1,
                                  double throttle_2,
                                  double throttle_3,
                                  double throttle_4 )
{
    _ui->barThrottle_1->setValue( 100 * throttle_1 );
    _ui->barThrottle_2->setValue( 100 * throttle_2 );
    _ui->barThrottle_3->setValue( 100 * throttle_3 );
    _ui->barThrottle_4->setValue( 100 * throttle_4 );

    _ui->spinBoxThrottle_1->setValue( 100 * throttle_1 );
    _ui->spinBoxThrottle_2->setValue( 100 * throttle_2 );
    _ui->spinBoxThrottle_3->setValue( 100 * throttle_3 );
    _ui->spinBoxThrottle_4->setValue( 100 * throttle_4 );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetCtrl::setMixture( double mixture_1,
                                 double mixture_2,
                                 double mixture_3,
                                 double mixture_4 )
{
    _ui->barMixture_1->setValue( 100 * mixture_1 );
    _ui->barMixture_2->setValue( 100 * mixture_2 );
    _ui->barMixture_3->setValue( 100 * mixture_3 );
    _ui->barMixture_4->setValue( 100 * mixture_4 );

    _ui->spinBoxMixture_1->setValue( 100 * mixture_1 );
    _ui->spinBoxMixture_2->setValue( 100 * mixture_2 );
    _ui->spinBoxMixture_3->setValue( 100 * mixture_3 );
    _ui->spinBoxMixture_4->setValue( 100 * mixture_4 );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetCtrl::setPropeller( double propeller_1,
                                   double propeller_2,
                                   double propeller_3,
                                   double propeller_4 )
{
    _ui->barPropeller_1->setValue( 100 * propeller_1 );
    _ui->barPropeller_2->setValue( 100 * propeller_2 );
    _ui->barPropeller_3->setValue( 100 * propeller_3 );
    _ui->barPropeller_4->setValue( 100 * propeller_4 );

    _ui->spinBoxPropeller_1->setValue( 100 * propeller_1 );
    _ui->spinBoxPropeller_2->setValue( 100 * propeller_2 );
    _ui->spinBoxPropeller_3->setValue( 100 * propeller_3 );
    _ui->spinBoxPropeller_4->setValue( 100 * propeller_4 );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetCtrl::setAirbrake( double airbrake )
{
    _ui->barAirbrake->setValue( 100 * airbrake );
    _ui->spinBoxAirbrake->setValue( 100 * airbrake );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetCtrl::setSpoilers( double spoilers )
{
    _ui->barSpoilers->setValue( 100 * spoilers );
    _ui->spinBoxSpoilers->setValue( 100 * spoilers );
}

////////////////////////////////////////////////////////////////////////////////

void DockWidgetCtrl::closeEvent( QCloseEvent *event )
{
    /////////////////////////////////
    QDockWidget::closeEvent( event );
    /////////////////////////////////

    emit closed();
}
