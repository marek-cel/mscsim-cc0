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

#include <fdm_aw101/aw101_Aerodynamics.h>
#include <fdm_aw101/aw101_Aircraft.h>

#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

AW101_Aerodynamics::AW101_Aerodynamics( const AW101_Aircraft *aircraft, Input *input ) :
    Aerodynamics( aircraft, input ),
    _aircraft ( aircraft ),

    _mainRotor ( FDM_NULLPTR ),
    _tailRotor ( FDM_NULLPTR ),
    _fuselage  ( FDM_NULLPTR ),
    _stabHor   ( FDM_NULLPTR ),
    _stabVer   ( FDM_NULLPTR )
{
    _mainRotor = new AW101_MainRotor();
    _tailRotor = new AW101_TailRotor();
    _fuselage  = new AW101_Fuselage();
    _stabHor   = new AW101_StabilizerHor();
    _stabVer   = new AW101_StabilizerVer();
}

////////////////////////////////////////////////////////////////////////////////

AW101_Aerodynamics::~AW101_Aerodynamics()
{
    FDM_DELPTR( _mainRotor );
    FDM_DELPTR( _tailRotor );
    FDM_DELPTR( _fuselage );
    FDM_DELPTR( _stabHor );
    FDM_DELPTR( _stabVer );
}

////////////////////////////////////////////////////////////////////////////////

void AW101_Aerodynamics::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        XmlNode nodeMainRotor = dataNode.getFirstChildElement( "main_rotor" );
        XmlNode nodeTailRotor = dataNode.getFirstChildElement( "tail_rotor" );
        XmlNode nodeFuselage  = dataNode.getFirstChildElement( "fuselage" );
        XmlNode nodeStabHor   = dataNode.getFirstChildElement( "stab_hor" );
        XmlNode nodeStabVer   = dataNode.getFirstChildElement( "stab_ver" );

        _mainRotor->readData( nodeMainRotor );
        _tailRotor->readData( nodeTailRotor );
        _fuselage->readData( nodeFuselage );
        _stabHor->readData( nodeStabHor );
        _stabVer->readData( nodeStabVer );
    }
    else
    {
        XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
}

////////////////////////////////////////////////////////////////////////////////

void AW101_Aerodynamics::initialize()
{
    ///////////////////////////
    Aerodynamics::initialize();
    ///////////////////////////
}

////////////////////////////////////////////////////////////////////////////////

void AW101_Aerodynamics::computeForceAndMoment()
{
    updateMatrices();

    _mainRotor->computeForceAndMoment( _aircraft->getVel_BAS(),
                                       _aircraft->getOmg_BAS(),
                                       _aircraft->getAcc_BAS(),
                                       _aircraft->getEps_BAS(),
                                       _aircraft->getVel_air_BAS(),
                                       _aircraft->getOmg_air_BAS(),
                                       _aircraft->getGrav_BAS(),
                                       _aircraft->getEnvir()->getDensity() );

    _tailRotor->computeForceAndMoment( _aircraft->getVel_air_BAS(),
                                       _aircraft->getOmg_air_BAS(),
                                       _aircraft->getEnvir()->getDensity() );

    _fuselage->computeForceAndMoment( _aircraft->getVel_air_BAS(),
                                      _aircraft->getOmg_air_BAS(),
                                      _aircraft->getEnvir()->getDensity(),
                                      _mainRotor->getBeta1c(),
                                      _mainRotor->getWakeSkew(),
                                      _aircraft->getGear()->getPosition() );

    _stabHor->computeForceAndMoment( _aircraft->getVel_air_BAS(),
                                     _aircraft->getOmg_air_BAS(),
                                     _aircraft->getEnvir()->getDensity() );

    _stabVer->computeForceAndMoment( _aircraft->getVel_air_BAS(),
                                     _aircraft->getOmg_air_BAS(),
                                     _aircraft->getEnvir()->getDensity() );

    _for_bas = _mainRotor->getFor_BAS() + _tailRotor->getFor_BAS()
             + _fuselage->getFor_BAS()
             + _stabHor->getFor_BAS() + _stabVer->getFor_BAS();

    _mom_bas = _mainRotor->getMom_BAS() + _tailRotor->getMom_BAS()
             + _fuselage->getMom_BAS()
             + _stabHor->getMom_BAS() + _stabVer->getMom_BAS();

    // computing forces expressed in Aerodynamic Axes System
    // computing moments expressed in Stability Axes System
    _for_aero = _bas2aero * _for_bas;
    _mom_stab = _bas2stab * _mom_bas;

    if ( !_for_bas.isValid() || !_mom_bas.isValid() )
    {
        Exception e;

        e.setType( Exception::UnexpectedNaN );
        e.setInfo( "NaN detected in the aerodynamics model." );

        FDM_THROW( e );
    }
}

////////////////////////////////////////////////////////////////////////////////

void AW101_Aerodynamics::update()
{
    ///////////////////////
    Aerodynamics::update();
    ///////////////////////

    _mainRotor->update( _aircraft->getProp()->getMainRotorOmega(),
                        _aircraft->getProp()->getMainRotorPsi(),
                        _aircraft->getCtrl()->getCollective(),
                        _aircraft->getCtrl()->getCyclicLat(),
                        _aircraft->getCtrl()->getCyclicLon() );

    _tailRotor->update( _aircraft->getProp()->getTailRotorOmega(),
                        _aircraft->getCtrl()->getTailPitch() );
}
