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

#include <fdm_uh60/uh60_Fuselage.h>

#include <fdm/utils/fdm_Units.h>
#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

UH60_Fuselage::UH60_Fuselage()
{
    _dqfmp = Table1::oneRecordTable( 0.0 );
    _lqfmp = Table1::oneRecordTable( 0.0 );
    _mqfmp = Table1::oneRecordTable( 0.0 );

    _yqfmp = Table1::oneRecordTable( 0.0 );
    _rqfmp = Table1::oneRecordTable( 0.0 );
    _nqfmp = Table1::oneRecordTable( 0.0 );

    _ddqfmp = Table1::oneRecordTable( 0.0 );
    _dlqfmp = Table1::oneRecordTable( 0.0 );
    _dmqfmp = Table1::oneRecordTable( 0.0 );
}

////////////////////////////////////////////////////////////////////////////////

UH60_Fuselage::~UH60_Fuselage() {}

////////////////////////////////////////////////////////////////////////////////

void UH60_Fuselage::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_r_ac_bas, "aero_center" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_ekxwf, "ekxwf" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_ekzwf, "ekzwf" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_dqfmp, "dqfmp" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_lqfmp, "lqfmp" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_mqfmp, "mqfmp" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_yqfmp, "yqfmp" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_rqfmp, "rqfmp" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_nqfmp, "nqfmp" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_ddqfmp, "ddqfmp" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_dlqfmp, "dlqfmp" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, &_dmqfmp, "dmqfmp" );

        if ( result == FDM_SUCCESS )
        {
            _ekxwf.multiplyColsAndRows( Units::deg2rad(), Units::deg2rad() );
            _ekzwf.multiplyColsAndRows( Units::deg2rad(), Units::deg2rad() );

            _dqfmp.multiplyKeys( Units::deg2rad() );
            _lqfmp.multiplyKeys( Units::deg2rad() );
            _mqfmp.multiplyKeys( Units::deg2rad() );

            _yqfmp.multiplyKeys( Units::deg2rad() );
            _rqfmp.multiplyKeys( Units::deg2rad() );
            _nqfmp.multiplyKeys( Units::deg2rad() );

            _ddqfmp.multiplyKeys( Units::deg2rad() );
            _dlqfmp.multiplyKeys( Units::deg2rad() );
            _dmqfmp.multiplyKeys( Units::deg2rad() );
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

void UH60_Fuselage::computeForceAndMoment( const Vector3 &vel_air_bas,
                                           const Vector3 &omg_air_bas,
                                           double airDensity,
                                           double a1fmr,
                                           double chipmr,
                                           double dwshmr,
                                           double omgtmr,
                                           double rmr )
{
    // rotor wash on the fuselage, NASA-CR-166309, p.5.2-5 (PDF p.90)
    Vector3 vel_i_bas(  _ekxwf.getValue( chipmr, a1fmr ) * dwshmr * omgtmr * rmr,
                        0.0,
                       -_ekzwf.getValue( chipmr, a1fmr ) * dwshmr * omgtmr * rmr );

    // fuselage velocity
    // NASA-CR-166309, p.5.2-5 (PDF p.90)
    Vector3 vel_f_bas = vel_air_bas
                      + vel_i_bas
    // "Contributions from angular rates due to mounting point offset from CG
    // are ignored." [NASA-CR-166309, p.5.2-5 (PDF p.90)]
                      + ( omg_air_bas % _r_ac_bas )
    ;

    // NASA-CR-166309, p.5.2-6 (PDF p.91)
    double vxabs = fabs( vel_f_bas.x() );
    double alfwf = ( vxabs > 0.1 ) ? atan2( vel_f_bas.z(), vxabs ) : 0.0;
    double afabwf = fabs( alfwf );

    // NASA-CR-166309, p.5.2-6 (PDF p.91)
    double v_xz =  vel_f_bas.getLengthXZ();
    double betawf = ( v_xz > 0.1 ) ? atan2( vel_f_bas.y(), v_xz ) : 0.0;

    // NASA-CR-166309, p.5.2-12 (PDF p.97)
    double psiwf = -betawf;

    // dynamic pressure
    // NASA-CR-166309, p.5.2-6 (PDF p.91)
    double qwf = 0.5 * airDensity * vel_f_bas.getLength2();

    // NASA-CR-166309, p.5.2-9 (PDF p.94)
    Vector3 for_temp( -qwf * getDQFTOT( alfwf, psiwf ),
                      -qwf * getYQFTOT( psiwf ),
                      -qwf * getLQFTOT( alfwf, psiwf ) );

    Vector3 mom_temp(  qwf * getRQFTOT( psiwf ),
                      -qwf * getMQFTOT( alfwf, psiwf ),
                       qwf * getNQFTOT( psiwf ) );

    double sinAlpha = sin( alfwf );
    double cosAlpha = cos( alfwf );
    double sinBeta  = sin( betawf );
    double cosBeta  = cos( betawf );

    Matrix3x3 T_tot2wfp;

    T_tot2wfp(0,0) =  cosAlpha * cosBeta;
    T_tot2wfp(0,1) =  cosAlpha * sinBeta;
    T_tot2wfp(0,2) = -sinAlpha;

    T_tot2wfp(1,0) =  sinBeta;
    T_tot2wfp(1,1) = -cosBeta;
    T_tot2wfp(1,2) =  0.0;

    T_tot2wfp(2,0) =  sinAlpha * cosBeta;
    T_tot2wfp(2,1) =  sinAlpha * sinBeta;
    T_tot2wfp(2,2) =  cosAlpha;

    // NASA-CR-166309, p.5.2-9
    Vector3 for_bas = T_tot2wfp * for_temp;
    Vector3 mom_bas = T_tot2wfp * mom_temp
                    + ( _r_ac_bas % for_bas );

    // low speed filter of fuselage aerodynamics
    // NASA-CR-166309, p.5.2-10 (PDF p.95)
    // 25 ft/s = ca. 7.62 m/s
    if ( vxabs <= 7.62 )
    {
        double coef = vxabs / 7.62;

        double al_ala = ( afabwf > 1.0e-9 ) ? ( alfwf / afabwf ) : 0.0;

        double vy_abs = fabs( vel_f_bas.y() );
        double vy_vya = ( vy_abs > 1.0e-9 ) ? ( vel_f_bas.y() / vy_abs ) : 0.0;

        Vector3 for_ls = for_temp; // ??? not sure !!! NASA-CR-166309, p.5.2-3 (PDF p.88)
        Vector3 mom_ls = mom_temp; // ??? not sure !!! NASA-CR-166309, p.5.2-3 (PDF p.88)

        for_bas.x() = coef * for_bas.x() - al_ala * ( 1.0 - coef ) * for_ls.x();
        for_bas.y() = coef * for_bas.y() - vy_vya * ( 1.0 - coef ) * for_ls.y();
        for_bas.z() = coef * for_bas.z() - al_ala * ( 1.0 - coef ) * for_ls.z();

        mom_bas.x() = coef * mom_bas.x() - vy_vya * ( 1.0 - coef ) * mom_ls.x();
        mom_bas.y() = coef * mom_bas.y() - al_ala * ( 1.0 - coef ) * mom_ls.y();
        mom_bas.z() = coef * mom_bas.z() - vy_vya * ( 1.0 - coef ) * mom_ls.z();
    }

    _for_bas = for_bas;
    _mom_bas = mom_bas;

    if ( !_for_bas.isValid() || !_mom_bas.isValid() )
    {
        Exception e;

        e.setType( Exception::UnexpectedNaN );
        e.setInfo( "NaN detected in the wing model." );

        FDM_THROW( e );
    }
}

////////////////////////////////////////////////////////////////////////////////

double UH60_Fuselage::getDQFTOT( double alfwf, double psiwf ) const
{
    // NASA-CR-166309, p.5.2-7 (PDF p.92)
    return _dqfmp.getValue( alfwf ) + _ddqfmp.getValue( psiwf );
}

////////////////////////////////////////////////////////////////////////////////

double UH60_Fuselage::getYQFTOT( double psiwf ) const
{
    // NASA-CR-166309, p.5.2-7 (PDF p.92)
    return _yqfmp.getValue( psiwf );
}

////////////////////////////////////////////////////////////////////////////////

double UH60_Fuselage::getLQFTOT( double alfwf, double psiwf ) const
{
    // NASA-CR-166309, p.5.2-7 (PDF p.92)
    return _lqfmp.getValue( alfwf ) + _dlqfmp.getValue( psiwf );
    // + DLQD ???
}

////////////////////////////////////////////////////////////////////////////////

double UH60_Fuselage::getRQFTOT( double psiwf ) const
{
    // NASA-CR-166309, p.5.2-7 (PDF p.92)
    return _rqfmp.getValue( psiwf );
}

////////////////////////////////////////////////////////////////////////////////

double UH60_Fuselage::getMQFTOT( double alfwf, double psiwf ) const
{
    // NASA-CR-166309, p.5.2-7 (PDF p.92)
    return _mqfmp.getValue( alfwf ) + _dmqfmp.getValue( psiwf );
    // + DMQD ???
}

////////////////////////////////////////////////////////////////////////////////

double UH60_Fuselage::getNQFTOT( double psiwf ) const
{
    // NASA-CR-166309, p.5.2-7 (PDF p.92)
    return _nqfmp.getValue( psiwf );
    // + DNQD ???
}
