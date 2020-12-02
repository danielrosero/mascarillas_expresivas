/*
  Nano33BLESensorExample_microphoneRMS.ino
  Copyright (c) 2020 Dale Giancono. All rights reserved..

  This program is an example program showing some of the cababilities of the
  Nano33BLESensor Library. In this case it outputs RMS microphone data and
  proximity data from two of the Arduino Nano 33 BLE Sense's on board
  sensors via serial in a format that can be displayed on the Arduino IDE
  serial plotter. It also outputs the data via BLE in a string format that
  can be viewed using a variety of BLE scanning software.

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

/*****************************************************************************/
/*GLOBAL Data                                                                */
/*****************************************************************************/
/*
   Nano33BLEMicrophoneRMSData and Nano33BLEProximityData object which we will
   store data in each time we read the microphone and proximity data.
*/
Nano33BLEMicrophoneRMSData microphoneData;


/*****************************************************************************/
/*SETUP (Initialisation)                                                     */
/*****************************************************************************/
void setup()
{
  /*
     Serial setup. This will be used to transmit data for viewing on serial
     plotter
  */
  Serial.begin(115200);
  while (!Serial);

  MicrophoneRMS.begin();

  /* Plots the legend on Serial Plotter */
  Serial.println("MicrophoneRMS\r\n");

}

/*****************************************************************************/
/*LOOP (runtime super loop)                                                  */
/*****************************************************************************/
void loop()
{

  if (MicrophoneRMS.pop(microphoneData))
  {
    Serial.printf("%d\r\n", microphoneData.RMSValue);
  }

}
