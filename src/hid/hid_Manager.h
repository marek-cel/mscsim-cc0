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
#ifndef HID_MANAGER_H
#define HID_MANAGER_H

////////////////////////////////////////////////////////////////////////////////

#include <string>
#include <vector>

#include <fdm/fdm_Defines.h>

#include <sim/Singleton.h>

#include <hid/hid_Assignment.h>

////////////////////////////////////////////////////////////////////////////////

namespace hid
{

/**
 * @brief HID manager class.
 */
class Manager : public Singleton< Manager >
{
    friend class Singleton< Manager >;

public:

    static const std::string _actionNames[ HID_MAX_ACTIONS ];   ///<
    static const std::string _keysNames[ HID_MAX_KEYS ];        ///<

    static const double _speedCtrl;         ///< [1/s]
    static const double _speedTrim;         ///< [1/s]
    static const double _speedBrakes;       ///< [1/s]
    static const double _speedGear;         ///< [1/s]
    static const double _speedFlaps;        ///< [1/s]
    static const double _speedAirbrake;     ///< [1/s]
    static const double _speedSpoilers;     ///< [1/s]
    static const double _speedCollective;   ///< [1/s]
    static const double _speedThrottle;     ///< [1/s]
    static const double _speedMixture;      ///< [1/s]
    static const double _speedPropeller;    ///< [1/s]

    /** */
    static Assignment::POVs getPOV( short pov_deg );

    static bool isAxis( Assignment::Action action );

private:

    /**
     * You should use static function instance() due to get refernce
     * to Manager class instance.
     */
    Manager();

    /** Using this constructor is forbidden. */
    Manager( const Manager & ) {}

public:

    /** Destructor. */
    virtual ~Manager();

    /** */
    void init();

    /** */
    void reset( bool onGround = true );

    /**
     * @param time step [s]
     * @param data input
     * @param data output
     */
    void update( double timeStep );

    double getCtrlRoll()     const { return _ctrlRoll;     }
    double getCtrlPitch()    const { return _ctrlPitch;    }
    double getCtrlYaw()      const { return _ctrlYaw;      }
    double getTrimRoll()     const { return _trimRoll;     }
    double getTrimPitch()    const { return _trimPitch;    }
    double getTrimYaw()      const { return _trimYaw;      }
    double getBrakeLeft()    const { return _brakeLeft;    }
    double getBrakeRight()   const { return _brakeRight;   }
    double getParkingBrake() const { return _parkingBrake; }
    double getLandingGear()  const { return _landingGear;  }
    double getFlaps()        const { return _flaps;        }
    double getAirbrake()     const { return _airbrake;     }
    double getSpoilers()     const { return _spoilers;     }
    double getCollective()   const { return _collective;   }

    double getThrottle  ( int num ) const { return _throttle  [ num ]; }
    double getMixture   ( int num ) const { return _mixture   [ num ]; }
    double getPropeller ( int num ) const { return _propeller [ num ]; }

    bool getTrigger() const { return _trigger; }
    bool getAP_Disc() const { return _ap_disc; }
    bool getCWS() const { return _cws; }


    bool isLgHandleDown() const { return _stateLandingGear; }

    /** */
    void setAssingment( Assignment::Action action, const Assignment &assignment );

    /** */
    void setKeysState( bool keysState[] );

    /** */
    void setNotches( const std::vector< double > &notches );

private:

    Assignment _assignments[ HID_MAX_ACTIONS ]; ///<

    bool _keysState[ HID_MAX_KEYS ];            ///<

    double _timeStep;                           ///< [s] simulation time step

    bool _trigger;                              ///< trigger
    bool _ap_disc;                              ///< autopilot disconnect
    bool _cws;                                  ///< cws

    double _ctrlRoll;                           ///< [-1.0,1.0]
    double _ctrlPitch;                          ///< [-1.0,1.0]
    double _ctrlYaw;                            ///< [-1.0,1.0]

    double _trimRoll;                           ///< [-1.0,1.0]
    double _trimPitch;                          ///< [-1.0,1.0]
    double _trimYaw;                            ///< [-1.0,1.0]

    double _brakeLeft;                          ///< [0.0,1.0]
    double _brakeRight;                         ///< [0.0,1.0]
    double _parkingBrake;                       ///< [0.0,1.0]

    double _landingGear;                        ///< [0.0,1.0]

    double _flaps;                              ///< [0.0,1.0]
    double _airbrake;                           ///< [0.0,1.0]
    double _spoilers;                           ///< [0.0,1.0]

    double _collective;                         ///< [0.0,1.0]

    double _commonThrottle;                     ///< [0.0,1.0]
    double _commonMixture;                      ///< [0.0,1.0]
    double _commonPropeller;                    ///< [0.0,1.0]

    double _throttle  [ FDM_MAX_ENGINES ];      ///< [0.0,1.0]
    double _mixture   [ FDM_MAX_ENGINES ];      ///< [0.0,1.0]
    double _propeller [ FDM_MAX_ENGINES ];      ///< [0.0,1.0]

    bool _prevFlapsExtend;
    bool _prevFlapsRetract;
    bool _prevLandingGearToggle;                ///<
    bool _prevParkingBrakeToggle;               ///<
    bool _prevSpoilersToggle;                   ///<

    bool _stateLandingGear;                     ///<
    bool _stateParkingBrake;                    ///<
    bool _stateSpoilers;                        ///<

    int _notch;                                 ///< current flaps notch

    std::vector< double > _notches;             ///< flaps notches

    /** */
    void getAxisValue( const Assignment &assignment, double *value, int absolute = 0 );

    /** */
    void getRealValue( Assignment::Action decreaseAction,
                       Assignment::Action increaseAction,
                       double *value,
                       double speed,
                       double min,
                       double max,
                       bool autocenter = false );

    /** */
    void getRealValue( Assignment::Action applyAction,
                       double *value,
                       double speed,
                       double min,
                       double max );

    /** */
    void getRealValue( Assignment::Action toggleAction,
                       bool *togglePrev,
                       bool *state,
                       double *value,
                       double speed,
                       double min,
                       double max );

    /** */
    bool getButtState( const Assignment &assignment );

    /** */
    void updateAxisActions();

    /** */
    void updateMiscActions();
};

} // end of hid namepsace

////////////////////////////////////////////////////////////////////////////////

#endif // HID_MANAGER_H
