#include "vex.h"

using namespace vex;
using namespace mik;

std::string blue_right_winpoint(bool calibrate, mik::auto_variation var, bool get_name) {
    chassis.mirror_all_auton_x_pos();
    if (get_name) { return "blue right winpoint(4+3)"; }
    if (calibrate) {
        red_left_winpoint(calibrate, var, get_name);

        return "";
    }
    red_left_winpoint(calibrate, var, get_name);

    return "";
}