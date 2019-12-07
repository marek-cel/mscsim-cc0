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
#ifndef C172_FLIGHTDIRECTOR_H
#define C172_FLIGHTDIRECTOR_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/auto/fdm_FlightDirector.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief Flight director class.
 *
 * @see Bociek S., Gruszecki J.: Uklady sterowania automatycznego samolotem, 1999, p.213. [in Polish]
 */
class C172_FlightDirector : public FlightDirector
{
public:

    /** Lateral modes. */
    enum LatMode
    {
        LM_FD = 0,      ///< wing level
        LM_HDG,         ///< heading select
        LM_NAV,         ///< track navigation senson
        LM_APR,         ///< approach
        LM_BC           ///< back course approach
    };

    /** Vertical modes. */
    enum VerMode
    {
        VM_FD = 0,      ///< pitch attitude hold
        VM_ALT,         ///< altitude hold
        VM_IAS,         ///< indicated airspeed hold
        VM_VS,          ///< vertical speed
        VM_ARM,         ///< altitude select
        VM_GS           ///< approach glide slope
    };

    /** Armed modes. */
    enum ArmMode
    {
        ARM_NONE = 0,   ///< no mode armed
        ARM_NAV,        ///< track navigation senson
        ARM_APR,        ///< approach
        ARM_BC          ///< back course approach
    };

    /** Constructor. */
    C172_FlightDirector();

    /** Destructor. */
    virtual ~C172_FlightDirector();

    /**
     * Reads data.
     * @param dataNode XML node
     */
    void readData( XmlNode &dataNode );

    /**
     * Updates flight director.
     */
    void update( double timeStep,
                 double heading,
                 double altitude, double airspeed,
                 double turnRate, double climbRate,
                 double dme_distance,
                 double nav_deviation, bool nav_active,
                 double loc_deviation, bool loc_active,
                 double gs_deviation,  bool gs_active );

    void disableHalfBank();
    void enableHalfBank();

    inline LatMode getLatMode() const { return _lat_mode; }
    inline VerMode getVerMode() const { return _ver_mode; }
    inline ArmMode getArmMode() const { return _arm_mode; }

    inline void setLatMode( LatMode lat_mode ) { _lat_mode = lat_mode; }
    inline void setVerMode( VerMode ver_mode ) { _ver_mode = ver_mode; }
    inline void setArmMode( ArmMode arm_mode ) { _arm_mode = arm_mode; }

    void setHeadingILS( double heading_ils );

    void toggleLatMode( LatMode lat_mode );
    void toggleVerMode( VerMode ver_mode );

protected:

    LatMode _lat_mode;      ///< lateral mode
    VerMode _ver_mode;      ///< vertical mode
    ArmMode _arm_mode;      ///< horizontal arm mode

    LatMode _lat_mode_arm;  ///< lateral mode (before armed)

    PID _pid_alt;           ///< ALT mode PID controller
    PID _pid_ias;           ///< IAS mode PID controller
    PID _pid_vs;            ///< VS mode PID controller
    PID _pid_arm;           ///< ARM mode PID controller
    PID _pid_gs;            ///< GS quasi mode PID controller
    PID _pid_nav_ang;       ///< NAV mode PID controller (angular)
    PID _pid_nav_lin;       ///< NAV mode PID controller (linear)
    PID _pid_apr_ang;       ///< APR mode PID controller (angular)
    PID _pid_apr_lin;       ///< APR mode PID controller (linear)
    PID _pid_hdg;           ///< HDG mode PID controller
    PID _pid_trn;           ///< TRN quasi mode PID controller

    double _max_roll;       ///< [rad] max roll
    double _min_pitch;      ///< [rad] min pitch
    double _max_pitch;      ///< [rad] max pitch
    double _max_yaw;        ///< [rad] max yaw

    double _max_rate_roll;  ///< [rad/s] roll max rate
    double _max_rate_pitch; ///< [rad/s] pitch max rate
    double _max_rate_tr;    ///< [rad/s^2] turn rate max rate

    double _heading_act;    ///< [rad] acting desired heading
    double _heading_ils;    ///< [rad] ILS heading

    double _climbRate_act;  ///< [m/s] acting desired climb rate
    double _climbRate_tc;   ///< [s] acting desired climb rate time constant

    double _turnRate;       ///< [rad/s] turn rate

    double _min_dh_arm;     ///< [m] ARM mode min altitude difference

    double _nav_dev_max;    ///< [rad]
    double _apr_dev_max;    ///< [rad]

    double _gs_dev_prev;    ///< [rad]

    bool _turnRateMode;     ///<

    virtual void readMode( const fdm::XmlNode &dataNode, PID &pid, double min, double max );
    virtual void readPID( const fdm::XmlNode &dataNode, PID &pid, double min, double max );

    virtual void updateArmMode( double dme_distance,
                                double nav_deviation, bool nav_active,
                                double loc_deviation, bool loc_active );

    virtual void updateLatFD  ( double timeStep );
    virtual void updateLatNAV ( double timeStep, double dme_distance, double nav_deviation );
    virtual void updateLatAPR ( double timeStep, double dme_distance, double loc_deviation );
    virtual void updateLatBC  ( double timeStep, double dme_distance, double loc_deviation );
    virtual void updateLatABC ( double timeStep, double dme_distance, double loc_deviation, double heading );
    virtual void updateLatHDG ( double timeStep, double heading, double turnRate );
    virtual void updateLatTRN ( double timeStep, double turnRate, double airspeed );

    virtual void updateVerFD  ( double timeStep );
    virtual void updateVerALT ( double timeStep, double altitude );
    virtual void updateVerIAS ( double timeStep, double airspeed );
    virtual void updateVerVS  ( double timeStep, double altitude, double climbRate );
    virtual void updateVerARM ( double timeStep, double altitude, double climbRate );
    virtual void updateVerGS  ( double timeStep, double gs_deviation, bool gs_active );
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // C172_FLIGHTDIRECTOR_H
