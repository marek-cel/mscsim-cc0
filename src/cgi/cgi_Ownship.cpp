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

#include <cgi/cgi_Ownship.h>

#include <sstream>
#include <stdio.h>

#include <osg/PositionAttitudeTransform>
#include <osg/Switch>

#include <fdm/utils/fdm_Units.h>

#include <fdm/xml/fdm_XmlDoc.h>
#include <fdm/xml/fdm_XmlUtils.h>

#include <Data.h>

#include <cgi/cgi_Defines.h>
#include <cgi/cgi_FindNode.h>
#include <cgi/cgi_Models.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

Ownship::Ownship( Module *parent ) :
    Module( parent )
{
    m_pat = new osg::PositionAttitudeTransform();
    m_root->addChild( m_pat.get() );

    m_switch = new osg::Switch();
    m_pat->addChild( m_switch.get() );

    m_switch->setName( "Ownship" );
}

////////////////////////////////////////////////////////////////////////////////

Ownship::~Ownship() {}

////////////////////////////////////////////////////////////////////////////////

void Ownship::update()
{
    if ( 0 != strcmp( m_aircraftFile.c_str(), Data::get()->ownship.aircraftFile ) )
    {
        reload();
    }

    if ( Data::get()->camera.viewType == Data::Camera::ViewPilot )
    {
        m_switch->setAllChildrenOff();
    }
    else
    {
        m_switch->setAllChildrenOn();
    }

    osg::Quat q_wgs( Data::get()->ownship.att_ex_wgs,
                     Data::get()->ownship.att_ey_wgs,
                     Data::get()->ownship.att_ez_wgs,
                     Data::get()->ownship.att_e0_wgs );

    osg::Vec3d r_wgs( Data::get()->ownship.pos_x_wgs,
                      Data::get()->ownship.pos_y_wgs,
                      Data::get()->ownship.pos_z_wgs );

    m_pat->setAttitude( q_wgs );
    m_pat->setPosition( r_wgs );

    // ailerons
    if ( m_aileronL.valid() && m_aileronR.valid() )
    {
        m_aileronL->setAttitude( osg::Quat( -Data::get()->ownship.ailerons, osg::Y_AXIS ) );
        m_aileronR->setAttitude( osg::Quat(  Data::get()->ownship.ailerons, osg::Y_AXIS ) );
    }

    // elevator
    if ( m_elevatorL.valid() )
    {
        m_elevatorL->setAttitude( osg::Quat( Data::get()->ownship.elevator, osg::Y_AXIS ) );
    }

    if ( m_elevatorR.valid() )
    {
        m_elevatorR->setAttitude( osg::Quat( Data::get()->ownship.elevator, osg::Y_AXIS ) );
    }

    // rudder
    if ( m_rudderL.valid() )
    {
        m_rudderL->setAttitude( osg::Quat( Data::get()->ownship.rudder, osg::Z_AXIS ) );
    }

    if ( m_rudderR.valid() )
    {
        m_rudderR->setAttitude( osg::Quat( Data::get()->ownship.rudder, osg::Z_AXIS ) );
    }

    // elevons
    if ( m_elevonL.valid() && m_elevonR.valid() )
    {
        float angle_l = Data::get()->ownship.elevator - Data::get()->ownship.elevons;
        float angle_r = Data::get()->ownship.elevator + Data::get()->ownship.elevons;

        m_elevonL->setAttitude( osg::Quat( angle_l, osg::Y_AXIS ) );
        m_elevonR->setAttitude( osg::Quat( angle_r, osg::Y_AXIS ) );
    }

    // flaperons
    if ( m_flaperonL.valid() && m_flaperonR.valid() )
    {
        float angle_l = Data::get()->ownship.flaps - Data::get()->ownship.flaperons;
        float angle_r = Data::get()->ownship.flaps + Data::get()->ownship.flaperons;

        m_flaperonL->setAttitude( osg::Quat( angle_l, osg::Y_AXIS ) );
        m_flaperonR->setAttitude( osg::Quat( angle_r, osg::Y_AXIS ) );
    }

    // flaps
    if ( m_flapL.valid() && m_flapR.valid() )
    {
        m_flapL->setAttitude( osg::Quat( Data::get()->ownship.flaps, osg::Y_AXIS ) );
        m_flapR->setAttitude( osg::Quat( Data::get()->ownship.flaps, osg::Y_AXIS ) );
    }

    // lefs
    if ( m_lefL.valid() && m_lefR.valid() )
    {
        m_lefL->setAttitude( osg::Quat( -Data::get()->ownship.lef, osg::Y_AXIS ) );
        m_lefR->setAttitude( osg::Quat( -Data::get()->ownship.lef, osg::Y_AXIS ) );
    }

    // airbrake
    if ( m_airbrakeP.valid() )
    {
        m_airbrakeP->setAttitude( osg::Quat(  Data::get()->ownship.airbrake, osg::Y_AXIS ) );
    }

    if ( m_airbrakeN.valid() )
    {
        m_airbrakeN->setAttitude( osg::Quat( -Data::get()->ownship.airbrake, osg::Y_AXIS ) );
    }

    // landing gear
    if ( m_landingGear.valid() )
    {
        if ( Data::get()->ownship.landingGear > 0.0 )
        {
            m_landingGear->setValue( 0, false );
            m_landingGear->setValue( 1, true  );

            for ( unsigned int i = 0; i < m_landingGearElements.size() && i < m_landingGearElementsData.size(); i++ )
            {
                double angle = m_landingGearElementsData[ i ].angle_max;

                if ( m_landingGearElementsData[ i ].input_min < Data::get()->ownship.landingGear
                  && m_landingGearElementsData[ i ].input_max > Data::get()->ownship.landingGear )
                {
                    double coef = ( Data::get()->ownship.landingGear - m_landingGearElementsData[ i ].input_min )
                                / ( m_landingGearElementsData[ i ].input_max - m_landingGearElementsData[ i ].input_min );

                    angle = m_landingGearElementsData[ i ].angle_min
                            + coef * ( m_landingGearElementsData[ i ].angle_max - m_landingGearElementsData[ i ].angle_min );
                }
                else if ( m_landingGearElementsData[ i ].input_min > Data::get()->ownship.landingGear )
                {
                    angle = m_landingGearElementsData[ i ].angle_min;
                }

                m_landingGearElements[ i ]->setAttitude( osg::Quat( angle, osg::X_AXIS ) );
            }
        }
        else
        {
            m_landingGear->setValue( 0, true  );
            m_landingGear->setValue( 1, false );
        }
    }

    // propeller
    if ( m_propeller1.valid() )
    {
        m_propeller1->setAttitude( osg::Quat( -Data::get()->ownship.propeller[ 0 ], osg::X_AXIS ) );
    }

    if ( m_propeller2.valid() )
    {
        m_propeller2->setAttitude( osg::Quat( -Data::get()->ownship.propeller[ 1 ], osg::X_AXIS ) );
    }

    if ( m_propeller3.valid() )
    {
        m_propeller3->setAttitude( osg::Quat( -Data::get()->ownship.propeller[ 2 ], osg::X_AXIS ) );
    }

    if ( m_propeller4.valid() )
    {
        m_propeller4->setAttitude( osg::Quat( -Data::get()->ownship.propeller[ 3 ], osg::X_AXIS ) );
    }

    // main rotor
    if ( m_mainRotor.valid() )
    {
        double psi = Data::get()->ownship.mainRotor_coef * Data::get()->ownship.mainRotor_azimuth;
        m_mainRotor->setAttitude( osg::Quat( psi, osg::Z_AXIS ) );
    }

    // tail rotor
    if ( m_tailRotor.valid() )
    {
        double psi = Data::get()->ownship.tailRotor_coef * Data::get()->ownship.tailRotor_azimuth;
        m_tailRotor->setAttitude( osg::Quat( psi, osg::Y_AXIS ) );
    }

    // main rotor blades
    unsigned int bladesCount = m_mainRotorBlades.size();
    double psiStep = 2.0*M_PI / (float)bladesCount;

    for ( unsigned int i = 0; i < bladesCount; i++ )
    {
        double psi = Data::get()->ownship.mainRotor_azimuth
                   + (double)(i*psiStep) * Data::get()->ownship.mainRotor_coef;

        double sinPsi = sin( psi );
        double cosPsi = cos( psi );

        // pitching
        double pitching = Data::get()->ownship.mainRotor_collective
                        - Data::get()->ownship.mainRotor_cyclicLon * cosPsi * Data::get()->ownship.mainRotor_coef
                        + Data::get()->ownship.mainRotor_cyclicLat * sinPsi;

        double flapping = Data::get()->ownship.mainRotor_coningAngle
                        + Data::get()->ownship.mainRotor_diskPitch * cosPsi
                        - Data::get()->ownship.mainRotor_diskRoll  * sinPsi * Data::get()->ownship.mainRotor_coef;

        m_mainRotorBlades[ i ]->setAttitude( osg::Quat( pitching, osg::X_AXIS,
                                                        flapping, osg::Y_AXIS,
                                                             0.0, osg::Z_AXIS ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Ownship::loadModel( const std::string &modelFile )
{
    osg::ref_ptr<osg::Node> model = Models::get( modelFile );

    if ( model.valid() )
    {
        m_switch->addChild( model.get() );

        m_aileronL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "AileronL" ) );
        m_aileronR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "AileronR" ) );

        m_elevatorL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "ElevatorL" ) );
        m_elevatorR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "ElevatorR" ) );

        if ( !m_elevatorL.valid() )
        {
            m_elevatorL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "Elevator" ) );
        }

        m_rudderL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "RudderL" ) );
        m_rudderR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "RudderR" ) );

        if ( !m_rudderL.valid() )
        {
            m_rudderL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "Rudder" ) );
        }

        m_elevonL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "ElevonL" ) );
        m_elevonR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "ElevonR" ) );

        m_flaperonL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "FlaperonL" ) );
        m_flaperonR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "FlaperonR" ) );

        m_flapL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "FlapTEL" ) );
        m_flapR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "FlapTER" ) );

        if ( !m_flapL.valid() && !m_flapR.valid() )
        {
            m_flapL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "FlapL" ) );
            m_flapR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "FlapR" ) );
        }

        m_lefL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "FlapLEL" ) );
        m_lefR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "FlapLER" ) );

        if ( !m_lefL.valid() && !m_lefR.valid() )
        {
            m_lefL = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "LEFL" ) );
            m_lefR = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "LEFR" ) );
        }

        m_airbrakeP = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "AirbrakeP" ) );
        m_airbrakeN = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "AirbrakeN" ) );

        if ( !m_airbrakeP.valid() )
        {
            m_airbrakeP = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "Airbrake" ) );
        }

        // landing gear
        m_landingGear = dynamic_cast<osg::Switch*>( FindNode::findFirst( model, "LandingGear" ) );

        for ( unsigned int i = 0; i < CGI_MAX_LANDING_GEAR_ELEMENTS; i++ )
        {
            std::stringstream ss;
            ss << "LandingGear" << ( i + 1 );

            osg::ref_ptr<osg::PositionAttitudeTransform> landingGearElement =
                    dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, ss.str() ) );

            if ( landingGearElement.valid() )
            {
                m_landingGearElements.push_back( landingGearElement.get() );
            }
            else
            {
                break;
            }
        }

        m_propeller1 = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "Propeller1" ) );
        m_propeller2 = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "Propeller2" ) );
        m_propeller3 = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "Propeller3" ) );
        m_propeller4 = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "Propeller4" ) );

        if ( !m_propeller1.valid() || !m_propeller2.valid() )
        {
            m_propeller1 = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "PropellerL" ) );
            m_propeller2 = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "PropellerR" ) );
        }

        if ( !m_propeller1.valid() )
        {
            m_propeller1 = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "Propeller" ) );
        }

        // main and tail rotor
        m_mainRotor = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "MainRotor" ) );
        m_tailRotor = dynamic_cast<osg::PositionAttitudeTransform*>( FindNode::findFirst( model, "TailRotor" ) );

        // main rotor blades
        FindNode::Nodes bladeNodes = FindNode::findNodes( model, "BladeHinge" );

        for ( unsigned int i = 0; i < bladeNodes.size(); i++ )
        {
            osg::ref_ptr<osg::PositionAttitudeTransform> blade =
                    dynamic_cast<osg::PositionAttitudeTransform*>( bladeNodes.at( i ).get() );

            if ( blade.valid() )
            {
                m_mainRotorBlades.push_back( blade.get() );
            }
            else
            {
                break;
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Ownship::reload()
{
    reset();

    m_aircraftFile = Data::get()->ownship.aircraftFile;

    fdm::XmlDoc doc( m_aircraftFile );

    if ( doc.isOpen() )
    {
        fdm::XmlNode rootNode = doc.getRootNode();

        if ( rootNode.isValid() )
        {
            int result = FDM_SUCCESS;

            std::string modelFile;

            if ( result == FDM_SUCCESS ) result = fdm::XmlUtils::read( rootNode, modelFile, "model" );

            for ( unsigned int i = 0; i < CGI_MAX_LANDING_GEAR_ELEMENTS; i++ )
            {
                std::stringstream ss;
                ss << "landing_gear_" << ( i + 1 );

                fdm::XmlNode landingGearNode = rootNode.getFirstChildElement( ss.str() );

                if ( landingGearNode.isValid() )
                {
                    LandingGearElementData data;

                    if ( result == FDM_SUCCESS ) result = fdm::XmlUtils::read( landingGearNode, data.input_min, "input_min" );
                    if ( result == FDM_SUCCESS ) result = fdm::XmlUtils::read( landingGearNode, data.input_max, "input_max" );
                    if ( result == FDM_SUCCESS ) result = fdm::XmlUtils::read( landingGearNode, data.angle_min, "angle_min" );
                    if ( result == FDM_SUCCESS ) result = fdm::XmlUtils::read( landingGearNode, data.angle_max, "angle_max" );

                    if ( result == FDM_SUCCESS )
                    {
                        data.angle_min = fdm::Units::deg2rad( data.angle_min );
                        data.angle_max = fdm::Units::deg2rad( data.angle_max );

                        m_landingGearElementsData.push_back( data );
                    }
                }
                else
                {
                    break;
                }
            }

            if ( result == FDM_SUCCESS )
            {
                loadModel( modelFile );
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Ownship::reset()
{
    if ( m_switch->getNumChildren() > 0 )
    {
        m_switch->removeChildren( 0, m_switch->getNumChildren() );
    }

    m_aileronL  = 0;
    m_aileronR  = 0;
    m_elevatorL = 0;
    m_elevatorR = 0;
    m_elevonL   = 0;
    m_elevonR   = 0;
    m_flaperonL = 0;
    m_flaperonR = 0;
    m_flapL     = 0;
    m_flapR     = 0;
    m_lefL      = 0;
    m_lefR      = 0;
    m_rudderL   = 0;
    m_rudderR   = 0;

    m_propeller1 = 0;
    m_propeller2 = 0;
    m_propeller3 = 0;
    m_propeller4 = 0;

    m_mainRotor = 0;
    m_tailRotor = 0;

    m_landingGearElements.clear();
    m_mainRotorBlades.clear();

    m_landingGearElementsData.clear();
}
