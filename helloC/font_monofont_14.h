//
//  font_monofont_14.h
//  helloC
//
//  Source File: monofont.tiff
//  Source Path: /Users/luckydonald/Documents/Uni/java-workspace/Image Importer/images/PipBoy/monofont.ttf
//
//  Generated by luckydonald on 09.07.14 12:38:41.
//  Copyright (c) 2014 luckydonald. All rights reserved.
//  luckydonald@flutterb.at

#ifndef font_monofont_14_h
#define font_monofont_14_h


///Copy Pasta Easy Mode (TM) Stuff:
/* Include Command:
#include "font_monofont_14.h"
*/
//
/* Class collection to dynamicly call this object.
struct font font_monofont_14;
font_monofont_14.first_char = FONT_MONOFONT_14_FIRST_CHAR;
font_monofont_14.last_char = FONT_MONOFONT_14_LAST_CHAR;
font_monofont_14.index = font_monofont_14_index;
font_monofont_14.info = font_monofont_14_info;
font_monofont_14.data = font_monofont_14_data;
*/


typedef unsigned char byte;

#define false   0
#define true    1
#define boolean int

#define FONT_MONOFONT_14_FIRST_CHAR    32
#define FONT_MONOFONT_14_LAST_CHAR     126

// Stores the offset in an long (hue) enough format. 
long font_monofont_14_index[95] = { 
/* [ ] */        0,
/* [!] */        0,
/* ["] */       43,
/* [#] */       51,
/* [$] */       95,
/* [%] */      150,
/* [&] */      200,
/* ['] */      247,
/* [(] */      254,
/* [)] */      310,
/* [*] */      366,
/* [+] */      387,
/* [,] */      418,
/* [-] */      438,
/* [.] */      445,
/* [/] */      452,
/* [0] */      500,
/* [1] */      546,
/* [2] */      591,
/* [3] */      638,
/* [4] */      684,
/* [5] */      729,
/* [6] */      775,
/* [7] */      820,
/* [8] */      864,
/* [9] */      910,
/* [:] */      955,
/* [;] */      986,
/* [<] */     1029,
/* [=] */     1061,
/* [>] */     1084,
/* [?] */     1116,
/* [@] */     1160,
/* [A] */     1205,
/* [B] */     1251,
/* [C] */     1297,
/* [D] */     1343,
/* [E] */     1390,
/* [F] */     1436,
/* [G] */     1479,
/* [H] */     1525,
/* [I] */     1571,
/* [J] */     1616,
/* [K] */     1660,
/* [L] */     1706,
/* [M] */     1752,
/* [N] */     1799,
/* [O] */     1845,
/* [P] */     1892,
/* [Q] */     1935,
/* [R] */     1987,
/* [S] */     2034,
/* [T] */     2081,
/* [U] */     2126,
/* [V] */     2173,
/* [W] */     2219,
/* [X] */     2266,
/* [Y] */     2313,
/* [Z] */     2358,
/* [[] */     2405,
/* [\] */     2461,
/* []] */     2513,
/* [^] */     2569,
/* [_] */     2585,
/* [`] */     2585,
/* [a] */     2588,
/* [b] */     2623,
/* [c] */     2670,
/* [d] */     2705,
/* [e] */     2748,
/* [f] */     2783,
/* [g] */     2826,
/* [h] */     2873,
/* [i] */     2919,
/* [j] */     2963,
/* [k] */     3018,
/* [l] */     3064,
/* [m] */     3108,
/* [n] */     3143,
/* [o] */     3177,
/* [p] */     3212,
/* [q] */     3255,
/* [r] */     3302,
/* [s] */     3334,
/* [t] */     3368,
/* [u] */     3407,
/* [v] */     3441,
/* [w] */     3475,
/* [x] */     3510,
/* [y] */     3545,
/* [z] */     3590,
/* [{] */     3624,
/* [|] */     3679,
/* [}] */     3734,
/* [~] */     3789 
};
//width,height, start,length
//The offset is the total position in the data array.
//Ths start contains the number of left out pixels before the char started with some color.
//Array with 4 fields per char, (w,h, s,l), Width and Heigth of the char, array Offset and start offset (how much of the array/image was skipped due compression) and length of this char in the char-data-array.
int font_monofont_14_info[380] = { 
/* [ ] */      6, 14,   0,  0, 
/* [!] */      6, 14,  26, 43, 
/* ["] */      6, 14,  32,  8, 
/* [#] */      6, 14,  26, 44, 
/* [$] */      6, 14,  21, 55, 
/* [%] */      6, 14,  24, 50, 
/* [&] */      6, 14,  25, 47, 
/* ['] */      6, 14,  32,  7, 
/* [(] */      6, 14,  27, 56, 
/* [)] */      6, 14,  26, 56, 
/* [*] */      6, 14,  25, 21, 
/* [+] */      6, 14,  38, 31, 
/* [,] */      6, 14,  62, 20, 
/* [-] */      6, 14,  50,  7, 
/* [.] */      6, 14,  62,  7, 
/* [/] */      6, 14,  26, 48, 
/* [0] */      6, 14,  25, 46, 
/* [1] */      6, 14,  25, 45, 
/* [2] */      6, 14,  25, 47, 
/* [3] */      6, 14,  25, 46, 
/* [4] */      6, 14,  26, 45, 
/* [5] */      6, 14,  25, 46, 
/* [6] */      6, 14,  26, 45, 
/* [7] */      6, 14,  25, 44, 
/* [8] */      6, 14,  25, 46, 
/* [9] */      6, 14,  25, 45, 
/* [:] */      6, 14,  38, 31, 
/* [;] */      6, 14,  39, 43, 
/* [<] */      6, 14,  39, 32, 
/* [=] */      6, 14,  42, 23, 
/* [>] */      6, 14,  36, 32, 
/* [?] */      6, 14,  25, 44, 
/* [@] */      6, 14,  25, 45, 
/* [A] */      6, 14,  25, 46, 
/* [B] */      6, 14,  25, 46, 
/* [C] */      6, 14,  25, 46, 
/* [D] */      6, 14,  24, 47, 
/* [E] */      6, 14,  25, 46, 
/* [F] */      6, 14,  25, 43, 
/* [G] */      6, 14,  25, 46, 
/* [H] */      6, 14,  25, 46, 
/* [I] */      6, 14,  26, 45, 
/* [J] */      6, 14,  27, 44, 
/* [K] */      6, 14,  25, 46, 
/* [L] */      6, 14,  25, 46, 
/* [M] */      6, 14,  24, 47, 
/* [N] */      6, 14,  25, 46, 
/* [O] */      6, 14,  24, 47, 
/* [P] */      6, 14,  25, 43, 
/* [Q] */      6, 14,  25, 52, 
/* [R] */      6, 14,  24, 47, 
/* [S] */      6, 14,  24, 47, 
/* [T] */      6, 14,  24, 45, 
/* [U] */      6, 14,  24, 47, 
/* [V] */      6, 14,  24, 46, 
/* [W] */      6, 14,  24, 47, 
/* [X] */      6, 14,  24, 47, 
/* [Y] */      6, 14,  24, 45, 
/* [Z] */      6, 14,  25, 47, 
/* [[] */      6, 14,  26, 56, 
/* [\] */      6, 14,  24, 52, 
/* []] */      6, 14,  26, 56, 
/* [^] */      6, 14,  25, 16, 
/* [_] */      6, 14,   0,  0, 
/* [`] */      6, 14,  13,  3, 
/* [a] */      6, 14,  36, 35, 
/* [b] */      6, 14,  24, 47, 
/* [c] */      6, 14,  37, 35, 
/* [d] */      6, 14,  28, 43, 
/* [e] */      6, 14,  36, 35, 
/* [f] */      6, 14,  26, 43, 
/* [g] */      6, 14,  36, 47, 
/* [h] */      6, 14,  25, 46, 
/* [i] */      6, 14,  27, 44, 
/* [j] */      6, 14,  27, 55, 
/* [k] */      6, 14,  25, 46, 
/* [l] */      6, 14,  26, 44, 
/* [m] */      6, 14,  36, 35, 
/* [n] */      6, 14,  37, 34, 
/* [o] */      6, 14,  36, 35, 
/* [p] */      6, 14,  36, 43, 
/* [q] */      6, 14,  36, 47, 
/* [r] */      6, 14,  37, 32, 
/* [s] */      6, 14,  37, 34, 
/* [t] */      6, 14,  32, 39, 
/* [u] */      6, 14,  37, 34, 
/* [v] */      6, 14,  36, 34, 
/* [w] */      6, 14,  36, 35, 
/* [x] */      6, 14,  37, 35, 
/* [y] */      6, 14,  36, 45, 
/* [z] */      6, 14,  37, 34, 
/* [{] */      6, 14,  27, 55, 
/* [|] */      6, 14,  26, 55, 
/* [}] */      6, 14,  26, 55, 
/* [~] */      6, 14,  48, 12  
};
// Array with 1 fields per Pixel, for 95 Chars, in total 3801 entries. The encoding uses segments of 1 element representing the Alpha value.
byte font_monofont_14_data[3801] = { 
/* [ ] {l:  0, o:00000}  */    
/* [!] {l: 43, o:00000}  */    0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x3D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD4,
/* ["] {l:  8, o:00043}  */    0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,0xFF,
/* [#] {l: 44, o:00051}  */    0x57,0xAC,0x2C,0x96,0x00,0x00,0x9F,0x66,0x5B,0x50,0x00,0x00,0xE7,0x1B,0x9F,0x0C,0x2E,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x6E,0x92,0x7F,0x88,0x00,0xD8,0xFF,0xFF,0xFF,0xFF,0x74,0x02,0xF0,0x06,0xC7,0x02,0x00,0x41,0xBF,0x22,0xA7,
/* [$] {l: 55, o:00095}  */    0xFF,0x00,0x00,0x00,0x1D,0xA7,0xFF,0x7B,0x00,0x00,0xC7,0x22,0x6E,0xF2,0x00,0x00,0xFA,0x48,0x02,0x06,0x00,0x00,0xC7,0xFF,0xB2,0x1D,0x00,0x00,0x19,0xA5,0xFF,0xCC,0x00,0x00,0x2C,0x06,0x3D,0xFA,0x00,0x00,0xD6,0x72,0x22,0xE3,0x00,0x00,0x33,0xBF,0xFF,0x61,0x00,0x00,0x00,0x00,0xF8,
/* [%] {l: 50, o:00150}  */    0xFA,0x9F,0x00,0x0C,0xEE,0x06,0x11,0xFC,0x00,0x6C,0x9B,0x00,0x11,0xFC,0x00,0xD2,0x35,0x00,0xFA,0x9D,0x37,0xD2,0x88,0xFA,0x00,0x00,0x9B,0x6E,0xF8,0x19,0x00,0x0A,0xF4,0x0E,0xFF,0x00,0x00,0x68,0x9F,0x00,0xF8,0x19,0x00,0xCE,0x3B,0x00,0x85,0xFA,0x00,0x06,
/* [&] {l: 47, o:00200}  */    0x79,0xFA,0x85,0x00,0x00,0x00,0xF8,0x11,0xF6,0x00,0x00,0x00,0xD8,0xBD,0xD4,0x00,0x00,0x04,0xB4,0xFF,0x57,0x00,0x00,0x94,0xA1,0xEE,0xB2,0x0E,0x90,0xF8,0x08,0x70,0xFF,0xE5,0x8C,0xE1,0x28,0x46,0xFF,0xE1,0x00,0x48,0xE9,0xF0,0x79,0xBF,0x5D,
/* ['] {l:  7, o:00247}  */    0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,
/* [(] {l: 56, o:00254}  */    0xAE,0x19,0x00,0x00,0x00,0x41,0xE1,0x04,0x00,0x00,0x00,0x9D,0x72,0x00,0x00,0x00,0x00,0xDA,0x2A,0x00,0x00,0x00,0x00,0xFA,0x00,0x00,0x00,0x00,0x00,0xFA,0x00,0x00,0x00,0x00,0x00,0xD8,0x28,0x00,0x00,0x00,0x00,0x9D,0x72,0x00,0x00,0x00,0x00,0x3F,0xE1,0x06,0x00,0x00,0x00,0x00,0xA7,0x17,
/* [)] {l: 56, o:00310}  */    0x9F,0x06,0x00,0x00,0x00,0x00,0xB0,0x5F,0x00,0x00,0x00,0x00,0x57,0xA7,0x00,0x00,0x00,0x00,0x17,0xE3,0x00,0x00,0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,0x19,0xE5,0x00,0x00,0x00,0x00,0x57,0xA7,0x00,0x00,0x00,0x00,0xB2,0x5F,0x00,0x00,0x00,0x00,0x9D,0x06,
/* [*] {l: 21, o:00366}  */    0x04,0x7D,0x06,0x08,0x00,0x00,0x99,0x7B,0x77,0x4E,0x00,0x00,0x00,0x4E,0x48,0x00,0x00,0x00,0x46,0x37,0x7F,
/* [+] {l: 31, o:00387}  */    0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,
/* [,] {l: 20, o:00418}  */    0x99,0x63,0x00,0x00,0x00,0x00,0xB0,0x59,0x00,0x00,0x00,0x00,0xDD,0x39,0x00,0x00,0x00,0x00,0xD2,0x02,
/* [-] {l:  7, o:00438}  */    0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,
/* [.] {l:  7, o:00445}  */    0xCE,0x00,0x00,0x00,0x00,0x00,0xCE,
/* [/] {l: 48, o:00452}  */    0x96,0x68,0x00,0x00,0x00,0x00,0xC3,0x3B,0x00,0x00,0x00,0x02,0xF6,0x02,0x00,0x00,0x00,0x37,0xC9,0x00,0x00,0x00,0x00,0x66,0x9D,0x00,0x00,0x00,0x00,0xA3,0x59,0x00,0x00,0x00,0x00,0xD6,0x2C,0x00,0x00,0x00,0x06,0xF6,0x00,0x00,0x00,0x00,0x46,0xB4,
/* [0] {l: 46, o:00500}  */    0x52,0xEE,0xF0,0x52,0x00,0x00,0xDD,0x33,0x35,0xDF,0x00,0x00,0xFC,0x00,0x00,0xFC,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFC,0x00,0x00,0xFC,0x00,0x00,0xDD,0x35,0x35,0xDF,0x00,0x00,0x52,0xEE,0xEE,0x52,
/* [1] {l: 45, o:00546}  */    0x06,0x63,0xC7,0x00,0x00,0x00,0xF2,0xC1,0xFF,0x00,0x00,0x00,0x30,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,
/* [2] {l: 47, o:00591}  */    0x5F,0xF0,0xE7,0x46,0x00,0x00,0xE9,0x88,0x24,0xDA,0x00,0x00,0x5D,0x46,0x1B,0xF8,0x00,0x00,0x00,0x00,0x8C,0xD0,0x00,0x00,0x00,0x1D,0xFA,0x6C,0x00,0x00,0x00,0x99,0xE9,0x06,0x00,0x00,0x26,0xFC,0x7B,0x00,0x00,0x00,0xA7,0xFF,0xFF,0xFF,0x50,
/* [3] {l: 46, o:00638}  */    0x4C,0xE7,0xE7,0x48,0x00,0x00,0xE3,0x5D,0x33,0xE1,0x00,0x00,0x00,0x00,0x06,0xF8,0x00,0x00,0x00,0x00,0x88,0xAA,0x00,0x00,0x00,0x00,0x6E,0xD0,0x00,0x00,0xFA,0x00,0x02,0xF8,0x00,0x00,0xC9,0x4A,0x3D,0xDD,0x00,0x00,0x3D,0xE7,0xEB,0x4C,
/* [4] {l: 45, o:00684}  */    0x30,0xE3,0xFF,0x00,0x00,0x00,0x99,0x79,0xFF,0x00,0x00,0x15,0xF6,0x15,0xFF,0x00,0x00,0x7D,0xA1,0x00,0xFF,0x00,0x00,0xE3,0x35,0x00,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,
/* [5] {l: 46, o:00729}  */    0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0x08,0x00,0x00,0x00,0x00,0xFF,0x4A,0x00,0x00,0x00,0x00,0xFF,0xE9,0xF2,0x55,0x00,0x00,0xAE,0x26,0x50,0xDF,0x00,0x00,0x00,0x04,0x00,0xF8,0x00,0x00,0xBD,0x74,0x30,0xC9,0x00,0x00,0x55,0xF0,0xE3,0x33,
/* [6] {l: 45, o:00775}  */    0x02,0xDD,0x33,0x00,0x00,0x00,0x70,0xAC,0x00,0x00,0x00,0x0C,0xE9,0x24,0x00,0x00,0x00,0x7B,0xFF,0xF6,0x61,0x00,0x00,0xD8,0x3F,0x3F,0xE7,0x00,0x00,0xFA,0x00,0x00,0xF8,0x00,0x00,0xD0,0x3F,0x41,0xD0,0x00,0x00,0x3F,0xE7,0xE7,0x3F,
/* [7] {l: 44, o:00820}  */    0xFF,0xFF,0xFF,0xFA,0x0C,0x00,0x00,0x00,0x52,0xB4,0x00,0x00,0x00,0x00,0xA7,0x61,0x00,0x00,0x00,0x04,0xF6,0x11,0x00,0x00,0x00,0x50,0xB6,0x00,0x00,0x00,0x00,0xA5,0x66,0x00,0x00,0x00,0x04,0xF4,0x13,0x00,0x00,0x00,0x4E,0xBD,
/* [8] {l: 46, o:00864}  */    0x4C,0xE9,0xE7,0x4A,0x00,0x00,0xE1,0x28,0x2A,0xE3,0x00,0x00,0xF2,0x2E,0x2C,0xF8,0x00,0x00,0x59,0xFF,0xFF,0xA5,0x00,0x00,0xAA,0x46,0x3F,0xCE,0x00,0x00,0xFA,0x00,0x00,0xF8,0x00,0x00,0xDD,0x41,0x46,0xDF,0x00,0x00,0x4E,0xEE,0xEB,0x4C,
/* [9] {l: 45, o:00910}  */    0x3D,0xE3,0xE5,0x3F,0x00,0x00,0xCE,0x44,0x46,0xD0,0x00,0x00,0xFA,0x00,0x00,0xFA,0x00,0x00,0xDD,0x3F,0x44,0xF2,0x00,0x00,0x4C,0xE7,0xFF,0xB8,0x00,0x00,0x00,0x00,0xC9,0x5B,0x00,0x00,0x00,0x50,0xD2,0x00,0x00,0x00,0x00,0xD4,0x46,
/* [:] {l: 31, o:00955}  */    0xD2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD2,
/* [;] {l: 43, o:00986}  */    0xD2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5D,0x83,0x00,0x00,0x00,0x00,0xA7,0xC3,0x00,0x00,0x00,0x00,0xC7,0x88,0x00,0x00,0x00,0x00,0xCC,0x4A,
/* [<] {l: 32, o:01029}  */    0x4E,0xBD,0x00,0x00,0x57,0xD2,0xC5,0x44,0x00,0xD8,0xC5,0x3D,0x00,0x00,0x00,0xA1,0xE1,0x66,0x00,0x00,0x00,0x00,0x2C,0xB4,0xD6,0x52,0x00,0x00,0x00,0x00,0x39,0xB6,
/* [=] {l: 23, o:01061}  */    0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xF8,
/* [>] {l: 32, o:01084}  */    0xBF,0x3D,0x00,0x00,0x00,0x00,0x59,0xD2,0xC5,0x44,0x00,0x00,0x00,0x00,0x50,0xD0,0xBF,0x00,0x00,0x06,0x74,0xEB,0x88,0x00,0x61,0xE1,0xA1,0x22,0x00,0x00,0xB6,0x2C,
/* [?] {l: 44, o:01116}  */    0x55,0xE9,0xE7,0x52,0x00,0x00,0xE7,0x8A,0x17,0xE7,0x00,0x00,0x00,0x00,0x5B,0xE3,0x00,0x00,0x00,0x68,0xE9,0x3D,0x00,0x00,0x00,0xFA,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD4,
/* [@] {l: 45, o:01160}  */    0x7D,0xF8,0xD4,0x22,0x00,0x55,0xBF,0x08,0x7B,0xAA,0x00,0xBD,0xF8,0xFF,0x8A,0xF4,0x00,0xF8,0xF6,0x4A,0x8A,0xFA,0x00,0xFC,0xFC,0x0C,0x79,0xC5,0x00,0xE7,0xEE,0x70,0xE9,0x44,0x00,0x90,0xA5,0x02,0x48,0x04,0x00,0x11,0xB6,0xF8,0x74,
/* [A] {l: 46, o:01205}  */    0x59,0xFF,0x46,0x00,0x00,0x00,0x9D,0xFF,0x74,0x00,0x00,0x00,0xCC,0xFF,0xAA,0x00,0x00,0x04,0xFC,0xD4,0xE9,0x00,0x00,0x41,0xFF,0x7F,0xFF,0x17,0x00,0x6C,0xFC,0x4A,0xFF,0x52,0x00,0xAA,0xFF,0xFF,0xFF,0x8C,0x00,0xE3,0x15,0x00,0x41,0xBB,
/* [B] {l: 46, o:01251}  */    0xFF,0xFF,0xF6,0x63,0x00,0x00,0xFF,0x00,0x33,0xEE,0x00,0x00,0xFF,0x00,0x33,0xF6,0x00,0x00,0xFF,0xFF,0xFF,0x81,0x00,0x00,0xFF,0x00,0x57,0xAE,0x00,0x00,0xFF,0x00,0x00,0xF8,0x00,0x00,0xFF,0x00,0x55,0xE7,0x00,0x00,0xFF,0xFF,0xF2,0x5B,
/* [C] {l: 46, o:01297}  */    0x3F,0xDF,0xF8,0xAC,0x06,0x00,0xD4,0x3D,0x48,0xFF,0x57,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0x06,0xFF,0x66,0x00,0xD4,0x3F,0x66,0xFF,0x3D,0x00,0x3D,0xDF,0xFA,0x8C,
/* [D] {l: 47, o:01343}  */    0xFF,0xFF,0xFC,0xDA,0x44,0x00,0xFF,0x00,0x00,0x57,0xDA,0x00,0xFF,0x00,0x00,0x00,0xFC,0x00,0xFF,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0xFC,0x00,0xFF,0x00,0x00,0x46,0xDD,0x00,0xFF,0xFF,0xFC,0xDA,0x41,
/* [E] {l: 46, o:01390}  */    0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
/* [F] {l: 43, o:01436}  */    0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,
/* [G] {l: 46, o:01479}  */    0x4A,0xE9,0xEE,0x57,0x00,0x00,0xDA,0x35,0x81,0xE5,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFC,0x00,0x02,0xFF,0x00,0x00,0xE1,0x46,0x55,0xFF,0x00,0x00,0x52,0xF2,0xBB,0xFF,
/* [H] {l: 46, o:01525}  */    0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,
/* [I] {l: 45, o:01571}  */    0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
/* [J] {l: 44, o:01616}  */    0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x02,0xF6,0x00,0x00,0x00,0x02,0x72,0xBF,0x00,0x00,0xFF,0xFF,0xD6,0x2A,
/* [K] {l: 46, o:01660}  */    0xFF,0x00,0xC5,0xEB,0x02,0x00,0xFF,0x2C,0xFF,0x8E,0x00,0x00,0xFF,0x90,0xFF,0x2A,0x00,0x00,0xFF,0xF2,0xC7,0x00,0x00,0x00,0xFF,0xD8,0x6A,0x00,0x00,0x00,0xFF,0x68,0xB0,0x00,0x00,0x00,0xFF,0x02,0xE3,0x28,0x00,0x00,0xFF,0x00,0x74,0x99,
/* [L] {l: 46, o:01706}  */    0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
/* [M] {l: 47, o:01752}  */    0xFF,0xB2,0x00,0x00,0xC1,0x00,0xFF,0xFA,0x02,0x39,0xFF,0x00,0xFF,0xFF,0x41,0xBB,0xFF,0x00,0xFF,0xE1,0xB6,0xD8,0xFF,0x00,0xFF,0x7B,0xFF,0x5F,0xFF,0x00,0xFF,0x15,0xD8,0x00,0xFF,0x00,0xFF,0x00,0x1F,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0xFF,
/* [N] {l: 46, o:01799}  */    0xFF,0xB8,0x00,0xFF,0x00,0x00,0xFF,0xF8,0x0A,0xFF,0x00,0x00,0xFF,0xB0,0x57,0xFF,0x00,0x00,0xFF,0x61,0xA7,0xFF,0x00,0x00,0xFF,0x15,0xF2,0xFF,0x00,0x00,0xFF,0x00,0xC1,0xFF,0x00,0x00,0xFF,0x00,0x74,0xFF,0x00,0x00,0xFF,0x00,0x28,0xFF,
/* [O] {l: 47, o:01845}  */    0x30,0xD2,0xFA,0xD2,0x33,0x00,0xD0,0x6E,0x00,0x6A,0xD0,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0xFF,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0xFF,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0xD2,0x6E,0x00,0x6A,0xCE,0x00,0x2E,0xD0,0xFA,0xD2,0x30,
/* [P] {l: 43, o:01892}  */    0xFF,0xFF,0xE7,0x48,0x00,0x00,0xFF,0x46,0x85,0xD8,0x00,0x00,0xFF,0x00,0x00,0xFA,0x00,0x00,0xFF,0x02,0x59,0xD8,0x00,0x00,0xFF,0xFF,0xE1,0x44,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,
/* [Q] {l: 52, o:01935}  */    0x4C,0xEB,0xE7,0x4A,0x00,0x00,0xDA,0x3F,0x3F,0xD8,0x00,0x00,0xFC,0x00,0x00,0xFC,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFC,0x00,0x00,0xFC,0x00,0x00,0xD4,0x3F,0x3F,0xF2,0x00,0x00,0x3F,0xE1,0xFF,0x99,0x00,0x00,0x00,0x00,0x4C,0xB8,
/* [R] {l: 47, o:01987}  */    0xFF,0xFF,0xE3,0x41,0x00,0x00,0xFF,0x00,0x52,0xD4,0x00,0x00,0xFF,0x00,0x00,0xFA,0x00,0x00,0xFF,0x0E,0x77,0xDF,0x00,0x00,0xFF,0xFF,0xFC,0x3D,0x00,0x00,0xFF,0xAA,0xFF,0x52,0x00,0x00,0xFF,0x24,0xFC,0xD6,0x00,0x00,0xFF,0x00,0x94,0xFF,0x5F,
/* [S] {l: 47, o:02034}  */    0x44,0xE3,0xFA,0xB2,0x0C,0x00,0xDD,0x1B,0x22,0xFC,0x5B,0x00,0xFC,0x70,0x02,0x00,0x00,0x00,0xA3,0xFF,0xEB,0x85,0x0C,0x00,0x02,0x6A,0xD6,0xFF,0xB6,0x00,0x00,0x00,0x00,0x55,0xFA,0x00,0xE1,0xCC,0x08,0x2A,0xCE,0x00,0x46,0xDD,0xFA,0xCC,0x2E,
/* [T] {l: 45, o:02081}  */    0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,
/* [U] {l: 47, o:02126}  */    0xFF,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0xFF,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0xCE,0x61,0x00,0x61,0xCE,0x00,0x2E,0xD0,0xFA,0xD2,0x2E,
/* [V] {l: 46, o:02173}  */    0xE3,0x17,0x00,0x44,0xBB,0x00,0xAA,0x52,0x00,0x72,0x8C,0x00,0x6C,0x8E,0x00,0xAA,0x52,0x00,0x3F,0xBF,0x00,0xE5,0x17,0x00,0x02,0xF6,0x15,0xEB,0x00,0x00,0x00,0xC7,0x85,0xAC,0x00,0x00,0x00,0x99,0xE1,0x77,0x00,0x00,0x00,0x59,0xFF,0x4A,
/* [W] {l: 47, o:02219}  */    0xF4,0x7F,0x00,0x52,0xFF,0x06,0xC9,0x99,0x1F,0x5B,0xF8,0x00,0xAE,0x9F,0xA5,0x63,0xDD,0x00,0x9B,0xAE,0xFC,0xBB,0xAE,0x00,0x6A,0xFA,0xF6,0xFA,0xA1,0x00,0x52,0xFF,0x96,0xFF,0x7D,0x00,0x41,0xFF,0x33,0xFC,0x57,0x00,0x0C,0xF8,0x00,0xD2,0x48,
/* [X] {l: 47, o:02266}  */    0xC7,0x3F,0x00,0x66,0xA7,0x00,0x63,0xA7,0x00,0xC9,0x3F,0x00,0x06,0xEE,0x44,0xDD,0x00,0x00,0x00,0x90,0xE7,0x77,0x00,0x00,0x00,0x2E,0xFF,0x7D,0x00,0x00,0x00,0x63,0xFF,0xDF,0x00,0x00,0x00,0xC5,0x9D,0xFF,0x44,0x00,0x2E,0xDF,0x04,0xEE,0xAA,
/* [Y] {l: 45, o:02313}  */    0xC5,0xD2,0x00,0xC3,0xD2,0x00,0x5D,0xFF,0x28,0xFC,0x6A,0x00,0x02,0xE9,0xBD,0xEE,0x08,0x00,0x00,0x83,0xFF,0x8C,0x00,0x00,0x00,0x1F,0xFF,0x1F,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,
/* [Z] {l: 47, o:02358}  */    0xB4,0xFF,0xFF,0xE7,0x02,0x00,0x00,0x00,0x7B,0x8A,0x00,0x00,0x00,0x00,0xDD,0x26,0x00,0x00,0x00,0x3D,0xC7,0x00,0x00,0x00,0x00,0x9F,0x66,0x00,0x00,0x00,0x0A,0xF4,0x08,0x00,0x00,0x00,0x68,0x9D,0x00,0x00,0x00,0x00,0xC9,0xFF,0xFF,0xFF,0xA7,
/* [[] {l: 56, o:02405}  */    0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xF8,0xF8,
/* [\] {l: 52, o:02461}  */    0x46,0xB4,0x00,0x00,0x00,0x00,0x06,0xF8,0x00,0x00,0x00,0x00,0x00,0xD6,0x2C,0x00,0x00,0x00,0x00,0xA3,0x59,0x00,0x00,0x00,0x00,0x66,0x9D,0x00,0x00,0x00,0x00,0x39,0xC9,0x00,0x00,0x00,0x00,0x02,0xF8,0x02,0x00,0x00,0x00,0x00,0xC3,0x3B,0x00,0x00,0x00,0x00,0x96,0x68,
/* []] {l: 56, o:02513}  */    0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0xF8,0xF8,
/* [^] {l: 16, o:02569}  */    0x7F,0xFF,0x35,0x00,0x00,0x1F,0xE5,0x7D,0xD0,0x00,0x00,0xAA,0x3D,0x00,0x7B,0x6A,
/* [_] {l:  0, o:02585}  */    
/* [`] {l:  3, o:02585}  */    0x4E,0xCE,0x2E,
/* [a] {l: 35, o:02588}  */    0x26,0xDD,0xF8,0xBB,0x22,0x00,0x70,0xD6,0x11,0x59,0xD4,0x00,0x00,0x00,0x00,0x02,0xFC,0x00,0x5D,0xDD,0xFA,0xF8,0xFF,0x00,0xFA,0x3D,0x00,0x41,0xFF,0x00,0x66,0xE5,0xFC,0xA5,0xFF,
/* [b] {l: 47, o:02623}  */    0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x41,0xEB,0xD0,0x19,0x00,0xFF,0x6C,0x00,0x83,0xA5,0x00,0xFF,0x06,0x00,0x04,0xF6,0x00,0xFF,0x06,0x00,0x04,0xF6,0x00,0xFF,0x83,0x00,0x81,0xAE,0x00,0xFF,0x5D,0xF2,0xD8,0x22,
/* [c] {l: 35, o:02670}  */    0x19,0xC3,0xFA,0xAC,0x06,0x00,0xAA,0x79,0x11,0x8E,0x00,0x00,0xF8,0x04,0x00,0x00,0x00,0x00,0xF8,0x04,0x00,0x00,0x00,0x00,0xAA,0x77,0x06,0x5F,0x00,0x00,0x17,0xC3,0xFA,0xB8,0x0E,
/* [d] {l: 43, o:02705}  */    0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x22,0xDA,0xE9,0x44,0xFF,0x00,0xB0,0x83,0x00,0x72,0xFF,0x00,0xF8,0x04,0x00,0x04,0xFF,0x00,0xF6,0x04,0x00,0x04,0xFF,0x00,0xA5,0x83,0x00,0x83,0xFF,0x00,0x1B,0xD4,0xF2,0x63,0xFF,
/* [e] {l: 35, o:02748}  */    0x15,0xC1,0xFA,0xA1,0x00,0x00,0xA1,0x79,0x0C,0xD8,0x5B,0x00,0xF4,0x0E,0x00,0x77,0xAC,0x00,0xF8,0xFF,0xFF,0xFF,0xE5,0x00,0xA7,0x46,0x06,0x81,0x37,0x00,0x15,0xBD,0xFA,0xC9,0x1D,
/* [f] {l: 43, o:02783}  */    0x99,0xF8,0xFF,0x00,0x00,0x00,0xFC,0x0C,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,
/* [g] {l: 47, o:02826}  */    0x19,0xC5,0xF2,0x52,0xFF,0x00,0xB2,0x83,0x00,0x74,0xFF,0x00,0xF8,0x06,0x00,0x04,0xFF,0x00,0xF8,0x06,0x00,0x04,0xFF,0x00,0xA1,0x85,0x00,0x81,0xFF,0x00,0x15,0xC3,0xF6,0x70,0xFA,0x00,0x2E,0x17,0x02,0x88,0xCC,0x00,0x81,0xE9,0xF8,0xCE,0x2E,
/* [h] {l: 46, o:02873}  */    0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x3F,0xE9,0x90,0x00,0x00,0xFF,0x1B,0x28,0xF8,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,
/* [i] {l: 44, o:02919}  */    0xD4,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
/* [j] {l: 55, o:02963}  */    0xD4,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x11,0xF0,0x00,0x00,0x00,0xF8,0xF6,0x6C,
/* [k] {l: 46, o:03018}  */    0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x30,0xDA,0x02,0x00,0xFF,0x00,0xB6,0x61,0x00,0x00,0xFF,0x37,0xDA,0x00,0x00,0x00,0xFF,0xAE,0x77,0x00,0x00,0x00,0xFF,0x30,0xE3,0x13,0x00,0x00,0xFF,0x00,0x7F,0xA5,
/* [l] {l: 44, o:03064}  */    0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,
/* [m] {l: 35, o:03108}  */    0xFF,0xA5,0x74,0xBD,0xA3,0x00,0xFF,0x3F,0xF0,0x3B,0xF8,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
/* [n] {l: 34, o:03143}  */    0xFF,0x3D,0xE9,0x99,0x00,0x00,0xFF,0x33,0x26,0xF8,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,
/* [o] {l: 35, o:03177}  */    0x19,0xC1,0xFA,0xC3,0x17,0x00,0xAA,0x83,0x00,0x83,0xA7,0x00,0xF8,0x06,0x00,0x06,0xF6,0x00,0xF8,0x06,0x00,0x06,0xF6,0x00,0xAA,0x85,0x00,0x85,0xA7,0x00,0x17,0xBF,0xFA,0xBF,0x17,
/* [p] {l: 43, o:03212}  */    0xFF,0x44,0xEB,0xD4,0x1B,0x00,0xFF,0x68,0x00,0x85,0xA1,0x00,0xFF,0x06,0x00,0x04,0xF4,0x00,0xFF,0x06,0x00,0x06,0xF6,0x00,0xFF,0x83,0x00,0x85,0xAA,0x00,0xFF,0x61,0xF2,0xD6,0x1F,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xF8,
/* [q] {l: 47, o:03255}  */    0x22,0xD8,0xE7,0x3F,0xFF,0x00,0xAE,0x7B,0x00,0x70,0xFF,0x00,0xF8,0x04,0x00,0x04,0xFF,0x00,0xF6,0x04,0x00,0x04,0xFF,0x00,0xA5,0x83,0x00,0x85,0xFF,0x00,0x1B,0xD4,0xF2,0x66,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xF8,
/* [r] {l: 32, o:03302}  */    0x9B,0x3F,0xD6,0xCE,0x02,0x00,0xFF,0xC9,0xB8,0xE3,0x24,0x00,0xFF,0x59,0x02,0x0A,0x00,0x00,0xFF,0x4A,0x00,0x00,0x00,0x00,0xFF,0x4A,0x00,0x00,0x00,0x00,0xFF,0x4A,
/* [s] {l: 34, o:03334}  */    0x6A,0xF6,0xE7,0x4E,0x00,0x00,0xF8,0x11,0x00,0x00,0x00,0x00,0xC1,0xD0,0x66,0x08,0x00,0x00,0x02,0x57,0xC7,0xC7,0x00,0x00,0x00,0x00,0x15,0xF6,0x00,0x00,0xA1,0xF8,0xF0,0x61,
/* [t] {l: 39, o:03368}  */    0xFF,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x11,0x00,0x00,0x00,0x00,0xCC,0xFF,0xFF,
/* [u] {l: 34, o:03407}  */    0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFF,0x00,0x00,0xFC,0x00,0x00,0xE5,0x2A,0x2A,0xE3,0x00,0x00,0x52,0xEE,0xEE,0x52,
/* [v] {l: 34, o:03441}  */    0xDA,0x28,0x00,0xE1,0x90,0x00,0x99,0x68,0x11,0xFF,0x4C,0x00,0x52,0xAA,0x50,0xFA,0x04,0x00,0x0C,0xF4,0x81,0xBF,0x00,0x00,0x00,0xC7,0xE5,0x7D,0x00,0x00,0x00,0x85,0xFF,0x39,
/* [w] {l: 35, o:03475}  */    0xEE,0x66,0x39,0x5B,0xF8,0x00,0xAE,0x9B,0x90,0x83,0xC3,0x00,0x94,0xAC,0xF6,0xA7,0xA1,0x00,0x59,0xE3,0xFF,0xF0,0x68,0x00,0x39,0xFF,0xAC,0xFF,0x4A,0x00,0x04,0xFC,0x39,0xFF,0x0C,
/* [x] {l: 35, o:03510}  */    0xA7,0x9D,0x39,0xFC,0x1F,0x00,0x2E,0xE9,0x88,0xA3,0x00,0x00,0x00,0xB8,0xEB,0x2A,0x00,0x00,0x00,0xCC,0xFF,0x28,0x00,0x00,0x3F,0xFA,0x9D,0xA7,0x00,0x00,0xC1,0xA1,0x2A,0xFF,0x28,
/* [y] {l: 45, o:03545}  */    0xDA,0x83,0x00,0xC9,0x83,0x00,0x99,0xB2,0x04,0xFC,0x41,0x00,0x52,0xF6,0x3F,0xF6,0x02,0x00,0x0C,0xFC,0x92,0xB0,0x00,0x00,0x00,0xC9,0xF6,0x6C,0x00,0x00,0x00,0x88,0xFF,0x2A,0x00,0x00,0x00,0x4C,0xE7,0x00,0x00,0x00,0x00,0x5B,0x9D,
/* [z] {l: 34, o:03590}  */    0xEB,0xFF,0xFF,0x3D,0x00,0x00,0x00,0x33,0xDA,0x00,0x00,0x00,0x00,0x96,0x77,0x00,0x00,0x00,0x06,0xF0,0x15,0x00,0x00,0x00,0x66,0xAA,0x00,0x00,0x00,0x00,0xC9,0xFF,0xFF,0xBB,
/* [{] {l: 55, o:03624}  */    0xD0,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x02,0xFC,0x00,0x00,0x00,0x00,0x63,0xAA,0x00,0x00,0x00,0x00,0xDA,0xA3,0x00,0x00,0x00,0x00,0x13,0xFC,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x04,0xFF,0x00,0x00,0x00,0x00,0x00,0xD6,
/* [|] {l: 55, o:03679}  */    0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,
/* [}] {l: 55, o:03734}  */    0xD8,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0xA5,0x72,0x00,0x00,0x00,0x00,0xA3,0xE1,0x00,0x00,0x00,0x00,0xFC,0x17,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0xD4,
/* [~] {l: 12, o:03789}  */    0x7F,0xF6,0xA1,0x4E,0x79,0x06,0x6C,0x06,0x74,0xE7,0xB6,0x02
};

#endif
