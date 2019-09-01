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

#include <fdm_c172/c172_Aerodynamics.h>
#include <fdm_c172/c172_Aircraft.h>

#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

C172_Aerodynamics::C172_Aerodynamics( const C172_Aircraft *aircraft ) :
    Aerodynamics( aircraft ),
    _aircraft ( aircraft ),

    _tailOff ( 0 ),
    _stabHor ( 0 ),
    _stabVer ( 0 ),

    _dl_dtorque ( 0.0 ),
    _dn_dtorque ( 0.0 )
{
    _tailOff = new C172_TailOff();
    _stabHor = new C172_StabilizerHor();
    _stabVer = new C172_StabilizerVer();
}

////////////////////////////////////////////////////////////////////////////////

C172_Aerodynamics::~C172_Aerodynamics()
{
    if ( _tailOff ) delete _tailOff;
    _tailOff = 0;

    if ( _stabHor ) delete _stabHor;
    _stabHor = 0;

    if ( _stabVer ) delete _stabVer;
    _stabVer = 0;
}

////////////////////////////////////////////////////////////////////////////////

void C172_Aerodynamics::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _drag_ground_effect, "drag_ground_effect" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _lift_ground_effect, "lift_ground_effect" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _dl_dtorque, "dl_dtorque" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _dn_dtorque, "dn_dtorque" );

        if ( result != FDM_SUCCESS )
        {
            Exception e;

            e.setType( Exception::FileReadingError );
            e.setInfo( "Reading XML file failed. " + XmlUtils::getErrorInfo( dataNode ) );

            FDM_THROW( e );
        }

        XmlNode nodeTailOff = dataNode.getFirstChildElement( "tail_off" );
        XmlNode nodeStabHor = dataNode.getFirstChildElement( "stab_hor" );
        XmlNode nodeStabVer = dataNode.getFirstChildElement( "stab_ver" );

        _tailOff->readData( nodeTailOff );
        _stabHor->readData( nodeStabHor );
        _stabVer->readData( nodeStabVer );
    }
    else
    {
        Exception e;

        e.setType( Exception::FileReadingError );
        e.setInfo( "Reading XML file failed. " + XmlUtils::getErrorInfo( dataNode ) );

        FDM_THROW( e );
    }
}

////////////////////////////////////////////////////////////////////////////////

void C172_Aerodynamics::computeForceAndMoment()
{
    updateMatrices();

    _tailOff->computeForceAndMoment( _aircraft->getVel_air_BAS(),
                                     _aircraft->getOmg_air_BAS(),
                                     _aircraft->getEnvir()->getDensity(),
                                     _aircraft->getCtrl()->getAilerons(),
                                     _aircraft->getCtrl()->getFlaps() );

    _stabHor->computeForceAndMoment( _aircraft->getVel_air_BAS(),
                                     _aircraft->getOmg_air_BAS(),
                                     _aircraft->getEnvir()->getDensity(),
                                     _aircraft->getAngleOfAttack(),
                                     _aircraft->getCtrl()->getElevator(),
                                     _aircraft->getCtrl()->getElevatorTrim() );

    _stabVer->computeForceAndMoment( _aircraft->getVel_air_BAS(),
                                     _aircraft->getOmg_air_BAS(),
                                     _aircraft->getEnvir()->getDensity(),
                                     _aircraft->getCtrl()->getRudder() );

    _for_bas = _tailOff->getFor_BAS() + _stabHor->getFor_BAS() + _stabVer->getFor_BAS();
    _mom_bas = _tailOff->getMom_BAS() + _stabHor->getMom_BAS() + _stabVer->getMom_BAS();

    // computing forces expressed in Aerodynamic Axes System
    // computing moments expressed in Stability Axes System
    _for_aero = _bas2aero * _for_bas;
    _mom_stab = _bas2stab * _mom_bas;

    // wave drag
    _for_aero.x() *= getPrandtlGlauertCoef( _aircraft->getMachNumber() );

    // propwash effect
    _mom_stab.x() += _aircraft->getProp()->getPropeller()->getTorque() * _dl_dtorque;
    _mom_stab.z() += _aircraft->getProp()->getPropeller()->getTorque() * _dn_dtorque;

    // ground effect
    _for_aero.x() *= _drag_ground_effect.getValue( _aircraft->getAltitude_AGL() );
    _for_aero.z() *= _lift_ground_effect.getValue( _aircraft->getAltitude_AGL() );

    // computing forces and moments expressed in BAS
    _for_bas = _aero2bas * _for_aero;
    _mom_bas = _stab2bas * _mom_stab;

    if ( !_for_bas.isValid() || !_mom_bas.isValid() )
    {
        Exception e;

        e.setType( Exception::UnexpectedNaN );
        e.setInfo( "NaN detected in the aerodynamics model." );

        FDM_THROW( e );
    }
}

////////////////////////////////////////////////////////////////////////////////

void C172_Aerodynamics::update()
{
    ///////////////////////
    Aerodynamics::update();
    ///////////////////////

    _tailOff->update( _aircraft->getVel_air_BAS(),  _aircraft->getOmg_air_BAS() );
}
