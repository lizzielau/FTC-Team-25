#pragma config(StandardModel, "teddy")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#define RIGHT_HOPPER_DOWN 129
#define LEFT_HOPPER_DOWN  110
#define ROTATION          90
#define LEFT_HOPPER_UP LEFT_HOPPER_DOWN + ROTATION
#define RIGHT_HOPPER_UP RIGHT_HOPPER_DOWN - ROTATION

task main()
{
	servo[leftHopper] = LEFT_HOPPER_UP;
	servo[rightHopper] = RIGHT_HOPPER_UP;

    while (1) {}
}
