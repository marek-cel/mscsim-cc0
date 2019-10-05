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

#include <cgi/cgi_Camera.h>

#include <cgi/cgi_Defines.h>

#include <fdm/utils/fdm_Misc.h>
#include <fdm/utils/fdm_WGS84.h>

#include <cgi/cgi_Intersections.h>
#include <cgi/cgi_WGS84.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

const double Camera::_downAngle = osg::DegreesToRadians( 10.0 );

////////////////////////////////////////////////////////////////////////////////

Camera::Camera() :
    _deltaPitch ( 0.0 )
{
    _manipulatorOrbit = new ManipulatorOrbit();
    _manipulatorShift = new ManipulatorShift();
    _manipulatorWorld = new ManipulatorWorld();

    _viewType = Data::CGI::ViewPilot;
    _manipulator = _manipulatorShift.get();
}

////////////////////////////////////////////////////////////////////////////////

Camera::~Camera() {}

////////////////////////////////////////////////////////////////////////////////

void Camera::update()
{
    if ( _viewType == Data::CGI::ViewChase || _viewType == Data::CGI::ViewPilot )
    {
        osg::Quat q_tmp( -M_PI / 2.0, osg::X_AXIS,
                                 0.0, osg::Y_AXIS,
                          M_PI / 2.0, osg::Z_AXIS );

        osg::Quat q_wgs( Data::get()->ownship.att_ex_wgs,
                         Data::get()->ownship.att_ey_wgs,
                         Data::get()->ownship.att_ez_wgs,
                         Data::get()->ownship.att_e0_wgs );

        osg::Vec3d r_wgs( Data::get()->ownship.pos_x_wgs,
                          Data::get()->ownship.pos_y_wgs,
                          Data::get()->ownship.pos_z_wgs );

        if ( _viewType == Data::CGI::ViewChase )
        {
            double deltaPitch = Data::get()->ownship.onGround ? -Data::get()->ownship.pitch : 0.0;
            _deltaPitch = fdm::Misc::inertia( deltaPitch, _deltaPitch, CGI_TIME_STEP, 1.0 );

            double d_phi = 0.0;
            double d_tht = _deltaPitch;// -0.5 * Data::get()->ownship.pitchRate;
            double d_psi = 0.0;//  0.0 * Data::get()->ownship.yawRate;

            double d_x = -_manipulatorShift->getDistance();
            double d_y = d_x * tan( d_psi ) * ( -1.0 );
            double d_z = d_x * tan( _downAngle - d_tht );

            osg::Vec3d r_camera_bas( d_x, d_y, d_z );
            osg::Quat q_camera_bas( d_phi, osg::X_AXIS,
                                    d_tht, osg::Y_AXIS,
                                    d_psi, osg::Z_AXIS );

            osg::Vec3d r_camera_wgs = r_wgs + q_wgs * r_camera_bas;

            osg::Matrixd matrix( osg::Matrixd::rotate( q_tmp )
                               * osg::Matrixd::rotate( q_camera_bas )
                               * osg::Matrixd::rotate( q_wgs )
                               * osg::Matrixd::translate( r_camera_wgs ) );

            _manipulatorShift->setByMatrix( matrix );
        }
        else if ( _viewType == Data::CGI::ViewPilot )
        {
            osg::Matrixd matrix( osg::Matrixd::rotate( q_tmp )
                               * osg::Matrixd::rotate( q_wgs )
                               * osg::Matrixd::translate( r_wgs ) );

            _manipulatorShift->setByMatrix( matrix );
        }
    }

    //if ( _viewType != Data::Camera::ViewChase ) _deltaPitch = 0.0;

    _attitude = _manipulator->getMatrix().getRotate();
    _position = _manipulator->getMatrix().getTrans();

    WGS84 wgs( _position );

    float elevation = Intersections::instance()->getElevation( wgs.getLat(), wgs.getLon() );

    Data::get()->cgi.camera.latitude     = wgs.getLat();
    Data::get()->cgi.camera.longitude    = wgs.getLon();
    Data::get()->cgi.camera.altitude_agl = wgs.getAlt() - elevation;
    Data::get()->cgi.camera.altitude_asl = wgs.getAlt();

    Data::get()->cgi.viewType = _viewType;
}

////////////////////////////////////////////////////////////////////////////////

void Camera::setDistanceDef( double distance_def )
{
    _manipulatorOrbit->setDistance( distance_def );
    _manipulatorShift->setDistance( distance_def );
}

////////////////////////////////////////////////////////////////////////////////

void Camera::setDistanceMin( double distance_min )
{
    _manipulatorOrbit->setDistanceMin( distance_min );
    _manipulatorShift->setDistanceMin( distance_min );
}

////////////////////////////////////////////////////////////////////////////////

void Camera::setTrackNode( osg::Node *node )
{
    _trackNode = node;

    _manipulatorOrbit->setTrackNode( _trackNode.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Camera::setWorldNode( osg::Node *node )
{
    _worldNode = node;

    _manipulatorWorld->setNode( _worldNode.get() );
    _manipulatorWorld->setElevation( M_PI_2 );
    _manipulatorWorld->setHeading( 0 );
}
