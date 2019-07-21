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

#include <fdm/main/fdm_Aircraft.h>

#include <memory.h>

#include <fdm/utils/fdm_GaussJordan.h>

#include <fdm/xml/fdm_XmlDoc.h>
#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

Aircraft::Aircraft( const DataInp *dataInp, DataOut *dataOut ) :
    m_dataInp ( dataInp ),
    m_dataOut ( dataOut ),

    m_envir ( 0 ),
    m_isect ( 0 ),

    m_aero ( 0 ),
    m_ctrl ( 0 ),
    m_gear ( 0 ),
    m_mass ( 0 ),
    m_prop ( 0 ),

    m_airspeed_max  ( 0.0 ),
    m_load_aero_min ( 0.0 ),
    m_load_aero_max ( 0.0 ),
    m_load_gear_max ( 0.0 ),

    m_integrator ( 0 ),

    m_timeStep ( 0.0 ),

    m_crash ( DataOut::NoCrash ),

    m_elevation     ( 0.0 ),
    m_altitude_asl  ( 0.0 ),
    m_altitude_agl  ( 0.0 ),
    m_roll          ( 0.0 ),
    m_pitch         ( 0.0 ),
    m_heading       ( 0.0 ),
    m_angleOfAttack ( 0.0 ),
    m_sideslipAngle ( 0.0 ),
    m_course        ( 0.0 ),
    m_pathAngle     ( 0.0 ),
    m_slipSkidAngle ( 0.0 ),
    m_airspeed      ( 0.0 ),
    m_dynPress      ( 0.0 ),
    m_machNumber    ( 0.0 ),
    m_climbRate     ( 0.0 ),
    m_turnRate      ( 0.0 )
{
    memset( m_dataOut, 0, sizeof(DataOut) );

    m_envir = new Environment();
    m_isect = new Intersections();

    m_integrator = new Aircraft::Integrator( this, &Aircraft::computeStateDeriv );
}

////////////////////////////////////////////////////////////////////////////////

Aircraft::~Aircraft()
{
    if ( m_integrator ) delete m_integrator;
    m_integrator = 0;

    if ( m_envir ) delete m_envir;
    m_envir = 0;

    if ( m_isect ) delete m_isect;
    m_isect = 0;
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::init( bool engineOn )
{
    m_aero->init();
    m_ctrl->init();
    m_gear->init();
    m_mass->init();
    m_prop->init( engineOn );
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::step( double timeStep )
{
    m_timeStep = timeStep;

    try
    {
        anteIntegration();
        integrate();
        postIntegration();
    }
    catch ( Exception &catched )
    {
        Exception e;

        e.setType( Exception::ExceptionCatched );
        e.setInfo( "Exception catched." );
        e.setCause( catched );

        FDM_THROW( e );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::updateOutputData()
{
    // flight data
    m_dataOut->flight.latitude  = m_wgs.getPos_Geo().lat;
    m_dataOut->flight.longitude = m_wgs.getPos_Geo().lon;

    m_dataOut->flight.altitude_asl = m_altitude_asl;
    m_dataOut->flight.altitude_agl = m_altitude_agl;

    m_dataOut->flight.roll    = m_roll;
    m_dataOut->flight.pitch   = m_pitch;
    m_dataOut->flight.heading = m_heading;

    m_dataOut->flight.angleOfAttack = m_angleOfAttack;
    m_dataOut->flight.sideslipAngle = m_sideslipAngle;

    m_dataOut->flight.course    = m_course;
    m_dataOut->flight.pathAngle = m_pathAngle;

    m_dataOut->flight.slipSkidAngle = m_slipSkidAngle;

    m_dataOut->flight.airspeed   = m_airspeed;
    m_dataOut->flight.machNumber = m_machNumber;
    m_dataOut->flight.climbRate  = m_climbRate;

    m_dataOut->flight.rollRate  = m_omg_bas.x();
    m_dataOut->flight.pitchRate = m_omg_bas.y();
    m_dataOut->flight.yawRate   = m_omg_bas.z();
    m_dataOut->flight.turnRate  = m_turnRate;

    m_dataOut->flight.pos_x_wgs = m_pos_wgs.x();
    m_dataOut->flight.pos_y_wgs = m_pos_wgs.y();
    m_dataOut->flight.pos_z_wgs = m_pos_wgs.z();

    m_dataOut->flight.att_e0_wgs = m_att_wgs.e0();
    m_dataOut->flight.att_ex_wgs = m_att_wgs.ex();
    m_dataOut->flight.att_ey_wgs = m_att_wgs.ey();
    m_dataOut->flight.att_ez_wgs = m_att_wgs.ez();

    m_dataOut->flight.vel_u_bas = m_vel_bas.x();
    m_dataOut->flight.vel_v_bas = m_vel_bas.y();
    m_dataOut->flight.vel_w_bas = m_vel_bas.z();

    m_dataOut->flight.omg_p_bas = m_omg_bas.x();
    m_dataOut->flight.omg_q_bas = m_omg_bas.y();
    m_dataOut->flight.omg_r_bas = m_omg_bas.z();

    m_dataOut->flight.phi_wgs = m_angles_wgs.phi();
    m_dataOut->flight.tht_wgs = m_angles_wgs.tht();
    m_dataOut->flight.psi_wgs = m_angles_wgs.psi();

    m_dataOut->flight.tas_u_bas = m_vel_air_bas.x();
    m_dataOut->flight.tas_v_bas = m_vel_air_bas.y();
    m_dataOut->flight.tas_w_bas = m_vel_air_bas.z();

    m_dataOut->flight.vel_north = m_vel_ned.x();
    m_dataOut->flight.vel_east  = m_vel_ned.y();

    m_dataOut->flight.acc_x_bas = m_acc_bas.x();
    m_dataOut->flight.acc_y_bas = m_acc_bas.y();
    m_dataOut->flight.acc_z_bas = m_acc_bas.z();

    m_dataOut->flight.g_force_x = m_g_force.x();
    m_dataOut->flight.g_force_y = m_g_force.y();
    m_dataOut->flight.g_force_z = m_g_force.z();

    m_dataOut->flight.g_pilot_x = m_g_pilot.x();
    m_dataOut->flight.g_pilot_y = m_g_pilot.y();
    m_dataOut->flight.g_pilot_z = m_g_pilot.z();

    m_dataOut->flight.onGround = m_gear->getOnGround();
    m_dataOut->flight.stall    = m_aero->getStall();

    // crash
    m_dataOut->crash = m_crash;
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::setStateVector( const StateVector &stateVector )
{
    m_stateVect = stateVector;
    m_statePrev = m_stateVect;

    anteIntegration();
    computeStateDeriv( m_stateVect, m_derivVect );
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::readData( const std::string &dataFilePath )
{
    XmlDoc doc( dataFilePath );

    if ( doc.isOpen() )
    {
        XmlNode rootNode = doc.getRootNode();

        if ( rootNode.isValid() )
        {
            int result = FDM_SUCCESS;

            // collision points
            XmlNode nodeCollisionPoints = rootNode.getFirstChildElement( "collision_points"  );

            if ( nodeCollisionPoints.isValid() )
            {
                XmlNode nodeCollisionPoint = nodeCollisionPoints.getFirstChildElement( "collision_point" );

                while ( result == FDM_SUCCESS && nodeCollisionPoint.isValid() )
                {
                    Vector3 collision_point;

                    result = XmlUtils::read( nodeCollisionPoint, collision_point );

                    if ( result == FDM_SUCCESS )
                    {
                        m_cp.push_back( collision_point );
                        nodeCollisionPoint = nodeCollisionPoint.getNextSiblingElement( "collision_point" );
                    }
                }
            }

            // limitations
            XmlNode nodeLimitations = rootNode.getFirstChildElement( "limitations" );

            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodeLimitations, m_airspeed_max  , "airspeed_max"  );
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodeLimitations, m_load_aero_min , "load_aero_min" );
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodeLimitations, m_load_aero_max , "load_aero_max" );
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodeLimitations, m_load_gear_max , "load_gear_max" );

            // pilot position
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( rootNode, m_pos_pilot_bas, "pilot_position" );

            if ( result != FDM_SUCCESS )
            {
                Exception e;

                e.setType( Exception::FileReadingError );
                e.setInfo( "Reading XML file failed. " + XmlUtils::getErrorInfo( rootNode ) );

                FDM_THROW( e );
            }

            XmlNode nodeAero = rootNode.getFirstChildElement( "aerodynamics" );
            XmlNode nodeCtrl = rootNode.getFirstChildElement( "controls"     );
            XmlNode nodeGear = rootNode.getFirstChildElement( "landing_gear" );
            XmlNode nodeMass = rootNode.getFirstChildElement( "mass"         );
            XmlNode nodeProp = rootNode.getFirstChildElement( "propulsion"   );

            m_aero->readData( nodeAero );
            m_ctrl->readData( nodeCtrl );
            m_gear->readData( nodeGear );
            m_mass->readData( nodeMass );
            m_prop->readData( nodeProp );
        }
        else
        {
            Exception e;

            e.setType( Exception::FileReadingError );
            e.setInfo( "Reading file \"" + dataFilePath + "\" failed. Invalid root node." );

            FDM_THROW( e );
        }
    }
    else
    {
        Exception e;

        e.setType( Exception::FileReadingError );
        e.setInfo( "Reading file \"" + dataFilePath + "\" failed." );

        FDM_THROW( e );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::anteIntegration()
{
    updateVariables( m_stateVect, m_derivVect );

    m_envir->update( m_altitude_asl );
    m_isect->update( m_wgs.getPos_Geo().lat, m_wgs.getPos_Geo().lon );

    m_aero->update();
    m_ctrl->update();
    m_gear->update();
    m_mass->update();
    m_prop->update();
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::integrate()
{
    ///////////////////////////////////////////////////
    m_integrator->integrate( m_timeStep, m_stateVect );
    ///////////////////////////////////////////////////
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::postIntegration()
{
    m_att_wgs.normalize();

    m_stateVect( is_e0 ) = m_att_wgs.e0();
    m_stateVect( is_ex ) = m_att_wgs.ex();
    m_stateVect( is_ey ) = m_att_wgs.ey();
    m_stateVect( is_ez ) = m_att_wgs.ez();

    if ( m_stateVect.isValid() )
    {
        m_derivVect = ( m_stateVect - m_statePrev ) / m_timeStep;
        m_statePrev = m_stateVect;

        updateVariables( m_stateVect, m_derivVect );
    }
    else
    {
        Exception e;

        e.setType( Exception::UnexpectedNaN );
        e.setInfo( "NaN detected in the state vector." );

        FDM_THROW( e );
    }

    detectCrash();
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::detectCrash()
{
    // detect collisions
    if ( m_crash == DataOut::NoCrash )
    {
        for ( CollisionPoints::iterator it = m_cp.begin(); it != m_cp.end(); it++ )
        {
            if ( m_isect->isIntersection( m_pos_wgs, m_pos_wgs + m_bas2wgs * (*it) ) )
            {
                m_crash = DataOut::Collision;
                break;
            }
        }
    }

    // detect overspeed
    if ( m_crash == DataOut::NoCrash )
    {
        if ( m_airspeed > m_airspeed_max )
        {
            m_crash = DataOut::Overspeed;
        }
    }

    // detect overload
    if ( m_crash == DataOut::NoCrash )
    {
        double weight_inv = 1.0 / ( m_mass->getMass() * WGS84::m_g );

        double load_factor_aero = m_aero->getFor_aero().z() * weight_inv;
        double load_factor_gear = m_gear->getFor_BAS().getLength() * weight_inv;

        if ( load_factor_aero > m_load_aero_max
          || load_factor_aero < m_load_aero_min
          || load_factor_gear > m_load_gear_max )
        {
            m_crash = DataOut::Overstressed;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::computeStateDeriv( const StateVector &stateVect,
                                  StateVector &derivVect )
{
    updateVariables( stateVect, derivVect );

    // computing forces and moments
    m_aero->computeForceAndMoment();
    m_gear->computeForceAndMoment();
    m_mass->computeForceAndMoment();
    m_prop->computeForceAndMoment();

    Vector3 for_bas = m_aero->getFor_BAS()
                    + m_mass->getFor_BAS()
                    + m_gear->getFor_BAS()
                    + m_prop->getFor_BAS();

    Vector3 mom_bas = m_aero->getMom_BAS()
                    + m_mass->getMom_BAS()
                    + m_gear->getMom_BAS()
                    + m_prop->getMom_BAS();

    // computing position derivatives
    Vector3 pos_dot_wgs = m_bas2wgs * m_vel_bas;

    derivVect( is_x ) = pos_dot_wgs.x();
    derivVect( is_y ) = pos_dot_wgs.y();
    derivVect( is_z ) = pos_dot_wgs.z();

    // computing attitude derivatives
    Quaternion att_dot_wgs = m_att_wgs.getDerivative( m_omg_bas );

    derivVect( is_e0 ) = att_dot_wgs.e0();
    derivVect( is_ex ) = att_dot_wgs.ex();
    derivVect( is_ey ) = att_dot_wgs.ey();
    derivVect( is_ez ) = att_dot_wgs.ez();

    // computing linear and angular velocities derivatives
    double mass = m_mass->getMass();
    Matrix3x3 it_bas = m_mass->getInertiaTensor();
    Vector3 st_bas = m_mass->getFirstMomentOfMass();

    // momentum and angular momentum
    Vector3 p_bas = mass * m_vel_bas + ( m_omg_bas ^ st_bas );
    Vector3 h_bas = it_bas * m_omg_bas + ( st_bas ^ m_vel_bas );

    // right-hand-sideforce vector
    Vector3 for_rhs = for_bas - ( m_omg_bas ^ p_bas );

    // right-hand-side moment vector
    Vector3 mom_rhs = mom_bas - ( m_vel_bas ^ p_bas ) - ( m_omg_bas ^ h_bas );

    // right-hand-side combined vector
    Vector6 vec_rhs;

    vec_rhs( 0 ) = for_rhs( i_x );
    vec_rhs( 1 ) = for_rhs( i_y );
    vec_rhs( 2 ) = for_rhs( i_z );
    vec_rhs( 3 ) = mom_rhs( i_x );
    vec_rhs( 4 ) = mom_rhs( i_y );
    vec_rhs( 5 ) = mom_rhs( i_z );

    // inertia matrix
    Matrix6x6 mi_bas = m_mass->getInertiaMatrix();

    // state derivatives (results)
    Vector6 acc_bas;

    GaussJordan< 6 >::solve( mi_bas, vec_rhs, acc_bas );

    // Coriolis effect due to Earth rotation
    Vector3 acc_coriolis_bas = -2.0 * ( m_wgs2bas * ( WGS84::getOmega_WGS() ^ m_vel_bas ) );

    acc_bas( 0 ) += acc_coriolis_bas.x();
    acc_bas( 1 ) += acc_coriolis_bas.y();
    acc_bas( 2 ) += acc_coriolis_bas.z();

    // rewriting acceleration into state derivatives vector
    for ( int i = is_u; i < FDM_STATE_DIMENSION; i++ )
    {
        derivVect( i ) = acc_bas( i - is_u );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::updateVariables( const StateVector &stateVect,
                                const StateVector &derivVect )
{
    m_pos_wgs.set( stateVect( is_x ),
                   stateVect( is_y ),
                   stateVect( is_z ) );

    m_att_wgs.set( stateVect( is_e0 ),
                   stateVect( is_ex ),
                   stateVect( is_ey ),
                   stateVect( is_ez ) );

    m_vel_bas.set( stateVect( is_u ),
                   stateVect( is_v ),
                   stateVect( is_w ) );

    m_omg_bas.set( stateVect( is_p ),
                   stateVect( is_q ),
                   stateVect( is_r ) );

    m_wgs.setPos_WGS( m_pos_wgs );

    m_att_wgs.normalize();

    m_wgs2bas = Matrix3x3( m_att_wgs );
    m_wgs2ned = Matrix3x3( m_wgs.getWGS2NED() );
    m_ned2bas = Matrix3x3( m_wgs.getNED2BAS( m_att_wgs ) );
    m_bas2wgs = m_wgs2bas.getTransposed();
    m_ned2wgs = m_wgs2ned.getTransposed();
    m_bas2ned = m_ned2bas.getTransposed();

    m_angles_wgs = m_wgs2bas.getAngles();
    m_angles_ned = m_ned2bas.getAngles();

    m_vel_ned = m_bas2ned * m_vel_bas;

    m_vel_air_bas = m_vel_bas - m_envir->getWind_BAS();
    m_omg_air_bas = m_omg_bas;

    m_acc_bas.x() = derivVect( is_u );
    m_acc_bas.y() = derivVect( is_v );
    m_acc_bas.z() = derivVect( is_w );

    m_eps_bas.x() = derivVect( is_p );
    m_eps_bas.y() = derivVect( is_q );
    m_eps_bas.z() = derivVect( is_r );

    m_grav_wgs = m_wgs.getGrav_WGS();
    m_grav_bas = m_wgs2bas * m_grav_wgs;

    Vector3 acc_gforce_bas = m_acc_bas + ( m_omg_bas ^ m_vel_bas );
    Vector3 acc_gpilot_bas = acc_gforce_bas
                           + ( m_omg_bas ^ ( m_omg_bas ^ m_pos_pilot_bas ) )
                           + ( m_eps_bas ^ m_pos_pilot_bas );

    m_g_force = -( acc_gforce_bas - m_grav_bas ) / WGS84::m_g;
    m_g_pilot = -( acc_gpilot_bas - m_grav_bas ) / WGS84::m_g;

    WGS84::Geo e_isect_geo = m_wgs.getPos_Geo();
    e_isect_geo.alt = -1000.0;

    Vector3 ground_wgs;
    Vector3 normal_wgs;

    if ( FDM_SUCCESS == m_isect->getIntersection( m_pos_wgs, WGS84::geo2wgs( e_isect_geo ),
                                                  ground_wgs, normal_wgs ) )
    {
        m_ground_wgs = ground_wgs;
        m_normal_wgs = normal_wgs;
    }

    m_ground_bas = m_wgs2bas * ( m_ground_wgs - m_pos_wgs );
    m_normal_bas = m_wgs2bas * m_normal_wgs;

    m_elevation = WGS84( m_ground_wgs ).getPos_Geo().alt;

    m_altitude_asl = m_wgs.getPos_Geo().alt;
    m_altitude_agl = m_altitude_asl - m_elevation;

    m_roll    = m_angles_ned.phi();
    m_pitch   = m_angles_ned.tht();
    m_heading = m_angles_ned.psi();

    m_angleOfAttack = Aerodynamics::getAngleOfAttack( m_vel_air_bas );
    m_sideslipAngle = Aerodynamics::getSideslipAngle( m_vel_air_bas );

    double vel_ne = sqrt( m_vel_ned.x()*m_vel_ned.x() + m_vel_ned.y()*m_vel_ned.y() );

    m_course    = atan2( m_vel_ned.y(), m_vel_ned.x() );
    m_pathAngle = atan2( -m_vel_ned.z(), vel_ne );

    while ( m_course < 0.0      ) m_course += 2.0*M_PI;
    while ( m_course > 2.0*M_PI ) m_course -= 2.0*M_PI;

    m_slipSkidAngle = atan2( -m_g_pilot.y(), m_g_pilot.z() );

    m_airspeed   = m_vel_air_bas.getLength();
    m_dynPress   = 0.5 * m_envir->getDensity() * Misc::pow2( m_airspeed );
    m_machNumber = m_airspeed / m_envir->getSpeedOfSound();
    m_climbRate  = -m_vel_ned.z();

    m_turnRate = 0.0;                           // TODO
}
