/**
 * \par Copyright (C), 2012-2016, MakeBlock
 * @file    MeLightSensorTest.ino
 * @author  MakeBlock
 * @version V1.0.1
 * @date    2015/09/10
 * @brief   Description: this file is sample program for Me Light Sensor module.
 *
 * Function List:
 *    1. int16_t MeLightSensor::read();
 *
 * \par History:
 * <pre>
 * `<Author>`         `<Time>`        `<Version>`        `<Descr>`
 * Mark Yan         2015/07/24     1.0.0            Rebuild the old lib.
 * Rafael Lee       2015/09/10     1.0.1            Added some comments and macros.
 * </pre>
 */

/* Includes ------------------------------------------------------------------*/
#include "MeMCore.h"

/* Private variables ---------------------------------------------------------*/
MeLightSensor lightSensor(PORT_6);
int value = 0;      /* a variable for the lightSensor's value */

void setup()
{
  // initialize serial communications at 9600 bps
  Serial.begin(9600);
}


void loop()
{
  // read the lightSensor value:
  value = lightSensor.read();

  // print the results to the serial monitor
  Serial.print("value = ");
  Serial.println(value);
  // wait 100 milliseconds before the next loop
  delay(100);
}
