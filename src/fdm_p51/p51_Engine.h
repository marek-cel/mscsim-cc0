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
#ifndef P51_ENGINE_H
#define P51_ENGINE_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/models/fdm_PistonEngine.h>

#include <fdm_p51/p51_Compressor.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief P-51 engine class.
 */
class P51_Engine : public PistonEngine
{
public:

    /** Constructor. */
    P51_Engine();

    /** Destructor. */
    virtual ~P51_Engine();

    /**
     * Reads data.
     * @param dataNode XML node
     */
    void readData( XmlNode &dataNode );

    /**
     * Updates engine.
     * @param throttleLever [0.0,1.0] throttle lever position
     * @param mixtureLever [0.0,1.0] mixture lever position
     * @param rpm [rpm] engine rpm
     * @param airPressure [Pa] air pressure
     * @param airDensity [kg/m^3] air density
     * @param airTemperature [K] air temperature
     * @param fuel specifies if fuel is provided
     * @param starter specifies if starter is enabled
     * @param magneto_l specifies if left magneto is enabled
     * @param magneto_r specifies if right magneto is enabled
     */
    void update( double throttleLever, double mixtureLever, double rpm,
                 double airPressure, double airDensity, double airTemperature,
                 bool fuel, bool starter,
                 bool magneto_l = true, bool magneto_r = true );

private:

    P51_Compressor *_compressor;    ///< compressor model

    /**
     * Computes fuel to air ratio.
     * @param mixture [-] mixture
     * @param airDensity [kg/m^3] air density
     * @return [-] fuel to air ratio
     */
    double getFuelToAirRatio( double mixture, double airDensity );
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // P51_ENGINE_H
