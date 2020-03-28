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

#include <fdm/main/fdm_Mass.h>
#include <fdm/main/fdm_Aircraft.h>

#include <fdm/utils/fdm_String.h>
#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

Mass::Mass( const Aircraft* aircraft ) :
    Module ( aircraft ),

    _mass_e ( 0.0 ),
    _mass_t ( 0.0 )
{}

////////////////////////////////////////////////////////////////////////////////

Mass::~Mass() {}

////////////////////////////////////////////////////////////////////////////////

void Mass::readData( XmlNode &dataNode )
{
    if ( dataNode.isValid() )
    {
        int result = FDM_SUCCESS;

        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _mass_e     , "empty_mass"     );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _i_e_bas    , "inertia_tensor" );
        if ( result == FDM_SUCCESS ) result = XmlUtils::read( dataNode, _r_cm_e_bas , "center_of_mass" );

        XmlNode varMassNode = dataNode.getFirstChildElement( "variable_mass" );

        while ( result == FDM_SUCCESS && varMassNode.isValid() )
        {
            VarMass varMass;

            varMass.input = FDM_NULLPTR;

            std::string name = varMassNode.getAttribute( "name" );

            if ( result == FDM_SUCCESS ) result = XmlUtils::read( varMassNode, varMass.mass_max , "mass_max"    );
            if ( result == FDM_SUCCESS ) result = XmlUtils::read( varMassNode, varMass.r_bas    , "coordinates" );

            if ( result == FDM_SUCCESS )
            {
                std::pair<Masses::iterator,bool> temp =
                        _masses.insert( std::pair<std::string,VarMass>( name, varMass ) );

                if ( temp.second != true )
                {
                    result = FDM_FAILURE;
                }
            }

            if ( result != FDM_SUCCESS ) XmlUtils::throwError( __FILE__, __LINE__, varMassNode );

            varMassNode = varMassNode.getNextSiblingElement( "variable_mass" );
        }

        if ( result != FDM_SUCCESS ) XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
    else
    {
        XmlUtils::throwError( __FILE__, __LINE__, dataNode );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Mass::initialize()
{
    update();
}

////////////////////////////////////////////////////////////////////////////////

void Mass::computeForceAndMoment()
{   
    _for_bas = _mass_t * _aircraft->getGrav_BAS();
    _mom_bas = _r_cm_t_bas % _for_bas;

    if ( !_for_bas.isValid() || !_mom_bas.isValid() )
    {
        Exception e;

        e.setType( Exception::UnexpectedNaN );
        e.setInfo( "ERROR! NaN detected in the mass model." );

        FDM_THROW( e );
    }
}

////////////////////////////////////////////////////////////////////////////////

void Mass::update()
{
    _mass_t   = _mass_e;
    _s_t_bas = _mass_e * _r_cm_e_bas;
    _i_t_bas = _i_e_bas;

    for ( Masses::iterator it = _masses.begin(); it != _masses.end(); it++ )
    {
        VarMass &vm = (*it).second;

        if ( vm.input )
            vm.mass = Misc::satur( 0.0, vm.mass_max, *(vm.input) );
        else
            vm.mass = Misc::satur( 0.0, vm.mass_max, 0.0 );

        addVariableMass( vm );
    }

    _r_cm_t_bas = _s_t_bas / _mass_t;
}

////////////////////////////////////////////////////////////////////////////////

Matrix6x6 Mass::getInertiaMatrix() const
{
    Matrix6x6 mi_bas;

    mi_bas(0,0) =  _mass_t;
    mi_bas(0,1) =  0.0;
    mi_bas(0,2) =  0.0;
    mi_bas(0,3) =  0.0;
    mi_bas(0,4) =  _s_t_bas.z();
    mi_bas(0,5) = -_s_t_bas.y();

    mi_bas(1,0) =  0.0;
    mi_bas(1,1) =  _mass_t;
    mi_bas(1,2) =  0.0;
    mi_bas(1,3) = -_s_t_bas.z();
    mi_bas(1,4) =  0.0;
    mi_bas(1,5) =  _s_t_bas.x();

    mi_bas(2,0) =  0.0;
    mi_bas(2,1) =  0.0;
    mi_bas(2,2) =  _mass_t;
    mi_bas(2,3) =  _s_t_bas.y();
    mi_bas(2,4) = -_s_t_bas.x();
    mi_bas(2,5) =  0.0;

    mi_bas(3,0) =  0.0;
    mi_bas(3,1) = -_s_t_bas.z();
    mi_bas(3,2) =  _s_t_bas.y();
    mi_bas(3,3) =  _i_t_bas(_ix,_ix);
    mi_bas(3,4) =  _i_t_bas(_ix,_iy);
    mi_bas(3,5) =  _i_t_bas(_ix,_iz);

    mi_bas(4,0) =  _s_t_bas.z();
    mi_bas(4,1) =  0.0;
    mi_bas(4,2) = -_s_t_bas.x();
    mi_bas(4,3) =  _i_t_bas(_iy,_ix);
    mi_bas(4,4) =  _i_t_bas(_iy,_iy);
    mi_bas(4,5) =  _i_t_bas(_iy,_iz);

    mi_bas(5,0) = -_s_t_bas.y();
    mi_bas(5,1) =  _s_t_bas.x();
    mi_bas(5,2) =  0.0;
    mi_bas(5,3) =  _i_t_bas(_iz,_ix);
    mi_bas(5,4) =  _i_t_bas(_iz,_iy);
    mi_bas(5,5) =  _i_t_bas(_iz,_iz);

    return mi_bas;
}

////////////////////////////////////////////////////////////////////////////////

void Mass::addVariableMass( const VarMass &varMass )
{
    // Taylor J.: Classical Mechanics, p.411
    _mass_t  += varMass.mass;
    _s_t_bas += varMass.mass * varMass.r_bas;

    double r_x2 = varMass.r_bas.x() * varMass.r_bas.x();
    double r_y2 = varMass.r_bas.y() * varMass.r_bas.y();
    double r_z2 = varMass.r_bas.z() * varMass.r_bas.z();

    double d_it_xy = varMass.mass * varMass.r_bas.x() * varMass.r_bas.y();
    double d_it_xz = varMass.mass * varMass.r_bas.x() * varMass.r_bas.z();
    double d_it_yz = varMass.mass * varMass.r_bas.y() * varMass.r_bas.z();

    _i_t_bas(_ix,_ix) += varMass.mass * ( r_y2 + r_z2 );
    _i_t_bas(_ix,_iy) -= d_it_xy;
    _i_t_bas(_ix,_iz) -= d_it_xz;

    _i_t_bas(_iy,_ix) -= d_it_xy;
    _i_t_bas(_iy,_iy) += varMass.mass * ( r_x2 + r_z2 );
    _i_t_bas(_iy,_iz) -= d_it_yz;

    _i_t_bas(_iz,_ix) -= d_it_xz;
    _i_t_bas(_iz,_iy) -= d_it_yz;
    _i_t_bas(_iz,_iz) += varMass.mass * ( r_x2 + r_y2 );
}

////////////////////////////////////////////////////////////////////////////////

Mass::VarMass* Mass::getVariableMassByName( const std::string &name )
{
    Masses::iterator it = _masses.find( name );

    if ( it != _masses.end() )
    {
        return &(it->second);
    }

    return 0;
}
