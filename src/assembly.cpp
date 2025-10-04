#include "vex.h"

using namespace vex;

bool Red_Alliance = true;

// Pass in the devices we want to use
Assembly::Assembly(
    mik::motor_group intake_motors,
    mik::motor top_intake_motor2,
    vex::optical optical_sensor,
    mik::piston long_piston) : // Assign the ports to the devices
                               intake_motors(intake_motors),
                               top_intake_motor2(top_intake_motor2),
                               optical_sensor(optical_sensor),
                               long_piston(long_piston) // Make sure when using a 3 wire device that isnt mik::piston you convert the port. `to_triport(PORT_A)`.
{};

// You want to call this function once in the user control function in main.
void Assembly::init()
{
    optical_sensor.setLightPower(100, percent); // Turn on optical sensor light
    optical_sensor.setLight(vex::ledState::on);
}

// You want to put this function inside the user control loop in main.
void Assembly::control()
{
    intake_motors_control();
    long_piston_control();
    color_sort_control();
}

int intakeState = 0;
// 0 = stopped, 1 = forward, -1 = reverse

void Assembly::intake_motors_control()
{
    // Forward intake
    if (btnUp_new_press(Controller.ButtonUp.pressing()))
    {
        intakeState = 1;
    }

    // Reverse intake
    if (btnDown_new_press(Controller.ButtonDown.pressing()))
    {
        intakeState = -1;
    }

    // Stop intake
    if (btnRight_new_press(Controller.ButtonRight.pressing()))
    {
        intakeState = 0;
    }

    // Apply motor command based on state
    if (intakeState == 1)
    {
        assembly.intake_motors.spin(fwd, -12, volt);
    }
    else if (intakeState == -1)
    {
        assembly.intake_motors.spin(fwd, 12, volt);
    }
    else
    {
        assembly.intake_motors.stop(brake);
    }
}

// Extends or retracts piston when button A is pressed, can only extend or retract again until button A is released and pressed again
void Assembly::long_piston_control()
{
    if (btnR1_new_press(Controller.ButtonR1.pressing()))
    {
        long_piston.toggle();
    }
}

// Color sorting logic
void Assembly::color_sort_control()
{
    // Only run color sorting if intake is spinning forward
    if (intakeState == 1)
    {
        vex::color detectedColor = optical_sensor.color();
        bool correctColor = false;

        if (Red_Alliance == true && detectedColor == vex::color::red)
        {
            correctColor = true;
        }
        else if (Red_Alliance == false && detectedColor == vex::color::blue)
        {
            correctColor = true;
        }
        if (correctColor)
        {
            top_intake_motor2.spin(fwd, 12, volt);
        }
        else
        {
            top_intake_motor2.spin(fwd, -12, volt);
        }
    }
    else
    {
        // Intake stopped or reversed, stop color sort motor
        top_intake_motor2.stop(brake);
    }
}
