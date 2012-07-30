/*
 * Copyright (C) 2008 The Android Open Source Project
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the 
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED 
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _UI_FONT_H_
#define _UI_FONT_H_

unsigned ui_font_5x12[] = {
    0x00000000, 0x00000000,
    0x08421080, 0x00020084,
    0x00052940, 0x00000000,
    0x15f52800, 0x0000295f,
    0x1c52f880, 0x00023e94,
    0x08855640, 0x0004d542,
    0x04528800, 0x000b2725,
    0x00021080, 0x00000000,
    0x04211088, 0x00821042,
    0x10841082, 0x00221108,
    0x09575480, 0x00000000,
    0x3e420000, 0x00000084,
    0x00000000, 0x00223000,
    0x3e000000, 0x00000000,
    0x00000000, 0x00471000,
    0x08844200, 0x00008442,
    0x2318a880, 0x00022a31,
    0x08429880, 0x000f9084,
    0x1108c5c0, 0x000f8444,
    0x1c4443e0, 0x00074610,
    0x14a62100, 0x000423e9,
    0x26d087e0, 0x00074610,
    0x1e10c5c0, 0x00074631,
    0x088443e0, 0x00010844,
    0x1d18c5c0, 0x00074631,
    0x3d18c5c0, 0x00074610,
    0x08e20000, 0x00471000,
    0x08e20000, 0x00223000,
    0x02222200, 0x00082082,
    0x01f00000, 0x000003e0,
    0x20820820, 0x00008888,
    0x1108c5c0, 0x00020084,
    0x2b98c5c0, 0x000f05b5,
    0x2318a880, 0x0008c63f,
    0x1d2949e0, 0x0007ca52,
    0x0210c5c0, 0x00074421,
    0x252949e0, 0x0007ca52,
    0x1e1087e0, 0x000f8421,
    0x1e1087e0, 0x00008421,
    0x0210c5c0, 0x00074639,
    0x3f18c620, 0x0008c631,
    0x084211c0, 0x00071084,
    0x10842380, 0x00032508,
    0x0654c620, 0x0008c525,
    0x02108420, 0x000f8421,
    0x2b5dc620, 0x0008c631,
    0x2b59ce20, 0x0008c739,
    0x2318c5c0, 0x00074631,
    0x1f18c5e0, 0x00008421,
    0x2318c5c0, 0x01075631,
    0x1f18c5e0, 0x0008c525,
    0x1c10c5c0, 0x00074610,
    0x084213e0, 0x00021084,
    0x2318c620, 0x00074631,
    0x1518c620, 0x0002114a,
    0x2b18c620, 0x000556b5,
    0x08a54620, 0x0008c54a,
    0x08a54620, 0x00021084,
    0x088443e0, 0x000f8442,
    0x0421084e, 0x00e10842,
    0x08210420, 0x00084108,
    0x1084210e, 0x00e42108,
    0x0008a880, 0x00000000,
    0x00000000, 0x01f00000,
    0x00000104, 0x00000000,
    0x20e00000, 0x000b663e,
    0x22f08420, 0x0007c631,
    0x22e00000, 0x00074421,
    0x23e84200, 0x000f4631,
    0x22e00000, 0x0007443f,
    0x1e214980, 0x00010842,
    0x22e00000, 0x1d187a31,
    0x26d08420, 0x0008c631,
    0x08601000, 0x00071084,
    0x10c02000, 0x0c94a108,
    0x0a908420, 0x0008a4a3,
    0x084210c0, 0x00071084,
    0x2ab00000, 0x0008d6b5,
    0x26d00000, 0x0008c631,
    0x22e00000, 0x00074631,
    0x22f00000, 0x0210be31,
    0x23e00000, 0x21087a31,
    0x26d00000, 0x00008421,
    0x22e00000, 0x00074506,
    0x04f10800, 0x00064842,
    0x23100000, 0x000b6631,
    0x23100000, 0x00022951,
    0x23100000, 0x000556b5,
    0x15100000, 0x0008a884,
    0x23100000, 0x1d185b31,
    0x11f00000, 0x000f8444,
    0x06421098, 0x01821084,
    0x08421080, 0x00021084,
    0x30421083, 0x00321084,
    0x0004d640, 0x00000000,
    0x00000000, 0x00000000,
};


unsigned ui_font_8x16[] = {
	/* 32 0x20 ' ' */
	0x00, /* 00000000 1*/
	0x00, /* 00000000 2*/
	0x00, /* 00000000 3*/
	0x00, /* 00000000 4*/
	0x00, /* 00000000 5*/
	0x00, /* 00000000 6*/
	0x00, /* 00000000 7*/
	0x00, /* 00000000 8*/
	0x00, /* 00000000 9*/
	0x00, /* 00000000 10*/
	0x00, /* 00000000 11*/
	0x00, /* 00000000 12*/
	0x00, /* 00000000 13*/
	0x00, /* 00000000 14*/
	0x00, /* 00000000 15*/
	0x00, /* 00000000 16*/

	/* 33 0x21 '!' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x18, /* 00011000 */
	0x3c, /* 00111100 */
	0x3c, /* 00111100 */
	0x3c, /* 00111100 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x00, /* 00000000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 34 0x22 '"' */
	0x00, /* 00000000 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x24, /* 00100100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 35 0x23 '#' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x6c, /* 01101100 */
	0x6c, /* 01101100 */
	0xfe, /* 11111110 */
	0x6c, /* 01101100 */
	0x6c, /* 01101100 */
	0x6c, /* 01101100 */
	0xfe, /* 11111110 */
	0x6c, /* 01101100 */
	0x6c, /* 01101100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 36 0x24 '$' */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x7c, /* 01111100 */
	0xc6, /* 11000110 */
	0xc2, /* 11000010 */
	0xc0, /* 11000000 */
	0x7c, /* 01111100 */
	0x06, /* 00000110 */
	0x06, /* 00000110 */
	0x86, /* 10000110 */
	0xc6, /* 11000110 */
	0x7c, /* 01111100 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 37 0x25 '%' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xc2, /* 11000010 */
	0xc6, /* 11000110 */
	0x0c, /* 00001100 */
	0x18, /* 00011000 */
	0x30, /* 00110000 */
	0x60, /* 01100000 */
	0xc6, /* 11000110 */
	0x86, /* 10000110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 38 0x26 '&' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x38, /* 00111000 */
	0x6c, /* 01101100 */
	0x6c, /* 01101100 */
	0x38, /* 00111000 */
	0x76, /* 01110110 */
	0xdc, /* 11011100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0x76, /* 01110110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 39 0x27 ''' */
	0x00, /* 00000000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x60, /* 01100000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 40 0x28 '(' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x0c, /* 00001100 */
	0x18, /* 00011000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x18, /* 00011000 */
	0x0c, /* 00001100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 41 0x29 ')' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x30, /* 00110000 */
	0x18, /* 00011000 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x18, /* 00011000 */
	0x30, /* 00110000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 42 0x2a '*' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x66, /* 01100110 */
	0x3c, /* 00111100 */
	0xff, /* 11111111 */
	0x3c, /* 00111100 */
	0x66, /* 01100110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 43 0x2b '+' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x7e, /* 01111110 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 44 0x2c ',' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x30, /* 00110000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 45 0x2d '-' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xfe, /* 11111110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 46 0x2e '.' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 47 0x2f '/' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x02, /* 00000010 */
	0x06, /* 00000110 */
	0x0c, /* 00001100 */
	0x18, /* 00011000 */
	0x30, /* 00110000 */
	0x60, /* 01100000 */
	0xc0, /* 11000000 */
	0x80, /* 10000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 48 0x30 '0' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x38, /* 00111000 */
	0x6c, /* 01101100 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xd6, /* 11010110 */
	0xd6, /* 11010110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x6c, /* 01101100 */
	0x38, /* 00111000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 49 0x31 '1' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x18, /* 00011000 */
	0x38, /* 00111000 */
	0x78, /* 01111000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x7e, /* 01111110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 50 0x32 '2' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x7c, /* 01111100 */
	0xc6, /* 11000110 */
	0x06, /* 00000110 */
	0x0c, /* 00001100 */
	0x18, /* 00011000 */
	0x30, /* 00110000 */
	0x60, /* 01100000 */
	0xc0, /* 11000000 */
	0xc6, /* 11000110 */
	0xfe, /* 11111110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 51 0x33 '3' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x7c, /* 01111100 */
	0xc6, /* 11000110 */
	0x06, /* 00000110 */
	0x06, /* 00000110 */
	0x3c, /* 00111100 */
	0x06, /* 00000110 */
	0x06, /* 00000110 */
	0x06, /* 00000110 */
	0xc6, /* 11000110 */
	0x7c, /* 01111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 52 0x34 '4' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x0c, /* 00001100 */
	0x1c, /* 00011100 */
	0x3c, /* 00111100 */
	0x6c, /* 01101100 */
	0xcc, /* 11001100 */
	0xfe, /* 11111110 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x1e, /* 00011110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 53 0x35 '5' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xfe, /* 11111110 */
	0xc0, /* 11000000 */
	0xc0, /* 11000000 */
	0xc0, /* 11000000 */
	0xfc, /* 11111100 */
	0x06, /* 00000110 */
	0x06, /* 00000110 */
	0x06, /* 00000110 */
	0xc6, /* 11000110 */
	0x7c, /* 01111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 54 0x36 '6' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x38, /* 00111000 */
	0x60, /* 01100000 */
	0xc0, /* 11000000 */
	0xc0, /* 11000000 */
	0xfc, /* 11111100 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x7c, /* 01111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 55 0x37 '7' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xfe, /* 11111110 */
	0xc6, /* 11000110 */
	0x06, /* 00000110 */
	0x06, /* 00000110 */
	0x0c, /* 00001100 */
	0x18, /* 00011000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 56 0x38 '8' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x7c, /* 01111100 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x7c, /* 01111100 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x7c, /* 01111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 57 0x39 '9' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x7c, /* 01111100 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x7e, /* 01111110 */
	0x06, /* 00000110 */
	0x06, /* 00000110 */
	0x06, /* 00000110 */
	0x0c, /* 00001100 */
	0x78, /* 01111000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 58 0x3a ':' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 59 0x3b ';' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x30, /* 00110000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 60 0x3c '<' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x06, /* 00000110 */
	0x0c, /* 00001100 */
	0x18, /* 00011000 */
	0x30, /* 00110000 */
	0x60, /* 01100000 */
	0x30, /* 00110000 */
	0x18, /* 00011000 */
	0x0c, /* 00001100 */
	0x06, /* 00000110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 61 0x3d '=' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x7e, /* 01111110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x7e, /* 01111110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 62 0x3e '>' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x60, /* 01100000 */
	0x30, /* 00110000 */
	0x18, /* 00011000 */
	0x0c, /* 00001100 */
	0x06, /* 00000110 */
	0x0c, /* 00001100 */
	0x18, /* 00011000 */
	0x30, /* 00110000 */
	0x60, /* 01100000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 63 0x3f '?' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x7c, /* 01111100 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x0c, /* 00001100 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x00, /* 00000000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 64 0x40 '@' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x7c, /* 01111100 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xde, /* 11011110 */
	0xde, /* 11011110 */
	0xde, /* 11011110 */
	0xdc, /* 11011100 */
	0xc0, /* 11000000 */
	0x7c, /* 01111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 65 0x41 'A' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x10, /* 00010000 */
	0x38, /* 00111000 */
	0x6c, /* 01101100 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xfe, /* 11111110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 66 0x42 'B' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xfc, /* 11111100 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x7c, /* 01111100 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0xfc, /* 11111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 67 0x43 'C' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x3c, /* 00111100 */
	0x66, /* 01100110 */
	0xc2, /* 11000010 */
	0xc0, /* 11000000 */
	0xc0, /* 11000000 */
	0xc0, /* 11000000 */
	0xc0, /* 11000000 */
	0xc2, /* 11000010 */
	0x66, /* 01100110 */
	0x3c, /* 00111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 68 0x44 'D' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xf8, /* 11111000 */
	0x6c, /* 01101100 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x6c, /* 01101100 */
	0xf8, /* 11111000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 69 0x45 'E' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xfe, /* 11111110 */
	0x66, /* 01100110 */
	0x62, /* 01100010 */
	0x68, /* 01101000 */
	0x78, /* 01111000 */
	0x68, /* 01101000 */
	0x60, /* 01100000 */
	0x62, /* 01100010 */
	0x66, /* 01100110 */
	0xfe, /* 11111110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 70 0x46 'F' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xfe, /* 11111110 */
	0x66, /* 01100110 */
	0x62, /* 01100010 */
	0x68, /* 01101000 */
	0x78, /* 01111000 */
	0x68, /* 01101000 */
	0x60, /* 01100000 */
	0x60, /* 01100000 */
	0x60, /* 01100000 */
	0xf0, /* 11110000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 71 0x47 'G' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x3c, /* 00111100 */
	0x66, /* 01100110 */
	0xc2, /* 11000010 */
	0xc0, /* 11000000 */
	0xc0, /* 11000000 */
	0xde, /* 11011110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x66, /* 01100110 */
	0x3a, /* 00111010 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 72 0x48 'H' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xfe, /* 11111110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 73 0x49 'I' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x3c, /* 00111100 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x3c, /* 00111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 74 0x4a 'J' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x1e, /* 00011110 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0x78, /* 01111000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 75 0x4b 'K' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xe6, /* 11100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x6c, /* 01101100 */
	0x78, /* 01111000 */
	0x78, /* 01111000 */
	0x6c, /* 01101100 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0xe6, /* 11100110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 76 0x4c 'L' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xf0, /* 11110000 */
	0x60, /* 01100000 */
	0x60, /* 01100000 */
	0x60, /* 01100000 */
	0x60, /* 01100000 */
	0x60, /* 01100000 */
	0x60, /* 01100000 */
	0x62, /* 01100010 */
	0x66, /* 01100110 */
	0xfe, /* 11111110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 77 0x4d 'M' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xc6, /* 11000110 */
	0xee, /* 11101110 */
	0xfe, /* 11111110 */
	0xfe, /* 11111110 */
	0xd6, /* 11010110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 78 0x4e 'N' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xc6, /* 11000110 */
	0xe6, /* 11100110 */
	0xf6, /* 11110110 */
	0xfe, /* 11111110 */
	0xde, /* 11011110 */
	0xce, /* 11001110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 79 0x4f 'O' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x7c, /* 01111100 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x7c, /* 01111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 80 0x50 'P' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xfc, /* 11111100 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x7c, /* 01111100 */
	0x60, /* 01100000 */
	0x60, /* 01100000 */
	0x60, /* 01100000 */
	0x60, /* 01100000 */
	0xf0, /* 11110000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 81 0x51 'Q' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x7c, /* 01111100 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xd6, /* 11010110 */
	0xde, /* 11011110 */
	0x7c, /* 01111100 */
	0x0c, /* 00001100 */
	0x0e, /* 00001110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 82 0x52 'R' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xfc, /* 11111100 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x7c, /* 01111100 */
	0x6c, /* 01101100 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0xe6, /* 11100110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 83 0x53 'S' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x7c, /* 01111100 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x60, /* 01100000 */
	0x38, /* 00111000 */
	0x0c, /* 00001100 */
	0x06, /* 00000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x7c, /* 01111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 84 0x54 'T' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x7e, /* 01111110 */
	0x7e, /* 01111110 */
	0x5a, /* 01011010 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x3c, /* 00111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 85 0x55 'U' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x7c, /* 01111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 86 0x56 'V' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x6c, /* 01101100 */
	0x38, /* 00111000 */
	0x10, /* 00010000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 87 0x57 'W' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xd6, /* 11010110 */
	0xd6, /* 11010110 */
	0xd6, /* 11010110 */
	0xfe, /* 11111110 */
	0xee, /* 11101110 */
	0x6c, /* 01101100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 88 0x58 'X' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x6c, /* 01101100 */
	0x7c, /* 01111100 */
	0x38, /* 00111000 */
	0x38, /* 00111000 */
	0x7c, /* 01111100 */
	0x6c, /* 01101100 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 89 0x59 'Y' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x3c, /* 00111100 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x3c, /* 00111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 90 0x5a 'Z' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xfe, /* 11111110 */
	0xc6, /* 11000110 */
	0x86, /* 10000110 */
	0x0c, /* 00001100 */
	0x18, /* 00011000 */
	0x30, /* 00110000 */
	0x60, /* 01100000 */
	0xc2, /* 11000010 */
	0xc6, /* 11000110 */
	0xfe, /* 11111110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 91 0x5b '[' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x3c, /* 00111100 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x3c, /* 00111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 92 0x5c '\' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x80, /* 10000000 */
	0xc0, /* 11000000 */
	0xe0, /* 11100000 */
	0x70, /* 01110000 */
	0x38, /* 00111000 */
	0x1c, /* 00011100 */
	0x0e, /* 00001110 */
	0x06, /* 00000110 */
	0x02, /* 00000010 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 93 0x5d ']' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x3c, /* 00111100 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x3c, /* 00111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 94 0x5e '^' */
	0x10, /* 00010000 */
	0x38, /* 00111000 */
	0x6c, /* 01101100 */
	0xc6, /* 11000110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 95 0x5f '_' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xff, /* 11111111 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 96 0x60 '`' */
	0x00, /* 00000000 */
	0x30, /* 00110000 */
	0x18, /* 00011000 */
	0x0c, /* 00001100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 97 0x61 'a' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x78, /* 01111000 */
	0x0c, /* 00001100 */
	0x7c, /* 01111100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0x76, /* 01110110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 98 0x62 'b' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xe0, /* 11100000 */
	0x60, /* 01100000 */
	0x60, /* 01100000 */
	0x78, /* 01111000 */
	0x6c, /* 01101100 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x7c, /* 01111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 99 0x63 'c' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x7c, /* 01111100 */
	0xc6, /* 11000110 */
	0xc0, /* 11000000 */
	0xc0, /* 11000000 */
	0xc0, /* 11000000 */
	0xc6, /* 11000110 */
	0x7c, /* 01111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 100 0x64 'd' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x1c, /* 00011100 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x3c, /* 00111100 */
	0x6c, /* 01101100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0x76, /* 01110110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 101 0x65 'e' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x7c, /* 01111100 */
	0xc6, /* 11000110 */
	0xfe, /* 11111110 */
	0xc0, /* 11000000 */
	0xc0, /* 11000000 */
	0xc6, /* 11000110 */
	0x7c, /* 01111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 102 0x66 'f' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x1c, /* 00011100 */
	0x36, /* 00110110 */
	0x32, /* 00110010 */
	0x30, /* 00110000 */
	0x78, /* 01111000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x78, /* 01111000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 103 0x67 'g' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x76, /* 01110110 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0x7c, /* 01111100 */
	0x0c, /* 00001100 */
	0xcc, /* 11001100 */
	0x78, /* 01111000 */
	0x00, /* 00000000 */

	/* 104 0x68 'h' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xe0, /* 11100000 */
	0x60, /* 01100000 */
	0x60, /* 01100000 */
	0x6c, /* 01101100 */
	0x76, /* 01110110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0xe6, /* 11100110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 105 0x69 'i' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x00, /* 00000000 */
	0x38, /* 00111000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x3c, /* 00111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 106 0x6a 'j' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x06, /* 00000110 */
	0x06, /* 00000110 */
	0x00, /* 00000000 */
	0x0e, /* 00001110 */
	0x06, /* 00000110 */
	0x06, /* 00000110 */
	0x06, /* 00000110 */
	0x06, /* 00000110 */
	0x06, /* 00000110 */
	0x06, /* 00000110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x3c, /* 00111100 */
	0x00, /* 00000000 */

	/* 107 0x6b 'k' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xe0, /* 11100000 */
	0x60, /* 01100000 */
	0x60, /* 01100000 */
	0x66, /* 01100110 */
	0x6c, /* 01101100 */
	0x78, /* 01111000 */
	0x78, /* 01111000 */
	0x6c, /* 01101100 */
	0x66, /* 01100110 */
	0xe6, /* 11100110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 108 0x6c 'l' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x38, /* 00111000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x3c, /* 00111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 109 0x6d 'm' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xec, /* 11101100 */
	0xfe, /* 11111110 */
	0xd6, /* 11010110 */
	0xd6, /* 11010110 */
	0xd6, /* 11010110 */
	0xd6, /* 11010110 */
	0xc6, /* 11000110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 110 0x6e 'n' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xdc, /* 11011100 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 111 0x6f 'o' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x7c, /* 01111100 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x7c, /* 01111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 112 0x70 'p' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xdc, /* 11011100 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x66, /* 01100110 */
	0x7c, /* 01111100 */
	0x60, /* 01100000 */
	0x60, /* 01100000 */
	0xf0, /* 11110000 */
	0x00, /* 00000000 */

	/* 113 0x71 'q' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x76, /* 01110110 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0x7c, /* 01111100 */
	0x0c, /* 00001100 */
	0x0c, /* 00001100 */
	0x1e, /* 00011110 */
	0x00, /* 00000000 */

	/* 114 0x72 'r' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xdc, /* 11011100 */
	0x76, /* 01110110 */
	0x66, /* 01100110 */
	0x60, /* 01100000 */
	0x60, /* 01100000 */
	0x60, /* 01100000 */
	0xf0, /* 11110000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 115 0x73 's' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x7c, /* 01111100 */
	0xc6, /* 11000110 */
	0x60, /* 01100000 */
	0x38, /* 00111000 */
	0x0c, /* 00001100 */
	0xc6, /* 11000110 */
	0x7c, /* 01111100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 116 0x74 't' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x10, /* 00010000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0xfc, /* 11111100 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x30, /* 00110000 */
	0x36, /* 00110110 */
	0x1c, /* 00011100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 117 0x75 'u' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0xcc, /* 11001100 */
	0x76, /* 01110110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 118 0x76 'v' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x6c, /* 01101100 */
	0x38, /* 00111000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 119 0x77 'w' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xd6, /* 11010110 */
	0xd6, /* 11010110 */
	0xd6, /* 11010110 */
	0xfe, /* 11111110 */
	0x6c, /* 01101100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 120 0x78 'x' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xc6, /* 11000110 */
	0x6c, /* 01101100 */
	0x38, /* 00111000 */
	0x38, /* 00111000 */
	0x38, /* 00111000 */
	0x6c, /* 01101100 */
	0xc6, /* 11000110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 121 0x79 'y' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0xc6, /* 11000110 */
	0x7e, /* 01111110 */
	0x06, /* 00000110 */
	0x0c, /* 00001100 */
	0xf8, /* 11111000 */
	0x00, /* 00000000 */

	/* 122 0x7a 'z' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0xfe, /* 11111110 */
	0xcc, /* 11001100 */
	0x18, /* 00011000 */
	0x30, /* 00110000 */
	0x60, /* 01100000 */
	0xc6, /* 11000110 */
	0xfe, /* 11111110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 123 0x7b '{' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x0e, /* 00001110 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x70, /* 01110000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x0e, /* 00001110 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 124 0x7c '|' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 125 0x7d '}' */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x70, /* 01110000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x0e, /* 00001110 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x18, /* 00011000 */
	0x70, /* 01110000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 126 0x7e '~' */
	0x00, /* 00000000 */
	0x76, /* 01110110 */
	0xdc, /* 11011100 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */

	/* 127 0x7f DEL */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
	0x00, /* 00000000 */
};

#endif /* _UI_FONT_H_ */
