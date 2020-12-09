/*
  Nano33BLESensorExample_microphoneRMS.ino
  Copyright (c) 2020 danielrosero. All rights reserved..

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
/*****************************************************************************/
/*INCLUDES                                                                   */
/*****************************************************************************/
#include "Arduino.h"
#include "Nano33BLEMicrophoneRMS.h"
#include <Adafruit_NeoPixel.h>
#define PIN 6
#define NUMPIXELS 40

/*****************************************************************************/
/*GLOBAL Data                                                                */
/*****************************************************************************/

Nano33BLEMicrophoneRMSData microphoneData;
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int numeroBoca = 0;

/*****************************************************************************/
/*SETUP (Initialisation)                                                     */
/*****************************************************************************/
void setup()
{
  /*
     Serial setup. This will be used to transmit data for viewing on serial
     plotter
  */
  //Serial.begin(115200);
  //while (!Serial);

  MicrophoneRMS.begin();

  /* Plots the legend on Serial Plotter */
  //Serial.println("MicrophoneRMS\r\n");

  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  pixels.clear(); // Set all pixel colors to 'off'
}

/*****************************************************************************/
/*LOOP (runtime super loop)                                                  */
/*****************************************************************************/
void loop()
{

  if (MicrophoneRMS.pop(microphoneData))
  {
    //Serial.printf("%d\r\n", microphoneData.RMSValue);

    //if (microphoneData.RMSValue > 8000) {
    if (microphoneData.RMSValue > 20000) {
      //BANG
      Serial.printf("**** BANG ****");

      numeroBoca+=1;

      if (numeroBoca == 1)
        boca1();
        delay(50);

      if (numeroBoca == 2)
        boca2();
        delay(50);

      if (numeroBoca >2)
      numeroBoca = 0;

    delay(50);
    }else{
      pixels.clear();
      pixels.show();
    }

  }





}

void boca1() {
  pixels.clear();
  pixels.setPixelColor(0, pixels.Color(0, 150, 0));
  pixels.setPixelColor(1, pixels.Color(0, 150, 0));
  pixels.setPixelColor(2, pixels.Color(0, 150, 0));
  pixels.setPixelColor(3, pixels.Color(0, 150, 0));
  pixels.setPixelColor(4, pixels.Color(0, 150, 0));
  pixels.setPixelColor(5, pixels.Color(0, 150, 0));
  pixels.setPixelColor(6, pixels.Color(0, 150, 0));
  pixels.setPixelColor(7, pixels.Color(0, 150, 0));
  pixels.setPixelColor(8, pixels.Color(0, 150, 0));
  pixels.setPixelColor(9, pixels.Color(0, 150, 0));
  pixels.setPixelColor(10, pixels.Color(0, 150, 0));
  pixels.setPixelColor(11, pixels.Color(0, 150, 0));
  pixels.setPixelColor(12, pixels.Color(0, 150, 0));
  pixels.setPixelColor(13, pixels.Color(0, 150, 0));
  pixels.setPixelColor(14, pixels.Color(0, 150, 0));
  pixels.setPixelColor(15, pixels.Color(0, 150, 0));
  pixels.setPixelColor(16, pixels.Color(0, 150, 0));
  pixels.setPixelColor(17, pixels.Color(0, 150, 0));
  pixels.setPixelColor(18, pixels.Color(0, 150, 0));
  pixels.setPixelColor(19, pixels.Color(0, 150, 0));
  pixels.setPixelColor(20, pixels.Color(0, 150, 0));
  pixels.setPixelColor(21, pixels.Color(0, 150, 0));
  pixels.setPixelColor(22, pixels.Color(0, 150, 0));
  pixels.setPixelColor(23, pixels.Color(0, 150, 0));

  pixels.show();

}

void boca2() {
  pixels.clear();
  pixels.setPixelColor(24, pixels.Color(0, 150, 0));
  pixels.setPixelColor(25, pixels.Color(0, 150, 0));
  pixels.setPixelColor(26, pixels.Color(0, 150, 0));
  pixels.setPixelColor(27, pixels.Color(0, 150, 0));
  pixels.setPixelColor(28, pixels.Color(0, 150, 0));
  pixels.setPixelColor(29, pixels.Color(0, 150, 0));
  pixels.setPixelColor(30, pixels.Color(0, 150, 0));
  pixels.setPixelColor(31, pixels.Color(0, 150, 0));
  pixels.setPixelColor(32, pixels.Color(0, 150, 0));
  pixels.setPixelColor(33, pixels.Color(0, 150, 0));
  pixels.setPixelColor(34, pixels.Color(0, 150, 0));
  pixels.setPixelColor(35, pixels.Color(0, 150, 0));
  pixels.setPixelColor(36, pixels.Color(0, 150, 0));
  pixels.setPixelColor(37, pixels.Color(0, 150, 0));
  pixels.setPixelColor(38, pixels.Color(0, 150, 0));
  pixels.setPixelColor(39, pixels.Color(0, 150, 0));

  pixels.show();
}
