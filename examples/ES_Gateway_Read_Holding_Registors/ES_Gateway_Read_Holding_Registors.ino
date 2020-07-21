/*
   This example shows you how to Read Holding registors from slave device with slave ID 1 and baud 9600, Data bit 8, parity none, stop bit 1

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

float received_value;  // variable for storing Received value over RS485
unsigned int address1 = 100;  // address you want to read for this example we will read Holding Registe address 100
float gain = 1;   // gain value will be multiplied with the orignal value recived from slave and after multiplying it will return
void setup() {
  Serial.begin(9600);
  ES_RS485.begin(9600);                 //define baud here for your RS485
  // Note: Make sure that slave device is working on same baud rate.
  //       right now library only supports data bit 8, parity none & stop bit 1
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
}

void loop() {

  //read_holding_reg(slave_ID,address,Data_type,Data_order,gain);

  // here 1 is slave ID
  // address1 = 100

  //Data_types formate which slave will give response we can use following
  // floats
  // uint32
  // int32
  // uint16
  // int16

  //Data_order order in which slave will send bytes
  //let say slave gives 32-bit data then there will be four byte data let say A B C D  & if 16-bit data will be two byte A B
  // So Data orders can be classified as
  // big_endian             (32-bit AB CD)(16-bit AB) High byte first   &   High word first
  // mid_big_endian         (32-bit BA CD)            Low  byte  firt   &   High word first
  // mid_little_endian      (32-bit CD AB)            High byte first   &   Low  word first
  // little_endian          (32-bit DC BA)(16-bit BA) Low  byte first   &   Low  word first

  // gain value will be multiplied with the orignal value recived from slave and after multiplying it will return

  received_value = ES_RS485.read_holding_reg(1, address1, floats, big_endian, gain);
  if (received_value == -99.99)
  {
    Serial.println("TIME OUT ERROR.....");
    digitalWrite(LED2, HIGH);
    delay(500);
    digitalWrite(LED2, LOW);
  }
  else if (received_value == -88.88)
  {
    Serial.println("CRC FAIL.....");
    digitalWrite(LED2, HIGH);
    delay(500);
    digitalWrite(LED2, LOW);
  }
  else
  {
    Serial.print("Value: ");
    Serial.println(received_value);
    digitalWrite(LED1, HIGH);
    delay(500);
    digitalWrite(LED1, LOW);
  }

}
