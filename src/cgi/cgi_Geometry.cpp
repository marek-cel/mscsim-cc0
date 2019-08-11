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

#include <cgi/cgi_Geometry.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

void Geometry::createDome( osg::Geometry *geom, float radius,
                           bool texCoords, Projection projection,
                           int lat_segments, int lon_segments )
{
    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec2Array> t = new osg::Vec2Array();
    osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    float lat_step = osg::DegreesToRadians( 180.0f ) / (float)lat_segments;
    float lon_step = osg::DegreesToRadians( 360.0f ) / (float)lon_segments;

    float lat_prev = osg::DegreesToRadians( 90.0f );
    float lat_next = osg::DegreesToRadians( 90.0f ) - lat_step;
    float lon_prev = 0.0f;

    float x_prev = 0.0f;
    float y_prev = 0.0f;
    float z_prev = radius;

    float x_next = 0.0f;
    float y_next = 0.0f;
    float z_next = radius;

    float r_prev = 0.0f;
    float r_next = 0.0f;

    for ( int i_lat = 0; i_lat < lat_segments; i_lat++ )
    {
        if ( lat_next < osg::DegreesToRadians( -90.0f ) )
        {
            lat_next = osg::DegreesToRadians( -90.0f );
        }

        z_prev = radius * sin( lat_prev );
        r_prev = radius * cos( lat_prev );

        for ( int i_lon = 0; i_lon < lon_segments + 1; i_lon++ )
        {
            lon_prev = i_lon * lon_step;

            x_prev = r_prev * cos( lon_prev - M_PI );
            y_prev = r_prev * sin( lon_prev - M_PI );

            z_next = radius * sin( lat_next );
            r_next = radius * cos( lat_next );

            x_next = r_next * cos( lon_prev - M_PI );
            y_next = r_next * sin( lon_prev - M_PI );

            osg::Vec3d p_prev( x_prev, y_prev, z_prev );
            osg::Vec3d p_next( x_next, y_next, z_next );

            v->push_back( p_prev );
            v->push_back( p_next );

            if ( texCoords )
            {
                if ( projection == Azimuthal )
                {
                    float n_arc_prev = ( M_PI_2 - fabs( lat_prev ) ) / M_PI_2;
                    float n_arc_next = ( M_PI_2 - fabs( lat_next ) ) / M_PI_2;

                    float tx_prev = 0.5f + 0.5f * n_arc_prev * sin( lon_prev );
                    float ty_prev = 0.5f + 0.5f * n_arc_prev * cos( lon_prev );
                    float tx_next = 0.5f + 0.5f * n_arc_next * sin( lon_prev );
                    float ty_next = 0.5f + 0.5f * n_arc_next * cos( lon_prev );

                    t->push_back( osg::Vec2( tx_prev, ty_prev ) );
                    t->push_back( osg::Vec2( tx_next, ty_next ) );
                }
                else if ( projection == Cylindrical )
                {
                    t->push_back( osg::Vec2( (double)i_lon/lon_segments, (double)(i_lat  )/lat_segments ) );
                    t->push_back( osg::Vec2( (double)i_lon/lon_segments, (double)(i_lat+1)/lat_segments ) );
                }
            }

            p_prev.normalize();
            p_next.normalize();

            n->push_back( -p_prev );
            n->push_back( -p_next );
        }

        lat_prev -= lat_step;
        lat_next -= lat_step;
    }

    c->push_back( osg::Vec4( 1.0f, 1.0f, 1.0f, 1.0f ) );

    geom->setVertexArray( v.get() );
    geom->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::TRIANGLE_STRIP, 0, v->size() ) );

    geom->setNormalArray( n.get() );
    geom->setNormalBinding( osg::Geometry::BIND_PER_VERTEX );

    geom->setColorArray( c.get() );
    geom->setColorBinding( osg::Geometry::BIND_OVERALL );

    if ( texCoords ) geom->setTexCoordArray( 0, t.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Geometry::createFace( osg::Geometry *geom, float radius, bool texCoords,
                           int segments )
{
    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec2Array> t = new osg::Vec2Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    v->push_back( osg::Vec3( 0.0f, 0.0f, 0.0f ) );
    if ( texCoords ) t->push_back( osg::Vec2( 0.5f, 0.5f ) );

    float step = 2.0f * M_PI / (float)segments;

    for ( int i = 0; i < segments + 1; i++ )
    {
        float a = i * step;

        float sinA = sin( a );
        float cosA = cos( a );

        float y = radius * sinA;
        float z = radius * cosA;

        v->push_back( osg::Vec3( 0.0f, y, z ) );
        if ( texCoords ) t->push_back( osg::Vec2( 1.0f - ( sinA + 1.0f ) / 2.0f, ( cosA + 1.0f ) / 2.0f ) );
    }

    n->push_back( osg::Vec3( -1.0f, 0.0f, 0.0f ) );

    c->push_back( osg::Vec4( 1.0f, 1.0f, 1.0f, 1.0f ) );

    geom->setVertexArray( v.get() );
    geom->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::TRIANGLE_FAN, 0, v->size() ) );

    geom->setNormalArray( n.get() );
    geom->setNormalBinding( osg::Geometry::BIND_OVERALL );

    geom->setColorArray( c.get() );
    geom->setColorBinding( osg::Geometry::BIND_OVERALL );

    if ( texCoords ) geom->setTexCoordArray( 0, t.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Geometry::createPlane( osg::Geometry *geom, double size, int segments,
                            double origin_x, double origin_y,
                            bool texCoords, int segmentsPerTexture )
{
    double step = (int)( size / segments );
    double texPerSegment = 1.0 / (double)segmentsPerTexture;

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec2Array> t = new osg::Vec2Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    for ( int ix = 0; ix < segments; ix++ )
    {
        for ( int iy = 0; iy < segments; iy++ )
        {
            bool even = false;

            if ( ( ix % 2 == 0 && iy % 2 != 0 )
              || ( ix % 2 != 0 && iy % 2 == 0 ) )
            {
                even = true;
            }

            double x0 = ( ix + 0 ) * step;
            double x1 = ( ix + 1 ) * step;
            double y0 = ( iy + 0 ) * step;
            double y1 = ( iy + 1 ) * step;

            double tx0 = ( ix + 0 ) % segmentsPerTexture * texPerSegment;
            double tx1 = ( ix + 1 ) % segmentsPerTexture * texPerSegment;
            double ty0 = ( iy + 0 ) % segmentsPerTexture * texPerSegment;
            double ty1 = ( iy + 1 ) % segmentsPerTexture * texPerSegment;

            if ( tx1 < 0.001 ) tx1 = 1.0;
            if ( ty1 < 0.001 ) ty1 = 1.0;

            osg::Vec3d r1( x0 + origin_x, y0 + origin_y, 0.0 );
            osg::Vec3d r2( x1 + origin_x, y0 + origin_y, 0.0 );
            osg::Vec3d r3( x0 + origin_x, y1 + origin_y, 0.0 );
            osg::Vec3d r4( x1 + origin_x, y1 + origin_y, 0.0 );

            osg::Vec2 t1( tx0, ty0 );
            osg::Vec2 t2( tx1, ty0 );
            osg::Vec2 t3( tx0, ty1 );
            osg::Vec2 t4( tx1, ty1 );

            if ( even )
            {
                v->push_back( r1 );
                v->push_back( r2 );
                v->push_back( r3 );

                v->push_back( r3 );
                v->push_back( r2 );
                v->push_back( r4 );

                if ( texCoords )
                {
                    t->push_back( t1 );
                    t->push_back( t2 );
                    t->push_back( t3 );

                    t->push_back( t3 );
                    t->push_back( t2 );
                    t->push_back( t4 );
                }
            }
            else
            {
                v->push_back( r1 );
                v->push_back( r2 );
                v->push_back( r4 );

                v->push_back( r1 );
                v->push_back( r4 );
                v->push_back( r3 );

                if ( texCoords )
                {
                    t->push_back( t1 );
                    t->push_back( t2 );
                    t->push_back( t4 );

                    t->push_back( t1 );
                    t->push_back( t4 );
                    t->push_back( t3 );
                }
            }
        }
    }

    n->push_back( osg::Vec3( -1.0f, 0.0f, 0.0f ) );

    c->push_back( osg::Vec4( 1.0f, 1.0f, 1.0f, 1.0f ) );

    geom->setVertexArray( v.get() );
    geom->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::TRIANGLES, 0, v->size() ) );

    geom->setNormalArray( n.get() );
    geom->setNormalBinding( osg::Geometry::BIND_OVERALL );

    geom->setColorArray( c.get() );
    geom->setColorBinding( osg::Geometry::BIND_OVERALL );

    if ( texCoords ) geom->setTexCoordArray( 0, t.get() );
}

////////////////////////////////////////////////////////////////////////////////

void Geometry::createQuad( osg::Geometry *geom, osg::Vec3Array *v,
                           bool texCoords, bool color, float alpha )
{
    osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec2Array> t = new osg::Vec2Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    osg::Vec3d tmp = ( v->at( 1 ) - v->at( 0 ) ) ^ ( v->at( 2 ) - v->at( 0 ) );
    tmp.normalize();
    n->push_back( tmp );

    c->push_back( osg::Vec4( 1.0f, 1.0f, 1.0f, alpha ) );

    geom->setVertexArray( v );
    geom->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::TRIANGLE_FAN, 0, v->size() ) );

    geom->setNormalArray( n.get() );
    geom->setNormalBinding( osg::Geometry::BIND_OVERALL );

    if ( color )
    {
        geom->setColorArray( c.get() );
        geom->setColorBinding( osg::Geometry::BIND_OVERALL );
    }

    if ( texCoords )
    {
        t->push_back( osg::Vec2( 0, 0 ) );
        t->push_back( osg::Vec2( 1, 0 ) );
        t->push_back( osg::Vec2( 1, 1 ) );
        t->push_back( osg::Vec2( 0, 1 ) );

        geom->setTexCoordArray( 0, t.get() );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Geometry::createRing( osg::Geometry *geom, float radius_i, float radius_o,
                           bool texCoords, int segments )
{
    const float coef = radius_o / radius_i;

    osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array();
    osg::ref_ptr<osg::Vec2Array> t = new osg::Vec2Array();
    osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array();

    float step = 2.0f * M_PI / (float)segments;

    for ( int i = 0; i < segments + 1; i++ )
    {
        float a = i * step;

        float sinA = sin( a );
        float cosA = cos( a );

        float x_i = radius_i * sinA;
        float y_i = radius_i * cosA;

        float x_o = radius_o * sinA;
        float y_o = radius_o * cosA;

        v->push_back( osg::Vec3( x_i, y_i, 0.0f ) );
        v->push_back( osg::Vec3( x_o, y_o, 0.0f ) );

        if ( texCoords )
        {
            float x = 1.0f - ( sinA + 1.0f ) / 2.0f;
            float y = ( cosA + 1.0f ) / 2.0f;

            t->push_back( osg::Vec2( x        , y        ) );
            t->push_back( osg::Vec2( x * coef , y * coef ) );
        }
    }

    n->push_back( osg::Vec3( 0.0f, 0.0f, 1.0f ) );

    c->push_back( osg::Vec4( 1.0f, 1.0f, 1.0f, 1.0f ) );

    geom->setVertexArray( v.get() );
    geom->addPrimitiveSet( new osg::DrawArrays( osg::PrimitiveSet::QUAD_STRIP, 0, v->size() ) );

    geom->setNormalArray( n.get() );
    geom->setNormalBinding( osg::Geometry::BIND_OVERALL );

    geom->setColorArray( c.get() );
    geom->setColorBinding( osg::Geometry::BIND_OVERALL );

    if ( texCoords ) geom->setTexCoordArray( 0, t.get() );
}
