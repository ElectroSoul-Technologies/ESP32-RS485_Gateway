/*
   This example shows you how to Write Single registors(FC=06) from slave device with slave ID 1 and baud 9600, Data bit 8, parity none, stop bit 1

   This example use an ElectroSoul RS485 master liberary you can find more details at https://github.com/ElectroSoul-Technologies/ElectroSoul_RS485_master_Liberary

   This example uses Hardware serial port
   This code has been tested on ElectroSoul ESP32-RS485 modbus gateway and it works as expected.
*/

/***********************************************************************
  Written by Dharmik for ElectroSoul Technologies.
  Copyright (C) 2020 ElectroSoul Technologies (https://electrosoul.in/)
  gpl-3.0, all text above must be included in any redistribution
 ***********************************************************************/

#include <ESrs485.h>
#define LED1 33
#define LED2 14
#define RS485_slave1_port Serial2
//Note: check your ESP32 HardwareSerial.cpp file and check that RX2 is defined as 16 and TX2 as 17
// in my PC I found this file at this location
//C:\Users\ES\AppData\Local\Arduino15\packages\esp32\hardware\esp32\1.0.4\cores\esp32

ESrs485 ES_RS485 (&RS485_slave1_port);  //calling defined port to ESrs485 lib

int16_t Write_value = 555;    // Value to be written.
unsigned int address1 = 100;  // Register Addres where we want to write new value
void setup() {
  Serial.begin(9600);
  ES_RS485.begin(9600);                 //define baud here for your RS485
  // Note: Make sure that slave device is working on same baud rate.
  //       right now library only supports data bit 8, parity none & stop bit 1

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);

  delay(1000);

  //ES_RS485.write_single_reg(slave_ID,Write_value);

  //here 1 is slave ID
  //address1 is the register address where we want to write.
  //write_value is value to be written

  //therefore this function will write 555 in register no. 100 of slave ID 1.
  
  if(ES_RS485.write_single_reg(1, address1, Write_value)) // it uses function code 06
  {
    Serial.print(Write_value);
    Serial.print(" Written successfully at address ");
    Serial.println(address1);
    digitalWrite(LED1, HIGH);
    delay(500);
    digitalWrite(LED1, LOW);
  }
  else
  {
    Serial.println("ERROR!!!");
    digitalWrite(LED2, HIGH);
    delay(500);
    digitalWrite(LED2, LOW);
  }
  delay(1000);

}

void loop() {

}
