#include "vex.h"

using namespace vex;
using namespace mik;

<<<<<<< HEAD
std::string red_right_elim(bool calibrate, mik::auto_variation var, bool get_name)
{
    if (get_name)
    {
        return "red right elim";
    }
    if (calibrate)
    {
        chassis.set_coordinates(0, 0, 0);
        Red_Alliance = true;
=======
std::string red_right_elim(bool calibrate, mik::auto_variation var, bool get_name) {   
    if (get_name) { return "red right elim"; }
    if (calibrate) {
        chassis.set_coordinates(-40, 0, 90);

>>>>>>> 2f0bba7f6a152f5a74f97abdeeba10c2860119a7
        return "";
    }
    odom_constants();

    assembly.intake_motor.spin(fwd, 12, volt);
    chassis.drive_to_point(-23.2, -22.5);
    wait(.3, sec);

    chassis.drive_to_point(-3.838, -47.481);
    wait(.3, sec);

    chassis.turn_to_point(-24.54, -38.055);
    chassis.drive_to_point(-24.54, -38.055);

    chassis.drive_to_point(-47.635, -47.445);

    chassis.turn_to_point(-26.063, -47.191);
    chassis.drive_to_point(-26.063, -47.191);
    wait(.5, sec);

    chassis.turn_to_point(-60.578, -47.699, {.angle_offset = 180});
    chassis.drive_to_point(-60.578, -47.699);
    wait(1, sec);

    chassis.turn_to_point(-26.063, -47.191, {.angle_offset = 180});
    return "";
}