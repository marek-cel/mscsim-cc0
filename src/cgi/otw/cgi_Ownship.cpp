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

#include <cgi/otw/cgi_Ownship.h>

#include <sstream>

#include <osg/Geode>
#include <osg/Geometry>
#include <osg/LineWidth>

#include <fdm/utils/fdm_Units.h>
#include <fdm/xml/fdm_XmlDoc.h>
#include <fdm/xml/fdm_XmlUtils.h>

#include <Common.h>
#include <Data.h>

#include <cgi/cgi_Colors.h>
#include <cgi/cgi_Defines.h>
#include <cgi/cgi_FindNode.h>
#include <cgi/cgi_Models.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

Ownship::Ownship( const Module *parent, Scenery *scenery ) :
    Module( parent ),

    _scenery ( scenery ),

    _rotor  ( NULLPTR ),
    _vector ( NULLPTR )
{
    _vector = new Vector();

    _pat = new osg::PositionAttitudeTransform();
    _root->addChild( _pat.get() );

    _switch = new osg::Switch();
    _switch->setName( "Ownship" );
    _pat->addChild( _switch.get() );

    _patRibbons = new osg::PositionAttitudeTransform();
    _root->addChild( _patRibbons.get() );

    _switchRibbons = new osg::Switch();
    _patRibbons->addChild( _switchRibbons.get() );

    _trace_1 = new osg::Vec3Array();
    _trace_2 = new osg::Vec3Array();
}

////////////////////////////////////////////////////////////////////////////////

Ownship::~Ownship()
{
    DELPTR( _rotor  );
    DELPTR( _vector );
}

////////////////////////////////////////////////////////////////////////////////

void Ownship::update()
{
    if ( 0 != strcmp( _aircraftFile.c_str(), Data::get()->ownship.aircraftFile ) )
    {
        reload();
    }

    if ( Data::get()->cgi.viewType == Data::CGI::ViewPilot )
    {
        _switch->setAllChildrenOff();
    }
    else
    {
        _switch->setAllChildrenOn();
    }

    _att_wgs = osg::Quat( Data::get()->ownship.att_ex_wgs,
                          Data::get()->ownship.att_ey_wgs,
                          Data::get()->ownship.att_ez_wgs,
                          Data::get()->ownship.att_e0_wgs );

    _pos_wgs = osg::Vec3d( Data::get()->ownship.pos_x_wgs,
                           Data::get()->ownship.pos_y_wgs,
                           Data::get()->ownship.pos_z_wgs );

    _pat->setAttitude( _att_wgs );
    _pat->setPosition( _pos_wgs );

    updateModel();
    updateTraces();

    if ( _rotor ) _rotor->update();

    _vector->update();
}

////////////////////////////////////////////////////////////////////////////////

void Ownship::updateAxis( double input, ElementData::AxisData *axisData )
{
    axisData->angle = axisData->angle_max;
    axisData->shift = axisData->shift_max;

    if (  axisData->input_min <= input && input < axisData->input_max )
    {
        double coef = ( input - axisData->input_min ) / ( axisData->input_max - axisData->input_min );

        axisData->angle = axisData->angle_min + coef * ( axisData->angle_max - axisData->angle_min );
        axisData->shift = axisData->shift_min + coef * ( axisData->shift_max - axisData->shift_min );
    }
    else if ( input < axisData->input_min  )
    {
        axisData->angle = axisData->angle_min;
        axisData->shift = axisData->shift_min;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Ownship::loadModel( const char *modelFile )
{
    _switch->addChild( _vector->getNode() );

    osg::ref_ptr<osg::Node> model = Models::get( modelFile );

    if ( model.valid() )
    {
        _switch->addChild( model.get() );

        _aileronL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "AileronL" ) );
        _aileronR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "AileronR" ) );

        _elevatorL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "ElevatorL" ) );
        _elevatorR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "ElevatorR" ) );

        if ( !_elevatorL.valid() )
        {
            _elevatorL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "Elevator" ) );
        }

        _rudderL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "RudderL" ) );
        _rudderR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "RudderR" ) );

        if ( !_rudderL.valid() )
        {
            _rudderL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "Rudder" ) );
        }

        _elevonL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "ElevonL" ) );
        _elevonR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "ElevonR" ) );

        _flaperonL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "FlaperonL" ) );
        _flaperonR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "FlaperonR" ) );

        _flapL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "FlapTEL" ) );
        _flapR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "FlapTER" ) );

        if ( !_flapL.valid() && !_flapR.valid() )
        {
            _flapL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "FlapL" ) );
            _flapR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "FlapR" ) );
        }

        _lefL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "FlapLEL" ) );
        _lefR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "FlapLER" ) );

        if ( !_lefL.valid() && !_lefR.valid() )
        {
            _lefL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "LEFL" ) );
            _lefR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "LEFR" ) );
        }

        _airbrakeP = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "AirbrakeP" ) );
        _airbrakeN = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "AirbrakeN" ) );

        if ( !_airbrakeP.valid() )
        {
            _airbrakeP = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "Airbrake" ) );
        }

        // landing gear
        _landingGear = dynamic_cast<osg::Switch*>( FindNode::findFirst( model, "LandingGear" ) );

        for ( unsigned int i = 0; i < CGI_MAX_LANDING_GEAR_ELEMENTS; i++ )
        {
            std::stringstream ss;
            ss << "LandingGear" << ( i + 1 );

            osg::ref_ptr<osg::PositionAttitudeTransform> gearElement =
                    dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, ss.str().c_str() ) );

            if ( gearElement.valid() )
            {
                _gearElements.push_back( gearElement.get() );
            }
            else
            {
                break;
            }
        }

        // flaps
        for ( unsigned int i = 0; i < CGI_MAX_FLAPS_ELEMENTS; i++ )
        {
            std::stringstream ss;
            ss << "Flap" << ( i + 1 );

            osg::ref_ptr<osg::PositionAttitudeTransform> flapElement =
                    dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, ss.str().c_str() ) );

            if ( flapElement.valid() )
            {
                _flapElements.push_back( flapElement.get() );
            }
            else
            {
                break;
            }
        }

        _propeller1 = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "Propeller1" ) );
        _propeller2 = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "Propeller2" ) );
        _propeller3 = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "Propeller3" ) );
        _propeller4 = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "Propeller4" ) );

        if ( !_propeller1.valid() || !_propeller2.valid() )
        {
            _propeller1 = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "PropellerL" ) );
            _propeller2 = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "PropellerR" ) );
        }

        if ( !_propeller1.valid() )
        {
            _propeller1 = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "Propeller" ) );
        }

        // main and tail rotor
        _mainRotor = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "MainRotor" ) );
        _tailRotor = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "TailRotor" ) );

        // main rotor blades
        FindNode::Nodes bladeNodes = FindNode::findNodes( model, "BladeHinge" );

        for ( unsigned int i = 0; i < bladeNodes.size(); i++ )
        {
            osg::ref_ptr<osg::PositionAttitudeTransform> blade =
                    dynamic_cast<osg::PositionAttitudeTransform*>( bladeNodes.at( i ).get() );

            if ( blade.valid() )
            {
                _rotorBlades.push_back( blade.get() );
            }
            else
            {
                break;
            }
        }

        if ( _helicopter )
        {
            _rotor = new Rotor( _rotor_center, _rotorBlades.size(),
                                _rotor_radius, _hinge_offset, _inclination );
            _switch->addChild( _rotor->getNode() );
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Ownship::readElementsData( const fdm::XmlNode &rootNode, ElementsData *elementsData )
{
    for ( unsigned int i = 0; i < CGI_MAX_LANDING_GEAR_ELEMENTS; i++ )
    {
        std::stringstream ss;
        ss << "element_" << ( i + 1 );

        fdm::XmlNode landingGearNode = rootNode.getFirstChildElement( ss.str().c_str() );

        if ( landingGearNode.isValid() )
        {
            ElementData data;

            memset( &data, 0, sizeof(ElementData) );

            fdm::XmlNode xAxixNode = landingGearNode.getFirstChildElement( "x" );
            fdm::XmlNode yAxixNode = landingGearNode.getFirstChildElement( "y" );
            fdm::XmlNode zAxixNode = landingGearNode.getFirstChildElement( "z" );

            if ( xAxixNode.isValid() ) readElementAxisData( xAxixNode, &(data.x) );
            if ( yAxixNode.isValid() ) readElementAxisData( yAxixNode, &(data.y) );
            if ( zAxixNode.isValid() ) readElementAxisData( zAxixNode, &(data.z) );

            elementsData->push_back( data );
        }
        else
        {
            break;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Ownship::readElementAxisData( const fdm::XmlNode &node, ElementData::AxisData *axisData )
{
    int result = FDM_SUCCESS;

    double input_min = 0.0;
    double input_max = 0.0;
    double angle_min = 0.0;
    double angle_max = 0.0;
    double shift_min = 0.0;
    double shift_max = 0.0;

    if ( result == FDM_SUCCESS ) result = fdm::XmlUtils::read( node, input_min, "input_min" );
    if ( result == FDM_SUCCESS ) result = fdm::XmlUtils::read( node, input_max, "input_max" );
    if ( result == FDM_SUCCESS ) result = fdm::XmlUtils::read( node, angle_min, "angle_min", true );
    if ( result == FDM_SUCCESS ) result = fdm::XmlUtils::read( node, angle_max, "angle_max", true );
    if ( result == FDM_SUCCESS ) result = fdm::XmlUtils::read( node, shift_min, "shift_min", true );
    if ( result == FDM_SUCCESS ) result = fdm::XmlUtils::read( node, shift_max, "shift_max", true );

    if ( result == FDM_SUCCESS )
    {
        axisData->input_min = input_min;
        axisData->input_max = input_max;

        axisData->angle = 0.0;
        axisData->angle_min = fdm::Units::deg2rad( angle_min );
        axisData->angle_max = fdm::Units::deg2rad( angle_max );

        axisData->shift = 0.0;
        axisData->shift_min = shift_min;
        axisData->shift_max = shift_max;
    }
}

////////////////////////////////////////////////////////////////////////////////

void Ownship::readVec3( const fdm::XmlNode &node, osg::Vec3 *vec )
{
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    int result = FDM_SUCCESS;

    if ( result == FDM_SUCCESS ) result = fdm::XmlUtils::read( node, x, "x" );
    if ( result == FDM_SUCCESS ) result = fdm::XmlUtils::read( node, y, "y" );
    if ( result == FDM_SUCCESS ) result = fdm::XmlUtils::read( node, z, "z" );

    if ( result == FDM_SUCCESS )
    {
        vec->set( x, y, z );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Ownship::reload()
{
    reset();

    _aircraftFile = Data::get()->ownship.aircraftFile;

    fdm::XmlDoc doc( Path::get( _aircraftFile ).c_str() );

    if ( doc.isOpen() )
    {
        fdm::XmlNode rootNode = doc.getRootNode();

        if ( rootNode.isValid() )
        {
            int result = FDM_SUCCESS;

            std::string model;
            std::string shadow;

            if ( result == FDM_SUCCESS ) result = fdm::XmlUtils::read( rootNode, model  , "model"   );
            if ( result == FDM_SUCCESS ) result = fdm::XmlUtils::read( rootNode, shadow , "shadow" );

            fdm::XmlNode wingTipNodeL = rootNode.getFirstChildElement( "wing_tip_l" );
            fdm::XmlNode wingTipNodeR = rootNode.getFirstChildElement( "wing_tip_r" );

            if ( wingTipNodeL.isValid() ) readVec3( wingTipNodeL, &_wing_tip_l );
            if ( wingTipNodeR.isValid() ) readVec3( wingTipNodeR, &_wing_tip_r );

            _double_trace = ( _wing_tip_l.length() + _wing_tip_r.length() ) > 1.0e-9;

            fdm::XmlNode rotorNode = rootNode.getFirstChildElement( "rotor" );

            if ( rotorNode.isValid() )
            {
                _helicopter = true;

                fdm::XmlNode rotorCenterNode = rotorNode.getFirstChildElement( "rotor_center" );

                readVec3( rotorCenterNode, &_rotor_center );

                fdm::XmlUtils::read( rotorNode, _hinge_offset, "hinge_offset" );
                fdm::XmlUtils::read( rotorNode, _rotor_radius, "rotor_radius" );

                double inclination_deg = 0.0;
                fdm::XmlUtils::read( rotorNode, inclination_deg, "inclination" );
                _inclination = fdm::Units::deg2rad( inclination_deg );
            }

            fdm::XmlNode nodeFlaps = rootNode.getFirstChildElement( "flaps" );
            if ( nodeFlaps.isValid() ) readElementsData( nodeFlaps, &_flapData );

            fdm::XmlNode nodeLandingGear = rootNode.getFirstChildElement( "landing_gear" );
            if ( nodeLandingGear.isValid() ) readElementsData( nodeLandingGear, &_gearData );

            if ( result == FDM_SUCCESS )
            {
                loadModel( model.c_str() );

                if ( _scenery ) _scenery->setShadow( shadow.c_str() );
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Ownship::reset()
{
    DELPTR( _rotor );

    if ( _switch->getNumChildren() > 0 )
    {
        _switch->removeChildren( 0, _switch->getNumChildren() );
    }

    if ( _switchRibbons->getNumChildren() > 0 )
    {
        _switchRibbons->removeChildren( 0, _switchRibbons->getNumChildren() );
    }

    _aileronL  = NULLPTR;
    _aileronR  = NULLPTR;
    _elevatorL = NULLPTR;
    _elevatorR = NULLPTR;
    _elevonL   = NULLPTR;
    _elevonR   = NULLPTR;
    _flaperonL = NULLPTR;
    _flaperonR = NULLPTR;
    _flapL     = NULLPTR;
    _flapR     = NULLPTR;
    _lefL      = NULLPTR;
    _lefR      = NULLPTR;
    _rudderL   = NULLPTR;
    _rudderR   = NULLPTR;

    _propeller1 = NULLPTR;
    _propeller2 = NULLPTR;
    _propeller3 = NULLPTR;
    _propeller4 = NULLPTR;

    _mainRotor = NULLPTR;
    _tailRotor = NULLPTR;

    _gearElements.clear();
    _flapElements.clear();
    _rotorBlades.clear();

    _gearData.clear();
    _flapData.clear();

    _pos_0_wgs = osg::Vec3d( 0.0, 0.0, 0.0 );

    _wing_tip_l = osg::Vec3( 0.0, 0.0, 0.0 );
    _wing_tip_r = osg::Vec3( 0.0, 0.0, 0.0 );

    _rotor_center = osg::Vec3( 0.0, 0.0, 0.0 );

    _trace_1->clear();
    _trace_2->clear();

    _hinge_offset = 0.0;
    _rotor_radius = 0.0;
    _inclination  = 0.0;

    _double_trace = false;
    _helicopter = false;
}

////////////////////////////////////////////////////////////////////////////////

void Ownship::updateModel()
{
    // ailerons
    if ( _aileronL.valid() && _aileronR.valid() )
    {
        _aileronL->setAttitude( osg::Quat( -Data::get()->ownship.ailerons, osg::Y_AXIS ) );
        _aileronR->setAttitude( osg::Quat(  Data::get()->ownship.ailerons, osg::Y_AXIS ) );
    }

    // elevator
    if ( _elevatorL.valid() )
    {
        _elevatorL->setAttitude( osg::Quat( Data::get()->ownship.elevator, osg::Y_AXIS ) );
    }

    if ( _elevatorR.valid() )
    {
        _elevatorR->setAttitude( osg::Quat( Data::get()->ownship.elevator, osg::Y_AXIS ) );
    }

    // rudder
    if ( _rudderL.valid() )
    {
        _rudderL->setAttitude( osg::Quat( Data::get()->ownship.rudder, osg::Z_AXIS ) );
    }

    if ( _rudderR.valid() )
    {
        _rudderR->setAttitude( osg::Quat( Data::get()->ownship.rudder, osg::Z_AXIS ) );
    }

    // elevons
    if ( _elevonL.valid() && _elevonR.valid() )
    {
        float angle_l = Data::get()->ownship.elevator - Data::get()->ownship.elevons;
        float angle_r = Data::get()->ownship.elevator + Data::get()->ownship.elevons;

        _elevonL->setAttitude( osg::Quat( angle_l, osg::Y_AXIS ) );
        _elevonR->setAttitude( osg::Quat( angle_r, osg::Y_AXIS ) );
    }

    // flaperons
    if ( _flaperonL.valid() && _flaperonR.valid() )
    {
        float angle_l = Data::get()->ownship.flaps - Data::get()->ownship.flaperons;
        float angle_r = Data::get()->ownship.flaps + Data::get()->ownship.flaperons;

        _flaperonL->setAttitude( osg::Quat( angle_l, osg::Y_AXIS ) );
        _flaperonR->setAttitude( osg::Quat( angle_r, osg::Y_AXIS ) );
    }

    // flaps
    if ( _flapL.valid() && _flapR.valid() )
    {
        _flapL->setAttitude( osg::Quat( Data::get()->ownship.flaps, osg::Y_AXIS ) );
        _flapR->setAttitude( osg::Quat( Data::get()->ownship.flaps, osg::Y_AXIS ) );
    }

    // flaps
    for ( unsigned int i = 0; i < _flapElements.size() && i < _flapData.size(); i++ )
    {
        updateAxis( Data::get()->ownship.norm_flaps, &(_flapData[ i ].x) );
        updateAxis( Data::get()->ownship.norm_flaps, &(_flapData[ i ].y) );
        updateAxis( Data::get()->ownship.norm_flaps, &(_flapData[ i ].z) );

        _flapElements[ i ]->setAttitude( osg::Quat( _flapData[ i ].x.angle, osg::X_AXIS,
                                                    _flapData[ i ].y.angle, osg::Y_AXIS,
                                                    _flapData[ i ].z.angle, osg::Z_AXIS ) );

        _flapElements[ i ]->setPosition( osg::Vec3( _flapData[ i ].x.shift,
                                                    _flapData[ i ].y.shift,
                                                    _flapData[ i ].z.shift ) );
    }

    // lefs
    if ( _lefL.valid() && _lefR.valid() )
    {
        _lefL->setAttitude( osg::Quat( -Data::get()->ownship.lef, osg::Y_AXIS ) );
        _lefR->setAttitude( osg::Quat( -Data::get()->ownship.lef, osg::Y_AXIS ) );
    }

    // airbrake
    if ( _airbrakeP.valid() )
    {
        _airbrakeP->setAttitude( osg::Quat(  Data::get()->ownship.airbrake, osg::Y_AXIS ) );
    }

    if ( _airbrakeN.valid() )
    {
        _airbrakeN->setAttitude( osg::Quat( -Data::get()->ownship.airbrake, osg::Y_AXIS ) );
    }

    // landing gear
    if ( _landingGear.valid() )
    {
        if ( Data::get()->ownship.norm_landingGear > 0.0 )
        {
            _landingGear->setValue( 0, false );
            _landingGear->setValue( 1, true  );

            for ( unsigned int i = 0; i < _gearElements.size() && i < _gearData.size(); i++ )
            {
                updateAxis( Data::get()->ownship.norm_landingGear, &(_gearData[ i ].x) );
                updateAxis( Data::get()->ownship.norm_landingGear, &(_gearData[ i ].y) );
                updateAxis( Data::get()->ownship.norm_landingGear, &(_gearData[ i ].z) );

                _gearElements[ i ]->setAttitude( osg::Quat( _gearData[ i ].x.angle, osg::X_AXIS,
                                                            _gearData[ i ].y.angle, osg::Y_AXIS,
                                                            _gearData[ i ].z.angle, osg::Z_AXIS ) );

                _gearElements[ i ]->setPosition( osg::Vec3( _gearData[ i ].x.shift,
                                                            _gearData[ i ].y.shift,
                                                            _gearData[ i ].z.shift ) );
            }
        }
        else
        {
            _landingGear->setValue( 0, true  );
            _landingGear->setValue( 1, false );
        }
    }

    // propeller
    if ( _propeller1.valid() )
    {
        _propeller1->setAttitude( osg::Quat( -Data::get()->ownship.propeller[ 0 ], osg::X_AXIS ) );
    }

    if ( _propeller2.valid() )
    {
        _propeller2->setAttitude( osg::Quat( -Data::get()->ownship.propeller[ 1 ], osg::X_AXIS ) );
    }

    if ( _propeller3.valid() )
    {
        _propeller3->setAttitude( osg::Quat( -Data::get()->ownship.propeller[ 2 ], osg::X_AXIS ) );
    }

    if ( _propeller4.valid() )
    {
        _propeller4->setAttitude( osg::Quat( -Data::get()->ownship.propeller[ 3 ], osg::X_AXIS ) );
    }

    // main rotor
    if ( _mainRotor.valid() )
    {
        double psi = Data::get()->ownship.mainRotor.coef * Data::get()->ownship.mainRotor.azimuth;
        _mainRotor->setAttitude( osg::Quat( psi, osg::Z_AXIS ) );
    }

    // tail rotor
    if ( _tailRotor.valid() )
    {
        double psi = Data::get()->ownship.tailRotor.coef * Data::get()->ownship.tailRotor.azimuth;
        _tailRotor->setAttitude( osg::Quat( psi, osg::Y_AXIS ) );
    }

    // main rotor blades
    double coef_f = -Data::get()->ownship.mainRotor.coef;
    for ( unsigned int i = 0; i < _rotorBlades.size() && i < FDM_MAX_BLADES; i++ )
    {
        double feathering = Data::get()->ownship.mainRotor.blade[ i ].feathering * coef_f;
        double flapping   = Data::get()->ownship.mainRotor.blade[ i ].flapping;

        _rotorBlades[ i ]->setAttitude( osg::Quat( feathering, osg::X_AXIS,
                                                     flapping, osg::Y_AXIS,
                                                          0.0, osg::Z_AXIS ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Ownship::updateTraces()
{
    if ( _switchRibbons->getNumChildren() > 0 )
    {
        _switchRibbons->removeChildren( 0, _switchRibbons->getNumChildren() );
    }

    if ( Data::get()->stateOut == fdm::DataOut::Idle )
    {
        _trace_1->clear();
        _trace_2->clear();

        if ( _switchRibbons->getNumChildren() > 0 )
        {
            _switchRibbons->removeChildren( 0, _switchRibbons->getNumChildren() );
        }
    }
    else if ( Data::get()->stateOut == fdm::DataOut::Ready )
    {
        _pos_0_wgs = _pos_wgs;
        _patRibbons->setPosition( _pos_wgs );
    }
    else if ( Data::get()->stateOut == fdm::DataOut::Working )
    {
        if ( _double_trace )
        {
            _trace_1->push_back( _pos_wgs + _att_wgs * _wing_tip_l - _pos_0_wgs );
            _trace_2->push_back( _pos_wgs + _att_wgs * _wing_tip_r - _pos_0_wgs );
        }
        else
        {
            _trace_1->push_back( _pos_wgs - _pos_0_wgs );
        }
    }

    if ( Data::get()->cgi.show_traces )
    {
        _switchRibbons->setAllChildrenOn();

        if ( _double_trace )
        {
            updateTrace( _switchRibbons.get(), _trace_1.get(), Colors::_red  );
            updateTrace( _switchRibbons.get(), _trace_2.get(), Colors::_lime );
        }
        else
        {
            updateTrace( _switchRibbons.get(), _trace_1.get(), Colors::_black );
        }
    }
    else
    {
        _switchRibbons->setAllChildrenOff();
    }
}

////////////////////////////////////////////////////////////////////////////////

void Ownship::updateTrace( osg::Group *parent, osg::Vec3Array *positions,
                           const osg::Vec3 &color )
{
    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    parent->addChild( geode.get() );

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();  // normals
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();  // colors

    n->push_back( osg::Vec3( 0.0f, 0.0f, 1.0f ) );
    c->push_back( osg::Vec4( color, 1.0f ) );

    geometry->setVertexArray( positions );
    geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::LINE_STRIP, 0, positions->size() ) );
    geometry->setNormalArray( n.get() );
    geometry->setNormalBinding( osg::Geometry::BIND_OVERALL );
    geometry->setColorArray( c.get() );
    geometry->setColorBinding( osg::Geometry::BIND_OVERALL );

    geode->addDrawable( geometry.get() );

    osg::ref_ptr<osg::LineWidth> lineWidth = new osg::LineWidth();
    lineWidth->setWidth( 2.0f );

    geode->getOrCreateStateSet()->setAttributeAndModes( lineWidth, osg::StateAttribute::ON );
}
