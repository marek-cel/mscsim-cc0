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

#include <fdm_p51/p51_TailOff.h>

#include <fdm/utils/fdm_Units.h>
#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

P51_TailOff::P51_TailOff() :
    _ailerons     ( 0.0 ),
    _flaps        ( 0.0 ),
    _landing_gear ( 0.0 ),

    _dcl_dailerons ( 0.0 ),

    _dcx_dgear ( 0.0 ),
    _dcz_dgear ( 0.0 ),
    _dcm_dgear ( 0.0 )
{
    _dcx_dflaps = Table1::oneRecordTable( 0.0 );
    _dcz_dflaps = Table1::oneRecordTable( 0.0 );
    _dcm_dflaps = Table1::oneRecordTable( 0.0 );
}

////////////////////////////////////////////////////////////////////////////////

P51_TailOff::~P51_TailOff() {}

////////////////////////////////////////////////////////////////////////////////

void P51_TailOff::readData( XmlNode &dataNode )
{
    //////////////////////////////
    TailOff::readData( dataNode );
    //////////////////////////////

    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_dcl_dailerons, "dcl_dailerons" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_dcx_dgear, "dcx_dgear" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_dcz_dgear, "dcz_dgear" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_dcm_dgear, "dcm_dgear" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_dcx_dflaps, "dcx_dflaps" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_dcz_dflaps, "dcz_dflaps" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_dcm_dflaps, "dcm_dflaps" );

        if ( result == FDM_SUCCESS )
        {
            _dcx_dflaps.multiplyKeys( Units::deg2rad() );
            _dcz_dflaps.multiplyKeys( Units::deg2rad() );
            _dcm_dflaps.multiplyKeys( Units::deg2rad() );
        }
        else
        {
            XmlUtils::throwError( __FILE__, __LINE__, dataNode );
        }
    }
    else
    {
        XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
}

////////////////////////////////////////////////////////////////////////////////

void P51_TailOff::computeForceAndMoment( const Vector3 &vel_air_bas,
                                         const Vector3 &omg_air_bas,
                                         double airDensity,
                                         double ailerons,
                                         double flaps,
                                         double landing_gear )
{
    _ailerons     = ailerons;
    _flaps        = flaps;
    _landing_gear = landing_gear;

    ///////////////////////////////////////////////////////////////////////
    TailOff::computeForceAndMoment( vel_air_bas, omg_air_bas, airDensity );
    ///////////////////////////////////////////////////////////////////////
}

////////////////////////////////////////////////////////////////////////////////

void P51_TailOff::update( const Vector3 &vel_air_bas, const Vector3 &omg_air_bas )
{
    ////////////////////////////////////////////
    TailOff::update( vel_air_bas, omg_air_bas );
    ////////////////////////////////////////////

    Table1 cz_total = _cz + _flaps * _dcz_dflaps;

    _aoa_critical_neg = cz_total.getKeyOfValueMin( -M_PI_2, M_PI_2 );
    _aoa_critical_pos = cz_total.getKeyOfValueMax( -M_PI_2, M_PI_2 );
}

////////////////////////////////////////////////////////////////////////////////

double P51_TailOff::getCx( double angleOfAttack ) const
{
    return TailOff::getCx( angleOfAttack )
            + _flaps * _dcx_dflaps.getValue( angleOfAttack ) + _landing_gear * _dcx_dgear;
}

////////////////////////////////////////////////////////////////////////////////

double P51_TailOff::getCy( double sideslipAngle ) const
{
    return TailOff::getCy( sideslipAngle );
}

////////////////////////////////////////////////////////////////////////////////

double P51_TailOff::getCz( double angleOfAttack ) const
{
    return TailOff::getCz( angleOfAttack )
            + _flaps * _dcz_dflaps.getValue( angleOfAttack ) + _landing_gear * _dcz_dgear;
}

////////////////////////////////////////////////////////////////////////////////

double P51_TailOff::getCl( double sideslipAngle ) const
{
    return TailOff::getCl( sideslipAngle ) + _ailerons * _dcl_dailerons;
}

////////////////////////////////////////////////////////////////////////////////

double P51_TailOff::getCm( double angleOfAttack ) const
{
    return TailOff::getCm( angleOfAttack )
            + _flaps * _dcm_dflaps.getValue( angleOfAttack ) + _landing_gear * _dcm_dgear;
}

////////////////////////////////////////////////////////////////////////////////

double P51_TailOff::getCn( double sideslipAngle ) const
{
    return TailOff::getCn( sideslipAngle );
}
