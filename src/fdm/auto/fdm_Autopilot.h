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
#ifndef FDM_AUTOPILOT_H
#define FDM_AUTOPILOT_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/fdm_Defines.h>

#include <fdm/sys/fdm_PID.h>
#include <fdm/utils/fdm_Table.h>
#include <fdm/xml/fdm_XmlNode.h>

#include <fdm/auto/fdm_FlightDirector.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief Autopilot class.
 *
 * @see McLean D.: Automatic Flight Control Systems, 1990
 * @see Roskam J.: Airplane Flight Dynamics and Automatic Flight Controls, 2001
 * @see Bociek S., Gruszecki J.: Uklady sterowania automatycznego samolotem, 1999 [in Polish]
 */
class FDMEXPORT Autopilot
{
public:

    /** Constructor. */
    Autopilot( FlightDirector *fd );

    /** Destructor. */
    virtual ~Autopilot();

    /**
     * Reads data.
     * @param dataNode XML node
     */
    virtual void readData( XmlNode &dataNode );

    /** Initializes autopilot. */
    virtual void initialize();

    /**
     * @brief Updates autopilot.
     * @param timeStep [s]
     * @param roll [rad]
     * @param pitch [rad]
     * @param heading [rad]
     * @param altitude [m]
     * @param airspeed [m/s]
     * @param turnRate [rad/s]
     * @param yawRate [rad/s]
     * @param climbRate [m/s]
     * @param dme_distance [m]
     * @param nav_deviation
     * @param nav_active
     * @param loc_deviation
     * @param loc_active
     * @param gs_deviation
     * @param gs_active
     */
    virtual void update( double timeStep,
                         double roll, double pitch, double heading,
                         double altitude, double airspeed,
                         double turnRate, double yawRate, double climbRate,
                         double dme_distance,
                         double nav_deviation, bool nav_active,
                         double loc_deviation, bool loc_active,
                         double gs_deviation,  bool gs_active );

    inline void disengage() { _engaged = false; }
    inline void engage()    { _engaged = true;  }

    inline double getMinAltitude()  const { return _min_alt; }
    inline double getMaxAltitude()  const { return _max_alt; }
    inline double getMinClimbRate() const { return _min_vs;  }
    inline double getMaxClimbRate() const { return _max_vs;  }

    inline double getAltitude()  const { return _fd->getAltitude();  }
    inline double getAirspeed()  const { return _fd->getAirspeed();  }
    inline double getHeading()   const { return _fd->getHeading();   }
    inline double getClimbRate() const { return _fd->getClimbRate(); }
    inline double getPitch()     const { return _fd->getPitch();     }

    inline double getCmdRoll()  const { return _fd->getCmdRoll();  }
    inline double getCmdPitch() const { return _fd->getCmdPitch(); }

    inline double getCtrlRoll()  const { return _ctrl_roll;  }
    inline double getCtrlPitch() const { return _ctrl_pitch; }
    inline double getCtrlYaw()   const { return _ctrl_yaw;   }

    inline bool isActiveAP() const { return _engaged; }
    inline bool isActiveYD() const { return _yawDamper; }

    inline bool isActiveFD() const { return _fd->isEngaged(); }

    void setAltitude( double altitude );
    void setAirspeed( double airspeed );
    void setClimbRate( double climbRate );
    void setHeading( double heading );
    void setCourse( double course );
    void setRoll( double roll );
    void setPitch( double pitch );

protected:

    FlightDirector *_fd;    ///< flight director

    PID _pid_r;             ///< roll PID controller
    PID _pid_p;             ///< pitch PID controller
    PID _pid_y;             ///< yaw PID controller

    Table _gain_ias_r;      ///< roll gain schedule due to airspeed
    Table _gain_ias_p;      ///< pitch gain schedule due to airspeed
    Table _gain_ias_y;      ///< yaw gain schedule due to airspeed

    double _max_rate_roll;  ///< [1/s] max control roll rate
    double _max_rate_pitch; ///< [1/s] max control pitch rate
    double _max_rate_yaw;   ///< [1/s] max control yaw rate

    double _min_roll;       ///< [rad] min roll
    double _max_roll;       ///< [rad] max roll
    double _min_pitch;      ///< [rad] min pitch
    double _max_pitch;      ///< [rad] max pitch
    double _min_alt;        ///< [m]   min altitude
    double _max_alt;        ///< [m]   max altitude
    double _min_ias;        ///< [m/s] min airspeed
    double _max_ias;        ///< [m/s] max airspeed
    double _min_vs;         ///< [m/s] min climb rate
    double _max_vs;         ///< [m/s] max climb rate

    double _ctrl_roll;      ///< roll control command
    double _ctrl_pitch;     ///< pitch control command
    double _ctrl_yaw;       ///< yaw control command

    bool _yawDamper;        ///< specifies if yaw damper is engaged

    bool _testing;          ///< specifies if test is active
    bool _engaged;          ///< specifies if autopilot is engaged

    virtual void readChannel( const XmlNode &dataNode, double &max_rate,
                              PID &pid, Table &gain_ias );

    virtual void readPID( const XmlNode &dataNode, PID &pid );
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_AUTOPILOT_H
