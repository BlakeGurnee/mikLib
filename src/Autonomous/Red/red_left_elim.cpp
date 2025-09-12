#include "vex.h"

using namespace vex;
using namespace mik;

std::string red_left_elim(bool calibrate, mik::auto_variation var, bool get_name) { 
    chassis.mirror_all_auton_y_pos();
    if (get_name) { return "red left elim"; }
    if (calibrate) {
        red_right_elim(calibrate, var, get_name);
        
        return "";
    }
    red_right_elim(calibrate, var, get_name);

    return "";
}