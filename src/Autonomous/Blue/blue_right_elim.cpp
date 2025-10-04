#include "vex.h"

using namespace vex;
using namespace mik;

<<<<<<< HEAD
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
=======
std::string blue_right_elim(bool calibrate, mik::auto_variation var, bool get_name) {
    chassis.mirror_all_auton_x_pos();
    if (get_name) { return "blue right elim"; }
    if (calibrate) {
        red_left_elim(calibrate, var, get_name);

>>>>>>> 2f0bba7f6a152f5a74f97abdeeba10c2860119a7
        return "";
    }
    red_left_elim(calibrate, var, get_name);

    return "";
}
