#include "vex.h"

using namespace vex;
using namespace mik;

std::string blue_right_elim(bool calibrate, mik::auto_variation var, bool get_name)
{
    if (get_name)
    {
        return "blue right elim";
    }
    if (calibrate)
    {
        chassis.set_coordinates(0, 0, 0);
        Red_Alliance = false;
        return "";
    }
    red_left_elim(calibrate, var, get_name);

    return "";
}
