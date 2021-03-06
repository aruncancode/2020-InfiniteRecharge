#include "ControlMap.h"

using hand = frc::XboxController::JoystickHand; // Only for FRC controllers

// using namespace wml
using namespace wml;
using namespace wml::controllers;

void ControlMap::InitSmartControllerGroup(SmartControllerGroup &contGroup) {}


// -------------Defined Ports-------------------

// Controllers
#if __CONTROLMAP_USING_JOYSTICK__
  const int ControlMap::JoyController1Port = 0;
  const int ControlMap::JoyController2Port = 1;
#else
  const int ControlMap::XboxController1Port = 0;
  const int ControlMap::XboxController2Port = 1;
#endif

// Deadzones
const double ControlMap::joyDeadzone = 0.05;
const double ControlMap::xboxDeadzone = 0.05;
const double ControlMap::triggerDeadzone = 0.05;

// Drive Left
const int ControlMap::DriveSRXportL = 0;
const int ControlMap::DriveSPXportL = 1;
// Drive Right
const int ControlMap::DriveSRXportR = 2;
const int ControlMap::DriveSPXportR = 3;

// Turret
const int ControlMap::TurretFlyWheelPort = 7;
const int ControlMap::TurretAnglePort = 8;
const int ControlMap::TurretRotationPort = 9;

// Control System
const int ControlMap::PressureSensorPort = 0;
const int ControlMap::CompressorPort = 1;



// -------------Defined Buttons-------------------

// Drive System
#if __CONTROLMAP_USING_JOYSTICK__
  const tAxis ControlMap::DrivetrainForward{ 1, Joystick::kYAxis };
  const tAxis ControlMap::DrivetrainTurn{ 1, Joystick::kZAxis };
  const tButton ControlMap::ReverseDrivetrain{ 1, 2 };
#else
  const tAxis ControlMap::DrivetrainLeft{ 1, XboxController::kLeftYAxis };
  const tAxis ControlMap::DrivetrainRight{ 1, XboxController::kRightYAxis };
  const tButton ControlMap::ReverseDrivetrain{ 1, XboxController::kStart };
#endif

// Turrent
#if __CONTROLMAP_USING_JOYSTICK__
  
#else
  const tAxis ControlMap::TurretAutoAim{ 2, XboxController::kLeftThrottle };
  const tAxis ControlMap::TurretManualRotate{ 2, XboxController::kRightXAxis };
  const tAxis ControlMap::TurretManualAngle{ 2, XboxController::kLeftYAxis };
  const tAxis ControlMap::TurretFlyWheelSpinUp{ 2, XboxController::kRightThrottle };
  const tButton ControlMap::TurretFire{ 2, XboxController::kA };
#endif