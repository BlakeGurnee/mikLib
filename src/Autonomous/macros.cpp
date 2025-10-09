#include "vex.h"

using namespace vex;
using namespace mik;

/*
void intake_block_halfway()
{
    assembly.intake_motor.spin(fwd, 10, volt);
    vex::task intake_block_halfway_task([]()
                                       {
        vex::distance d(PORT12);
        int timeout_start = Brain.Timer.time(vex::timeUnits::sec);
        while (1) {
            if (d.objectDistance(mm) < 50) {
                assembly.intake_motor.stop(brake);
                break;
            }
            if (Brain.Timer.time(vex::timeUnits::sec) - timeout_start > 5) {
                break;
            }
            vex::this_thread::sleep_for(50);

        }
        return 0; });
}
*/

void intake_forward()
{
    assembly.intake_motors.spin(fwd, 12, volt);
    assembly.top_intake_motor2.spin(fwd, 12, volt);
}

void stop_intake()
{
    assembly.intake_motors.stop(brake);
    assembly.top_intake_motor2.stop(brake);
}

void intake_reverse()
{
    assembly.intake_motors.spin(fwd, -12, volt);
    assembly.top_intake_motor2.spin(fwd, -12, volt);
}
