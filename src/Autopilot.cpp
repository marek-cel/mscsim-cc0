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

#include <Autopilot.h>

#include <Data.h>

#include <fdm/fdm_Exception.h>
#include <fdm/utils/fdm_Units.h>

#include <hid/hid_Manager.h>

#include <sim/Log.h>

////////////////////////////////////////////////////////////////////////////////

Autopilot::Autopilot() :
    _autopilot ( NULLPTR ),

    _c172_gfc700_ap ( NULLPTR ),
    _c172_kap140_ap ( NULLPTR ),
    _c172_kfc325_ap ( NULLPTR ),

    _altitude  ( 100.0 ),
    _climbRate (   0.0 )
{}

////////////////////////////////////////////////////////////////////////////////

Autopilot::~Autopilot()
{
    DELPTR( _autopilot );
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::init()
{
    try
    {
        if ( !_autopilot )
        {
            switch ( Data::get()->aircraftType )
            {
            case fdm::DataInp::C172:
                //_autopilot = _c172_gfc700_ap = new fdm::C172_GFC700_AP();
                //_autopilot = _c172_kap140_ap = new fdm::C172_KAP140_AP();
                _autopilot = _c172_kfc325_ap = new fdm::C172_KFC325_AP();
                break;

            default:
                _autopilot = NULLPTR;
                break;
            }

            if ( _autopilot ) _autopilot->initialize();
        }
    }
    catch ( fdm::Exception &e )
    {
        Log::e() << e.getInfo() << std::endl;

        while ( e.hasCause() )
        {
            e = e.getCause();
            Log::e() << e.getInfo() << std::endl;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::stop()
{
    DELPTR( _autopilot );

    _c172_gfc700_ap = NULLPTR;
    _c172_kap140_ap = NULLPTR;
    _c172_kfc325_ap = NULLPTR;
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::update( double timeStep )
{
    if ( _autopilot )
    {
        if ( _c172_kfc325_ap )
        {
            _c172_kfc325_ap->setHeadingILS( Data::get()->navigation.ils_heading );
        }

        _autopilot->update( timeStep,
                            Data::get()->ownship.roll,
                            Data::get()->ownship.pitch,
                            Data::get()->ownship.heading,
                            Data::get()->ownship.altitude_asl,
                            Data::get()->ownship.ias,
                            Data::get()->ownship.turnRate,
                            Data::get()->ownship.yawRate,
                            Data::get()->ownship.climbRate,
                            Data::get()->navigation.dme_distance,
                            Data::get()->navigation.nav_deviation,
                            Data::get()->navigation.nav_cdi != Data::Navigation::NONE,
                            Data::get()->navigation.ils_lc_deviation,
                            Data::get()->navigation.ils_lc_visible,
                            Data::get()->navigation.ils_gs_deviation,
                            Data::get()->navigation.ils_gs_visible );

        if ( hid::Manager::instance()->getAP_Disc() )
        {
            _autopilot->disengage();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::update( double timeStep, bool btn_dn, bool btn_up )
{
    if ( _c172_kfc325_ap ) _c172_kfc325_ap->update( timeStep, btn_dn, btn_up );
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedAP()
{
    if ( isWorking() )
    {
        if ( _c172_gfc700_ap ) _c172_gfc700_ap->onPressedAP();
        if ( _c172_kap140_ap ) _c172_kap140_ap->onPressedAP();
        if ( _c172_kfc325_ap ) _c172_kfc325_ap->onPressedAP();
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedFD()
{
    if ( isWorking() )
    {
        // GFC 700
        if ( _c172_gfc700_ap )
        {
            if ( !_c172_gfc700_ap->isActiveFD() )
            {
                _c172_gfc700_ap->setPitch( Data::get()->ownship.pitch );
                _c172_gfc700_ap->setRoll( Data::get()->ownship.roll );
            }

            _c172_gfc700_ap->onPressedFD();
        }

        // KAP 140
        if ( _c172_kap140_ap )
        {
            if ( !_c172_kap140_ap->isActiveFD() )
            {
                _c172_kap140_ap->setPitch( Data::get()->ownship.pitch );
            }

            _c172_kap140_ap->onPressedFD();
        }

        // KFC 325
        if ( _c172_kfc325_ap )
        {
            if ( !_c172_kfc325_ap->isActiveFD() )
            {
                _c172_kfc325_ap->setPitch( Data::get()->ownship.pitch );
            }

            _c172_kfc325_ap->onPressedFD();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedALT()
{
    if ( isWorking() )
    {
        // GFC 700
        if ( _c172_gfc700_ap )
        {
            // TODO
        }

        // KFC 325
        if ( _c172_kfc325_ap )
        {
            if ( !_c172_kfc325_ap->isActiveALT() )
                _altitude = Data::get()->ownship.altitude_asl;

            _c172_kfc325_ap->setAltitude( _altitude );
            _c172_kfc325_ap->onPressedALT();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedIAS()
{
    if ( isWorking() )
    {
        // KFC 325
        if ( _c172_kfc325_ap )
        {
            if ( !_c172_kfc325_ap->isActiveIAS() )
                _c172_kfc325_ap->setAirspeed( Data::get()->ownship.ias );

            _c172_kfc325_ap->onPressedIAS();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedENG()
{
    if ( isWorking() )
    {
        // KFC 325
        if ( _c172_kfc325_ap )
        {
            if ( !_c172_kfc325_ap->isActiveVS() )
            {
                _climbRate = Data::get()->ownship.climbRate;
            }

            _c172_kfc325_ap->setClimbRate( _climbRate );
            _c172_kfc325_ap->onPressedENG();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedARM()
{
    if ( isWorking() )
    {
        // KFC 325
        if ( _c172_kfc325_ap )
        {
            if ( !_c172_kfc325_ap->isActiveARM() )
            {
                _altitude = Data::get()->ownship.altitude_asl;
            }

            _c172_kfc325_ap->setAltitude( _altitude );
            _c172_kfc325_ap->onPressedARM();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedVNV()
{
    if ( isWorking() )
    {
        // GFC 700
        if ( _c172_gfc700_ap )
        {

        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedFLC()
{
    if ( isWorking() )
    {
        // GFC 700
        if ( _c172_gfc700_ap )
        {
            // TODO
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedVS()
{
    if ( isWorking() )
    {
        // GFC 700
        if ( _c172_gfc700_ap )
        {
            // TODO
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedHDG( double hdg )
{
    if ( isWorking() )
    {
        // GFC 700
        if ( _c172_gfc700_ap )
        {
            // TODO
        }

        // KFC 325
        if ( _c172_kfc325_ap )
        {
            if ( !_c172_kfc325_ap->isActiveFD() )
                _c172_kfc325_ap->setPitch( Data::get()->ownship.pitch );

            _c172_kfc325_ap->setHeading( hdg );
            _c172_kfc325_ap->onPressedHDG();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedNAV( double crs )
{
    if ( isWorking() )
    {
        // GFC 700
        if ( _c172_gfc700_ap )
        {
            // TODO
        }

        // KFC 325
        if ( _c172_kfc325_ap )
        {
            if ( !_c172_kfc325_ap->isActiveFD() )
                _c172_kfc325_ap->setPitch( Data::get()->ownship.pitch );

            _c172_kfc325_ap->setCourse( crs );
            _c172_kfc325_ap->onPressedNAV();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedAPR()
{
    if ( isWorking() )
    {
        // GFC 700
        if ( _c172_gfc700_ap )
        {
            // TODO
        }

        // KFC 325
        if ( _c172_kfc325_ap )
        {
            if ( !_c172_kfc325_ap->isActiveFD() )
                _c172_kfc325_ap->setPitch( Data::get()->ownship.pitch );

            _c172_kfc325_ap->onPressedAPR();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedBC()
{
    if ( isWorking() )
    {
        // GFC 700
        if ( _c172_gfc700_ap )
        {
            // TODO
        }

        // KFC 325
        if ( _c172_kfc325_ap )
        {
            if ( !_c172_kfc325_ap->isActiveFD() )
                _c172_kfc325_ap->setPitch( Data::get()->ownship.pitch );

            _c172_kfc325_ap->onPressedBC();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedREV()
{
    if ( isWorking() )
    {
        // KAP 140
        if ( _c172_kap140_ap )
        {

        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedYD()
{
    if ( isWorking() )
    {
        if ( _c172_kfc325_ap ) _c172_kfc325_ap->onPressedYD();
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedSoftRide()
{
    if ( isWorking() )
    {
        if ( _c172_kfc325_ap ) _c172_kfc325_ap->onPressedSoftRide();
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedHalfBank()
{
    if ( isWorking() )
    {
        if ( _c172_kfc325_ap ) _c172_kfc325_ap->onPressedHalfBank();
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onPressedTest()
{
    if ( isWorking() )
    {
        if ( _c172_kfc325_ap ) _c172_kfc325_ap->onPressedTest();
    }
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::onReleasedTest()
{
    if ( isWorking() )
    {
        if ( _c172_kfc325_ap ) _c172_kfc325_ap->onReleasedTest();
    }
}

////////////////////////////////////////////////////////////////////////////////

double Autopilot::getAirspeed() const
{
    if ( _autopilot ) return _autopilot->getAirspeed();

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

double Autopilot::getAltitude() const
{
    if ( _autopilot ) return _autopilot->getAltitude();

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

double Autopilot::getClimbRate() const
{
    if ( _autopilot ) return _autopilot->getClimbRate();

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

double Autopilot::getHeading() const
{
    if ( _autopilot ) return _autopilot->getHeading();

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

double Autopilot::getCmdRoll() const
{
    if ( _autopilot ) return _autopilot->getCmdRoll();

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

double Autopilot::getCmdPitch() const
{
    if ( _autopilot ) return _autopilot->getCmdPitch();

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

double Autopilot::getCtrlRoll() const
{
    if ( _autopilot ) return _autopilot->getCtrlRoll();

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

double Autopilot::getCtrlPitch() const
{
    if ( _autopilot ) return _autopilot->getCtrlPitch();

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

double Autopilot::getCtrlYaw() const
{
    if ( _autopilot ) return _autopilot->getCtrlYaw();

    return 0.0;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::getLampAP() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->getLampAP();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::getLampFD() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->getLampFD();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::getLampYD() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->getLampYD();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::getLampALT() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->getLampALT();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::getLampIAS() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->getLampIAS();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::getLampGS()  const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->getLampGS();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::getLampHDG() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->getLampHDG();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::getLampNAV() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->getLampNAV();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::getLampAPR() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->getLampAPR();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::getLampBC() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->getLampBC();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::getLampNAV_ARM() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->getLampNAV_ARM();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::getLampAPR_ARM() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->getLampAPR_ARM();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::getLampSR() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->getLampSR();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::getLampHB() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->getLampHB();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::getLampTRIM() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->getLampTRIM();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::getLampVS() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->getLampVS();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::getLampARM() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->getLampARM();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

double Autopilot::getMinAltitude() const
{
    if ( _autopilot ) return _autopilot->getMinAltitude();

    return 100.0;
}

////////////////////////////////////////////////////////////////////////////////

double Autopilot::getMaxAltitude() const
{
    if ( _autopilot ) return _autopilot->getMaxAltitude();

    return 50000.0;
}

////////////////////////////////////////////////////////////////////////////////

double Autopilot::getMinClimbRate() const
{
    if ( _autopilot ) return _autopilot->getMinClimbRate();

    return -5000.0;
}

////////////////////////////////////////////////////////////////////////////////

double Autopilot::getMaxClimbRate() const
{
    if ( _autopilot ) return _autopilot->getMaxClimbRate();

    return  5000.0;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::isActiveAP() const
{
    if ( _autopilot ) return _autopilot->isActiveAP();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::isActiveFD() const
{
    if ( _autopilot ) return _autopilot->isActiveFD();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::isActiveYD() const
{
    if ( _autopilot ) return _autopilot->isActiveYD();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::isActiveALT() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->isActiveALT();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::isActiveIAS() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->isActiveIAS();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::isActiveVS() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->isActiveVS();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::isActiveARM() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->isActiveARM();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::isActiveGS() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->isActiveGS();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::isActiveHDG() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->isActiveHDG();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::isActiveNAV() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->isActiveNAV();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::isActiveAPR() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->isActiveAPR();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::isActiveBC() const
{
    if ( _c172_kfc325_ap ) return _c172_kfc325_ap->isActiveBC();

    return false;
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::isInited() const
{
    return ( _autopilot != NULLPTR );
}

////////////////////////////////////////////////////////////////////////////////

bool Autopilot::isWorking() const
{
    return ( Data::get()->stateOut == fdm::DataOut::Working );
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::setAltitude( double altitude )
{
    _altitude = altitude;

    if ( _autopilot ) _autopilot->setAltitude( _altitude );
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::setClimbRate( double climbRate )
{
    _climbRate = climbRate;

    if ( _autopilot ) _autopilot->setClimbRate( _climbRate );
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::setCourse( double course )
{
    if ( _autopilot ) _autopilot->setCourse( course );
}

////////////////////////////////////////////////////////////////////////////////

void Autopilot::setHeading( double heading )
{
    if ( _autopilot ) _autopilot->setHeading( heading );
}
