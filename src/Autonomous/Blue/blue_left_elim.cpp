#include "vex.h"

using namespace vex;
using namespace mik;

<<<<<<< HEAD
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
=======
std::string blue_left_elim(bool calibrate, mik::auto_variation var, bool get_name) {   
    chassis.mirror_all_auton_y_pos();
    if (get_name) { return "blue left elim"; }
    if (calibrate) {
      	blue_right_elim(calibrate, var, get_name);

      	return "";
>>>>>>> 2f0bba7f6a152f5a74f97abdeeba10c2860119a7
    }
    blue_right_elim(calibrate, var, get_name);

    return "";
}