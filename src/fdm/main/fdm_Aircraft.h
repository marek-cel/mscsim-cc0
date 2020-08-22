/***************************************************************************//**
 *
 * @author Marek M. Cel <marekcel@marekcel.pl>
 *
 * @section LICENSE
 *
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
#ifndef FDM_AIRCRAFT_H
#define FDM_AIRCRAFT_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/fdm_DataInp.h>
#include <fdm/fdm_DataOut.h>

#include <fdm/fdm_Base.h>

#include <fdm/main/fdm_DataManager.h>

#include <fdm/main/fdm_Environment.h>
#include <fdm/main/fdm_Intersections.h>

#include <fdm/main/fdm_Aerodynamics.h>
#include <fdm/main/fdm_Controls.h>
#include <fdm/main/fdm_LandingGear.h>
#include <fdm/main/fdm_Mass.h>
#include <fdm/main/fdm_Propulsion.h>

#include <fdm/utils/fdm_RungeKutta4.h>
#include <fdm/utils/fdm_WGS84.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief Aircraft model base class.
 *
 * Conventions and Units
 *
 * Units:
 * Flight Dynamics Model uses International System of Units (SI) for all
 * internal computations.
 * Other units can be used in XML data files.
 * Make sure to use "unit", "keys_unit", "cols_unit" or "rows_unit"
 * attribute when using non SI units in XML data file.
 *
 * @see fdm::Units::getConverter()
 * @see fdm::XmlUtils
 *
 * Rotations:
 * Rotations angles are expressed as Bryant angles (Euler angles in z-y-x
 * convention).
 * All rotations and rotation related operations are considered to be
 * passive (alias) rotations.
 *
 * @see https://en.wikipedia.org/wiki/Active_and_passive_transformation
 *
 * Coordinate Systems:
 *
 * Body Axis System (BAS)
 * Body Axis System is the body-fixed coordinate system, with the x-axis
 * positive forwards, the y-axis positive right and z-axis positive
 * downwards.
 *
 * North-East-Down (NED)
 * Local ground axis system with x-axis positive North, y-axis positive East
 * and z-axis positive Down.
 *
 * World Geodetic System 1984 (WGS)
 * World Geodetic System as described in [Department of Defense World
 * Geodetic System 1984. NIMA, Technical Report No. 8350.2, 2000].
 *
 * XML configuration file format:
 * @code
 * <fdm>
 *   <collision_points>
 *     <collision_point> { [m] x-coordinate } { [m] y-coordinate } { [m] z-coordinate } </collision_point>
 *     ... { more entries }
 *   </collision_points>
 *   <limitations>
 *     <airspeed_max> { [m/s] maximum airspeed (exceeding this value causes crash) } </airspeed_max>
 *     <load_aero_min> { [-] minimum (maximum negative) load factor due to aerodynamics (exceeding this value causes crash) } </load_aero_min>
 *     <load_aero_max> { [-] maximum (maximum positive) load factor due to aerodynamics (exceeding this value causes crash) } </load_aero_max>
 *     <load_gear_max> { [-] maximum absolute load factor due to landing gear (exceeding this value causes crash) } </load_gear_max>
 *   </limitations>
 *   <pilot_position> { [m] x-coordinate } { [m] y-coordinate } { [m] z-coordinate } </pilot_position>
 *   <aerodynamics>
 *     { aerodynamics data }
 *   </aerodynamics>
 *   <controls>
 *     { controls data }
 *   </controls>
 *   <landing_gear>
 *     { landing gear data }
 *   </landing_gear>
 *   <mass>
 *     { mass data }
 *   </mass>
 *   <propulsion>
 *     { propulsion data }
 *   </propulsion>
 * </fdm>
 * @endcode
 *
 * @see Taylor J.: Classical Mechanics, 2005
 * @see Osinski Z.: Mechanika ogolna, 1997, [in Polish]
 * @see Allerton D.: Principles of Flight Simulation, 2009
 * @see Stevens B., Lewis F.: Aircraft Control and Simulation, 1992
 * @see Sibilski K.: Modelowanie i symulacja dynamiki ruchu obiektow latajacych, 2004 [in Polish]
 * @see Narkiewicz J.: Tiltrotor Modelling for Simulation in Various Flight Conditions, 2006
 * @see Zlocka M.: Wyklady z dynamiki lotu, 2008 [in Polish]
 * @see https://en.wikipedia.org/wiki/Rotating_reference_frame
 * @see https://en.wikipedia.org/wiki/Centrifugal_force#Derivation
 */
class FDMEXPORT Aircraft : public DataManager
{
public:

    typedef std::vector< Vector3 > CollisionPoints; ///< collision points
    typedef VectorN StateVector;                    ///< state vector

    /** Propuslion state enum. */
    enum PropState
    {
        Stopped  = 0,   ///< stopped
        Running  = 1    ///< running
    };

    /** Data references. */
    struct DataRefs
    {
        struct Input
        {
            struct Controls
            {
                DataRef roll;                       ///< roll controls data reference
                DataRef pitch;                      ///< pitch control data reference
                DataRef yaw;                        ///< yaw control data reference

                DataRef trim_roll;                  ///< roll trim data reference
                DataRef trim_pitch;                 ///< pitch trim data reference
                DataRef trim_yaw;                   ///< yaw trim data reference

                DataRef brake_l;                    ///< left brake data reference
                DataRef brake_r;                    ///< right brake data reference

                DataRef landing_gear;               ///< landing gear data reference
                DataRef nose_wheel;                 ///< nose wheel steering data reference

                DataRef flaps;                      ///< flaps data reference
                DataRef airbrake;                   ///< airbrake data reference
                DataRef spoilers;                   ///< spoilers data reference

                DataRef collective;                 ///< collective data reference

                DataRef lgh;                        ///< landing gear handle data reference
                DataRef nws;                        ///< nose wheel steering data reference
                DataRef abs;                        ///< anti-skid braking system data reference
            };

            struct Engine
            {
                DataRef  throttle;                  ///< throttle data reference
                DataRef  mixture;                   ///< mixture lever data reference
                DataRef  propeller;                 ///< propeller lever data reference

                DataRef  fuel;                      ///< fuel state data reference
                DataRef  ignition;                  ///< ignition state data reference
                DataRef  starter;                   ///< starter state data reference
            };

            struct Masses
            {
                DataRef pilot[ FDM_MAX_PILOTS ];     ///< pilots data reference
                DataRef tank[ FDM_MAX_TANKS ];       ///< fuel tanks data reference
                DataRef cabin;                       ///< cabin data reference
                DataRef trunk;                       ///< cargo trunk data reference
                DataRef slung;                       ///< slung load data reference
            };

            Controls controls;
            Engine   engine[ FDM_MAX_ENGINES ];
            Masses   masses;
        };

        Input input;
    };

    /** Constructor. */
    Aircraft( const DataInp *dataInp, DataOut *dataOut );

    /** Destructor. */
    virtual ~Aircraft();

    /**
     * Initializes aircraft.
     * @param engineOn specifies if engine is running on startup
     */
    virtual void initialize( bool engineOn = false );

    /**
     * Updates aircraft due to simulation time step.
     * @param timeStep simulation time step [s]
     * @param integrate specifies integration is enabled
     */
    virtual void update( double timeStep, bool integrate = true );

    inline const DataInp* getDataInp() const { return _dataInp; }
    inline const DataOut* getDataOut() const { return _dataOut; }

    inline Environment*   getEnvir() { return _envir; }
    inline Intersections* getIsect() { return _isect; }

    inline const Environment*   getEnvir() const { return _envir; }
    inline const Intersections* getIsect() const { return _isect; }

    virtual inline const Aerodynamics* getAero() const { return _aero; }
    virtual inline const Controls*     getCtrl() const { return _ctrl; }
    virtual inline const LandingGear*  getGear() const { return _gear; }
    virtual inline const Mass*         getMass() const { return _mass; }
    virtual inline const Propulsion*   getProp() const { return _prop; }

    inline const Vector3& getPosPilotBAS() const { return _pos_pilot_bas; }

    inline StateVector& getStateVect() { return _stateVect; }

    inline const StateVector& getStateVect() const { return _stateVect; }
    inline const StateVector& getDerivVect() const { return _derivVect; }

    inline double getTimeStep() const { return _timeStep; }

    inline const Vector3&    getPos_WGS() const { return _pos_wgs; }
    inline const Quaternion& getAtt_WGS() const { return _att_wgs; }
    inline const Vector3&    getVel_BAS() const { return _vel_bas; }
    inline const Vector3&    getOmg_BAS() const { return _omg_bas; }

    inline const WGS84& getWGS() const { return _wgs; }

    inline const Matrix3x3& getWGS2BAS() const { return _wgs2bas; }
    inline const Matrix3x3& getBAS2WGS() const { return _bas2wgs; }
    inline const Matrix3x3& getWGS2NED() const { return _wgs2ned; }
    inline const Matrix3x3& getNED2WGS() const { return _ned2wgs; }
    inline const Matrix3x3& getNED2BAS() const { return _ned2bas; }
    inline const Matrix3x3& getBAS2NED() const { return _bas2ned; }

    inline const Angles& getAngles_WGS() const { return _angles_wgs; }
    inline const Angles& getAngles_NED() const { return _angles_ned; }

    inline const Vector3& getVel_NED() const { return _vel_ned; }

    inline const Vector3& getVel_air_BAS() const { return _vel_air_bas; }
    inline const Vector3& getOmg_air_BAS() const { return _omg_air_bas; }

    inline const Vector3& getAcc_BAS() const { return _acc_bas; }
    inline const Vector3& getEps_BAS() const { return _eps_bas; }

    inline const Vector3& getGrav_WGS() const { return _grav_wgs; }
    inline const Vector3& getGrav_BAS() const { return _grav_bas; }

    inline const Vector3& getGForce() const { return _g_force; }
    inline const Vector3& getGPilot() const { return _g_pilot; }

    inline const Vector3& getGround_WGS() const { return _ground_wgs; }
    inline const Vector3& getGround_BAS() const { return _ground_bas; }

    inline const Vector3& getNormal_WGS() const { return _normal_wgs; }
    inline const Vector3& getNormal_BAS() const { return _normal_bas; }

    inline DataOut::Crash getCrash() const { return _crash; }

    inline double getElevation()     const { return _elevation;     }
    inline double getAltitude_ASL()  const { return _altitude_asl;  }
    inline double getAltitude_AGL()  const { return _altitude_agl;  }
    inline double getRoll()          const { return _roll;          }
    inline double getPitch ()        const { return _pitch;         }
    inline double getHeading()       const { return _heading;       }
    inline double getAngleOfAttack() const { return _angleOfAttack; }
    inline double getSideslipAngle() const { return _sideslipAngle; }
    inline double getClimbAngle()    const { return _climbAngle;    }
    inline double getTrackAngle()    const { return _trackAngle;    }
    inline double getSlipSkidAngle() const { return _slipSkidAngle; }
    inline double getAirspeed()      const { return _airspeed;      }
    inline double getIAS()           const { return _ias;           }
    inline double getTAS()           const { return _tas;           }
    inline double getGroundSpeed()   const { return _groundSpeed;   }
    inline double getDynPress()      const { return _dynPress;      }
    inline double getMachNumber()    const { return _machNumber;    }
    inline double getClimbRate()     const { return _climbRate;     }
    inline double getTurnRate()      const { return _turnRate;      }

    inline PropState getInitPropState() const { return _initPropState; }

    /**
     * Sets aircraft state vector.
     * This function is meant to set initial conditions at the beginning,
     * as well as to reposition aircraft during flight.
     * @param state state vector
     */
    virtual void setStateVector( const StateVector &stateVector );

    inline void setIntegratePos( bool integrate_pos ) { _integrate_pos = integrate_pos; }
    inline void setIntegrateAtt( bool integrate_att ) { _integrate_att = integrate_att; }
    inline void setIntegrateVel( bool integrate_vel ) { _integrate_vel = integrate_vel; }

protected:

    /**
     * @brief Integrator wrapping class.
     * fdm::Aircraft::computeStateDeriv(const StateVector &,StateVector &)
     * is right-hand-side function for integration procedure.
     * Because fdm::Aircraft::computeStateDeriv(const StateVector &,StateVector &)
     * is private fdm::Aircraft::Integrator is declared friend class for the
     * fdm::Aircraft class.
     * fdm::Aircraft::Integrator is declared private due to friendship with
     * the fdm::Aircraft to avoid possible access issues.
     * Because it is used entirely inside fdm::Aircraft, there is no need
     * to make it public.
     */
    class Integrator : public RungeKutta4< Aircraft >
    {
    public:

        Integrator( Aircraft *obj, void (Aircraft::*fun)(const StateVector &, StateVector *) ) :
            RungeKutta4( obj, fun ) {}
    };

    friend class Aircraft::Integrator;

    const DataInp *_dataInp;    ///< input data
    DataOut *_dataOut;          ///< output data

    DataRefs _dataRefs;         ///< data references

    DataNode *_rootNode;        ///< data tree root node

    Environment   *_envir;      ///< environment interface
    Intersections *_isect;      ///< intersections interface

    Aerodynamics *_aero;        ///< aerodynamics model
    Controls     *_ctrl;        ///< controls model
    LandingGear  *_gear;        ///< landing gear model
    Mass         *_mass;        ///< mass and inertia model
    Propulsion   *_prop;        ///< propulsion model

    CollisionPoints _cp;        ///< [m] collision points expressed in BAS

    double _airspeed_max;       ///< [m/s] maximum indicated airspeed (exceeding this value causes crash)
    double _load_aero_min;      ///< [-] minimum (maximum negative) load factor due to aerodynamics (exceeding this value causes crash)
    double _load_aero_max;      ///< [-] maximum (maximum positive) load factor due to aerodynamics (exceeding this value causes crash)
    double _load_gear_max;      ///< [-] maximum absolute load factor due to landing gear (exceeding this value causes crash)

    Vector3 _pos_pilot_bas;     ///< [m] pilot's head position expressed in BAS

    StateVector _stateVect;     ///< aircraft state vector
    StateVector _statePrev;     ///< aircraft state vector (previous)
    StateVector _derivVect;     ///< aircraft state vector derivative (for output purposes only)

    Integrator *_integrator;    ///< integration procedure object

    double _timeStep;           ///< [s] simulation time step

    Vector3    _pos_wgs;        ///< [m] aircraft position expressed in WGS
    Quaternion _att_wgs;        ///< aircraft attitude expressed as quaternion of rotation from WGS to BAS
    Vector3    _vel_bas;        ///< [m/s] aircraft linear velocity vector expressed in BAS
    Vector3    _omg_bas;        ///< [rad/s] aircraft angular velocity expressed in BAS

    WGS84 _wgs;                 ///< aircraft WGS position wrapper

    Matrix3x3 _wgs2bas;         ///< matrix of rotation from WGS to BAS
    Matrix3x3 _bas2wgs;         ///< matrix of rotation from BAS to WGS
    Matrix3x3 _wgs2ned;         ///< matrix of rotation from WGS to NED
    Matrix3x3 _ned2wgs;         ///< matrix of rotation from NED to WGS
    Matrix3x3 _ned2bas;         ///< matrix of rotation from NED to BAS
    Matrix3x3 _bas2ned;         ///< matrix of rotation from BAS to NED

    Angles _angles_wgs;         ///< [rad] aircraft attitude expressed as rotation from WGS to BAS
    Angles _angles_ned;         ///< [rad] aircraft attitude expressed as rotation from NED to BAS

    Vector3 _vel_ned;           ///< [m/s] aircraft linear velocity vector expressed in NED

    Vector3 _vel_air_bas;       ///< [m/s] aircraft linear velocity vector relative to the air expressed in BAS
    Vector3 _omg_air_bas;       ///< [rad/s] aircraft angular velocity relative to the air expressed in BAS

    Vector3 _acc_bas;           ///< [m/s^2] aircraft linear acceleration vector expressed in BAS
    Vector3 _eps_bas;           ///< [rad/s^2] aircraft angular acceleration vector expressed in BAS

    Vector3 _grav_wgs;          ///< [m/s^2] gravity acceleration vector expressed in WGS
    Vector3 _grav_bas;          ///< [m/s^2] gravity acceleration vector expressed in BAS

    Vector3 _g_force;           ///< [-] vector of G-Force factor (aircraft)
    Vector3 _g_pilot;           ///< [-] vector of G-Force factor (pilot's head)

    Vector3 _ground_wgs;        ///< [m] ground intersection coordinates expressed in WGS
    Vector3 _ground_bas;        ///< [m] ground intersection coordinates expressed in BAS

    Vector3 _normal_wgs;        ///< [-] normal to ground vector expressed in WGS
    Vector3 _normal_bas;        ///< [-] normal to ground vector expressed in BAS

    DataOut::Crash _crash;      ///< crash cause

    PropState _initPropState;   ///< initial propulsion state

    UInt32 _cp_index;           ///< current collision point index

    double _elevation;          ///< [m] ground elevation above mean sea level
    double _altitude_asl;       ///< [m] altitude above sea level
    double _altitude_agl;       ///< [m] altitude above ground level
    double _roll;               ///< [rad] roll angle
    double _pitch;              ///< [rad] pitch angle
    double _heading;            ///< [rad] true heading
    double _angleOfAttack;      ///< [rad] angle of attack
    double _sideslipAngle;      ///< [rad] sideslip angle
    double _climbAngle;         ///< [rad] climb angle
    double _trackAngle;         ///< [rad] track angle
    double _slipSkidAngle;      ///< [rad] slip/skid angle
    double _airspeed;           ///< [m/s] real airspeed
    double _dynPress;           ///< [Pa] dynamic pressure
    double _ias;                ///< [m/s] indicated airspeed
    double _tas;                ///< [m/s] true airspeed
    double _groundSpeed;        ///< [m/s] ground speed (horizontal velocity)
    double _machNumber;         ///< [-] Mach number
    double _climbRate;          ///< [m/s] climb rate
    double _turnRate;           ///< [rad/s] turn rate
    double _headingPrev;        ///< [rad] previous heading

    bool _integrate_pos;        ///< specifies if position is being integrated
    bool _integrate_att;        ///< specifies if attitude is being integrated
    bool _integrate_vel;        ///< specifies if velocity is being integrated

    /**
     * Reads data.
     * @param dataFile XML data file path
     */
    virtual void readFile( const char *dataFile );

    /**
     * Reads data.
     * @param dataNode XML node
     */
    virtual void readData( XmlNode &dataNode );

    /** This function is called just before time integration step. */
    virtual void anteIntegration();

    /** This function is called just after time integration step. */
    virtual void postIntegration();

    /** This function checks collisions. */
    virtual void detectCrash();

    /** Updates output data. */
    virtual void updateOutputData();

    /**
     * Computes state vector derivatives due to given state vector.
     * @param stateVect state vector
     * @param derivVect resulting state vector derivative
     */
    virtual void computeStateDeriv( const StateVector &stateVect,
                                    StateVector *derivVect );

    /**
     * Updates aircraft state variables.
     * @param stateVect state vector
     * @param derivVect state vector derivative
     */
    virtual void updateVariables( const StateVector &stateVect,
                                  const StateVector &derivVect );

private:

    /** Using this constructor is forbidden. */
    Aircraft( const Aircraft & ) : DataManager() {}

    /** Initializes data tree. */
    void initDataTree();
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_AIRCRAFT_H
