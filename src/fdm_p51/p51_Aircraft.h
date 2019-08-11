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
#ifndef P51_AIRCRAFT_H
#define P51_AIRCRAFT_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/main/fdm_Aircraft.h>

#include <fdm_p51/p51_Aerodynamics.h>
#include <fdm_p51/p51_Controls.h>
#include <fdm_p51/p51_LandingGear.h>
#include <fdm_p51/p51_Mass.h>
#include <fdm_p51/p51_Propulsion.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief P-51 aircraft class.
 *
 * @see Skyhawk Model 172S Specification & Description. Cessna Aircraft Company, 2012
 * @see Information Manual Skyhawk SP. Cessna Aircraft Company, 172SPHBUS-00, 2007
 */
class P51_Aircraft : public Aircraft
{
public:

    /** Constructor. */
    P51_Aircraft( const DataInp *dataInp, DataOut *dataOut );

    /** Destructor. */
    ~P51_Aircraft();

    /** Initializes aircraft. */
    void init( bool engineOn = false );

    /** Updates output data. */
    void updateOutputData();

    inline P51_Aerodynamics* getAero() { return m_aero; }
    inline P51_Controls*     getCtrl() { return m_ctrl; }
    inline P51_LandingGear*  getGear() { return m_gear; }
    inline P51_Mass*         getMass() { return m_mass; }
    inline P51_Propulsion*   getProp() { return m_prop; }

    inline const P51_Aerodynamics* getAero() const { return m_aero; }
    inline const P51_Controls*     getCtrl() const { return m_ctrl; }
    inline const P51_LandingGear*  getGear() const { return m_gear; }
    inline const P51_Mass*         getMass() const { return m_mass; }
    inline const P51_Propulsion*   getProp() const { return m_prop; }

private:

    P51_Aerodynamics *m_aero;   ///< aerodynamics model
    P51_Controls     *m_ctrl;   ///< controls model
    P51_LandingGear  *m_gear;   ///< landing gear model
    P51_Mass         *m_mass;   ///< mass and inertia model
    P51_Propulsion   *m_prop;   ///< propulsion model
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // P51_AIRCRAFT_H
