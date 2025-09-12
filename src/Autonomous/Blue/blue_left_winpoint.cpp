#include "vex.h"

using namespace vex;
using namespace mik;

std::string blue_left_winpoint(bool calibrate, mik::auto_variation var, bool get_name) {
    chassis.mirror_all_auton_y_pos();
    if (get_name) { return "blue left winpoint"; }
    if (calibrate) {
        blue_right_winpoint(calibrate, var, get_name);

        return "";
    }
    blue_right_winpoint(calibrate, var, get_name);

    return "";
}