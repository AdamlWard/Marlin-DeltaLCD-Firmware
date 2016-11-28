#include "Marlin.h"

#ifdef USE_PROBEDEPLOY
#include "ProbeDeploy.h"

#include "ultralcd.h"
#include "planner.h"
#include "stepper.h"
#include "temperature.h"
#include "motion_control.h"
#include "cardreader.h"
#include "watchdog.h"
#include "ConfigurationStore.h"
#include "language.h"

//===========================================================================
//=============================private variables  ============================
//===========================================================================

//===========================================================================
//=============================functions         ============================
//===========================================================================

//void deploy_z_probe() { 
//	// AW: custom deploy
//	feedrate = homing_feedrate[X_AXIS];
//	destination[X_AXIS] = 20;
//	destination[Y_AXIS] = 90;
//	destination[Z_AXIS] = 50;
//	prepare_move_raw();
//
//	// use belt to release probe
//	feedrate = homing_feedrate[X_AXIS] / 10;
//	destination[X_AXIS] = 0;
//	prepare_move_raw();
//
//	// move effector away from belt
//	feedrate = homing_feedrate[X_AXIS];
//	destination[Y_AXIS] = current_position[Y_AXIS] - 40;
//	prepare_move_raw();
//	st_synchronize();
//}
//
//
//void retract_z_probe() {
//	// AW: custom retract
//	// Move probe to retraction post.
//	feedrate = homing_feedrate[X_AXIS];
//	destination[Z_AXIS] = current_position[Z_AXIS] + 60;
//	prepare_move_raw();
//
//	destination[X_AXIS] = 0;
//	destination[Y_AXIS] = 80;
//	destination[Z_AXIS] = 30;
//	prepare_move_raw();
//
//	// Move the effector down to push the probe up. (need to compensate for probe's offset in distance)
//	feedrate = homing_feedrate[Z_AXIS] / 10;
//	destination[Z_AXIS] = current_position[Z_AXIS] - 15;
//	prepare_move_raw();
//
//	// Lift effector away from retraction post.
//	feedrate = homing_feedrate[X_AXIS];
//	destination[Z_AXIS] = current_position[Z_AXIS] + 10;
//	prepare_move_raw();
//
//	// Move effector to above hold position.
//	feedrate = homing_feedrate[Y_AXIS];
//	destination[Y_AXIS] = 70;
//	prepare_move_raw();
//
//	// Try again because sometimes the last move doesn't flush properly.
//	destination[Y_AXIS] = current_position[Y_AXIS] + 0.0;
//	prepare_move_raw();
//
//	// Move head to *almost* rest on bed. Prevents drip while heating up and helps with priming.
//	feedrate = homing_feedrate[X_AXIS] / 3;
//	destination[Z_AXIS] = 0.1;
//	prepare_move_raw();
//	st_synchronize();
//}


#endif//USE_PROBEDEPLOY
