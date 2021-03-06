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

#include <gui/Aircrafts.h>

#include <QFile>

#include <gui/gui_Defines.h>

#include <fdm/utils/fdm_Units.h>

#include <sim/Path.h>

////////////////////////////////////////////////////////////////////////////////

Aircrafts::Aircrafts()
{
    QFile file( Path::get( "gui/aircrafts.xml" ).c_str() );

    if ( file.open(QFile::ReadOnly | QFile::Text) )
    {
        QDomDocument doc;

        doc.setContent( &file, false );

        QDomElement rootNode = doc.documentElement();

        if ( rootNode.tagName() == "aircrafts" )
        {
            QDomElement aircraftNode = rootNode.firstChildElement( "aircraft" );

            while ( !aircraftNode.isNull() )
            {
                parseAircraft( aircraftNode );
                aircraftNode = aircraftNode.nextSiblingElement( "aircraft" );
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

Aircrafts::~Aircrafts() {}

////////////////////////////////////////////////////////////////////////////////

void Aircrafts::parseAircraft(const QDomElement &node )
{
    QDomElement nodeName = node.firstChildElement( "name" );
    QDomElement nodeType = node.firstChildElement( "type" );
    QDomElement nodeFile = node.firstChildElement( "file" );

    QDomElement nodeDistDef = node.firstChildElement( "distance_def" );
    QDomElement nodeDistMin = node.firstChildElement( "distance_min" );

    QDomElement nodeCameraOffset = node.firstChildElement( "camera_offset" );

    QDomElement nodeVne = node.firstChildElement( "vne" );

    if ( !nodeName.isNull() && !nodeType.isNull() && !nodeFile.isNull() && !nodeVne.isNull() )
    {
        Aircraft aircraft;

        aircraft.name = nodeName.text();
        aircraft.type = nodeType.text().toInt( NULL );
        aircraft.file = nodeFile.text();

        aircraft.distance_def = nodeDistDef.isNull() ? 5.0 : nodeDistDef.text().toDouble();
        aircraft.distance_min = nodeDistMin.isNull() ? 5.0 : nodeDistMin.text().toDouble();

        aircraft.offset_x = 0.0;
        aircraft.offset_y = 0.0;
        aircraft.offset_z = 0.0;

        if ( !nodeCameraOffset.isNull() )
        {
            QDomElement nodeOffsetX = nodeCameraOffset.firstChildElement( "x" );
            QDomElement nodeOffsetY = nodeCameraOffset.firstChildElement( "y" );
            QDomElement nodeOffsetZ = nodeCameraOffset.firstChildElement( "z" );

            aircraft.offset_x = nodeOffsetX.isNull() ? 0.0 : nodeOffsetX.text().toDouble();
            aircraft.offset_y = nodeOffsetY.isNull() ? 0.0 : nodeOffsetY.text().toDouble();
            aircraft.offset_z = nodeOffsetZ.isNull() ? 0.0 : nodeOffsetZ.text().toDouble();
        }

        aircraft.vfe = 0.0;

        QDomElement nodeVfe = node.firstChildElement( "vfe" );

        if ( !nodeVfe.isNull() )
        {
            aircraft.vfe = nodeVfe.text().toFloat();

            if ( nodeVfe.hasAttribute( "unit" ) )
            {
                std::string unit_name = nodeVfe.attributeNode( "unit" ).value().toStdString();
                fdm::Units::fptr converter = fdm::Units::getConverter( unit_name.c_str() );

                if ( converter )
                    aircraft.vfe = ( *converter )( aircraft.vfe );
            }
        }

        aircraft.vne = nodeVne.text().toFloat();

        if ( nodeVne.hasAttribute( "unit" ) )
        {
            std::string unit_name = nodeVne.attributeNode( "unit" ).value().toStdString();
            fdm::Units::fptr converter = fdm::Units::getConverter( unit_name.c_str() );

            if ( converter )
                aircraft.vne = ( *converter )( aircraft.vne );
        }

        parseAircraftAxes       ( node, aircraft.axes       );
        parseAircraftControls   ( node, aircraft.controls   );
        parseAircraftPropulsion ( node, aircraft.propulsion );
        parseAircraftMasses     ( node, aircraft.masses     );

        aircraft.mainRotorCoef = 1.0f;
        aircraft.tailRotorCoef = 1.0f;

        QDomElement nodeMainRotorCoef = node.firstChildElement( "main_rotor_coef" );
        QDomElement nodeTailRotorCoef = node.firstChildElement( "tail_rotor_coef" );

        if ( !nodeMainRotorCoef.isNull() )
        {
            aircraft.mainRotorCoef = nodeMainRotorCoef.text().toFloat();
        }

        if ( !nodeTailRotorCoef.isNull() )
        {
            aircraft.tailRotorCoef = nodeTailRotorCoef.text().toFloat();
        }

        _aircrafts.push_back( aircraft );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Aircrafts::parseAircraftAxes( const QDomElement &node, Axes &axes )
{
    axes.roll.curvature  = 0.0;
    axes.roll.deadzone   = 0.0;
    axes.roll.scale      = 1.0;

    axes.pitch.curvature = 0.0;
    axes.pitch.deadzone  = 0.0;
    axes.pitch.scale     = 1.0;

    axes.yaw.curvature   = 0.0;
    axes.yaw.deadzone    = 0.0;
    axes.yaw.scale       = 1.0;

    QDomElement nodeAxes = node.firstChildElement( "axes" );

    if ( !nodeAxes.isNull() )
    {
        QDomElement nodeRoll  = nodeAxes.firstChildElement( "roll"  );
        QDomElement nodePitch = nodeAxes.firstChildElement( "pitch" );
        QDomElement nodeYaw   = nodeAxes.firstChildElement( "yaw"   );

        parseAircraftAxis( nodeRoll  , axes.roll  );
        parseAircraftAxis( nodePitch , axes.pitch );
        parseAircraftAxis( nodeYaw   , axes.yaw   );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Aircrafts::parseAircraftAxis( const QDomElement &node, Axis &axis )
{
    if ( !node.isNull() )
    {
        QDomElement nodeCurvature = node.firstChildElement( "curvature" );
        QDomElement nodeDeadzone  = node.firstChildElement( "deadzone"  );
        QDomElement nodeScale     = node.firstChildElement( "scale"     );

        if ( !nodeCurvature .isNull() ) axis.curvature = nodeCurvature .text().toDouble();
        if ( !nodeDeadzone  .isNull() ) axis.deadzone  = nodeDeadzone  .text().toDouble();
        if ( !nodeScale     .isNull() ) axis.scale     = nodeScale     .text().toDouble();
    }
}

////////////////////////////////////////////////////////////////////////////////

void Aircrafts::parseAircraftControls( const QDomElement &node, Controls &controls )
{
    controls.collective  = false;
    controls.landingGear = false;
    controls.flaps       = false;
    controls.throttle    = 0;
    controls.propeller   = 0;
    controls.mixture     = 0;
    controls.airbrake    = false;
    controls.spoilers    = false;

    QDomElement nodeControls = node.firstChildElement( "controls" );

    if ( !nodeControls.isNull() )
    {
        QDomElement nodeCollective  = nodeControls.firstChildElement( "collective"   );
        QDomElement nodeLandingGear = nodeControls.firstChildElement( "landing_gear" );
        QDomElement nodeFlaps       = nodeControls.firstChildElement( "flaps"        );
        QDomElement nodeThrottle    = nodeControls.firstChildElement( "throttle"     );
        QDomElement nodePropeller   = nodeControls.firstChildElement( "propeller"    );
        QDomElement nodeMixture     = nodeControls.firstChildElement( "mixture"      );
        QDomElement nodeAirbrake    = nodeControls.firstChildElement( "airbrake"     );
        QDomElement nodeSpoilers    = nodeControls.firstChildElement( "spoilers"     );

        controls.collective  = !nodeCollective.isNull();
        controls.landingGear = !nodeLandingGear.isNull();
        controls.airbrake    = !nodeAirbrake.isNull();
        controls.spoilers    = !nodeSpoilers.isNull();

        if ( !nodeFlaps.isNull() )
        {
            controls.flaps = true;

            QDomElement nodeNotch = nodeFlaps.firstChildElement( "notch" );

            while ( !nodeNotch.isNull() )
            {
                controls.notches.push_back( nodeNotch.text().toDouble() );

                nodeNotch = nodeNotch.nextSiblingElement( "notch" );
            }
        }

        if ( !nodeThrottle.isNull() )
        {
            controls.throttle = nodeThrottle.attributeNode( "count" ).value().toInt();
        }

        if ( !nodePropeller.isNull() )
        {
            controls.propeller = nodePropeller.attributeNode( "count" ).value().toInt();
        }

        if ( !nodeMixture.isNull() )
        {
            controls.mixture = nodeMixture.attributeNode( "count" ).value().toInt();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Aircrafts::parseAircraftPropulsion( const QDomElement &node, Propulsion &propulsion )
{
    propulsion.engines = 0;
    propulsion.ab   = false;
    propulsion.rpm  = false;
    propulsion.prop = false;
    propulsion.ng   = false;
    propulsion.n1   = false;
    propulsion.n2   = false;
    propulsion.trq  = false;
    propulsion.epr  = false;
    propulsion.map  = false;
    propulsion.egt  = false;
    propulsion.cht  = false;
    propulsion.tit  = false;
    propulsion.tot  = false;
    propulsion.itt  = false;

    QDomElement nodePropulsion = node.firstChildElement( "propulsion" );

    if ( !nodePropulsion.isNull() )
    {
        propulsion.engines = nodePropulsion.attributeNode( "engines" ).value().toInt();

        QDomElement nodeAB   = nodePropulsion.firstChildElement( "ab"   );
        QDomElement nodeRPM  = nodePropulsion.firstChildElement( "rpm"  );
        QDomElement nodePROP = nodePropulsion.firstChildElement( "prop" );
        QDomElement nodeNG   = nodePropulsion.firstChildElement( "ng"   );
        QDomElement nodeN1   = nodePropulsion.firstChildElement( "n1"   );
        QDomElement nodeN2   = nodePropulsion.firstChildElement( "n2"   );
        QDomElement nodeTRQ  = nodePropulsion.firstChildElement( "trq"  );
        QDomElement nodeEPR  = nodePropulsion.firstChildElement( "epr"  );
        QDomElement nodeMAP  = nodePropulsion.firstChildElement( "map"  );
        QDomElement nodeEGT  = nodePropulsion.firstChildElement( "egt"  );
        QDomElement nodeCHT  = nodePropulsion.firstChildElement( "cht"  );
        QDomElement nodeTIT  = nodePropulsion.firstChildElement( "tit"  );
        QDomElement nodeTOT  = nodePropulsion.firstChildElement( "tot"  );
        QDomElement nodeITT  = nodePropulsion.firstChildElement( "itt"  );

        propulsion.ab   = !nodeAB   .isNull();
        propulsion.rpm  = !nodeRPM  .isNull();
        propulsion.prop = !nodePROP .isNull();
        propulsion.ng   = !nodeNG   .isNull();
        propulsion.n1   = !nodeN1   .isNull();
        propulsion.n2   = !nodeN2   .isNull();
        propulsion.trq  = !nodeTRQ  .isNull();
        propulsion.epr  = !nodeEPR  .isNull();
        propulsion.map  = !nodeMAP  .isNull();
        propulsion.egt  = !nodeEGT  .isNull();
        propulsion.cht  = !nodeCHT  .isNull();
        propulsion.tit  = !nodeTIT  .isNull();
        propulsion.tot  = !nodeTOT  .isNull();
        propulsion.itt  = !nodeITT  .isNull();
    }
}

////////////////////////////////////////////////////////////////////////////////

void Aircrafts::parseAircraftMasses( const QDomElement &node, Masses &masses )
{
    QDomElement nodeMasses = node.firstChildElement( "masses" );

    if ( !nodeMasses.isNull() )
    {
        QDomElement nodeEmpty = nodeMasses.firstChildElement( "empty" );
        QDomElement nodeMTOW  = nodeMasses.firstChildElement( "mtow" );

        masses.empty = ( nodeEmpty .isNull() ) ? 0.0 : nodeEmpty .text().toDouble();
        masses.mtow  = ( nodeMTOW  .isNull() ) ? 0.0 : nodeMTOW  .text().toDouble();

        QDomElement nodePilot1 = nodeMasses.firstChildElement( "pilot_1" );
        QDomElement nodePilot2 = nodeMasses.firstChildElement( "pilot_2" );

        QDomElement nodeFuel1 = nodeMasses.firstChildElement( "fuel_tank_1" );
        QDomElement nodeFuel2 = nodeMasses.firstChildElement( "fuel_tank_2" );
        QDomElement nodeFuel3 = nodeMasses.firstChildElement( "fuel_tank_3" );
        QDomElement nodeFuel4 = nodeMasses.firstChildElement( "fuel_tank_4" );
        QDomElement nodeFuel5 = nodeMasses.firstChildElement( "fuel_tank_5" );
        QDomElement nodeFuel6 = nodeMasses.firstChildElement( "fuel_tank_6" );
        QDomElement nodeFuel7 = nodeMasses.firstChildElement( "fuel_tank_7" );
        QDomElement nodeFuel8 = nodeMasses.firstChildElement( "fuel_tank_8" );

        QDomElement nodeCabin = nodeMasses.firstChildElement( "cabin" );
        QDomElement nodeTrunk = nodeMasses.firstChildElement( "cargo_trunk" );
        QDomElement nodeSlung = nodeMasses.firstChildElement( "slung" );

        parseAircraftMass( nodePilot1 , masses.pilot_1 );
        parseAircraftMass( nodePilot2 , masses.pilot_2 );

        parseAircraftMass( nodeFuel1 , masses.fuel_tank_1 );
        parseAircraftMass( nodeFuel2 , masses.fuel_tank_2 );
        parseAircraftMass( nodeFuel3 , masses.fuel_tank_3 );
        parseAircraftMass( nodeFuel4 , masses.fuel_tank_4 );
        parseAircraftMass( nodeFuel5 , masses.fuel_tank_5 );
        parseAircraftMass( nodeFuel6 , masses.fuel_tank_6 );
        parseAircraftMass( nodeFuel7 , masses.fuel_tank_7 );
        parseAircraftMass( nodeFuel8 , masses.fuel_tank_8 );

        parseAircraftMass( nodeCabin, masses.cabin );
        parseAircraftMass( nodeTrunk, masses.trunk );
        parseAircraftMass( nodeSlung, masses.slung );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Aircrafts::parseAircraftMass( QDomElement &massNode, Masses::Mass &mass )
{
    mass.enabled = false;

    mass.max = 0.0;
    mass.def = 0.0;

    if ( !massNode.isNull() )
    {
        mass.enabled = true;

        mass.name = massNode.attributeNode( "name" ).value();

        mass.max = massNode.attributeNode( "maximum" ).value().toDouble();
        mass.def = massNode.attributeNode( "default" ).value().toDouble();
    }
}
