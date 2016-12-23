/*
 * testpattern.bmp.h
 *
 *  Created on: 13.04.2014
 *      Author: netzwerg
 */

#ifndef TESTPATTERN_BMP_H_
#define TESTPATTERN_BMP_H_

#ifdef AVR
#include <avr/pgmspace.h>
#else
#define PROGMEM /**/
#endif
#include <stdint.h>

const uint8_t testpattern_bmp[]  PROGMEM={ //AVR-GCC, WinAVR
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0xFE,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
		};

//################################################################################
//#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.
//................................................................................
//#...............................................................................
//................................................................................
//########........########........########........########........########........
//................................................................................
//#...............................................................................
//................................................................................
//#...............................................................................
//################################################################################
//#...............................................................................
//................................................................................
//#...............................................................................
//................................................................................
//#...............................................................................
//................................................................................
//#...............................................................................
//................................................................................
//#....................##.........................................................
//.....................##.........................................................
//#######.......##................................................................
//..............##................................................................
//#...............................................................................
//.......................##.......................................................
//#......................##.......................................................
//................................................................................
//#...............................................................................
//................................................................................
//#...............................................................................
//................................................................................
//#...............................................................................
//................................................................................
//#...............................................................................
//................................................................................
//#...............................................................................
//................................................................................
//#...............................................................................
//................................................................................
//#...............................................................................
//................................................................................
//#...............................................................................
//................................................................................
//#...............................................................................
//................................................................................
//#...............................................................................
//................................................................................
//#...............................................................................


#endif /* TESTPATTERN_BMP_H_ */