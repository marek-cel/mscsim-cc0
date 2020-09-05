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

#include <fdm_xf/xf_Aerodynamics.h>
#include <fdm_xf/xf_Aircraft.h>

#include <fdm/utils/fdm_Units.h>
#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

XF_Aerodynamics::XF_Aerodynamics( const XF_Aircraft *aircraft, DataNode *rootNode ) :
    Aerodynamics( aircraft, rootNode ),
    _aircraft ( aircraft ),

    _span ( 0.0 ),
    _mac  ( 0.0 ),
    _area ( 0.0 ),

    _mac_s ( 0.0 ),

    _alpha     ( 0.0 ),
    _alpha_deg ( 0.0 ),
    _beta      ( 0.0 ),
    _beta_deg  ( 0.0 ),

    _b_2v ( 0.0 ),
    _c_2v ( 0.0 ),

    _cx_delta_h ( 0.0 ),
    _cz_delta_h ( 0.0 ),
    _cl_delta_h ( 0.0 ),
    _cm_delta_h ( 0.0 ),
    _cn_delta_h ( 0.0 ),

    _lef_factor ( 0.0 )
{}

////////////////////////////////////////////////////////////////////////////////

XF_Aerodynamics::~XF_Aerodynamics() {}

////////////////////////////////////////////////////////////////////////////////

void XF_Aerodynamics::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _span , "span" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _mac  , "mac"  );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _area , "area" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cx_dh_n25      , "cx_dh_n25"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cx_dh_n10      , "cx_dh_n10"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cx_dh_0        , "cx_dh_0"        );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cx_dh_p10      , "cx_dh_p10"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cx_dh_p25      , "cx_dh_p25"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cx_lef         , "cx_lef"         );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cx_sb    , "delta_cx_sb"    );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cx_q           , "cx_q"           );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cx_q_lef , "delta_cx_q_lef" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cx_tef   , "delta_cx_tef"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cx_gear  , "delta_cx_gear"  );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cy             , "cy"             );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cy_lef         , "cy_lef"         );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cy_da_20       , "cy_da_20"       );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cy_da_20_lef   , "cy_da_20_lef"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cy_dr_30       , "cy_dr_30"       );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cy_r           , "cy_r"           );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cy_r_lef , "delta_cy_r_lef" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cy_p           , "cy_p"           );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cy_p_lef , "delta_cy_p_lef" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cz_dh_n25      , "cz_dh_n25"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cz_dh_n10      , "cz_dh_n10"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cz_dh_0        , "cz_dh_0"        );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cz_dh_p10      , "cz_dh_p10"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cz_dh_p25      , "cz_dh_p25"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cz_lef         , "cz_lef"         );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cz_sb    , "delta_cz_sb"    );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cz_q           , "cz_q"           );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cz_q_lef , "delta_cz_q_lef" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cz_tef   , "delta_cz_tef"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cz_gear  , "delta_cz_gear"  );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cl_dh_n25      , "cl_dh_n25"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cl_dh_0        , "cl_dh_0"        );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cl_dh_p25      , "cl_dh_p25"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cl_lef         , "cl_lef"         );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cl_da_20       , "cl_da_20"       );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cl_da_20_lef   , "cl_da_20_lef"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cl_dr_30       , "cl_dr_30"       );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cl_r           , "cl_r"           );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cl_beta  , "delta_cl_beta"  );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cl_r_lef , "delta_cl_r_lef" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cl_p           , "cl_p"           );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cl_p_lef , "delta_cl_p_lef" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cm_dh_n25      , "cm_dh_n25"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cm_dh_n10      , "cm_dh_n10"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cm_dh_0        , "cm_dh_0"        );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cm_dh_p10      , "cm_dh_p10"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cm_dh_p25      , "cm_dh_p25"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cm_lef         , "cm_lef"         );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cm_sb    , "delta_cm_sb"    );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cm_q           , "cm_q"           );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cm_q_lef , "delta_cm_q_lef" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cm       , "delta_cm"       );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cm_ds    , "delta_cm_ds"    );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cm_tef   , "delta_cm_tef"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _eta_delta_h    , "eta_delta_h"    );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cn_dh_n25        , "cn_dh_n25"        );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cn_dh_0          , "cn_dh_0"          );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cn_dh_p25        , "cn_dh_p25"        );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cn_lef           , "cn_lef"           );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cn_da_20         , "cn_da_20"         );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cn_da_20_lef     , "cn_da_20_lef"     );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cn_dr_30         , "cn_dr_30"         );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cn_r             , "cn_r"             );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cn_beta    , "delta_cn_beta"    );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cn_r_lef   , "delta_cn_r_lef"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _cn_p             , "cn_p"             );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _delta_cn_p_lef   , "delta_cn_p_lef"   );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _wave_drag, "wave_drag" );

        if ( result == FDM_SUCCESS )
        {
            _mac_s = _area * _mac;
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

void XF_Aerodynamics::computeForceAndMoment()
{
    updateMatrices();

    // dynamic pressure
    double dynPress = _aircraft->getDynPress();

    _alpha = _aircraft->getAngleOfAttack();
    _beta  = _aircraft->getSideslipAngle();

    _alpha_deg = Units::rad2deg( _alpha );
    _beta_deg  = Units::rad2deg( _beta  );

    _b_2v = 0.0;
    _c_2v = 0.0;

    if ( _aircraft->getAirspeed() > 0.1 )
    {
        _b_2v = _span / ( 2.0 * _aircraft->getAirspeed() );
        _c_2v = _mac  / ( 2.0 * _aircraft->getAirspeed() );
    }

    _for_bas = Vector3( dynPress * getCx() * _area,
                        dynPress * getCy() * _area,
                        dynPress * getCz() * _area );

    _mom_bas = Vector3( dynPress * getCl() * _mac_s,
                        dynPress * getCm() * _mac_s,
                        dynPress * getCn() * _mac_s );

    // computing forces expressed in Aerodynamic Axes System
    // computing moments expressed in Stability Axes System
    _for_aero = _bas2aero * _for_bas;
    _mom_stab = _bas2stab * _mom_bas;

    _for_aero.x() *= _wave_drag.getValue( _aircraft->getMachNumber() );

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

void XF_Aerodynamics::update()
{
    ///////////////////////
    Aerodynamics::update();
    ///////////////////////

    updateCoefsDueToElevator();

    // (NASA-TP-1538)
    _lef_factor = 1.0 - _aircraft->getCtrl()->getFlapsLENorm();
}

////////////////////////////////////////////////////////////////////////////////

double XF_Aerodynamics::getCx() const
{
    // (NASA-TP-1538, p.37)
    double delta_cx_lef = _cx_lef  .getValue( _alpha, _beta )
                        - _cx_dh_0 .getValue( _alpha, _beta );

    double cx_q = _cx_q.getValue( _alpha ) + _delta_cx_q_lef.getValue( _alpha ) * _lef_factor;

    return _cx_delta_h + delta_cx_lef * _lef_factor
            + _delta_cx_sb.getValue( _alpha ) * _aircraft->getCtrl()->getAirbrakeNorm()
            + _c_2v * cx_q * _aircraft->getOmg_air_BAS().q()
            + _delta_cx_tef.getValue( _alpha ) * _aircraft->getCtrl()->getFlapsTENorm()
            + _delta_cx_gear.getValue( _alpha ) * _aircraft->getDataInp()->controls.landing_gear;
}

////////////////////////////////////////////////////////////////////////////////

double XF_Aerodynamics::getCy() const
{
    // (NASA-TP-1538, p.38)
    double cy     = _cy     .getValue( _alpha, _beta );
    double cy_lef = _cy_lef .getValue( _alpha, _beta );

    double delta_cy_lef       = cy_lef - cy;
    double delta_cy_da_20     = _cy_da_20.getValue( _alpha, _beta ) - cy;
    double delta_cy_da_20_lef = _cy_da_20_lef.getValue( _alpha, _beta ) - cy_lef - delta_cy_da_20;
    double delta_cy_dr_30     = _cy_dr_30.getValue( _alpha, _beta ) - cy;

    return cy + delta_cy_lef * _lef_factor
            + ( delta_cy_da_20 + delta_cy_da_20_lef * _lef_factor ) * _aircraft->getCtrl()->getAileronsNorm()
            + delta_cy_dr_30 * _aircraft->getCtrl()->getRudderNorm()
            + _b_2v * ( _cy_r.getValue( _alpha ) * _delta_cy_r_lef.getValue( _alpha ) * _lef_factor ) * _aircraft->getOmg_air_BAS().r()
            + _b_2v * ( _cy_p.getValue( _alpha ) * _delta_cy_p_lef.getValue( _alpha ) * _lef_factor ) * _aircraft->getOmg_air_BAS().p();
}

////////////////////////////////////////////////////////////////////////////////

double XF_Aerodynamics::getCz() const
{
    // (NASA-TP-1538, p.37)
    double delta_cz_lef = _cz_lef  .getValue( _alpha, _beta )
                        - _cz_dh_0 .getValue( _alpha, _beta );

    double cz_q = _cz_q.getValue( _alpha ) + _delta_cz_q_lef.getValue( _alpha ) * _lef_factor;

    return _cz_delta_h + delta_cz_lef * _lef_factor
            + _delta_cz_sb.getValue( _alpha ) * _aircraft->getCtrl()->getAirbrakeNorm()
            + _c_2v * cz_q * _aircraft->getOmg_air_BAS().q()
            + _delta_cz_tef.getValue( _alpha ) * _aircraft->getCtrl()->getFlapsTENorm()
            + _delta_cz_gear.getValue( _alpha ) * _aircraft->getDataInp()->controls.landing_gear;
}

////////////////////////////////////////////////////////////////////////////////

double XF_Aerodynamics::getCl() const
{
    // (NASA-TP-1538, p.39-40)
    double cl_dh_0  = _cl_dh_0  .getValue( _alpha, _beta );
    double cl_lef   = _cl_lef   .getValue( _alpha, _beta );
    double cl_da_20 = _cl_da_20 .getValue( _alpha, _beta );

    double delta_cl_lef   = cl_lef   - cl_dh_0;
    double delta_cl_da_20 = cl_da_20 - cl_dh_0;
    double delta_cl_da_20_lef = _cl_da_20_lef.getValue( _alpha, _beta ) - cl_lef
            - ( cl_da_20 - cl_dh_0 );
    double delta_cl_dr_30 = _cl_dr_30.getValue( _alpha, _beta ) - cl_dh_0;

    return _cl_delta_h + delta_cl_lef * _lef_factor
            + ( delta_cl_da_20 + delta_cl_da_20_lef * _lef_factor ) * _aircraft->getCtrl()->getAileronsNorm()
            + delta_cl_dr_30 * _aircraft->getCtrl()->getRudderNorm()
            + _b_2v * ( _cl_r.getValue( _alpha ) + _delta_cl_r_lef.getValue( _alpha ) * _lef_factor ) * _aircraft->getOmg_air_BAS().r()
            + _b_2v * ( _cl_p.getValue( _alpha ) + _delta_cl_p_lef.getValue( _alpha ) * _lef_factor ) * _aircraft->getOmg_air_BAS().p()
            + _delta_cl_beta.getValue( _alpha ) * _beta_deg;
}

////////////////////////////////////////////////////////////////////////////////

double XF_Aerodynamics::getCm() const
{
    // (NASA-TP-1538, p.38)
    double delta_cm_lef = _cm_lef  .getValue( _alpha, _beta )
                        - _cm_dh_0 .getValue( _alpha, _beta );

    double cm_q = _cm_q.getValue( _alpha ) + _delta_cm_q_lef.getValue( _alpha ) * _lef_factor;

    return _cm_delta_h * _eta_delta_h.getValue( _aircraft->getCtrl()->getElevator() )
            + delta_cm_lef * _lef_factor
            + _delta_cm_sb.getValue( _alpha ) * _aircraft->getCtrl()->getAirbrakeNorm()
            + _c_2v * cm_q * _aircraft->getOmg_air_BAS().q()
            + _delta_cm.getValue( _alpha )
            + _delta_cm_ds.getValue( _alpha, _aircraft->getCtrl()->getElevator() )
            + _delta_cm_tef.getValue( _alpha ) * _aircraft->getCtrl()->getFlapsTENorm();
}

////////////////////////////////////////////////////////////////////////////////

double XF_Aerodynamics::getCn() const
{
    // (NASA-TP-1538, p.39)
    double cn_dh_0  = _cn_dh_0  .getValue( _alpha, _beta );
    double cn_lef   = _cn_lef   .getValue( _alpha, _beta );
    double cn_da_20 = _cn_da_20 .getValue( _alpha, _beta );

    double delta_cn_lef   = cn_lef   - cn_dh_0;
    double delta_cn_da_20 = cn_da_20 - cn_dh_0;
    double delta_cn_da_20_lef = _cn_da_20_lef.getValue( _alpha, _beta ) - cn_lef
            - ( cn_da_20 - cn_dh_0 );
    double delta_cn_dr_30 = _cn_dr_30.getValue( _alpha, _beta ) - cn_dh_0;

    return _cn_delta_h + delta_cn_lef * _lef_factor
            + ( delta_cn_da_20 + delta_cn_da_20_lef * _lef_factor ) * _aircraft->getCtrl()->getAileronsNorm()
            + delta_cn_dr_30 * _aircraft->getCtrl()->getRudderNorm()
            + _b_2v * ( _cn_r.getValue( _alpha ) + _delta_cn_r_lef.getValue( _alpha ) * _lef_factor ) * _aircraft->getOmg_air_BAS().r()
            + _b_2v * ( _cn_p.getValue( _alpha ) + _delta_cn_p_lef.getValue( _alpha ) * _lef_factor ) * _aircraft->getOmg_air_BAS().p()
            + _delta_cn_beta.getValue( _alpha ) * _beta_deg;
}

////////////////////////////////////////////////////////////////////////////////

void XF_Aerodynamics::updateCoefsDueToElevator()
{
    double coef_1 = 0.0;
    double coef_2 = 0.0;

    double cx_l = 0.0;
    double cx_h = 0.0;
    double cz_l = 0.0;
    double cz_h = 0.0;

    double cl_l = 0.0;
    double cl_h = 0.0;
    double cm_l = 0.0;
    double cm_h = 0.0;
    double cn_l = 0.0;
    double cn_h = 0.0;

    double delta_h_deg = Units::rad2deg( _aircraft->getCtrl()->getElevator() );

    if ( delta_h_deg < 0.0 )
    {
        coef_2 = ( delta_h_deg + 25.0 ) / 25.0;

        cl_l = _cl_dh_n25 .getValue( _alpha, _beta );
        cl_h = _cl_dh_0   .getValue( _alpha, _beta );

        cn_l = _cn_dh_n25 .getValue( _alpha, _beta );
        cn_h = _cn_dh_0   .getValue( _alpha, _beta );

        if ( delta_h_deg < -10.0 )
        {
            coef_1 = ( delta_h_deg + 25.0 ) / 15.0;

            cx_l = _cx_dh_n25 .getValue( _alpha, _beta );
            cx_h = _cx_dh_n10 .getValue( _alpha, _beta );

            cz_l = _cz_dh_n25 .getValue( _alpha, _beta );
            cz_h = _cz_dh_n10 .getValue( _alpha, _beta );

            cm_l = _cm_dh_n25 .getValue( _alpha, _beta );
            cm_h = _cm_dh_n10 .getValue( _alpha, _beta );
        }
        else
        {
            coef_1 = ( delta_h_deg + 10.0 ) / 10.0;

            cx_l = _cx_dh_n10 .getValue( _alpha, _beta );
            cx_h = _cx_dh_0   .getValue( _alpha, _beta );

            cz_l = _cz_dh_n10 .getValue( _alpha, _beta );
            cz_h = _cz_dh_0   .getValue( _alpha, _beta );

            cm_l = _cm_dh_n10 .getValue( _alpha, _beta );
            cm_h = _cm_dh_0   .getValue( _alpha, _beta );
        }
    }
    else
    {
        coef_2 = delta_h_deg / 25.0;

        cl_l = _cl_dh_0   .getValue( _alpha, _beta );
        cl_h = _cl_dh_p25 .getValue( _alpha, _beta );

        cn_l = _cn_dh_0   .getValue( _alpha, _beta );
        cn_h = _cn_dh_p25 .getValue( _alpha, _beta );

        if ( delta_h_deg < 10.0 )
        {
            coef_1 = delta_h_deg / 10.0;

            cx_l = _cx_dh_0   .getValue( _alpha, _beta );
            cx_h = _cx_dh_p10 .getValue( _alpha, _beta );

            cz_l = _cz_dh_0   .getValue( _alpha, _beta );
            cz_h = _cz_dh_p10 .getValue( _alpha, _beta );

            cm_l = _cm_dh_0   .getValue( _alpha, _beta );
            cm_h = _cm_dh_p10 .getValue( _alpha, _beta );
        }
        else
        {
            coef_1 = ( delta_h_deg - 10.0 ) / 15.0;

            cx_l = _cx_dh_p10 .getValue( _alpha, _beta );
            cx_h = _cx_dh_p25 .getValue( _alpha, _beta );

            cz_l = _cz_dh_p10 .getValue( _alpha, _beta );
            cz_h = _cz_dh_p25 .getValue( _alpha, _beta );

            cm_l = _cm_dh_p10 .getValue( _alpha, _beta );
            cm_h = _cm_dh_p25 .getValue( _alpha, _beta );
        }
    }

    coef_1 = Misc::satur( 0.0, 1.0, coef_1 );
    coef_2 = Misc::satur( 0.0, 1.0, coef_2 );

    _cx_delta_h = cx_l + coef_1 * ( cx_h - cx_l );
    _cz_delta_h = cz_l + coef_1 * ( cz_h - cz_l );
    _cm_delta_h = cm_l + coef_1 * ( cm_h - cm_l );

    _cl_delta_h = cl_l + coef_2 * ( cl_h - cl_l );
    _cn_delta_h = cn_l + coef_2 * ( cn_h - cn_l );
}
