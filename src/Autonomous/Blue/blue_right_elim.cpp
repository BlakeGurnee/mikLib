#include "vex.h"

using namespace vex;
using namespace mik;

std::string blue_right_elim(bool calibrate, mik::auto_variation var, bool get_name) {
    chassis.mirror_all_auton_x_pos();
    if (get_name) { return "blue right elim"; }
    if (calibrate) {
        red_left_elim(calibrate, var, get_name);

        return "";
    }
    red_left_elim(calibrate, var, get_name);

    return "";
}
