#include "vex.h"

using namespace vex;
using namespace mik;

std::string blue_right_winpoint(bool calibrate, mik::auto_variation var, bool get_name)
{
    chassis.mirror_all_auton_x_pos();
<<<<<<< HEAD
    if (get_name)
    {
        return "blue right winpoint(4+3)";
    }
    if (calibrate)
    {
        red_right_winpoint(calibrate, var, get_name);
        Red_Alliance = false;
=======
    if (get_name) { return "blue right winpoint(4+3)"; }
    if (calibrate) {
        red_left_winpoint(calibrate, var, get_name);

>>>>>>> 2f0bba7f6a152f5a74f97abdeeba10c2860119a7
        return "";
    }
    red_left_winpoint(calibrate, var, get_name);

    return "";
}