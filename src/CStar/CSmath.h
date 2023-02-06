#ifndef CSMATH
#define CSMATH

#include <CStype.h>
#include <CSfunc.h>
#include <stdio.h>
#include <math.h>

/***
 * Copyright (c) 2022-2023 Greenbear. All Rights Reserved.
*/

float Pi = 3.14159265;

int Sqrt(int* number)
{
    float result = sqrt(number);
    return printf("%f", result);
}

#endif
