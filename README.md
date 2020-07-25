# ElectroSoul ESP32-RS485 Gateway
Industrial RS485 Gateway based on ESP32 is designed and developed by ElectroSoul Technologies. We had tested and used this RS485 Gateway with various slave devices for Monitoring such as MFM meters, Solar Inverters, AC Drives, etc as well as for controlling AC drives, RS485-MCB, or any other RS485 device.

We had tested our products not just in our lab environment but it has also been tested and is working right now in many harsh Industrial Environment.
<table class="table table-hover table-striped table-bordered">
  <tr align="center">
   <td><a href="https://www.tindie.com/products/electrosoul/esp32-rs485-modbus-gateway/"><img src="https://electrosoul.in/product_photo/RS485_Gateway_WiFi/EMSv1_img1.png" width="300"></a></td>
   <td><a href="https://www.tindie.com/products/electrosoul/esp32-rs485-modbus-gateway/"><img src="https://electrosoul.in/product_photo/RS485_Gateway_WiFi/EMSv1_img2.png" width="300"></a></td>
   <td><a href="https://www.tindie.com/products/electrosoul/esp32-rs485-modbus-gateway/"><img src="https://electrosoul.in/product_photo/RS485_Gateway_WiFi/EMSv1_img3.png" width="300"></a></td>
  </tr>
 <tr align="center">
    <td><a>ElectroSoul ESP32-RS485 Gateway</a></td>
    <td><a>Connection Diagram</a></td>
    <td><a>ES Gateway Inside View</a></td>
  </tr>
  </table>
  
# Table of contents
* [FEATURES](#FEATURES)
* [Ordering INFO](#Ordering-INFO)
* [Power Requirement](#Power-Requirement)
* [GPIO Configeration Table](#GPIO-Configeration-Table)
* [ElectroSoul Dashboard](#ElectroSoul-Dashboard)
* [ElectroSoul Gateway Basic WorkFlow](#ElectroSoul-Gateway-Basic-WorkFlow)
* [ElectroSoul Gateway Configeration Tool](#ElectroSoul-Gateway-Configeration-Tool)
* [Repository Contents](#Repository-Contents)

## FEATURES
  * Directly program with Arduino IDE just like you program your ESP32 board.
  * Supports Industrial Standard Input voltage.
  * State of the art RS-485 ckt with Auto-Direction feature.
  * Onboard 2 Programmable LEDs.
  * Onboard micro USB for Programming.
  * RS-485 lines are protected with Specialized TVS diode for RS485.
  * DIN rail + wall mount Encloser.
  * Compact Size.
  * Low Power.
  
## Ordering INFO

 We sell this device in two varients.
 
 * Comes with our ElectroSoul Firmware installed inside.
    * Can talk to our server directly.✅
    * We can show your data to our DashBoard.✅
    * We can provide you a daily email report.✅
    * We can provide you SMS/email alerts.✅
    * Easily configures with our Configuration Tool.✅
  * Comes without ElectroSoul Firmware.
    * You can Program it as per your requirement.✅
    * You can use our [RS485 master Liberary](https://github.com/ElectroSoul-Technologies/ElectroSoul_RS485_master_Liberary).✅
    * can not use our Server.❌
    * Data can not be shown on our DashBoard.❌
    * No support for configuration Tool.❌
    
<a href="https://www.tindie.com/stores/electrosoul/?ref=offsite_badges&utm_source=sellers_electrosoul&utm_medium=badges&utm_campaign=badge_medium"><img src="https://d2ss6ovg47m0r5.cloudfront.net/badges/tindie-mediums.png" alt="I sell on Tindie" width="150" height="78"></a>
    
## Power Requirement
 * Max Power requires < 5Watt
 * Input Voltage 9v-35v DC.
:warning:
 ```diff
-Note: There is no Polarity Protection in this device.
 ```

## GPIO Configeration Table
|     GPIO No.    |  Description   |
|-----------------|----------------|
| **GPIO 33**     |   LED1         |
| **GPIO 14**     |   LED2         |
| **GPIO 17**     |RS485 Tx pin    |
| **GPIO 16**     |RS485 Rx pin    |


## ElectroSoul Dashboard
  * View all your data live.
  * See Waveform of your data.
  * Directly Print/copy your data.
  * Convert your data to PDF, CSV or EXCEL.
  * See data as per your time.
  
  <a href="http://ems.electrosoul.in/login.php/"><img src="http://electrosoul.in/product_photo/RS485_Gateway_WiFi/11.jpeg" width="1000" title="ESP32-RS485 Modbus Gateway" alt="ESP32-RS485 Modbus Gateway"></a>

  
## ElectroSoul Gateway Basic WorkFlow
Basic flow diagrams that how EMS or Gateway works.

  <a href="http://ems.electrosoul.in/login.php/"><img src="http://electrosoul.in/product_photo/RS485_Gateway_WiFi/13.jpeg" width="1000"></a>

## ElectroSoul Gateway Basic Wiring
In the below diagram, you can see how RS485 wiring can be done in daisy chain configuration with the various slave devices.

<a href="http://ems.electrosoul.in/login.php/"><img src="http://electrosoul.in/product_photo/RS485_Gateway_WiFi/12.jpeg" width="1000"></a>
## ElectroSoul Gateway Configuration Tool
We have our own configuration tool for configuring our EMS according to your needs.
Find more info about using the configuration tool [Here](https://github.com/ElectroSoul-Technologies/ES-EMS_configerator).

  <a href="http://ems.electrosoul.in/login.php/"><img src="http://electrosoul.in/product_photo/RS485_Gateway_WiFi/01.jpeg" width="1000"></a>

## Repository Contents
* **/examples** - Example sketches for the library (.ino). Run these from the Arduino IDE.
* **LICENSE.md** - Library has open source license gpl-3.0
* **README.MD**
