/****************************************************************************//*
 * Copyright (C) 2020 Marek M. Cel
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
#ifndef TEST_AERODYNAMICS_H
#define TEST_AERODYNAMICS_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/main/fdm_Aerodynamics.h>


#include <fdm/models/fdm_Stabilizer.h>

#include <fdm_test/test_MainRotor.h>
#include <fdm_test/test_TailRotor.h>
#include <fdm_test/test_Fuselage.h>
#include <fdm_test/test_StabilizerHor.h>
#include <fdm_test/test_StabilizerVer.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

class TEST_Aircraft;    ///< aircraft class forward declaration

/**
 * @brief UH-60 aerodynamics class.
 *
 * @see Howlett J.: UH-60A Black Hawk Engineering Simulation Program. NASA, CR-166309, 1981
 * @see Hilbert K.: A Mathematical Model of the UH-60 Helicopter. NASA, TM-85890, 1984
 */
class TEST_Aerodynamics : public Aerodynamics
{
public:

    /** Constructor. */
    TEST_Aerodynamics( const TEST_Aircraft *aircraft );

    /** Destructor. */
    ~TEST_Aerodynamics();

    /** Initializes aerodynamics. */
    void init();

    /**
     * Reads data.
     * @param dataNode XML node
     */
    void readData( XmlNode &dataNode );

    /** Computes force and moment. */
    void computeForceAndMoment();

    /** Updates model. */
    void update();

    inline const TEST_MainRotor* getMainRotor() const { return _mainRotor; }

private:

    const TEST_Aircraft *_aircraft;     ///< aircraft model main object

    TEST_MainRotor     *_mainRotor;     ///<
    TEST_TailRotor     *_tailRotor;     ///<
    TEST_Fuselage      *_fuselage;      ///<
    TEST_StabilizerHor *_stabHor;       ///<
    TEST_StabilizerVer *_stabVer;       ///<
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // TEST_AERODYNAMICS_H
