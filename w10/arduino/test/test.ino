//Mert Arduino and Tech YouTube Channel -- https://goo.gl/ivcZhW

//Add the necessary libraries
//You can find all the necessary library links in the video description.
#include <SPI.h>        //SPI library for communicate with the nRF24L01+
#include "RF24.h"       //The main library of the nRF24L01+
#include "Wire.h"       //For communicate
#include "I2Cdev.h"     //For communicate with MPU6050
#include "MPU6050.h"    //The main library of the MPU6050


//Define the object to access and cotrol the Gyro and Accelerometer (We don't use the Gyro data)
MPU6050 mpu;
int16_t ax, ay, az;
int16_t gx, gy, gz;

//Define packet for the direction (X axis and Y axis)
int data[2];

//Define object from RF24 library - 9 and 10 are a digital pin numbers to which signals CE and CSN are connected.

//Create a pipe addresses for the communicate
const uint64_t pipe = 0xE8E8F0F0E1LL;

void setup(void) {
  Serial.begin(9600);
  Wire.begin();
  mpu.initialize();              //Initialize the MPU object
}

void loop(void) {
  //With this function, the acceleration and gyro values of the axes are taken.
  //If you want to control the car axis differently, you can change the axis name in the map command.
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
  Serial.println("AA");
  Serial.println("X: " + ax);
  Serial.println("Y: " + ay);
  delay(200);
}
