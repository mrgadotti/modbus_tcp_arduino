#include <SPI.h>
#include <Ethernet.h>
#include <Modbus.h>
#include <ModbusIP.h>
#include <defines.h>

//ModbusIP object
ModbusIP mb;

void setup() {
    // The media access control (ethernet hardware) address for the shield
    byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
    // The IP address for the shield
    byte ip[] = { 192, 168, 0, 100 };
    //Config Modbus IP
    mb.config(mac, ip);

    mb.addIsts(0x10000);
    mb.addIreg (100, 0x08);


}

void loop() {
   //Call once inside loop() - all magic here
   mb.task();

   mb.Ists(input1, 1);

}
