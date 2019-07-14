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

#include <fdm_f16/f16_Aerodynamics.h>
#include <fdm_f16/f16_Aircraft.h>

#include <fdm/utils/fdm_Units.h>
#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

F16_Aerodynamics::F16_Aerodynamics( const F16_Aircraft *aircraft ) :
    Aerodynamics( aircraft ),
    m_aircraft ( aircraft ),

    m_span ( 0.0 ),
    m_mac  ( 0.0 ),
    m_area ( 0.0 ),

    m_mac_s ( 0.0 ),

    m_alpha     ( 0.0 ),
    m_alpha_deg ( 0.0 ),
    m_beta      ( 0.0 ),
    m_beta_deg  ( 0.0 ),

    m_b_2v ( 0.0 ),
    m_c_2v ( 0.0 ),

    m_cx_delta_h ( 0.0 ),
    m_cz_delta_h ( 0.0 ),
    m_cl_delta_h ( 0.0 ),
    m_cm_delta_h ( 0.0 ),
    m_cn_delta_h ( 0.0 ),

    m_lef_factor ( 0.0 )
{}

////////////////////////////////////////////////////////////////////////////////

F16_Aerodynamics::~F16_Aerodynamics() {}

////////////////////////////////////////////////////////////////////////////////

void F16_Aerodynamics::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_span , "span" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_mac  , "mac"  );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_area , "area" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cx_dh_n25      , "cx_dh_n25"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cx_dh_n10      , "cx_dh_n10"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cx_dh_0        , "cx_dh_0"        );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cx_dh_p10      , "cx_dh_p10"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cx_dh_p25      , "cx_dh_p25"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cx_lef         , "cx_lef"         );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cx_sb    , "delta_cx_sb"    );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cx_q           , "cx_q"           );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cx_q_lef , "delta_cx_q_lef" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cx_tef   , "delta_cx_tef"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cx_gear  , "delta_cx_gear"  );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cy             , "cy"             );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cy_lef         , "cy_lef"         );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cy_da_20       , "cy_da_20"       );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cy_da_20_lef   , "cy_da_20_lef"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cy_dr_30       , "cy_dr_30"       );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cy_r           , "cy_r"           );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cy_r_lef , "delta_cy_r_lef" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cy_p           , "cy_p"           );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cy_p_lef , "delta_cy_p_lef" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cz_dh_n25      , "cz_dh_n25"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cz_dh_n10      , "cz_dh_n10"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cz_dh_0        , "cz_dh_0"        );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cz_dh_p10      , "cz_dh_p10"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cz_dh_p25      , "cz_dh_p25"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cz_lef         , "cz_lef"         );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cz_sb    , "delta_cz_sb"    );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cz_q           , "cz_q"           );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cz_q_lef , "delta_cz_q_lef" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cz_tef   , "delta_cz_tef"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cz_gear  , "delta_cz_gear"  );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cl_dh_n25      , "cl_dh_n25"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cl_dh_0        , "cl_dh_0"        );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cl_dh_p25      , "cl_dh_p25"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cl_lef         , "cl_lef"         );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cl_da_20       , "cl_da_20"       );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cl_da_20_lef   , "cl_da_20_lef"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cl_dr_30       , "cl_dr_30"       );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cl_r           , "cl_r"           );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cl_beta  , "delta_cl_beta"  );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cl_r_lef , "delta_cl_r_lef" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cl_p           , "cl_p"           );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cl_p_lef , "delta_cl_p_lef" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cm_dh_n25      , "cm_dh_n25"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cm_dh_n10      , "cm_dh_n10"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cm_dh_0        , "cm_dh_0"        );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cm_dh_p10      , "cm_dh_p10"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cm_dh_p25      , "cm_dh_p25"      );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cm_lef         , "cm_lef"         );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cm_sb    , "delta_cm_sb"    );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cm_q           , "cm_q"           );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cm_q_lef , "delta_cm_q_lef" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cm       , "delta_cm"       );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cm_ds    , "delta_cm_ds"    );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cm_tef   , "delta_cm_tef"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_eta_delta_h    , "eta_delta_h"    );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cn_dh_n25        , "cn_dh_n25"        );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cn_dh_0          , "cn_dh_0"          );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cn_dh_p25        , "cn_dh_p25"        );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cn_lef           , "cn_lef"           );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cn_da_20         , "cn_da_20"         );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cn_da_20_lef     , "cn_da_20_lef"     );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cn_dr_30         , "cn_dr_30"         );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cn_r             , "cn_r"             );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cn_beta    , "delta_cn_beta"    );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cn_r_lef   , "delta_cn_r_lef"   );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_cn_p             , "cn_p"             );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_delta_cn_p_lef   , "delta_cn_p_lef"   );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, m_wave_drag, "wave_drag" );

        if ( result == FDM_SUCCESS )
        {
            m_mac_s = m_area * m_mac;
        }
        else
        {
            Exception e;

            e.setType( Exception::FileReadingError );
            e.setInfo( "Reading XML file failed. " + XmlUtils::getErrorInfo( dataNode ) );

            FDM_THROW( e );
        }
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

void F16_Aerodynamics::computeForceAndMoment()
{
    updateMatrices();

    // dynamic pressure
    double dynPress = m_aircraft->getDynPress();

    m_alpha = m_aircraft->getAngleOfAttack();
    m_beta  = m_aircraft->getSideslipAngle();

    m_alpha_deg = Units::rad2deg( m_alpha );
    m_beta_deg  = Units::rad2deg( m_beta  );

    m_b_2v = 0.0;
    m_c_2v = 0.0;

    if ( m_aircraft->getAirspeed() > 0.1 )
    {
        m_b_2v = m_span / ( 2.0 * m_aircraft->getAirspeed() );
        m_c_2v = m_mac  / ( 2.0 * m_aircraft->getAirspeed() );
    }

    m_for_bas = Vector3( dynPress * getCx() * m_area,
                         dynPress * getCy() * m_area,
                         dynPress * getCz() * m_area );

    m_mom_bas = Vector3( dynPress * getCl() * m_mac_s,
                         dynPress * getCm() * m_mac_s,
                         dynPress * getCn() * m_mac_s );

    // computing forces expressed in Aerodynamic Axes System
    // computing moments expressed in Stability Axes System
    m_for_aero = m_bas2aero * m_for_bas;
    m_mom_stab = m_bas2stab * m_mom_bas;

    m_for_aero.x() *= m_wave_drag.getValue( m_aircraft->getMachNumber() );

    // computing forces and moments expressed in BAS
    m_for_bas = m_aero2bas * m_for_aero;
    m_mom_bas = m_stab2bas * m_mom_stab;

    if ( !m_for_bas.isValid() || !m_mom_bas.isValid() )
    {
        Exception e;

        e.setType( Exception::UnexpectedNaN );
        e.setInfo( "NaN detected in the aerodynamics model." );

        FDM_THROW( e );
    }
}

////////////////////////////////////////////////////////////////////////////////

void F16_Aerodynamics::update()
{
    ///////////////////////
    Aerodynamics::update();
    ///////////////////////

    updateCoefsDueToElevator();

    // (NASA-TP-1538)
    m_lef_factor = 1.0 - m_aircraft->getCtrl()->getFlapsLENorm();
}

////////////////////////////////////////////////////////////////////////////////

double F16_Aerodynamics::getCx() const
{
    // (NASA-TP-1538, p.37)
    double delta_cx_lef = m_cx_lef  .getValue( m_alpha, m_beta )
                        - m_cx_dh_0 .getValue( m_alpha, m_beta );

    double cx_q = m_cx_q.getValue( m_alpha ) + m_delta_cx_q_lef.getValue( m_alpha ) * m_lef_factor;

    return m_cx_delta_h + delta_cx_lef * m_lef_factor
            + m_delta_cx_sb.getValue( m_alpha ) * m_aircraft->getCtrl()->getAirbrakeNorm()
            + m_c_2v * cx_q * m_aircraft->getOmg_air_BAS()( i_q )
            + m_delta_cx_tef.getValue( m_alpha ) * m_aircraft->getCtrl()->getFlapsTENorm()
            + m_delta_cx_gear.getValue( m_alpha ) * m_aircraft->getDataInp()->controls.landing_gear;
}

////////////////////////////////////////////////////////////////////////////////

double F16_Aerodynamics::getCy() const
{
    // (NASA-TP-1538, p.38)
    double cy     = m_cy     .getValue( m_alpha, m_beta );
    double cy_lef = m_cy_lef .getValue( m_alpha, m_beta );

    double delta_cy_lef       = cy_lef - cy;
    double delta_cy_da_20     = m_cy_da_20.getValue( m_alpha, m_beta ) - cy;
    double delta_cy_da_20_lef = m_cy_da_20_lef.getValue( m_alpha, m_beta ) - cy_lef - delta_cy_da_20;
    double delta_cy_dr_30     = m_cy_dr_30.getValue( m_alpha, m_beta ) - cy;

    return cy + delta_cy_lef * m_lef_factor
            + ( delta_cy_da_20 + delta_cy_da_20_lef * m_lef_factor ) * m_aircraft->getCtrl()->getAileronsNorm()
            + delta_cy_dr_30 * m_aircraft->getCtrl()->getRudderNorm()
            + m_b_2v * ( m_cy_r.getValue( m_alpha ) * m_delta_cy_r_lef.getValue( m_alpha ) * m_lef_factor ) * m_aircraft->getOmg_air_BAS()( i_r )
            + m_b_2v * ( m_cy_p.getValue( m_alpha ) * m_delta_cy_p_lef.getValue( m_alpha ) * m_lef_factor ) * m_aircraft->getOmg_air_BAS()( i_p );
}

////////////////////////////////////////////////////////////////////////////////

double F16_Aerodynamics::getCz() const
{
    // (NASA-TP-1538, p.37)
    double delta_cz_lef = m_cz_lef  .getValue( m_alpha, m_beta )
                        - m_cz_dh_0 .getValue( m_alpha, m_beta );

    double cz_q = m_cz_q.getValue( m_alpha ) + m_delta_cz_q_lef.getValue( m_alpha ) * m_lef_factor;

    return m_cz_delta_h + delta_cz_lef * m_lef_factor
            + m_delta_cz_sb.getValue( m_alpha ) * m_aircraft->getCtrl()->getAirbrakeNorm()
            + m_c_2v * cz_q * m_aircraft->getOmg_air_BAS()( i_q )
            + m_delta_cz_tef.getValue( m_alpha ) * m_aircraft->getCtrl()->getFlapsTENorm()
            + m_delta_cz_gear.getValue( m_alpha ) * m_aircraft->getDataInp()->controls.landing_gear;
}

////////////////////////////////////////////////////////////////////////////////

double F16_Aerodynamics::getCl() const
{
    // (NASA-TP-1538, p.39-40)
    double cl_dh_0  = m_cl_dh_0  .getValue( m_alpha, m_beta );
    double cl_lef   = m_cl_lef   .getValue( m_alpha, m_beta );
    double cl_da_20 = m_cl_da_20 .getValue( m_alpha, m_beta );

    double delta_cl_lef   = cl_lef   - cl_dh_0;
    double delta_cl_da_20 = cl_da_20 - cl_dh_0;
    double delta_cl_da_20_lef = m_cl_da_20_lef.getValue( m_alpha, m_beta ) - cl_lef
            - ( cl_da_20 - cl_dh_0 );
    double delta_cl_dr_30 = m_cl_dr_30.getValue( m_alpha, m_beta ) - cl_dh_0;

    return m_cl_delta_h + delta_cl_lef * m_lef_factor
            + ( delta_cl_da_20 + delta_cl_da_20_lef * m_lef_factor ) * m_aircraft->getCtrl()->getAileronsNorm()
            + delta_cl_dr_30 * m_aircraft->getCtrl()->getRudderNorm()
            + m_b_2v * ( m_cl_r.getValue( m_alpha ) + m_delta_cl_r_lef.getValue( m_alpha ) * m_lef_factor ) * m_aircraft->getOmg_air_BAS()( i_r )
            + m_b_2v * ( m_cl_p.getValue( m_alpha ) + m_delta_cl_p_lef.getValue( m_alpha ) * m_lef_factor ) * m_aircraft->getOmg_air_BAS()( i_p )
            + m_delta_cl_beta.getValue( m_alpha ) * m_beta_deg;
}

////////////////////////////////////////////////////////////////////////////////

double F16_Aerodynamics::getCm() const
{
    // (NASA-TP-1538, p.38)
    double delta_cm_lef = m_cm_lef  .getValue( m_alpha, m_beta )
                        - m_cm_dh_0 .getValue( m_alpha, m_beta );

    double cm_q = m_cm_q.getValue( m_alpha ) + m_delta_cm_q_lef.getValue( m_alpha ) * m_lef_factor;

    return m_cm_delta_h * m_eta_delta_h.getValue( m_aircraft->getCtrl()->getElevator() )
            + delta_cm_lef * m_lef_factor
            + m_delta_cm_sb.getValue( m_alpha ) * m_aircraft->getCtrl()->getAirbrakeNorm()
            + m_c_2v * cm_q * m_aircraft->getOmg_air_BAS()( i_q )
            + m_delta_cm.getValue( m_alpha )
            + m_delta_cm_ds.getValue( m_alpha, m_aircraft->getCtrl()->getElevator() )
            + m_delta_cm_tef.getValue( m_alpha ) * m_aircraft->getCtrl()->getFlapsTENorm();
}

////////////////////////////////////////////////////////////////////////////////

double F16_Aerodynamics::getCn() const
{
    // (NASA-TP-1538, p.39)
    double cn_dh_0  = m_cn_dh_0  .getValue( m_alpha, m_beta );
    double cn_lef   = m_cn_lef   .getValue( m_alpha, m_beta );
    double cn_da_20 = m_cn_da_20 .getValue( m_alpha, m_beta );

    double delta_cn_lef   = cn_lef   - cn_dh_0;
    double delta_cn_da_20 = cn_da_20 - cn_dh_0;
    double delta_cn_da_20_lef = m_cn_da_20_lef.getValue( m_alpha, m_beta ) - cn_lef
            - ( cn_da_20 - cn_dh_0 );
    double delta_cn_dr_30 = m_cn_dr_30.getValue( m_alpha, m_beta ) - cn_dh_0;

    return m_cn_delta_h + delta_cn_lef * m_lef_factor
            + ( delta_cn_da_20 + delta_cn_da_20_lef * m_lef_factor ) * m_aircraft->getCtrl()->getAileronsNorm()
            + delta_cn_dr_30 * m_aircraft->getCtrl()->getRudderNorm()
            + m_b_2v * ( m_cn_r.getValue( m_alpha ) + m_delta_cn_r_lef.getValue( m_alpha ) * m_lef_factor ) * m_aircraft->getOmg_air_BAS()( i_r )
            + m_b_2v * ( m_cn_p.getValue( m_alpha ) + m_delta_cn_p_lef.getValue( m_alpha ) * m_lef_factor ) * m_aircraft->getOmg_air_BAS()( i_p )
            + m_delta_cn_beta.getValue( m_alpha ) * m_beta_deg;
}

////////////////////////////////////////////////////////////////////////////////

void F16_Aerodynamics::updateCoefsDueToElevator()
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

    double delta_h_deg = Units::rad2deg( m_aircraft->getCtrl()->getElevator() );

    if ( delta_h_deg < 0.0 )
    {
        coef_2 = ( delta_h_deg + 25.0 ) / 25.0;

        cl_l = m_cl_dh_n25 .getValue( m_alpha, m_beta );
        cl_h = m_cl_dh_0   .getValue( m_alpha, m_beta );

        cn_l = m_cn_dh_n25 .getValue( m_alpha, m_beta );
        cn_h = m_cn_dh_0   .getValue( m_alpha, m_beta );

        if ( delta_h_deg < -10.0 )
        {
            coef_1 = ( delta_h_deg + 25.0 ) / 15.0;

            cx_l = m_cx_dh_n25 .getValue( m_alpha, m_beta );
            cx_h = m_cx_dh_n10 .getValue( m_alpha, m_beta );

            cz_l = m_cz_dh_n25 .getValue( m_alpha, m_beta );
            cz_h = m_cz_dh_n10 .getValue( m_alpha, m_beta );

            cm_l = m_cm_dh_n25 .getValue( m_alpha, m_beta );
            cm_h = m_cm_dh_n10 .getValue( m_alpha, m_beta );
        }
        else
        {
            coef_1 = ( delta_h_deg + 10.0 ) / 10.0;

            cx_l = m_cx_dh_n10 .getValue( m_alpha, m_beta );
            cx_h = m_cx_dh_0   .getValue( m_alpha, m_beta );

            cz_l = m_cz_dh_n10 .getValue( m_alpha, m_beta );
            cz_h = m_cz_dh_0   .getValue( m_alpha, m_beta );

            cm_l = m_cm_dh_n10 .getValue( m_alpha, m_beta );
            cm_h = m_cm_dh_0   .getValue( m_alpha, m_beta );
        }
    }
    else
    {
        coef_2 = delta_h_deg / 25.0;

        cl_l = m_cl_dh_0   .getValue( m_alpha, m_beta );
        cl_h = m_cl_dh_p25 .getValue( m_alpha, m_beta );

        cn_l = m_cn_dh_0   .getValue( m_alpha, m_beta );
        cn_h = m_cn_dh_p25 .getValue( m_alpha, m_beta );

        if ( delta_h_deg < 10.0 )
        {
            coef_1 = delta_h_deg / 10.0;

            cx_l = m_cx_dh_0   .getValue( m_alpha, m_beta );
            cx_h = m_cx_dh_p10 .getValue( m_alpha, m_beta );

            cz_l = m_cz_dh_0   .getValue( m_alpha, m_beta );
            cz_h = m_cz_dh_p10 .getValue( m_alpha, m_beta );

            cm_l = m_cm_dh_0   .getValue( m_alpha, m_beta );
            cm_h = m_cm_dh_p10 .getValue( m_alpha, m_beta );
        }
        else
        {
            coef_1 = ( delta_h_deg - 10.0 ) / 15.0;

            cx_l = m_cx_dh_p10 .getValue( m_alpha, m_beta );
            cx_h = m_cx_dh_p25 .getValue( m_alpha, m_beta );

            cz_l = m_cz_dh_p10 .getValue( m_alpha, m_beta );
            cz_h = m_cz_dh_p25 .getValue( m_alpha, m_beta );

            cm_l = m_cm_dh_p10 .getValue( m_alpha, m_beta );
            cm_h = m_cm_dh_p25 .getValue( m_alpha, m_beta );
        }
    }

    coef_1 = Misc::satur( 0.0, 1.0, coef_1 );
    coef_2 = Misc::satur( 0.0, 1.0, coef_2 );

    m_cx_delta_h = cx_l + coef_1 * ( cx_h - cx_l );
    m_cz_delta_h = cz_l + coef_1 * ( cz_h - cz_l );
    m_cm_delta_h = cm_l + coef_1 * ( cm_h - cm_l );

    m_cl_delta_h = cl_l + coef_2 * ( cl_h - cl_l );
    m_cn_delta_h = cn_l + coef_2 * ( cn_h - cn_l );
}
