/****************************************************************************//*
 * Copyright (C) 2020 Marek M. Cel
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
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

////////////////////////////////////////////////////////////////////////////////

#include <QElapsedTimer>
#include <QMainWindow>
#include <QSettings>
#include <QShortcut>
#include <QTimer>

#include <Data.h>

#include <Autopilot.h>

#include <gui/DialogConf.h>
#include <gui/DialogEnvr.h>
#include <gui/DialogInit.h>
#include <gui/DialogMass.h>

#include <gui/DockWidgetAuto.h>
#include <gui/DockWidgetCtrl.h>
#include <gui/DockWidgetData.h>
#include <gui/DockWidgetEFIS.h>
#include <gui/DockWidgetMain.h>
#include <gui/DockWidgetMap.h>
#include <gui/DockWidgetProp.h>

#include <gui/WidgetPFD.h>

////////////////////////////////////////////////////////////////////////////////

namespace Ui
{
    class MainWindow;
}

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Main window class.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    static const QString _tmp_file;     ///< temporary record file

    /** Constructor. */
    explicit MainWindow( QWidget *parent = NULLPTR );

    /** Destructor. */
    virtual ~MainWindow();

    /** */
    void setup( Autopilot *ap, g1000::IFD *ifd );

    /** */
    void init();

    inline bool getABS() const { return _dockCtrl->getABS(); }
    inline bool getNWS() const { return _dockCtrl->getNWS(); }

    inline double getCourse()  const { return _dockAuto->getCourse();  }
    inline double getFreqNav() const { return _dockAuto->getFreqNav(); }

protected:

    /** */
    void keyPressEvent( QKeyEvent *event );

    /** */
    void keyReleaseEvent( QKeyEvent *event );

    /** */
    void closeEvent( QCloseEvent *event );

    /** */
    void timerEvent( QTimerEvent *event );

private:

    typedef Data::CGI::ViewType ViewType;

    Ui::MainWindow *_ui;                ///<

    Autopilot *_ap;                     ///< autopilot object

    QDateTime _dateTime;                ///< current date and time (initial date and time incremented every step)
    QTime _flightTime;                  ///< flight time

    DialogConf *_dialogConf;            ///< settings dialog
    DialogEnvr *_dialogEnvr;            ///< environment conditions dialog
    DialogInit *_dialogInit;            ///< initial conditions dialog
    DialogMass *_dialogMass;            ///< mass configuration dialog

    DockWidgetAuto *_dockAuto;          ///<
    DockWidgetCtrl *_dockCtrl;          ///<
    DockWidgetData *_dockData;          ///<
    DockWidgetEFIS *_dockEFIS;          ///<
    DockWidgetMain *_dockMain;          ///<
    DockWidgetMap  *_dockMap;           ///<
    DockWidgetProp *_dockProp;          ///<

    WidgetPFD *_widgetPFD;              ///<

    QShortcut *_scCycleViews;           ///< key shortcut
    QShortcut *_scToggleHud;            ///< key shortcut
    QShortcut *_scFullScreen;           ///< key shortcut
    QShortcut *_scTimeFaster;           ///< key shortcut
    QShortcut *_scTimeSlower;           ///< key shortcut

    QString _rec_file;                  ///<

    ViewType _viewType;                 ///< specifies view type

    bool _showHUD;                      ///< specifies if HUD is visible
    bool _showTraces;                   ///< specifies if traces are visible

    bool _showRotorBlur;                ///<
    bool _showBladesDatum;              ///<
    bool _showBladesPaths;              ///<

    double _timeCoef;                   ///< [-] time compression coefficient

    int _timerId;                       ///< timer ID

    int _typeIndex;                     ///< aircraft type index

    fdm::DataInp::StateInp _stateInp;   ///< simulation input state
    fdm::DataOut::StateOut _stateOut;   ///< simulation output state

    hid::Assignment::Key getKey( int key );

    void flightRecordOpen();
    void flightRecordSave();

    void setStateIdle();
    void setStateInit();
    void setStateWork();
    void setStateFreeze();
    void setStatePause();
    void setStateStop();

    void setViewChase();
    void setViewOrbit();
    void setViewPilot();
    void setViewWorld();

    void setAircraftType( int typeIndex );

    void setSideDockAreasFullHeight( bool left, bool rght );
    void setWidescreenDockLayout( bool enabled );

    void settingsRead();
    void settingsRead_Airport( QSettings &settings );
    void settingsRead_View( QSettings &settings );

    void settingsSave();
    void settingsSave_Airport( QSettings &settings );
    void settingsSave_View( QSettings &settings );

    void updateDateTime();

    void updateDockAuto();
    void updateDockCtrl();
    void updateDockData();
    void updateDockEFIS();
    void updateDockMain();
    void updateDockProp();

    void updateMenu();
    void updateStatusBar();

    void updateOutputData();

private slots:

    void on_actionDialogConf_triggered();
    void on_actionDialogEnvr_triggered();
    void on_actionDialogInit_triggered();
    void on_actionDialogMass_triggered();

    void on_actionDockAuto_toggled( bool checked );
    void on_actionDockCtrl_toggled( bool checked );
    void on_actionDockData_toggled( bool checked );
    void on_actionDockEFIS_toggled( bool checked );
    void on_actionDockMain_toggled( bool checked );
    void on_actionDockMap_toggled( bool checked );
    void on_actionDockProp_toggled( bool checked );

    void on_actionShowPFD_triggered();

    void on_actionFlightOpen_triggered();
    void on_actionFlightSave_triggered();

    void on_actionStateInpIdle_triggered();
    void on_actionStateInpInit_triggered();
    void on_actionStateInpWork_triggered();
    void on_actionStateInpFreeze_triggered();
    void on_actionStateInpPause_triggered();
    void on_actionStateInpStop_triggered();

    void on_actionQuit_triggered();

    void on_actionViewChase_triggered();
    void on_actionViewOrbit_triggered();
    void on_actionViewPilot_triggered();
    void on_actionViewWorld_triggered();

    void on_actionShowHUD_triggered( bool checked );
    void on_actionShowTraces_triggered( bool checked );

    void on_actionShowRotorBlur_triggered( bool checked );
    void on_actionShowBladesDatum_triggered( bool checked );
    void on_actionShowBladesPaths_triggered( bool checked );

    void on_actionTimeFaster_triggered();
    void on_actionTimeSlower_triggered();

    void shorcutCycleViews_activated();
    void shorcutToggleHud_activated();
    void shorcutFullScreen_activated();

    void dialogInit_typeIndexChanged( int typeIndex );
    void dockMain_stateInpChanged( fdm::DataInp::StateInp stateInp );

    void dockAuto_closed();
    void dockCtrl_closed();
    void dockData_closed();
    void dockEFIS_closed();
    void dockMain_closed();
    void dockMap_closed();
    void dockProp_closed();
};

////////////////////////////////////////////////////////////////////////////////

#endif // MAINWINDOW_H
