﻿/****************************************************************************//*
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
#ifndef CGI_OWNSHIP_H
#define CGI_OWNSHIP_H

////////////////////////////////////////////////////////////////////////////////

#include <osg/PositionAttitudeTransform>
#include <osg/Switch>

#include <fdm/utils/fdm_Table1.h>
#include <fdm/xml/fdm_XmlNode.h>

#include <cgi/cgi_Module.h>

#include <cgi/otw/cgi_Rotor.h>
#include <cgi/otw/cgi_Scenery.h>
#include <cgi/otw/cgi_Vector.h>

////////////////////////////////////////////////////////////////////////////////

namespace cgi
{

/**
 * @brief Ownship entity class.
 */
class Ownship : public Module
{
public:

    struct ElementData
    {
        struct AxisData
        {
            double input_min;   ///< [-]
            double input_max;   ///< [-]

            double angle;       ///< [rad]
            double angle_min;   ///< [rad]
            double angle_max;   ///< [rad]

            double shift;       ///< [m]
            double shift_min;   ///< [m]
            double shift_max;   ///< [m]
        };

        AxisData x;
        AxisData y;
        AxisData z;
    };

    typedef std::vector< osg::ref_ptr<osg::PositionAttitudeTransform> > Elements;
    typedef std::vector< ElementData > ElementsData;

    /** @brief Constructor. */
    Ownship( const Module *parent = NULLPTR, Scenery *scenery = NULLPTR );

    /** @brief Destructor. */
    virtual ~Ownship();

    /** @brief Updates ownship. */
    void update();

private:

    Scenery *_scenery;      ///< scenery

    Rotor  *_rotor;         ///< rotor
    Vector *_vector;        ///< vector

    osg::Quat  _att_wgs;    ///< aircraft attitude
    osg::Vec3d _pos_wgs;    ///< aircraft position

    osg::ref_ptr<osg::PositionAttitudeTransform> _pat;          ///< aircraft position and attitude
    osg::ref_ptr<osg::PositionAttitudeTransform> _patOffset;    ///< model offset
    osg::ref_ptr<osg::PositionAttitudeTransform> _patRibbons;   ///< ribbons

    osg::ref_ptr<osg::Switch> _switch;                          ///<
    osg::ref_ptr<osg::Switch> _switchRibbons;                   ///<

    osg::ref_ptr<osg::PositionAttitudeTransform> _aileronL;     ///< left aileron deflection
    osg::ref_ptr<osg::PositionAttitudeTransform> _aileronR;     ///< right aileron deflection
    osg::ref_ptr<osg::PositionAttitudeTransform> _elevatorL;    ///< left elevator deflection
    osg::ref_ptr<osg::PositionAttitudeTransform> _elevatorR;    ///< right elevator deflection
    osg::ref_ptr<osg::PositionAttitudeTransform> _rudderL;      ///< left rudder deflection
    osg::ref_ptr<osg::PositionAttitudeTransform> _rudderR;      ///< right rudder deflection
    osg::ref_ptr<osg::PositionAttitudeTransform> _flaperonL;    ///< left flaperon deflection
    osg::ref_ptr<osg::PositionAttitudeTransform> _flaperonR;    ///< right flaperon deflection
    osg::ref_ptr<osg::PositionAttitudeTransform> _elevonL;      ///< left elevon deflection
    osg::ref_ptr<osg::PositionAttitudeTransform> _elevonR;      ///< right elevon deflection
    osg::ref_ptr<osg::PositionAttitudeTransform> _flapL;        ///< left trailing edge flap deflection
    osg::ref_ptr<osg::PositionAttitudeTransform> _flapR;        ///< right trailing edge flap deflection
    osg::ref_ptr<osg::PositionAttitudeTransform> _lefL;         ///< left leading edge flap deflection
    osg::ref_ptr<osg::PositionAttitudeTransform> _lefR;         ///< right leading edge flap deflection

    osg::ref_ptr<osg::PositionAttitudeTransform> _propeller1;   ///<
    osg::ref_ptr<osg::PositionAttitudeTransform> _propeller2;   ///<
    osg::ref_ptr<osg::PositionAttitudeTransform> _propeller3;   ///<
    osg::ref_ptr<osg::PositionAttitudeTransform> _propeller4;   ///<

    osg::ref_ptr<osg::PositionAttitudeTransform> _mainRotor;    ///<
    osg::ref_ptr<osg::PositionAttitudeTransform> _tailRotor;    ///<

    osg::ref_ptr<osg::PositionAttitudeTransform> _exhaust1;     ///< afterburner exhaust
    osg::ref_ptr<osg::PositionAttitudeTransform> _exhaust2;     ///< afterburner exhaust
    osg::ref_ptr<osg::PositionAttitudeTransform> _exhaust3;     ///< afterburner exhaust
    osg::ref_ptr<osg::PositionAttitudeTransform> _exhaust4;     ///< afterburner exhaust

    osg::ref_ptr<osg::Switch> _afterburner1;                    ///<
    osg::ref_ptr<osg::Switch> _afterburner2;                    ///<
    osg::ref_ptr<osg::Switch> _afterburner3;                    ///<
    osg::ref_ptr<osg::Switch> _afterburner4;                    ///<

    osg::ref_ptr<osg::Switch> _landingGear;                     ///<

    Elements _gearElements;                                     ///< landing gear elements
    Elements _flapElements;                                     ///< flaps elements
    Elements _abrkElements;                                     ///< airbrake elements
    Elements _rotorBlades;                                      ///< main rotor blades

    ElementsData _gearData;                                     ///< landing gear elements data
    ElementsData _flapData;                                     ///< flap elements data
    ElementsData _abrkData;                                     ///< airbrake elements data

    std::string _aircraftFile;                                  ///< aircraft file

    osg::Vec3d _pos_0_wgs;                                      ///< [m] initial position

    osg::Vec3 _wing_tip_l;                                      ///< [m] coordinates of left wing tip
    osg::Vec3 _wing_tip_r;                                      ///< [m] coordinates of right wing tip

    osg::Vec3 _rotor_center;                                    ///< [m] rotor hub center

    osg::ref_ptr<osg::Vec3Array> _trace_1;                      ///<
    osg::ref_ptr<osg::Vec3Array> _trace_2;                      ///<

    double _ab_angle;                                           ///< [rad]

    double _hinge_offset;                                       ///< [m] flapping hinge offset from rotor shaft
    double _rotor_radius;                                       ///< [m] rotor radius
    double _inclination;                                        ///< [rad] rotor inclination angle

    bool _double_trace;                                         ///<
    bool _helicopter;                                           ///< specifies if current aircraft is a helicopter

    void updateAxis( double input, ElementData::AxisData *axisData );

    void loadModel( const char *modelFile );

    osg::PositionAttitudeTransform* initAfterburnerAndGetExhaust( osg::Switch *afterburer );

    void readElementsData( const fdm::XmlNode &rootNode, ElementsData *elementsData );
    void readElementAxisData( const fdm::XmlNode &node, ElementData::AxisData *axisData );

    void readVec3( const fdm::XmlNode &node, osg::Vec3 *vec );

    void reload();
    void reset();

    void updateModel();
    void updateAfterburner( double value, osg::Switch *afterburner,
                            osg::PositionAttitudeTransform *exhaust );

    void updateTraces();
    void updateTrace( osg::Group *parent, osg::Vec3Array *positions,
                      const osg::Vec3 &color );
};

} // end of cgi namespace

////////////////////////////////////////////////////////////////////////////////

#endif // CGI_OWNSHIP_H
