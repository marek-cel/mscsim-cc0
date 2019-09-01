/****************************************************************************//*
 * Copyright (C) 2019 Marek M. Cel
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 ******************************************************************************/

#include <fdm_p51/p51_LandingGear.h>
#include <fdm_p51/p51_Aircraft.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

P51_LandingGear::P51_LandingGear( const P51_Aircraft *aircraft ) :
    LandingGear( aircraft ),
    _aircraft ( aircraft )
{}

////////////////////////////////////////////////////////////////////////////////

P51_LandingGear::~P51_LandingGear() {}

////////////////////////////////////////////////////////////////////////////////

void P51_LandingGear::init()
{
    Wheel *wheel_l = getWheelByName( "wheel_l" );
    Wheel *wheel_r = getWheelByName( "wheel_r" );
    Wheel *wheel_t = getWheelByName( "wheel_t" );

    if ( 0 != wheel_l
      && 0 != wheel_r
      && 0 != wheel_t )
    {
        wheel_l->input = &_aircraft->getDataInp()->controls.landing_gear;
        wheel_r->input = &_aircraft->getDataInp()->controls.landing_gear;
        wheel_t->input = &_aircraft->getDataInp()->controls.landing_gear;
    }
    else
    {
        Exception e;

        e.setType( Exception::UnknownException );
        e.setInfo( "Obtaining wheels failed." );

        FDM_THROW( e );
    }

    ////////////////////
    LandingGear::init();
    ////////////////////
}

////////////////////////////////////////////////////////////////////////////////

void P51_LandingGear::update()
{
    //////////////////////
    LandingGear::update();
    //////////////////////

    _brake_l = _aircraft->getCtrl()->getBrakeL();
    _brake_r = _aircraft->getCtrl()->getBrakeR();

    _ctrlAngle = 0.0;

    _antiskid = _aircraft->getDataInp()->controls.antiskid;
    _steering = _aircraft->getDataInp()->controls.nw_steering;
}
