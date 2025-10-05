#pragma once

#include "vex.h"

using namespace vex;

class Assembly
{
public:
    Assembly(
        mik::motor_group intake_motors,
        mik::motor top_intake_motor2,
        vex::optical optical_sensor,
        mik::piston matchload_piston);

    void init();
    void control();

    void intake_motors_control();
    void matchload_piston_control();
    void color_sort_control();

    mik::motor_group intake_motors;
    mik::motor top_intake_motor2;
    vex::optical optical_sensor;
    mik::piston matchload_piston;
};