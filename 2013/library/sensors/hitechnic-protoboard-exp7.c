#pragma config(Sensor, S1,     HTPB,                sensorI2CCustom9V)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
 * $Id: hitechnic-protoboard-exp7.c 112 2012-10-04 17:44:38Z xander $
 */

/**
 * hitechnic-protoboard.h provides an API for the HiTechnic Protoboard.  This is program 7
 * for the HTPB experimenter's kit.
 *
 * Changelog:
 * - 0.1: Initial release
 *
 * Credits:
 * - Big thanks to HiTechnic for providing me with the hardware necessary to write and test this.
 *
 * License: You may use this code as you wish, provided you give credit where it's due.
 *
 * THIS CODE WILL ONLY WORK WITH ROBOTC VERSION 3.51 AND HIGHER.
 * Xander Soldaat (xander_at_botbench.com)
 * 07 May 2010
 * version 0.1
 */

#include "drivers/hitechnic-protoboard.h"

task main() {
  // The data to be written: 0x10 = 010000 binary,
  // makes B4 digital port an output.
  HTPBsetupIO(HTPB, 0x10);

  while(true) {
    if(HTPBreadIO(HTPB, 0xF3) == 0) {
      eraseDisplay();
      nxtDisplayTextLine(1, "Magnet present");
      HTPBwriteIO(HTPB, 0x10);
    } else {
      eraseDisplay();
      nxtDisplayTextLine(1, "Magnet absent");
      HTPBwriteIO(HTPB, 0x00);
    }
    wait1Msec(50);
  }
}

/*
 * $Id: hitechnic-protoboard-exp7.c 112 2012-10-04 17:44:38Z xander $
 */
