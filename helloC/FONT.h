//
//  FONT.h
//  helloC
//
//  Created by Tasso (Ich) on 04.07.14.
//  Copyright (c) 2014 Tasso (Ich). All rights reserved.
//

#ifndef helloC_FONT_h
#define helloC_FONT_h

struct font {
    int     first_char;
    int     last_char;
    boolean has_alpha;
    long*   index;
    int*    info;
    byte*   data;
};
#define CHAR_WIDTH  0
#define CHAR_HEIGHT 1
#define CHAR_START  2
#define CHAR_LENGTH 3
#define CHAR_ENUM   4

struct charInfo{
    int width;
    int height;
    int start;
    int length;
    long offset;
};


#endif
