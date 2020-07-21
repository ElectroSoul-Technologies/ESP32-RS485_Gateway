/*
 *  Basic Blynk example code for ElectroSoul ESP32 based Wi-Fi to RS485 Gateway.
 */
#define LED1 33
#define LED2 14

void setup() {
 pinMode(LED1,OUTPUT);
 pinMode(LED2,OUTPUT);
}

void loop() {
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  delay(1000);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  delay(1000);
}
