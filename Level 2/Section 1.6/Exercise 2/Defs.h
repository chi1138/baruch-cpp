#include <stdio.h>

// guard
#ifndef Defs_H
#define Defs_H

#define MAX2(x,y) (x >= y ? x : y)
#define MAX3(x,y,z) (x >= MAX2(y,z) ? x : z)

#endif