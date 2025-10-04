#include "vex.h"

using namespace vex;
using namespace mik;

<<<<<<< HEAD
std::string blue_left_winpoint(bool calibrate, mik::auto_variation var, bool get_name)
{
    chassis.mirror_all_auton_x_pos();
    if (get_name)
    {
        return "blue left winpoint";
    }
    if (calibrate)
    {
=======
std::string blue_left_winpoint(bool calibrate, mik::auto_variation var, bool get_name) {
    chassis.mirror_all_auton_y_pos();
    if (get_name) { return "blue left winpoint"; }
    if (calibrate) {
>>>>>>> 2f0bba7f6a152f5a74f97abdeeba10c2860119a7
        blue_right_winpoint(calibrate, var, get_name);
        Red_Alliance = false;
        return "";
    }
    blue_right_winpoint(calibrate, var, get_name);

    return "";
}