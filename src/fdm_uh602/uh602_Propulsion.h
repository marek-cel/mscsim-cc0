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
#ifndef UH602_PROPULSION_H
#define UH602_PROPULSION_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/main/fdm_Propulsion.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

class UH602_Aircraft;    ///< aircraft class forward declaration

/**
 * @brief UH-60 propulsion class.
 */
class UH602_Propulsion : public Propulsion
{
public:

    /** Constructor. */
    UH602_Propulsion( const UH602_Aircraft *aircraft );

    /** Destructor. */
    ~UH602_Propulsion();

    /**
     * Initializes propulsion.
     * @param engineOn specifies if engine is working at start
     */
    void init( bool engineOn );

    /**
     * Reads data.
     * @param dataNode XML node
     */
    void readData( XmlNode &dataNode );

    /** Computes force and moment. */
    void computeForceAndMoment();

    /** Updates model. */
    void update();

    inline double getMainRotorPsi() const { return _mainRotorPsi; }
    inline double getTailRotorPsi() const { return _tailRotorPsi; }

    inline double getMainRotorOmega() const { return _mainRotorOmega; }
    inline double getTailRotorOmega() const { return _tailRotorOmega; }

private:

    const UH602_Aircraft *_aircraft;     ///< aircraft model main object

    double _mainRotorPsi;               ///< [rad]
    double _tailRotorPsi;               ///< [rad]

    double _mainRotorOmega;             ///< [rad/s]
    double _tailRotorOmega;             ///< [rad/s]
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // UH602_PROPULSION_H
