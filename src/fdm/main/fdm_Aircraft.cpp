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

#include <fdm/main/fdm_Aircraft.h>

#include <cstring>

#include <fdm/utils/fdm_GaussJordan.h>


#include <fdm/xml/fdm_XmlDoc.h>
#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

const UInt8 Aircraft::_i_x  = 0;
const UInt8 Aircraft::_i_y  = 1;
const UInt8 Aircraft::_i_z  = 2;
const UInt8 Aircraft::_i_e0 = 3;
const UInt8 Aircraft::_i_ex = 4;
const UInt8 Aircraft::_i_ey = 5;
const UInt8 Aircraft::_i_ez = 6;
const UInt8 Aircraft::_i_u  = 7;
const UInt8 Aircraft::_i_v  = 8;
const UInt8 Aircraft::_i_w  = 9;
const UInt8 Aircraft::_i_p  = 10;
const UInt8 Aircraft::_i_q  = 11;
const UInt8 Aircraft::_i_r  = 12;

////////////////////////////////////////////////////////////////////////////////

Aircraft::Aircraft( DataNode *rootNode ) :
    Base( rootNode ),

    _rootNode ( rootNode ),

    _envir ( FDM_NULLPTR ),
    _isect ( FDM_NULLPTR ),

    _aero ( FDM_NULLPTR ),
    _ctrl ( FDM_NULLPTR ),
    _gear ( FDM_NULLPTR ),
    _mass ( FDM_NULLPTR ),
    _prop ( FDM_NULLPTR ),

    _airspeed_max  ( 0.0 ),
    _load_aero_min ( 0.0 ),
    _load_aero_max ( 0.0 ),
    _load_gear_max ( 0.0 ),

    _stateVect ( FDM_STATE_DIMENSION ),
    _statePrev ( FDM_STATE_DIMENSION ),
    _derivVect ( FDM_STATE_DIMENSION ),

    _integrator ( FDM_NULLPTR ),

    _timeStep ( 0.0 ),

    _crash ( DataOut::NoCrash ),

    _initPropState ( Stopped ),

    _cp_index ( 0 ),

    _elevation     ( 0.0 ),
    _altitude_asl  ( 0.0 ),
    _altitude_agl  ( 0.0 ),
    _roll          ( 0.0 ),
    _pitch         ( 0.0 ),
    _heading       ( 0.0 ),
    _angleOfAttack ( 0.0 ),
    _sideslipAngle ( 0.0 ),
    _climbAngle    ( 0.0 ),
    _trackAngle    ( 0.0 ),
    _slipSkidAngle ( 0.0 ),
    _airspeed      ( 0.0 ),
    _dynPress      ( 0.0 ),
    _ias           ( 0.0 ),
    _tas           ( 0.0 ),
    _groundSpeed   ( 0.0 ),
    _machNumber    ( 0.0 ),
    _climbRate     ( 0.0 ),
    _turnRate      ( 0.0 ),
    _headingPrev   ( 0.0 ),

    _freeze_position ( false ),
    _freeze_attitude ( false ),
    _freeze_velocity ( false )
{
    _envir = new Environment();
    _isect = new Intersections();

    _integrator = new Aircraft::Integrator( this, &Aircraft::computeStateDeriv );
}

////////////////////////////////////////////////////////////////////////////////

Aircraft::~Aircraft()
{
    FDM_DELPTR( _envir );
    FDM_DELPTR( _isect );

    FDM_DELPTR( _integrator );
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::initialize( bool engineOn )
{
    _initPropState = engineOn ? Running : Stopped;

    _aero->initialize();
    _ctrl->initialize();
    _gear->initialize();
    _mass->initialize();
    _prop->initialize();

    updateVariables( _stateVect, _derivVect );
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::update( double timeStep, bool integrate )
{
    _timeStep = timeStep;

    try
    {
        anteIntegration();

        if ( integrate )
        {
            /////////////////////////////////////////////////
            _integrator->integrate( _timeStep, &_stateVect );
            /////////////////////////////////////////////////
        }

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

void Aircraft::setStateVector( const StateVector &stateVector )
{
    _stateVect = stateVector;
    _statePrev = _stateVect;

    anteIntegration();
    computeStateDeriv( _stateVect, &_derivVect );
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::readFile( const char *dataFile )
{
    XmlDoc doc( dataFile );

    if ( doc.isOpen() )
    {
        XmlNode rootNode = doc.getRootNode();

        if ( rootNode.isValid() )
        {
            readData( rootNode );
        }
        else
        {
            Exception e;

            e.setType( Exception::FileReadingError );
            e.setInfo( "Reading file \"" + std::string( dataFile ) + "\" failed. Invalid root node." );

            FDM_THROW( e );
        }
    }
    else
    {
        Exception e;

        e.setType( Exception::FileReadingError );
        e.setInfo( "Reading file \"" + std::string( dataFile ) + "\" failed." );

        FDM_THROW( e );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        // collision points
        XmlNode nodeCollisionPoints = dataNode.getFirstChildElement( "collision_points"  );

        if ( nodeCollisionPoints.isValid() )
        {
            XmlNode nodeCollisionPoint = nodeCollisionPoints.getFirstChildElement( "collision_point" );

            while ( result == FDM_SUCCESS && nodeCollisionPoint.isValid() )
            {
                Vector3 collision_point;

                result = XmlUtils::read( nodeCollisionPoint, collision_point );

                if ( result == FDM_SUCCESS )
                {
                    _cp.push_back( collision_point );
                    nodeCollisionPoint = nodeCollisionPoint.getNextSiblingElement( "collision_point" );
                }
            }
        }

        // limitations
        XmlNode nodeLimitations = dataNode.getFirstChildElement( "limitations" );

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodeLimitations, _airspeed_max  , "airspeed_max"  );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodeLimitations, _load_aero_min , "load_aero_min" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodeLimitations, _load_aero_max , "load_aero_max" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( nodeLimitations, _load_gear_max , "load_gear_max" );

        // pilot position
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _pos_pilot_bas, "pilot_position" );

        if ( result != FDM_SUCCESS )
        {
            XmlUtils::throwError( __FILE__, __LINE__, dataNode );
        }
        else
        {
            XmlNode nodeAero = dataNode.getFirstChildElement( "aerodynamics" );
            XmlNode nodeCtrl = dataNode.getFirstChildElement( "controls"     );
            XmlNode nodeGear = dataNode.getFirstChildElement( "landing_gear" );
            XmlNode nodeMass = dataNode.getFirstChildElement( "mass"         );
            XmlNode nodeProp = dataNode.getFirstChildElement( "propulsion"   );

            _aero->readData( nodeAero );
            _ctrl->readData( nodeCtrl );
            _gear->readData( nodeGear );
            _mass->readData( nodeMass );
            _prop->readData( nodeProp );
        }
    }
    else
    {
        XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::anteIntegration()
{
    updateVariables( _stateVect, _derivVect );

    _aero->update();
    _ctrl->update();
    _gear->update();
    _mass->update();
    _prop->update();
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::postIntegration()
{
    _att_wgs.normalize();

    _stateVect( _i_e0 ) = _att_wgs.e0();
    _stateVect( _i_ex ) = _att_wgs.ex();
    _stateVect( _i_ey ) = _att_wgs.ey();
    _stateVect( _i_ez ) = _att_wgs.ez();

    if ( _stateVect.isValid() )
    {
        if ( _timeStep > 1.0e-9 )
        {
            _derivVect = ( _stateVect - _statePrev   ) / _timeStep;
            _turnRate  = ( _heading   - _headingPrev ) / _timeStep;
        }

        _statePrev = _stateVect;
        _headingPrev = _heading;

        updateVariables( _stateVect, _derivVect );
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
    if ( _crash == DataOut::NoCrash )
    {
        if ( _isect->isIntersection( _pos_wgs, _pos_wgs + _bas2wgs * _cp.at( _cp_index ), true ) )
        {
            _crash = DataOut::Collision;
        }

        _cp_index++;

        if ( !( _cp_index < _cp.size() ) ) _cp_index = 0;
    }

    // detect overspeed
    if ( _crash == DataOut::NoCrash )
    {
        if ( _ias > _airspeed_max )
        {
            _crash = DataOut::Overspeed;
        }
    }

    // detect overload
    if ( _crash == DataOut::NoCrash )
    {
        double weight_inv = 1.0 / ( _mass->getMass() * WGS84::_g );

        double load_factor_aero = _aero->getFor_BAS().getLength() * weight_inv;
        double load_factor_gear = _gear->getFor_BAS().getLength() * weight_inv;

        if ( load_factor_aero > _load_aero_max
          || load_factor_aero < _load_aero_min
          || load_factor_gear > _load_gear_max )
        {
            _crash = DataOut::Overstress;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::computeStateDeriv( const StateVector &stateVect,
                                  StateVector *derivVect )
{
    updateVariables( stateVect, *derivVect );

    // computing forces and moments
    _aero->computeForceAndMoment();
    _gear->computeForceAndMoment();
    _mass->computeForceAndMoment();
    _prop->computeForceAndMoment();

    Vector3 for_bas = _aero->getFor_BAS()
                    + _mass->getFor_BAS()
                    + _gear->getFor_BAS()
                    + _prop->getFor_BAS();

    Vector3 mom_bas = _aero->getMom_BAS()
                    + _mass->getMom_BAS()
                    + _gear->getMom_BAS()
                    + _prop->getMom_BAS();

    // computing position derivatives
    Vector3 pos_dot_wgs = _bas2wgs * _vel_bas;

    if ( !_freeze_position )
    {
        (*derivVect)( _i_x ) = pos_dot_wgs.x();
        (*derivVect)( _i_y ) = pos_dot_wgs.y();
        (*derivVect)( _i_z ) = pos_dot_wgs.z();
    }
    else
    {
        (*derivVect)( _i_x ) = 0.0;
        (*derivVect)( _i_y ) = 0.0;
        (*derivVect)( _i_z ) = 0.0;
    }


    // computing attitude derivatives
    Quaternion att_dot_wgs = _att_wgs.getDerivative( _omg_bas );

    if ( !_freeze_attitude )
    {
        (*derivVect)( _i_e0 ) = att_dot_wgs.e0();
        (*derivVect)( _i_ex ) = att_dot_wgs.ex();
        (*derivVect)( _i_ey ) = att_dot_wgs.ey();
        (*derivVect)( _i_ez ) = att_dot_wgs.ez();
    }
    else
    {
        (*derivVect)( _i_e0 ) = 0.0;
        (*derivVect)( _i_ex ) = 0.0;
        (*derivVect)( _i_ey ) = 0.0;
        (*derivVect)( _i_ez ) = 0.0;
    }

    // computing linear and angular velocities derivatives
    double mass = _mass->getMass();
    Matrix3x3 it_bas = _mass->getInertiaTensor();
    Vector3 st_bas = _mass->getFirstMomentOfMass();

    // momentum and angular momentum
    Vector3 p_bas = mass   * _vel_bas + ( _omg_bas % st_bas );
    Vector3 h_bas = it_bas * _omg_bas + ( st_bas % _vel_bas );

    // right-hand-sideforce vector
    Vector3 for_rhs = for_bas - ( _omg_bas % p_bas );

    // right-hand-side moment vector
    Vector3 mom_rhs = mom_bas - ( _vel_bas % p_bas ) - ( _omg_bas % h_bas );

    // right-hand-side combined vector
    Vector6 vec_rhs;

    vec_rhs( 0 ) = for_rhs.x();
    vec_rhs( 1 ) = for_rhs.y();
    vec_rhs( 2 ) = for_rhs.z();
    vec_rhs( 3 ) = mom_rhs.x();
    vec_rhs( 4 ) = mom_rhs.y();
    vec_rhs( 5 ) = mom_rhs.z();

    // inertia matrix
    Matrix6x6 mi_bas = _mass->getInertiaMatrix();

    // state derivatives (results)
    Vector6 acc_bas;

    GaussJordan< 6 >::solve( mi_bas, vec_rhs, &acc_bas );

    // Coriolis effect due to Earth rotation
    Vector3 acc_coriolis_bas = -2.0 * ( _wgs2bas * ( WGS84::getOmega_WGS() % _vel_bas ) );

    acc_bas( 0 ) += acc_coriolis_bas.x();
    acc_bas( 1 ) += acc_coriolis_bas.y();
    acc_bas( 2 ) += acc_coriolis_bas.z();

    if ( !_freeze_velocity )
    {
        // rewriting acceleration into state derivatives vector
        for ( int i = _i_u; i < FDM_STATE_DIMENSION; i++ )
        {
            (*derivVect)( i ) = acc_bas( i - _i_u );
        }
    }
    else
    {
        for ( int i = _i_u; i < FDM_STATE_DIMENSION; i++ )
        {
            (*derivVect)( i ) = 0.0;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Aircraft::updateVariables( const StateVector &stateVect,
                                const StateVector &derivVect )
{
    _pos_wgs.set( stateVect( _i_x ),
                  stateVect( _i_y ),
                  stateVect( _i_z ) );

    _att_wgs.set( stateVect( _i_e0 ),
                  stateVect( _i_ex ),
                  stateVect( _i_ey ),
                  stateVect( _i_ez ) );

    _vel_bas.set( stateVect( _i_u ),
                  stateVect( _i_v ),
                  stateVect( _i_w ) );

    _omg_bas.set( stateVect( _i_p ),
                  stateVect( _i_q ),
                  stateVect( _i_r ) );

    _wgs.setPos_WGS( _pos_wgs );

    _envir->update( _wgs.getPos_Geo().alt );
    _isect->update( _wgs.getPos_Geo().lat, _wgs.getPos_Geo().lon );

    _att_wgs.normalize();

    _wgs2bas = Matrix3x3( _att_wgs );
    _wgs2ned = Matrix3x3( _wgs.getWGS2NED() );
    _ned2bas = Matrix3x3( _wgs.getNED2BAS( _att_wgs ) );
    _bas2wgs = _wgs2bas.getTransposed();
    _ned2wgs = _wgs2ned.getTransposed();
    _bas2ned = _ned2bas.getTransposed();

    _angles_wgs = _wgs2bas.getAngles();
    _angles_ned = _ned2bas.getAngles();

    _vel_ned = _bas2ned * _vel_bas;

    _vel_air_bas = _vel_bas - _ned2bas * _envir->getWind_NED();
    _omg_air_bas = _omg_bas;

    _acc_bas.u() = derivVect( _i_u );
    _acc_bas.v() = derivVect( _i_v );
    _acc_bas.w() = derivVect( _i_w );

    _eps_bas.p() = derivVect( _i_p );
    _eps_bas.q() = derivVect( _i_q );
    _eps_bas.r() = derivVect( _i_r );

    _grav_wgs = _wgs.getGrav_WGS();
    _grav_bas = _wgs2bas * _grav_wgs;

    Vector3 acc_gforce_bas = _acc_bas + ( _omg_bas % _vel_bas );
    Vector3 acc_gpilot_bas = acc_gforce_bas
                           + ( _omg_bas % ( _omg_bas % _pos_pilot_bas ) )
                           + ( _eps_bas % _pos_pilot_bas );

    _g_force = -( acc_gforce_bas - _grav_bas ) / WGS84::_g;
    _g_pilot = -( acc_gpilot_bas - _grav_bas ) / WGS84::_g;

    WGS84::Geo e_isect_geo = _wgs.getPos_Geo();
    e_isect_geo.alt = -1000.0;

    Vector3 ground_wgs;
    Vector3 normal_wgs;

    if ( FDM_SUCCESS == _isect->getIntersection( _pos_wgs, WGS84::geo2wgs( e_isect_geo ),
                                                 &ground_wgs, &normal_wgs ) )
    {
        _ground_wgs = ground_wgs;
        _normal_wgs = normal_wgs;
    }

    _ground_bas = _wgs2bas * ( _ground_wgs - _pos_wgs );
    _normal_bas = _wgs2bas * _normal_wgs;

    _elevation = WGS84( _ground_wgs ).getPos_Geo().alt;

    _altitude_asl = _wgs.getPos_Geo().alt;
    _altitude_agl = _altitude_asl - _elevation;

    _roll    = _angles_ned.phi();
    _pitch   = _angles_ned.tht();
    _heading = _angles_ned.psi();

    _angleOfAttack = Aerodynamics::getAngleOfAttack( _vel_air_bas );
    _sideslipAngle = Aerodynamics::getSideslipAngle( _vel_air_bas );

    double vel_ne = _vel_ned.getLengthXY();

    _trackAngle = atan2( _vel_ned.v(), _vel_ned.u() );
    _climbAngle = atan2( -_vel_ned.w(), vel_ne );

    while ( _trackAngle < 0.0      ) _trackAngle += 2.0*M_PI;
    while ( _trackAngle > 2.0*M_PI ) _trackAngle -= 2.0*M_PI;

    _slipSkidAngle = atan2( -_g_pilot.y(), _g_pilot.z() );

    double dynPressLon = 0.5 * _envir->getDensity() * Misc::pow2( _vel_air_bas.u() );

    _airspeed    = _vel_air_bas.getLength();
    _dynPress    = 0.5 * _envir->getDensity() * Misc::pow2( _airspeed );
    _ias         = sqrt( 2.0 * dynPressLon / fdm::Atmosphere::_std_sl_rho );
    _tas         = _ias * sqrt( Atmosphere::_std_sl_rho / _envir->getDensity() );
    _groundSpeed = _vel_ned.getLengthXY();
    _machNumber  = _envir->getSpeedOfSound() > 0.0 ? ( _airspeed / _envir->getSpeedOfSound() ) : 0.0;
    _climbRate   = -_vel_ned.z();
}
