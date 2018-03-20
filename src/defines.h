/*
  Defines for Modbus
*/
#include <Arduino.h>
//#include <stdint.h>

//Modbus Registers Offsets (0-9999)
const uint16_t LAMP1_COIL = 100;
const uint16_t input1 = 0x10001;
const uint16_t ModbusNetID = 0x010F;
const uint16_t ResetEventCounter = 0x0100;
const uint16_t ResetStatus = 0x00FF;
const uint16_t HostWatchdogTimeout = 0x0101;
const uint16_t WDTEventCounter = 0x0102;
