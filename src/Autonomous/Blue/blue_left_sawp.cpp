#include "vex.h"

using namespace vex;
using namespace mik;

std::string blue_left_sawp(bool calibrate, mik::auto_variation var, bool get_name)
{
    if (get_name)
    {
        return "blue left sawp";
    }
    if (calibrate)
    {
        chassis.set_coordinates(0, 0, 0);
        Red_Alliance = false;
        return "";
    }

    return "";
}