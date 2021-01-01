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
 *
 ******************************************************************************/

#include <cgi/otw/cgi_Reflection.h>

#include <osg/ClipNode>
#include <osg/Geode>
#include <osg/Geometry>
#include <osg/LOD>
#include <osg/MatrixTransform>
#include <osg/Program>

#include <cgi/cgi_Textures.h>

////////////////////////////////////////////////////////////////////////////////

using namespace cgi;

////////////////////////////////////////////////////////////////////////////////

const char Reflection::_frag[] =
    "uniform sampler2D reflection;\n"
    "uniform sampler2D refraction;\n"
    "uniform sampler2D normalTex;\n"
    "varying vec4 projCoords;\n"
    "varying vec3 lightDir, eyeDir;\n"
    "varying vec2 flowCoords, rippleCoords;\n"
    "\n"
    "void main()\n"
    "{\n"
    "   vec2 rippleEffect = 0.02 * texture2D(refraction, rippleCoords * 0.1).xy;\n"
    "   vec4 N = texture2D(reflection, flowCoords + rippleEffect);\n"
    "   N = N * 2.0 - vec4(1.0);\n"
    "   N.a = 1.0; N = normalize(N);\n"
    "\n"
    "   vec3 refVec = normalize(reflect(-lightDir, vec3(N) * 0.6));\n"
    "   float refAngle = clamp(dot(eyeDir, refVec), 0.0, 1.0);\n"
    "   vec4 specular = vec4(pow(refAngle, 40.0));\n"
    "\n"
    "   vec2 dist = texture2D(refraction, flowCoords + rippleEffect).xy;\n"
    "   float dist_inv = 1.0 / sqrt( dist.x*dist.x + dist.y*dist.y );\n"
    "   dist = (dist * 2.0 - vec2(1.0)) * dist_inv * 0.02;\n"
    "   vec2 uv = projCoords.xy / projCoords.w;\n"
    "   uv = clamp((uv + 1.0) * 0.5 + dist, 0.0, 1.0);\n"
    "\n"
    "   vec4 refl = texture2D(reflection, uv);\n"
    "   refl.w = refl.w * 0.4;\n"
    "   gl_FragColor = mix(refl, refl + specular, 0.6);\n"
    "}\n"
    "\n";

const char Reflection::_vert[] =
    "uniform float osg_FrameTime;\n"
    "varying vec4 projCoords;\n"
    "varying vec3 lightDir, eyeDir;\n"
    "varying vec2 flowCoords, rippleCoords;\n"
    "\n"
    "void main()\n"
    "{\n"
    "   vec3 T = vec3(0.0, 1.0, 0.0);\n"
    "   vec3 N = vec3(0.0, 0.0, 1.0);\n"
    "   vec3 B = vec3(1.0, 0.0, 0.0);\n"
    "   T = normalize(gl_NormalMatrix * T);\n"
    "   B = normalize(gl_NormalMatrix * B);\n"
    "   N = normalize(gl_NormalMatrix * N);\n"
    "\n"
    "   mat3 TBNmat;\n"
    "   TBNmat[0][0] = T[0]; TBNmat[1][0] = T[1]; TBNmat[2][0] = T[2];\n"
    "   TBNmat[0][1] = B[0]; TBNmat[1][1] = B[1]; TBNmat[2][1] = B[2];\n"
    "   TBNmat[0][2] = N[0]; TBNmat[1][2] = N[1]; TBNmat[2][2] = N[2];\n"
    "\n"
    "   vec3 vertexInEye = vec3(gl_ModelViewMatrix * gl_Vertex);\n"
    "   lightDir =  gl_LightSource[0].position.xyz - vertexInEye;\n"
    "   lightDir = normalize(TBNmat * lightDir);\n"
    "   eyeDir = normalize(TBNmat * (-vertexInEye));\n"
    "\n"
    "   vec2 t1 = vec2(osg_FrameTime*0.02, osg_FrameTime*0.02);\n"
    "   vec2 t2 = vec2(osg_FrameTime*0.05, osg_FrameTime*0.05);\n"
    "   flowCoords = gl_MultiTexCoord0.xy * 5.0 + t1;\n"
    "   rippleCoords = gl_MultiTexCoord0.xy * 10.0 + t2;\n"
    "\n"
    "   gl_TexCoord[0] = gl_MultiTexCoord0;\n"
    "   gl_Position = ftransform();\n"
    "   projCoords = gl_Position;\n"
    "}\n"
    "\n";

////////////////////////////////////////////////////////////////////////////////

void Reflection::create( osg::Node *model, osg::Group *parent )
{
    const float z = -0.1f;

    osg::ref_ptr<osg::LOD> lodReflection = new osg::LOD();
    osg::ref_ptr<osg::Group> groupReflection = new osg::Group();

    lodReflection->addChild( groupReflection.get(), 0.0f, 10000.0f );

    osg::ref_ptr<osg::MatrixTransform> reverse = new osg::MatrixTransform;
    reverse->preMult( osg::Matrix::translate(0.0f, 0.0f, -z) *
                      osg::Matrix::scale(1.0f, 1.0f, -1.0f) *
                      osg::Matrix::translate(0.0f, 0.0f, z) );
    reverse->addChild( model );

    osg::ref_ptr<osg::ClipPlane> clipPlane = new osg::ClipPlane;
    clipPlane->setClipPlane( 0.0, 0.0, 1.0, z );
    clipPlane->setClipPlaneNum( 0 );

    osg::ref_ptr<osg::ClipNode> clipNode = new osg::ClipNode;
    clipNode->addClipPlane( clipPlane.get() );
    clipNode->addChild( reverse.get() );

    ////////////////////////////////

    if ( 1 )
    {
        // The RTT camera
        osg::ref_ptr<osg::Texture2D> tex2D = new osg::Texture2D();
        tex2D->setTextureSize( 1024, 1024 );
        tex2D->setInternalFormat( GL_RGBA );
        tex2D->setFilter( osg::Texture2D::MIN_FILTER, osg::Texture2D::LINEAR );
        tex2D->setFilter( osg::Texture2D::MAG_FILTER, osg::Texture2D::LINEAR );

        osg::ref_ptr<osg::Camera> cameraRTT = new osg::Camera();

        cameraRTT->setClearColor( osg::Vec4() );
        cameraRTT->setClearMask( GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT );
        cameraRTT->setRenderTargetImplementation( osg::Camera::FRAME_BUFFER_OBJECT );
        cameraRTT->setRenderOrder( osg::Camera::PRE_RENDER );

        cameraRTT->setViewport( 0, 0, tex2D->getTextureWidth(), tex2D->getTextureHeight() );
        cameraRTT->attach( osg::Camera::COLOR_BUFFER, tex2D.get() );

        cameraRTT->addChild( clipNode.get() );

        // The water plane
        const osg::Vec3& center = model->getBound().center();
        float planeSize = 4.0f * model->getBound().radius();
        //float planeSize = 200.0f;

        osg::Vec3 planeCorner( center.x() - 0.5f*planeSize, center.y() - 0.5f*planeSize, z );

        osg::ref_ptr<osg::Geometry> quad = osg::createTexturedQuadGeometry(
                    planeCorner,
                    osg::Vec3( planeSize, 0.0f, 0.0f ),
                    osg::Vec3( 0.0f, planeSize, 0.0f ) );

        osg::ref_ptr<osg::Geode> geodeQuad = new osg::Geode;
        geodeQuad->addDrawable( quad.get() );

        osg::ref_ptr<osg::Texture2D> texWaterDUDV = Textures::get( "cgi/textures/water_dudv.png" );
        texWaterDUDV->setWrap( osg::Texture::WRAP_S, osg::Texture::REPEAT );
        texWaterDUDV->setWrap( osg::Texture::WRAP_T, osg::Texture::REPEAT );
        texWaterDUDV->setFilter( osg::Texture::MIN_FILTER, osg::Texture::LINEAR );
        texWaterDUDV->setFilter( osg::Texture::MAG_FILTER, osg::Texture::LINEAR );

        osg::ref_ptr<osg::Texture2D> texWaterNM = Textures::get( "cgi/textures/water_nm.png" );
        texWaterNM->setWrap( osg::Texture::WRAP_S, osg::Texture::REPEAT );
        texWaterNM->setWrap( osg::Texture::WRAP_T, osg::Texture::REPEAT );
        texWaterNM->setFilter( osg::Texture::MIN_FILTER, osg::Texture::LINEAR );
        texWaterNM->setFilter( osg::Texture::MAG_FILTER, osg::Texture::LINEAR );

        osg::ref_ptr<osg::StateSet> stateSet = geodeQuad->getOrCreateStateSet();
        stateSet->setTextureAttributeAndModes( 0, tex2D.get()        , osg::StateAttribute::ON | osg::StateAttribute::OVERRIDE );
        stateSet->setTextureAttributeAndModes( 1, texWaterDUDV.get() , osg::StateAttribute::ON | osg::StateAttribute::OVERRIDE );
        stateSet->setTextureAttributeAndModes( 2, texWaterNM.get()   , osg::StateAttribute::ON | osg::StateAttribute::OVERRIDE );

        osg::ref_ptr<osg::Program> program = new osg::Program();
        program->addShader( new osg::Shader( osg::Shader::VERTEX   , _vert ) );
        program->addShader( new osg::Shader( osg::Shader::FRAGMENT , _frag ) );
        stateSet->setAttributeAndModes( program.get() );
        stateSet->addUniform( new osg::Uniform("defaultTex", 0) );
        stateSet->addUniform( new osg::Uniform("refraction", 1) );
        stateSet->addUniform( new osg::Uniform("normalTex", 2) );

        ////////////////////////////////

        //groupReflection->addChild( model );
        groupReflection->addChild( cameraRTT.get() );
        groupReflection->addChild( geodeQuad.get() );

        parent->addChild( lodReflection.get() );
    }
    else
    {
        parent->addChild( clipNode.get() );
    }
}
