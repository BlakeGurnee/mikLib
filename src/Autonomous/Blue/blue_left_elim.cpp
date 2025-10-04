#include "vex.h"

using namespace vex;
using namespace mik;

std::string blue_left_elim(bool calibrate, mik::auto_variation var, bool get_name)
{
    if (get_name)
    {
        return "blue left elim";
    }
    if (calibrate)
    {
        chassis.set_coordinates(0, 0, 0);
        Red_Alliance = false;
        return "";
    }
    blue_right_elim(calibrate, var, get_name);

    return "";
}