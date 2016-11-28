// ProbeDeploy.h

#ifndef _PROBEDEPLOY_h
#define _PROBEDEPLOY_h

#include "Marlin.h"

#ifdef USE_PROBEDEPLOY
// intialise probe deployment code
void deploy_z_probe();
// initialize probe retraction code
void retract_z_probe();
#else
//empty functions which are optimized away.
FORCE_INLINE void deploy_z_probe() {};
FORCE_INLINE void retract_z_probe() {};
#endif

#endif
