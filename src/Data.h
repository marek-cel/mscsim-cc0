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
#ifndef DATA_H
#define DATA_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/fdm_DataInp.h>
#include <fdm/fdm_DataOut.h>

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Simulation data access class.
 */
class Data
{
public:

    /** CGI data. */
    struct CGI
    {
        /** Airport data. */
        struct Airport
        {
            bool lightsHELI;                    ///< helipad lights
            bool lightsRALS;                    ///< Runway Approach Lighting System
            bool lightsRCLS;                    ///< Runway Centerline Lighting System
            bool lightsRELS;                    ///< Runway Edge Light System
            bool lightsTDZL;                    ///< Touchdown Zone Lights
            bool lightsTELS;                    ///< Taxiway Edge Lights System
            bool lightsTWRL;                    ///< Tower Lights
            bool lightsVGSI;                    ///< Visual Glide Slope Indicator

            bool gatesRwy18;                    ///<
            bool gatesRwy36;                    ///<
        };

        /** Camera data. */
        struct Camera
        {
            double latitude;                ///< [rad] camera latitude
            double longitude;               ///< [rad] camera longitude
            double altitude_agl;            ///< [m] camera altitude above ground level
            double altitude_asl;            ///< [m] camera altitude above sea level

            double offset_x;                ///< [m] camera position x-offset expressed in BAS
            double offset_y;                ///< [m] camera position y-offset expressed in BAS
            double offset_z;                ///< [m] camera position z-offset expressed in BAS
        };

        /** Environment data. */
        struct Environment
        {
            /** Clouds data. */
            struct Clouds
            {
                /** Clouds type. */
                enum Type
                {
                    None = 0,               ///< no clouds
                    Block,                  ///< block volumetric clouds (Cumulus type)
                    Layer                   ///< flat clouds layers (Stratus type)
                };

                /** Clouds data. */
                union Data
                {
                    /** Block clouds data. */
                    struct Block
                    {
                        short count;        ///< number of clouds within visual range
                        double base_asl;    ///< [m] clouds base above mean sea level
                        double thickness;   ///< [m] clouds thickness
                    };

                    /** Layer clouds data. */
                    struct Layer
                    {
                        /** Cover. */
                        enum Cover
                        {
                            SKC = 0,        ///< sky clear
                            FEW = 1,        ///< few
                            SCT = 2,        ///< scattered
                            BKN = 3,        ///< broken
                            OVC = 4         ///< overcast
                        };

                        Cover cover;        ///< cover
                        double base_asl;    ///< [m] clouds base above mean sea level
                    };

                    Block block;            ///< block clouds data
                    Layer layer;            ///< layer clouds data
                };

                Type type;                  ///< clouds type
                Data data;                  ///< clouds data
            };

            Clouds clouds;                  ///< clouds data

            double visibility;              ///< [m] visibility due haze, fog, etc
        };

        /** HUD data. */
        struct HUD
        {
            bool enabled;                   ///< specifies if HUD is enabled

            double color_r;                 ///< [-] HUD color red component
            double color_g;                 ///< [-] HUD color green component
            double color_b;                 ///< [-] HUD color blue component

            double opacity;                 ///< [-] HUD opacity

            double factor_alt;              ///< [-] altitude factor
            double factor_vel;              ///< [-] velocity factor

            double roll;                    ///< [rad] roll angle
            double pitch;                   ///< [rad] pitch angle
            double heading;                 ///< [rad] true heading

            double angleOfAttack;           ///< [rad] angle of attack
            double sideslipAngle;           ///< [rad] angle of sideslip

            double altitude;                ///< [m]   baro altitude
            double climbRate;               ///< [m/s] climb rate
            double radioAlt;                ///< [m]   radio altitude

            double airspeed;                ///< [m/s] airspeed
            double machNumber;              ///< [-]   Mach number
            double g_force;                 ///< [-] G-Force

            bool ils_visible;               ///< specifies if ILS is visible
            double ils_gs_deviation;        ///< [-1.0,1.0] ILS Glide Slope deviation
            double ils_lc_deviation;        ///< [-1.0,1.0] ILS Localizer deviation

            bool stall;                     ///< stall flag
        };

        /** Sky dome data. */
        struct SkyDome
        {
            double skyScale;                ///< [-] sky dome scaling factor
            double sunAlpha;                ///< [rad] Sun right ascension
            double sunDelta;                ///< [rad] Sun declination
            double sunElev;                 ///< [rad] Sun elevation
            double sunAzim;                 ///< [rad] Sun azimuth
        };

        /** View types. */
        enum ViewType
        {
            ViewChase = 1,                  ///< chase view camera manipulator
            ViewPilot = 2,                  ///< pilot view camera manipulator
            ViewOrbit = 3,                  ///< orbit view camera manipulator
            ViewWorld = 4                   ///< world view camera manipulator
        };

        Airport     airport;                ///< airport data
        Camera      camera;                 ///< camera data
        Environment environment;            ///< environment data
        HUD         hud;                    ///< HUD data
        SkyDome     skyDome;                ///< sky dome data

        ViewType viewType;                  ///< view type

        bool traces;                        ///< specify if traces are visible
    };

    /** Date and Time. */
    struct DateTime
    {
        unsigned short year;                ///< year
        unsigned short month;               ///< 1...12 month
        unsigned short day;                 ///< 1...31 day

        unsigned short hour;                ///< 0...23 hour
        unsigned short minute;              ///< 0...59 minute
        unsigned short second;              ///< 0...59 second
    };

    /** Environment data. */
    struct Environment
    {
        typedef fdm::DataInp::Environment::WindShear WindShear;

        double temperature_0;               ///< [K] sea level air temperature
        double pressure_0;                  ///< [Pa] sea level air pressure

        double wind_direction;              ///< [rad] wind direction
        double wind_speed;                  ///< [m/s] wind speed
        double turbulence;                  ///< [-] turbulence intensity

        WindShear windShear;                ///< wind shear model type
    };

    /** Navigation data. */
    struct Navigation
    {
        /** VOR TO/FROM indicator. */
        enum NAV_CDI { NONE = 0, TO, FROM };

        bool adf_visible;                   ///<
        double adf_bearing;                 ///< [rad]

        bool dme_visible;                   ///<
        double dme_distance;                ///< [m]

        bool ils_visible;                   ///<
        bool ils_gs_visible;                ///<
        bool ils_lc_visible;                ///<
        double ils_heading;                 ///< [rad]
        double ils_gs_deviation;            ///< [rad] horizontal deviation
        double ils_lc_deviation;            ///< [rad] vertical deviation
        double ils_gs_norm;                 ///< [-1.0;1.0]
        double ils_lc_norm;                 ///< [-1.0;1.0]

        NAV_CDI nav_cdi;                    ///<
        bool nav_visible;                   ///<
        double nav_bearing;                 ///< [rad]
        double nav_deviation;               ///< [rad]
        double nav_norm;                    ///< [-1.0;1.0]
    };

    /** Ownship data. */
    struct Ownship
    {
        char aircraftFile[ 1024 ];          ///< ownship model file path

        double latitude;                    ///< [rad] geodetic latitude
        double longitude;                   ///< [rad] geodetic longitude

        double altitude_asl;                ///< [m] altitude above mean sea level
        double altitude_agl;                ///< [m] altitude above ground level

        double roll;                        ///< [rad] roll angle
        double pitch;                       ///< [rad] pitch angle
        double heading;                     ///< [rad] true heading

        double angleOfAttack;               ///< [rad] angle of attack
        double sideslipAngle;               ///< [rad] angle of sideslip

        double climbAngle;                  ///< [rad] climb angle
        double trackAngle;                  ///< [rad] track angle

        double slipSkidAngle;               ///< [rad] slip/skid angle

        double airspeed;                    ///< [m/s] airspeed
        double ias;                         ///< [m/s] indicated airspeed
        double machNumber;                  ///< [-]   Mach number
        double climbRate;                   ///< [m/s] climb rate

        double rollRate;                    ///< [rad/s] roll rate  (angular velcoity p component expressed in BAS)
        double pitchRate;                   ///< [rad/s] pitch rate (angular velcoity q component expressed in BAS)
        double yawRate;                     ///< [rad/s] yaw rate   (angular velcoity r component expressed in BAS)
        double turnRate;                    ///< [rad/s] turn rate  (heading change rate)

        double g_force_x;                   ///< [-] x component of G-Force vector expressed in BAS (aircraft)
        double g_force_y;                   ///< [-] y component of G-Force vector expressed in BAS (aircraft)
        double g_force_z;                   ///< [-] z component of G-Force vector expressed in BAS (aircraft)

        double pos_x_wgs;                   ///< [m] postion x coordinate expressed in WGS
        double pos_y_wgs;                   ///< [m] postion y coordinate expressed in WGS
        double pos_z_wgs;                   ///< [m] postion z coordinate expressed in WGS

        double att_e0_wgs;                  ///< [-] attitude quaternion e0 component expressed as rotation from WGS to BAS
        double att_ex_wgs;                  ///< [-] attitude quaternion ex component expressed as rotation from WGS to BAS
        double att_ey_wgs;                  ///< [-] attitude quaternion ey component expressed as rotation from WGS to BAS
        double att_ez_wgs;                  ///< [-] attitude quaternion ez component expressed as rotation from WGS to BAS

        double vel_north;                   ///< [m/s] north velocity
        double vel_east;                    ///< [m/s] east velocity

        double ailerons;                    ///< [rad] ailerons deflection (positive left aileron in the upward direction)
        double elevator;                    ///< [rad] elevator deflection (positive in the downward direction)
        double elevons;                     ///< [rad] elevons differential deflection
        double rudder;                      ///< [rad] rudder deflection (positive in the port direction)
        double flaps;                       ///< [rad] flaps deflection
        double flaperons;                   ///< [rad] flaperons differtial deflection
        double lef;                         ///< [rad] leading edge flaps deflection
        double airbrake;                    ///< [rad] airbrake deflection

        double norm_flaps;                  ///< [0.0,1.0] flaps normalized position
        double norm_landingGear;            ///< [0.0,1.0] landing gear normalized position

        double propeller[ FDM_MAX_ENGINES ];///< [rad] propeller angle

        double mainRotor_azimuth;           ///< [rad] main rotor rotation angle (azimuth)
        double mainRotor_coningAngle;       ///< [rad] main rotor coning angle
        double mainRotor_diskRoll;          ///< [rad] main rotor disk roll angle
        double mainRotor_diskPitch;         ///< [rad] main rotor disk pitch angle
        double mainRotor_collective;        ///< [rad] main rotor collective pitch angle
        double mainRotor_cyclicLon;         ///< [rad] main rotor longitudinal cyclic pitch angle
        double mainRotor_cyclicLat;         ///< [rad] main rotor lateral cyclic pitch angle
        double tailRotor_azimuth;           ///< [rad] tail rotor rotation angle
        double mainRotor_coef;              ///< [-] main rotor rotation coefficient (sign)
        double tailRotor_coef;              ///< [-] tail rotor rotation coefficient (sign)

        bool onGround;                      ///< specifies if aircraft is on ground
        bool stall;                         ///< specifies if aircraft is stalling
    };

    /** Propulsion data. */
    struct Propulsion
    {
        struct Engine
        {
            bool state;                     ///< specifies if engine is working
            bool afterburner;               ///<

            double rpm;                     ///< [rpm]
            double prop;                    ///< [rpm]
            double ng;                      ///< [%]
            double n1;                      ///< [%]
            double n2;                      ///< [%]
            double trq;                     ///< [%]
            double epr;                     ///< [-]
            double map;                     ///< [Pa]
            double egt;                     ///< [deg C]
            double itt;                     ///< [deg C]
            double tit;                     ///< [deg C]

            double fuelFlow;                ///< [kg/s]

            double throttle;                ///< [0.0,1.0] throttle
            double mixture;                 ///< [0.0,1.0] mixture lever
            double propeller;               ///< [0.0,1.0] propeller lever

            bool fuel;                      ///<
            bool ignition;                  ///<
            bool starter;                   ///<
        };

        Engine engine[ FDM_MAX_ENGINES ];   ///< engines data
    };

    /** Simulation data struct. */
    struct DataBuf
    {
        typedef fdm::DataInp::AircraftType AircraftType;
        typedef fdm::DataInp::StateInp StateInp;
        typedef fdm::DataOut::StateOut StateOut;

        typedef fdm::DataInp::Controls  Controls;
        typedef fdm::DataInp::Ground    Ground;
        typedef fdm::DataInp::Initial   Initial;
        typedef fdm::DataInp::Masses    Masses;
        typedef fdm::DataInp::Recording Recording;

        CGI         cgi;                    ///< CGI data
        Controls    controls;               ///< controls data
        DateTime    dateTime;               ///< date time data
        Environment environment;            ///< environment data
        Ground      ground;                 ///< ground data
        Initial     initial;                ///< initial conditions
        Masses      masses;                 ///< masses data
        Navigation  navigation;             ///< navigation data
        Ownship     ownship;                ///< ownship data
        Propulsion  propulsion;             ///< propulsion data
        Recording   recording;              ///< recording data

        AircraftType aircraftType;          ///< input aircraft type

        StateInp stateInp;                  ///< simulation input state
        StateOut stateOut;                  ///< simulation output state

        double timeCoef;                    ///< [-] time coefficient
        double timeStep;                    ///< [s] simulation time step
    };

private:

    /**
     * You should use static function instance() due to get refernce
     * to Data class instance.
     */
    Data() {}

    /** Using this constructor is forbidden. */
    Data( const Data & ) {}

public:

    /** Returns pointer to the common data object. */
    static inline DataBuf* get() { return &_data; }

    /** Destructor. */
    virtual ~Data() {}

private:

    static DataBuf _data;   ///< simulation data
};

////////////////////////////////////////////////////////////////////////////////

#endif // DATA_H
