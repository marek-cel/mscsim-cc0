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
#ifndef FDM_MASS_H
#define FDM_MASS_H

////////////////////////////////////////////////////////////////////////////////

#include <vector>

#include <fdm/fdm_Base.h>

#include <fdm/utils/fdm_Matrix3x3.h>
#include <fdm/utils/fdm_Matrix6x6.h>
#include <fdm/utils/fdm_Vector3.h>

#include <fdm/xml/fdm_XmlNode.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

class Aircraft; ///< aircraft class forward declaration

/**
 * @brief Mass, inertia, balance and gravity class.
 *
 * <p>Input data reference is created for each variable mass component. Name of
 * this data reference is "input/mass/variable_mass_component_name".</p>
 *
 * <h5>XML configuration file format:</h5>
 * @code
 * <mass>
 *   <empty_mass> { [kg] empty aircraft mass } </empty_mass>
 *   <inertia_tensor>
 *     { [kg*m^2] Ixx } { [kg*m^2] Ixy } { [kg*m^2] Ixz }
 *     { [kg*m^2] Iyx } { [kg*m^2] Iyy } { [kg*m^2] Iyz }
 *     { [kg*m^2] Izx } { [kg*m^2] Izy } { [kg*m^2] Izz }
 *   </inertia_tensor>
 *   <center_of_mass> { [m] x-coordinate } { [m] y-coordinate } { [m] z-coordinate } </center_of_mass>
 *   <variable_mass input="{ variable mass input name }">
 *     <mass_max> { [kg] maximum mass } </mass_max>
 *     <coordinates> { [m] x-coordinate } { [m] y-coordinate } { [m] z-coordinate } </coordinates>
 *   </variable_mass>
 *   ... { more variable masses }
 * </mass>
 * @endcode
 *
 * @see Taylor J.: Classical Mechanics, 2005, p.411
 * @see Sibilski K.: Modelowanie i symulacja dynamiki ruchu obiektow latajacych, 2004, p.40, [in Polish]
 * @see Narkiewicz J,: Tiltrotor Modelling for Simulation in Various Flight Conditions, 2006
 * @see https://en.wikipedia.org/wiki/Parallel_axis_theorem
 */
class FDMEXPORT Mass : public Base
{
public:

    /** Variable mass component data. */
    struct VarMass
    {
        const double *input;    ///< [kg] mass input
        double mass;            ///< [kg] mass
        double mass_max;        ///< [kg] maximum mass
        Vector3 r_bas;          ///< [m] position expressed in BAS
    };

    typedef std::map< std::string, VarMass > Masses;

    /** Constructor. */
    Mass( const Aircraft* aircraft );

    /** Destructor. */
    virtual ~Mass();

    /** Initializes mass. */
    virtual void init();

    /**
     * Reads data.
     * @param dataNode XML node
     */
    virtual void readData( XmlNode &dataNode );

    /** Computes force and moment. */
    virtual void computeForceAndMoment();

    /** Updates mass. */
    virtual void update();

    inline const Vector3& getFor_BAS() const { return m_for_bas; }
    inline const Vector3& getMom_BAS() const { return m_mom_bas; }

    /**
     * Returns total mass.
     * @return [kg] total mass
     */
    inline double getMass() const { return m_mass_t; }

    /**
     * Returns inertia matrix.
     * @return inertia matrix
     */
    virtual Matrix6x6 getInertiaMatrix() const;

    /**
     * Returns inertia tensor for total mass.
     * @return [kg*m^2] inertia tensor
     */
    inline Matrix3x3 getInertiaTensor() const { return m_it_t_bas; }

    /**
     * Returns first moment of mass (total).
     * @return [kg*m] first moment of mass
     */
    Vector3 inline getFirstMomentOfMass() const { return m_st_t_bas; }

protected:

    const Aircraft *m_aircraft; ///< aircraft model main object

    Vector3 m_for_bas;          ///< [N] total force vector expressed in BAS
    Vector3 m_mom_bas;          ///< [N*m] total moment vector expressed in BAS

    Masses m_masses;            ///< variable masses array

    double m_mass_e;            ///< [kg] empty aircraft mass
    double m_mass_t;            ///< [kg] total aircraft mass

    Vector3 m_cm_e_bas;         ///< [m] center of mass (empty) expressed in BAS
    Vector3 m_cm_t_bas;         ///< [m] center of mass (total) expressed in BAS

    Vector3 m_st_t_bas;         ///< [kg*m] first mass moment (total) vector expressed in BAS

    Matrix3x3 m_it_e_bas;       ///< [kg*m^2] inertia tensor (empty)
    Matrix3x3 m_it_t_bas;       ///< [kg*m^2] inertia tensor (total)

    /**
     * Adds variable mass to the total aircraft mass.
     * @param variableMass variable mass component
     */
    virtual void addVariableMass( const VarMass &varMass );

    /**
     * Returns variable mass by name.
     * @param name variable mass name
     * @return channel
     */
    virtual VarMass* getVariableMassByName( const std::string &name );

private:

    /** Using this constructor is forbidden. */
    Mass( const Mass & ) {}
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_MASS_H
