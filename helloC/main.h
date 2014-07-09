//
//  main.h
//  helloC
//
//  Created by Tasso (Ich) on 11.06.14.
//  Copyright (c) 2014 Tasso (Ich). All rights reserved.
//

#ifndef helloC_main_h
#define helloC_main_h

//define boolean
#define false   0
#define true    1
#define boolean int
//typedef int boolean;

  //=========
 // Image Size
//
#define DIM_X 360
#define DIM_Y 240

  //========
 // RGB
//
#define R 0 //R red
#define G 1 //G green
#define B 2 //B blue

  //========
 // HSL,  but  H is not used, instead we might have A (alpha.
//
#define S 0 //S saturation
#define L 1 //L lightness
#define A 2 //A alpha


#define COLOR_ORANGE 0.08
#define COLOR_GREEN 0.41

typedef unsigned char byte;
//typedef char[] string;
#endif


// // Notizen: \\ \\
//BG Scanline in 0L bis 8L (4px hoch) Schwarz, mit 8/255 alpha
//Big Scannline in 0L bis h (6px Schritte?)

