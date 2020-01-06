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
#ifndef UH602_STABILIZERHOR_H
#define UH602_STABILIZERHOR_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/models/fdm_Stabilizer.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief UH-60 horizontal stabilizer class.
 */
class UH602_StabilizerHor : public Stabilizer
{
public:

    /** Constructor. */
    UH602_StabilizerHor();

    /** Destructor. */
    ~UH602_StabilizerHor();

    /**
     * Computes force and moment.
     * @param vel_air_bas [m/s] aircraft linear velocity relative to the air expressed in BAS
     * @param omg_air_bas [rad/s] aircraft angular velocity relative to the air expressed in BAS
     * @param airDensity [kg/m^3] air density
     * @param angleOfAttackWing [rad] wing angle of attack
     * @param elevator [rad] elevator deflection
     * @param elevatorTrim [rad] elevator trim deflection
     */
    void computeForceAndMoment( const Vector3 &vel_air_bas,
                                const Vector3 &omg_air_bas,
                                double airDensity,
                                double elevator );

private:

    double _elevator;               ///< [rad] elevator deflection

    double getAngleOfAttack( const Vector3 &vel_air_bas, double wingAngleOfAttack );
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // UH602_STABILIZERHOR_H
