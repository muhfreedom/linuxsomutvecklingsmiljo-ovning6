/*
 * libpower.c - Victor Zamora Cruz
 * Bibliotek för att beräkna den totala effektutvecklingen
 * i en krets.
 */

#include <stdio.h>
#include "power.h"

float calc_power_r(float volt, float resistance)
{
    float power;
    power = volt * volt / resistance;
    return power;
}

float calc_power_i(float volt, float current)
{
    float power;
    power = volt * current;
    return power;
}
