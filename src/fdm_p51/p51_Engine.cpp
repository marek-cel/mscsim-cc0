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

#include <fdm_p51/p51_Engine.h>

#include <fdm/xml/fdm_XmlUtils.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

P51_Engine::P51_Engine() :
    PistonEngine(),

    _compressor ( 0 )
{
    _compressor = new P51_Compressor();
}

////////////////////////////////////////////////////////////////////////////////

P51_Engine::~P51_Engine()
{
    if ( _compressor ) delete _compressor;
    _compressor = 0;
}

////////////////////////////////////////////////////////////////////////////////

void P51_Engine::readData( XmlNode &dataNode )
{
    ///////////////////////////////////
    PistonEngine::readData( dataNode );
    ///////////////////////////////////

    if ( dataNode.isValid() )
    {
        XmlNode nodeCompressor = dataNode.getFirstChildElement( "compressor" );

        _compressor->readData( nodeCompressor );
    }
    else
    {
        Exception e;

        e.setType( Exception::FileReadingError );
        e.setInfo( "Reading XML file failed. " + XmlUtils::getErrorInfo( dataNode ) );

        FDM_THROW( e );
    }
}

////////////////////////////////////////////////////////////////////////////////

void P51_Engine::update( double throttleLever, double mixtureLever, double rpm,
                         double airPressure, double airDensity, double airTemperature,
                         bool fuel, bool starter,
                         bool magneto_l, bool magneto_r )
{
    _compressor->update( airPressure, airDensity, airTemperature, _airFlow, _rpm );

    //std::cout << (_compressor->getPressure() / 100.0) << std::endl;

    ////////////////////////////////////////////////////////////
    PistonEngine::update( throttleLever, mixtureLever, rpm,
                          _compressor->getPressure(),
                          _compressor->getDensity(),
                          fuel, starter, magneto_l, magneto_r );
    ////////////////////////////////////////////////////////////
}

////////////////////////////////////////////////////////////////////////////////

double P51_Engine::getFuelToAirRatio( double mixture, double airDensity )
{
    return mixture * (1.225 / airDensity ) * 0.1;
    //return mixture * (1.5 / airDensity ) * 0.1;
}