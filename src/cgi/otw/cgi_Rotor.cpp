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

#include <cgi/otw/cgi_Rotor.h>

#include <osg/Geode>
#include <osg/Geometry>
#include <osg/LineWidth>

#include <fdm/utils/fdm_Units.h>

#include <Data.h>

#include <cgi/cgi_Defines.h>
#include <cgi/cgi_Utils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

Rotor::Rotor( const osg::Vec3 &center, int blades_count,
              double radius, double offset, double inclination ) :
    _center ( center ),
    _blades_count ( blades_count ),
    _radius ( radius ),
    _offset ( offset ),
    _inclination ( inclination )
{
    _root = new osg::Group();

    _pat = new osg::PositionAttitudeTransform();
    _root->addChild( _pat.get() );

    _pat->setPosition( _center );
    _pat->setAttitude( osg::Quat( -_inclination, osg::Y_AXIS ) );

    _switchBlur = new osg::Switch();
    _pat->addChild( _switchBlur.get() );

    _switchDatum = new osg::Switch();
    _pat->addChild( _switchDatum.get() );

    _patDatum = new osg::PositionAttitudeTransform();
    _switchDatum->addChild( _patDatum.get() );

    _switchPaths = new osg::Switch();
    _pat->addChild( _switchPaths.get() );

    _switchVectors = new osg::Switch();
    _pat->addChild( _switchVectors.get() );

    for ( int i = 0; i < _blades_count; i++ )
    {
        _paths.push_back( new osg::Vec3Array() );
    }

    createDatum();
}

////////////////////////////////////////////////////////////////////////////////

Rotor::~Rotor() {}

////////////////////////////////////////////////////////////////////////////////

void Rotor::update()
{
    updateBlur();
    updateDatum();
    updatePaths();
    updateVectors();
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::createDatum()
{
    const double r = _radius;

    // ring
    {
        osg::ref_ptr<osg::Geode> geode = new osg::Geode();
        _switchDatum->addChild( geode.get() );

        osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

        osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();  // normals
        osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();  // normals
        osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();  // colors

        n->push_back( osg::Vec3( 0.0f, 0.0f, 1.0f ) );
        c->push_back( osg::Vec4( 1.0f, 0.0f, 1.0f, 1.0f ) );

        for ( int i = 0; i < 36; i++ )
        {
            double a = osg::DegreesToRadians( 10.0 * i );
            double x = r * sin( a );
            double y = r * cos( a );

            v->push_back( osg::Vec3( x, y, 0.0 ) );
        }

        geometry->setVertexArray( v.get() );
        geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::LINE_LOOP, 0, v->size() ) );
        geometry->setNormalArray( n.get() );
        geometry->setNormalBinding( osg::Geometry::BIND_OVERALL );
        geometry->setColorArray( c.get() );
        geometry->setColorBinding( osg::Geometry::BIND_OVERALL );

        geode->addDrawable( geometry.get() );

        osg::ref_ptr<osg::LineWidth> lineWidth = new osg::LineWidth();
        lineWidth->setWidth( 2.0f );

        geode->getOrCreateStateSet()->setAttributeAndModes( lineWidth, osg::StateAttribute::ON );
    }

    // lines
    {
        osg::ref_ptr<osg::Geode> geode = new osg::Geode();
        _switchDatum->addChild( geode.get() );

        osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

        osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();  // normals
        osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();  // normals
        osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();  // colors

        n->push_back( osg::Vec3( 0.0f, 0.0f, 1.0f ) );
        c->push_back( osg::Vec4( 1.0f, 0.0f, 1.0f, 1.0f ) );

        v->push_back( osg::Vec3( -r, 0.0, 0.0 ) );
        v->push_back( osg::Vec3(  r, 0.0, 0.0 ) );
        v->push_back( osg::Vec3( 0.0, -r, 0.0 ) );
        v->push_back( osg::Vec3( 0.0,  r, 0.0 ) );

        geometry->setVertexArray( v.get() );
        geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::LINES, 0, v->size() ) );
        geometry->setNormalArray( n.get() );
        geometry->setNormalBinding( osg::Geometry::BIND_OVERALL );
        geometry->setColorArray( c.get() );
        geometry->setColorBinding( osg::Geometry::BIND_OVERALL );

        geode->addDrawable( geometry.get() );

        osg::ref_ptr<osg::LineWidth> lineWidth = new osg::LineWidth();
        lineWidth->setWidth( 2.0f );

        geode->getOrCreateStateSet()->setAttributeAndModes( lineWidth, osg::StateAttribute::ON );
    }

    for ( int i = 0; i < _blades_count; i++ )
    {
        double psi = i * ( 2.0 * M_PI / (double)_blades_count );

        osg::ref_ptr<osg::Geode> geode = new osg::Geode();
        _patDatum->addChild( geode.get() );

        osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

        osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();  // normals
        osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();  // normals
        osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();  // colors

        v->push_back( osg::Vec3( 0.0f, 0.0f, 0.0f ) );
        v->push_back( osg::Vec3( sin( psi ) * _radius, cos( psi ) * _radius, 0.0 ) );

        n->push_back( osg::Vec3( 0.0f, 0.0f, 1.0f ) );
        c->push_back( osg::Vec4( 0.0f, 1.0f, 1.0f, 1.0f ) );

        geometry->setVertexArray( v.get() );
        geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::LINE_STRIP, 0, v->size() ) );
        geometry->setNormalArray( n.get() );
        geometry->setNormalBinding( osg::Geometry::BIND_OVERALL );
        geometry->setColorArray( c.get() );
        geometry->setColorBinding( osg::Geometry::BIND_OVERALL );

        geode->addDrawable( geometry.get() );

        osg::ref_ptr<osg::LineWidth> lineWidth = new osg::LineWidth();
        lineWidth->setWidth( 0.8f );

        geode->getOrCreateStateSet()->setAttributeAndModes( lineWidth, osg::StateAttribute::ON );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::updateBlur()
{
    if ( _switchBlur->getNumChildren() > 0 )
    {
        _switchBlur->removeChildren( 0, _switchBlur->getNumChildren() );
    }

    if ( Data::get()->cgi.show_rotor_blur )
    {
        osg::ref_ptr<osg::Geode> geode = new osg::Geode();
        _switchBlur->addChild( geode.get() );

        osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();
        geode->addDrawable( geometry.get() );

        osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
        osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();
        osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

        const double span = _radius - _offset;

        for ( int i = 0; i <= 36; i++ )
        {
            double psi = fdm::Units::deg2rad( 10.0 * i );

            double cosPsi = cos( psi );
            double sinPsi = sin( psi );

            double beta = Data::get()->ownship.mainRotor.coningAngle
                        + cosPsi * Data::get()->ownship.mainRotor.diskPitch
                        - sinPsi * Data::get()->ownship.mainRotor.diskRoll;

            double cosBeta = cos( beta );
            double sinBeta = sin( beta );

            double span_real = cosBeta * span;

            double xi = cosPsi * _offset;
            double xo = cosPsi * ( _offset + span_real );

            double yi = sinPsi * _offset;
            double yo = sinPsi * ( _offset + span_real );

            double zo = sinBeta * span;

            v->push_back( osg::Vec3( xi, yi, 0.0 ) );
            v->push_back( osg::Vec3( xo, yo, -zo ) );
        }

        n->push_back( osg::Vec3( 0.0f, 0.0f, -1.0f ) );
        c->push_back( osg::Vec4( 0.0f, 0.0f, 0.0f, 0.2f ) );

        geometry->setVertexArray( v );
        geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::QUAD_STRIP, 0, v->size() ) );
        geometry->setNormalArray( n.get() );
        geometry->setNormalBinding( osg::Geometry::BIND_OVERALL );
        geometry->setColorArray( c.get() );
        geometry->setColorBinding( osg::Geometry::BIND_OVERALL );

        osg::ref_ptr<osg::StateSet> stateSet = geode->getOrCreateStateSet();
        stateSet->setMode( GL_BLEND, osg::StateAttribute::ON );
        stateSet->setMode( GL_DEPTH_TEST, osg::StateAttribute::OFF|osg::StateAttribute::OVERRIDE );
        stateSet->setRenderingHint( osg::StateSet::TRANSPARENT_BIN );
        stateSet->setRenderBinDetails( CGI_DEPTH_SORTED_BIN_WORLD + 11, "RenderBin" );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::updateDatum()
{
    if ( Data::get()->cgi.show_blades_datum )
    {
        _switchDatum->setAllChildrenOn();

        double psi = Data::get()->ownship.mainRotor.coef * Data::get()->ownship.mainRotor.azimuth;
        _patDatum->setAttitude( osg::Quat( psi, osg::Z_AXIS ) );
    }
    else
    {
        _switchDatum->setAllChildrenOff();
    }
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::updatePaths()
{
    if ( _switchPaths->getNumChildren() > 0 )
    {
        _switchPaths->removeChildren( 0, _switchPaths->getNumChildren() );
    }

    if ( Data::get()->stateOut == fdm::DataOut::Idle )
    {
        for ( Paths::iterator it = _paths.begin(); it != _paths.end(); ++it )
        {
            (*it)->clear();
        }

        if ( _switchPaths->getNumChildren() > 0 )
        {
            _switchPaths->removeChildren( 0, _switchPaths->getNumChildren() );
        }
    }
    else if ( Data::get()->stateOut == fdm::DataOut::Working )
    {
        double azimuth = Data::get()->ownship.mainRotor.azimuth;
        double delta_psi = 2.0 * M_PI / (double)(_blades_count);

        // main rotor blades
        for ( int i = 0; i < (int)_paths.size() && i < _blades_count; i++ )
        {
            double beta = -Data::get()->ownship.mainRotor.blade[ i ].flapping;

            double psi = -azimuth + i * delta_psi * Data::get()->ownship.mainRotor.coef;
            double r = _radius;

            osg::Quat q_sra( psi  , osg::Z_AXIS );
            osg::Quat q_bsa( beta , osg::Y_AXIS );

            osg::Vec3 r_fh_sra(     -_offset, 0.0, 0.0 );
            osg::Vec3 r_tp_bsa( -r + _offset, 0.0, 0.0 );

            osg::Vec3 r_tp_ras = q_sra * r_fh_sra
                    + q_sra * ( q_bsa * r_tp_bsa );

            _paths[ i ]->push_back( r_tp_ras );

            double rot_time = ( 2.0 * M_PI ) / Data::get()->ownship.mainRotor.omega / Data::get()->timeCoef;
            double frames = rot_time / CGI_TIME_STEP / (double)_blades_count;

            int max = ceil( frames );
            int min = 10;
            if ( max < min ) max = min;

            while ( _paths[ i ]->size() > (unsigned int)max )
            {
                _paths[ i ]->erase( _paths[ i ]->begin(),
                                    _paths[ i ]->begin() + 1 );
            }
        }
    }

    if ( Data::get()->cgi.show_blades_paths )
    {
        for ( Paths::iterator it = _paths.begin(); it != _paths.end(); ++it )
        {
            updatePath( _switchPaths.get(), (*it).get() );
        }

        _switchPaths->setAllChildrenOn();
    }
    else
    {
        _switchPaths->setAllChildrenOff();
    }
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::updatePath( osg::Group *parent, osg::Vec3Array *positions )
{
    osg::ref_ptr<osg::Geode> geode = new osg::Geode();
    parent->addChild( geode.get() );

    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();

    osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();  // normals
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();  // colors

    n->push_back( osg::Vec3( 0.0f, 0.0f, 1.0f ) );
    c->push_back( osg::Vec4( 1.0f, 1.0f, 0.0f, 1.0f ) );

    geometry->setVertexArray( positions );
    geometry->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::LINE_STRIP, 0, positions->size() ) );
    geometry->setNormalArray( n.get() );
    geometry->setNormalBinding( osg::Geometry::BIND_OVERALL );
    geometry->setColorArray( c.get() );
    geometry->setColorBinding( osg::Geometry::BIND_OVERALL );

    geode->addDrawable( geometry.get() );

    osg::ref_ptr<osg::LineWidth> lineWidth = new osg::LineWidth();
    lineWidth->setWidth( 2.0f );

    geode->getOrCreateStateSet()->setAttributeAndModes( lineWidth, osg::StateAttribute::ON );
}

////////////////////////////////////////////////////////////////////////////////

void Rotor::updateVectors()
{
    if ( _switchVectors->getNumChildren() > 0 )
    {
        _switchVectors->removeChildren( 0, _switchVectors->getNumChildren() );
    }

    for ( int i = 0; i < FDM_MAX_VECTORS; i++ )
    {
        if ( Data::get()->cgi.rotor.v[ i ].visible )
        {
            osg::Vec3 b( Data::get()->cgi.rotor.v[ i ].b_x,
                         Data::get()->cgi.rotor.v[ i ].b_y,
                         Data::get()->cgi.rotor.v[ i ].b_z );

            osg::Vec3 v( Data::get()->cgi.rotor.v[ i ].v_x,
                         Data::get()->cgi.rotor.v[ i ].v_y,
                         Data::get()->cgi.rotor.v[ i ].v_z );

            Utils::drawVector( _switchVectors.get(), b, v );
        }
    }
}

