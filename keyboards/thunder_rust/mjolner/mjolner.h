
#pragma once

#include "quantum.h"

#define LAYOUT( \
    kA1, kA2, kA3, kA4, kA5, kA6, kA7, kA8, kA9, kA10, kA11, kA12, kA13, kD13, \
    kB1, kB2, kB3, kB4, kB5, kB6, kB7, kB8, kB9, kB10, kB11, kB12, kB13, kE13, \
    kC1, kC2, kC3, kC4, kC5, kC6, kC7, kC8, kC9, kC10, kC11, kC12, kC13, \
    kD1, kD2, kD3, kD4, kD5, kD6, kD7, kD8, kD9, kD10, kD11, kD12, \
         kE2, kE3, kE4, kE5, kE6, kE7, kE8, kE9, kE10, kE11 \
) \
{ \
    { kA1, kA2, kA3, kA4, kA5, kA6, kA7, kA8, kA9, kA10, kA11, kA12, kA13}, \
    { kB1, kB2, kB3, kB4, kB5, kB6, kB7, kB8, kB9, kB10, kB11, kB12, kB13}, \
    { kC1, kC2, kC3, kC4, kC5, kC6, kC7, kC8, kC9, kC10, kC11, kC12, kC13}, \
    { kD1, kD2, kD3, kD4, kD5, kD6, kD7, kD8, kD9, kD10, kD11, kD12, kD13}, \
    { KC_NO, kE2, kE3, kE4, kE5, kE6, kE7, kE8, kE9, kE10, kE11, KC_NO, kE13} \
}
