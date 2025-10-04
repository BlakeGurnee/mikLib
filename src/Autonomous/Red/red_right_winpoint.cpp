#include "vex.h"

using namespace vex;
using namespace mik;

std::string red_right_winpoint(bool calibrate, mik::auto_variation var, bool get_name)
{
    if (get_name)
    {
        return "red right winpoint";
    }
    if (calibrate)
    {
        chassis.set_coordinates(-40, 0, 90);
        Red_Alliance = true;

        return "";
    }
    odom_constants();
    chassis.turn_to_point(-23.2, -22.5);

    assembly.intake_motors.spin(fwd, 12, volt);
    chassis.drive_to_point(-23.2, -22.5);
    wait(.3, sec);

    chassis.turn_to_point(-11.1, -10.8);
    assembly.intake_motors.spin(fwd, -12, volt);
    wait(1, sec);

    chassis.drive_to_point(-23.2, -22.5);

    chassis.turn_to_point(-46.8, -47.5, {.angle_offset = 180});

    assembly.intake_motors.stop();

    chassis.drive_to_point(-46.8, -47.5);

    chassis.turn_to_point(-61.2, -47.4);

    assembly.intake_motors.spin(fwd, 12, volt);
    chassis.drive_distance(30, {.max_voltage = 6, .timeout = 1000});

    chassis.turn_to_point(-29.8, -47.5, {.angle_offset = 180});
    chassis.drive_to_point(-29.8, -47.5);
    assembly.intake_motors.spin(fwd, -12, volt);
    return "";
}