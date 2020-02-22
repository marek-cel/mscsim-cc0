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
#ifndef TEST_LANDINGGEAR_H
#define TEST_LANDINGGEAR_H

////////////////////////////////////////////////////////////////////////////////

#include <fdm/main/fdm_LandingGear.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

class TEST_Aircraft;    ///< aircraft class forward declaration

/** */
class TEST_LandingGear : public LandingGear
{
public:

    /** Constructor. */
    TEST_LandingGear( const TEST_Aircraft *aircraft );

    /** Destructor. */
    ~TEST_LandingGear();

    /** Initializes landing gear. */
    void init();

    /** Updates model. */
    void update();

private:

    const TEST_Aircraft *_aircraft;     ///< aircraft model main object
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // TEST_LANDINGGEAR_H
