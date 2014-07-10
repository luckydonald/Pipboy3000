//
//  main.c
//  helloC
//
//  Created by Tasso (Ich) on 10.06.14.
//  Copyright (c) 2014 Tasso (Ich). All rights reserved.
//




/*
 *
 *
 *
 *      ,o888888o.        ,o888888o.     8 8888888888   8 8888888888   8 8888888888   8 8888888888
 *     8888     `88.   . 8888     `88.   8 8888         8 8888         8 8888         8 8888
 *  ,8 8888       `8. ,8 8888       `8b  8 8888         8 8888         8 8888         8 8888
 *  88 8888           88 8888        `8b 8 8888         8 8888         8 8888         8 8888
 *  88 8888           88 8888         88 8 888888888888 8 888888888888 8 888888888888 8 888888888888
 *  88 8888           88 8888         88 8 8888         8 8888         8 8888         8 8888
 *  88 8888           88 8888        ,8P 8 8888         8 8888         8 8888         8 8888
 *  `8 8888       .8' `8 8888       ,8P  8 8888         8 8888         8 8888         8 8888
 *     8888     ,88'   ` 8888     ,88'   8 8888         8 8888         8 8888         8 8888
 *      `8888888P'        `8888888P'     8 8888         8 8888         8 888888888888 8 888888888888
 *
 *   ____                                           _
 *  / ___| _ __   ___  _ __  ___  ___  _ __ ___  __| |
 *  \___ \| '_ \ / _ \| '_ \/ __|/ _ \| '__/ _ \/ _` |
 *   ___) | |_) | (_) | | | \__ \ (_) | | |  __/ (_| |
 *  |____/| .__/ \___/|_| |_|___/\___/|_|  \___|\__,_|
 *        |_|
 *   _
 *  | |__  _   _
 *  | '_ \| | | |
 *  | |_) | |_| |
 *  |_.__/ \__, |
 *          |___/
 *
 *
 *   _     _   _                   ____   __ _       _   _            _                 _
 *  | |   | | | |          _      / / /  / _| |     | | | |          | |               | |
 *  | |__ | |_| |_ _ __   (_)    / / /  | |_| |_   _| |_| |_ ___ _ __| |__         __ _| |_
 *  | '_ \| __| __| '_ \        / / /   |  _| | | | | __| __/ _ \ '__| '_ \       / _` | __|
 *  | | | | |_| |_| |_) |  _   / / /    | | | | |_| | |_| ||  __/ |  | |_) |  _  | (_| | |_
 *  |_| |_|\__|\__| .__/  (_) /_/_/     |_| |_|\__,_|\__|\__\___|_|  |_.__/  (_)  \__,_|\__|
 *                | |
 *                |_|
 *
 *
 *                             //            .
 *                          |,'/             \'
 * .                       //-+ .,-----...    \ \                       -
 *                        /'|_|--'  '     `-\_ \ <\
 *  \ `                  / ,' _.._           :-[   \                ,' '
 *   \ `.                ,',-'    -._        |   \ |               /  /
 *    \  `              / /          \A      |  /X:|             ,'  /
 *     \   \           / /             \     ; /XX| |          ,'   /
 *      \   `.        | ;        _,.   | ,--/' (XX  |        ,'    /
 *       \    `._     |;        -   \  ,'      \+  .'     _,'     /
 *        \      `-.  |'       ,"8b  ,'   op=.    ,'   ,,'       /
 *         \        `-|       |_o88b    ,88b YL  /   ,'         |
 *         \           ||.     8888b    d88bbo8L`' ,'          .'
 *          |           .`.    8888P    88888P'.'i'            |
 *          |           '  \   `88P     Y8888 .' \             |
 *          |       .  ,-'' `    ' °  °  `""   ||              |
 *         ,       .|.' _,_ || | | `---'       '|               `
 *        --.._    | | /  ' '|   |        /     /           _.--''
 *             `.  '.  \   _'  | |       /    '|          ,'
 *               \  `.  `''   ,''      ,'|  .  '         .'
 *                \   `.    _, |     -- |   |'/          |
 *                '.    |:::            |   |  ``..__   /
 *                 L,--'    `-         _\   `-- |    `-.
 *                            '       /  `._   /
 *                          ,'   |   /      `'`.
 *                         /   | |  .'   |  /   `.
 *                         |   \|   |     /-'    |
 *                     __  '    |   |     \       |
 *         _,.-===['''---''     |   |      \     |
 *     _.`=_`...    ''  '''--. |    |      |   _   _
 *    '_,-'                   `|     \     '        `.
 *    '             ,'.        |     '   ,'          |
 *  .'             |  -.._____/       .''-..___  _,,,'
 *  |              \          `       |
 *  \ )|      |  /`.],         `'---''
 *   / \      '   ._  '
 *      `.        _ `-..__
 *        ``--......=....-----'
 *
 */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> //using printf()
#include <stdlib.h> //using malloc()

#include "main.h"


//requirements
#include "FONT.h"
#include "LINE.h"
#include "SCREEN.h"


//Images

#include "image_bg.h"
#include "image_pip.h"
//#include "pipstats_image_mono.h"     // Kept for life bar reference



//Fonts

#include "font_monofont_12.h"
#include "font_monofont_14.h"
#include "font_monofont_16.h"
#include "font_monofont_16_b.h"
#include "font_monofont_18.h"
#include "font_monofont_24.h"



#define XY_POS(x, y) (y * DIM_X * 2 + x * 2)


struct RGBColor {
    byte r;
    byte g;
    byte b;
};
struct HSLColor {
    double h;
    double s;
    double l;
};
struct HSLAColor {
    double h;
    double s;
    double l;
    double alpha; //1 = not transparent // 0 = transparent
};
struct image{
    int width;
    int height;
    boolean has_alpha;
    byte* data;
};
struct pos {
    int x;
    int y;
};


//byte colorModifier[3] = {0xFF, 0x01, 0x33,0xFF};  //TODO: beautify this.
double colorHue = COLOR_ORANGE;//0.41; //Interressante Farben sind ungefähr alle 1/7 auf der Skala.
                        //0.08 = Orange !

// Funktionen die später kommen.
void writeToFile(const char* name, double* hslColors, double colorHue);
void insertAt(double* canvas, int canvas_x, int canvas_y, struct image* image);
double convertHueToRGB(double var1, double var2, double d);
struct RGBColor convertHSLtoRGB(struct HSLColor color);
struct HSLColor convertRGBtoHSL(struct RGBColor color);
double doMathMagic(double canvas, double image, double alpha);
double maxOfThree(double a, double b, double c);
double minOfThree(double a, double b, double c);
double max(double a, double b);
double min(double a, double b);
struct HSLColor newHSL(double h, double s, double l);
struct RGBColor newRGB(double r, double g, double b);
struct pos calculateCenter(int canvas_x, int canvas_y, int image_x, int image_y);
void drawNormalLine(double* canvas, int canvas_x, int canvas_y, int width, int height);
void drawFadedLine(double* canvas, int canvas_x, int canvas_y, int width, int height, byte where);
int type_string(double* canvas, int canvas_x, int canvas_y, struct font* fontfile, char *StringOfCharacters, int spacing) ;
int type_char(double* canvas, int canvas_x, int canvas_y, int x_pos, struct font* fontfile, unsigned char character);
void drawScreen(double* canvas, byte screen, byte subscreen, byte subsubscreen);
void drawBox(double* canvas, int canvas_x, int canvas_y,  int width, int heigth);

struct image pip_image;
struct image bg_image;
//struct image pipstats_image; //kept for life bar reference.


struct font font_monofont_12;
struct font font_monofont_14;
struct font font_monofont_16;
struct font font_monofont_16_b;
struct font font_monofont_18;
struct font font_monofont_24;

// Ende der Auflistung.



/**
 * Hauptfunktion.
 * Generiert den Hintergrund, und platziert dann die einzelnen Bildfagmente darauf.
 *
 */
int main() //int argc, const char * argv[] //hauptteil
{
    //byte rgbOutputArray[DIM_X * DIM_Y * 3]; //RGB color Array
	double *hslOutputArray = malloc(sizeof(double) * DIM_X * DIM_Y * 2); //HSL color Array, only S and L.
    //struct HSLColor tmpColorOriginal = newHSL(colorHue, 1.0, 0.1);
    //struct RGBColor tmpColor = convertHSLtoRGB(tmpColorOriginal);
    //struct HSLColor tmpColorTest = convertRGBtoHSL(tmpColor);
    //printf("Color Test: (h: %f, s: %f, l: %f) => (r: %d, g: %d, b: %d) => (h: %f, s: %f, l: %f)\n\n", tmpColorOriginal.h, tmpColorOriginal.s, tmpColorOriginal.l, tmpColor.r, tmpColor.g, tmpColor.b, tmpColorTest.h, tmpColorTest.s, tmpColorTest.l);
    
    //Start der Objekt-Fälschungen
    
    /*
    // Kept for life bar reference
    pipstats_image.has_alpha = PIPSTATS_image_HAS_ALPHA;
    pipstats_image.height = PIPSTATS_image_HEIGHT;
    pipstats_image.width = PIPSTATS_image_WIDTH;
    pipstats_image.data = pipstats_image_data;
     */
    
    bg_image.has_alpha = BG_IMAGE_HAS_ALPHA;
    bg_image.height = BG_IMAGE_HEIGHT;
    bg_image.width = BG_IMAGE_WIDTH;
    bg_image.data = bg_image_data;
    
    pip_image.has_alpha = PIP_IMAGE_HAS_ALPHA;
    pip_image.height = PIP_IMAGE_HEIGHT;
    pip_image.width = PIP_IMAGE_WIDTH;
    pip_image.data = pip_image_data;
    
    
    font_monofont_12.first_char = FONT_MONOFONT_12_FIRST_CHAR;
    font_monofont_12.last_char = FONT_MONOFONT_12_LAST_CHAR;
    font_monofont_12.index = font_monofont_12_index;
    font_monofont_12.info = font_monofont_12_info;
    font_monofont_12.data = font_monofont_12_data;
    
    font_monofont_14.first_char = FONT_MONOFONT_14_FIRST_CHAR;
    font_monofont_14.last_char = FONT_MONOFONT_14_LAST_CHAR;
    font_monofont_14.index = font_monofont_14_index;
    font_monofont_14.info = font_monofont_14_info;
    font_monofont_14.data = font_monofont_14_data;
    
    font_monofont_16.first_char = FONT_MONOFONT_16_FIRST_CHAR;
    font_monofont_16.last_char = FONT_MONOFONT_16_LAST_CHAR;
    font_monofont_16.index = font_monofont_16_index;
    font_monofont_16.info = font_monofont_16_info;
    font_monofont_16.data = font_monofont_16_data;
    
    font_monofont_16_b.first_char = FONT_MONOFONT_16_B_FIRST_CHAR;
    font_monofont_16_b.last_char = FONT_MONOFONT_16_B_LAST_CHAR;
    font_monofont_16_b.index = font_monofont_16_b_index;
    font_monofont_16_b.info = font_monofont_16_b_info;
    font_monofont_16_b.data = font_monofont_16_b_data;
    
    font_monofont_18.first_char = FONT_MONOFONT_18_FIRST_CHAR;
    font_monofont_18.last_char = FONT_MONOFONT_18_LAST_CHAR;
    font_monofont_18.index = font_monofont_18_index;
    font_monofont_18.info = font_monofont_18_info;
    font_monofont_18.data = font_monofont_18_data;
    
    font_monofont_24.first_char = FONT_MONOFONT_24_FIRST_CHAR;
    font_monofont_24.last_char = FONT_MONOFONT_24_LAST_CHAR;
    font_monofont_24.index = font_monofont_24_index;
    font_monofont_24.info = font_monofont_24_info;
    font_monofont_24.data = font_monofont_24_data;


    //Ende der Objekt-Fälschungen
    
    //Image Checks
    
    //insertAt(hslOutputArray,  0,  0, & bg_resized_image);
    //insertAt(hslOutputArray,  0,  0, & pip_image);
    
    drawScreen(hslOutputArray, SCREEN_STAT,TAB_STAT_STATUS, MODE_STATUS_CND);
    //drawScreen(hslOutputArray, SCREEN_STAT, TAB_STAT_SPECIAL,0);
    writeToFile("first_Perks.ppm", hslOutputArray, colorHue);

    /*
    insertAt(hslOutputArray,  0,  0, & bg_resized_image);
    drawScreen(hslOutputArray, SCREEN_STAT, TAB_STAT_STATUS,MODE_STATUS_CND);
    writeToFile("first_Status_CND.ppm", hslOutputArray, colorHue);
    
    insertAt(hslOutputArray,  0,  0, & bg_resized_image);
    drawScreen(hslOutputArray, SCREEN_STAT, TAB_STAT_SPECIAL,0);
    writeToFile("first_SPECIAL.ppm", hslOutputArray, colorHue);
    
    insertAt(hslOutputArray,  0,  0, & bg_resized_image);
    drawScreen(hslOutputArray, SCREEN_STAT, TAB_STAT_SKILLS,0);
    writeToFile("first_Skills.ppm", hslOutputArray, colorHue);
    
    insertAt(hslOutputArray,  0,  0, & bg_resized_image);
    drawScreen(hslOutputArray, SCREEN_STAT, TAB_STAT_GENERAL,0);
    writeToFile("first_General.ppm", hslOutputArray, colorHue);
*/
    //checks
    
    //Normal Line Checks
    
    //void drawNormalLine(double* canvas, int canvas_x, int canvas_y, int width, int height);
    /*drawNormalLine(hslOutputArray, 10, 10, DIM_X, DIM_Y, 50, 2);
    drawNormalLine(hslOutputArray, 10, 20, DIM_X, DIM_Y, 65, 2);
    drawNormalLine(hslOutputArray, 10, 30, DIM_X, DIM_Y, 80, 2);
    drawNormalLine(hslOutputArray, 10, 40, DIM_X, DIM_Y, 100, 2);
    drawNormalLine(hslOutputArray, 10, 50, DIM_X, DIM_Y, 2, 100);
    drawNormalLine(hslOutputArray, 20, 50, DIM_X, DIM_Y, 2, 100);
    drawNormalLine(hslOutputArray, 30, 50, DIM_X, DIM_Y, 2, 100);
    drawNormalLine(hslOutputArray, 40, 50, DIM_X, DIM_Y, 2, 100);
    drawNormalLine(hslOutputArray, 50, 50, DIM_X, DIM_Y, 2, 100);
    */
  
    /*
    drawFadedLine(hslOutputArray, 10, 10, DIM_X, DIM_Y,  50, 2, LEFT);
    drawFadedLine(hslOutputArray, 10, 20, DIM_X, DIM_Y,  65, 2, LEFT);
    drawFadedLine(hslOutputArray, 10, 30, DIM_X, DIM_Y,  50, 2, LEFT);
    drawFadedLine(hslOutputArray, 10, 40, DIM_X, DIM_Y,  80, 2, LEFT);
    drawFadedLine(hslOutputArray, 10, 50, DIM_X, DIM_Y,  50, 2, LEFT);
    drawFadedLine(hslOutputArray, 10, 60, DIM_X, DIM_Y, 100, 2, LEFT);
    
    drawFadedLine(hslOutputArray, 20, 70, DIM_X, DIM_Y, 2, 100, NONE);
    drawFadedLine(hslOutputArray, 30, 70, DIM_X, DIM_Y, 2, 100, TOP);
    drawFadedLine(hslOutputArray, 40, 70, DIM_X, DIM_Y, 2, 100, NONE);
    drawFadedLine(hslOutputArray, 50, 70, DIM_X, DIM_Y, 2, 100, TOP + BOTTOM);
    drawFadedLine(hslOutputArray, 60, 70, DIM_X, DIM_Y, 2, 100, NONE);
    drawFadedLine(hslOutputArray, 70, 70, DIM_X, DIM_Y, 2, 100, BOTTOM);
    drawFadedLine(hslOutputArray, 80, 70, DIM_X, DIM_Y, 2, 100, NONE);
    */
    /*drawFadedLine(hslOutputArray, 10, 10, DIM_X, DIM_Y, 50,  2, LEFT);
    drawFadedLine(hslOutputArray, 10, 20, DIM_X, DIM_Y, 65,  2, RIGHT);
    drawFadedLine(hslOutputArray, 10, 30, DIM_X, DIM_Y, 80,  2, TOP);
    drawFadedLine(hslOutputArray, 10, 40, DIM_X, DIM_Y, 100, 2, BOTTOM);
    drawFadedLine(hslOutputArray, 10, 50, DIM_X, DIM_Y, 2, 100, TOP);
    drawFadedLine(hslOutputArray, 20, 50, DIM_X, DIM_Y, 2, 100, TOP + BOTTOM);
    drawFadedLine(hslOutputArray, 30, 50, DIM_X, DIM_Y, 2, 100, LEFT);
    drawFadedLine(hslOutputArray, 40, 50, DIM_X, DIM_Y, 2, 100, LEFT);
    drawFadedLine(hslOutputArray, 50, 50, DIM_X, DIM_Y, 2, 100, LEFT);
    */
    
    
    /*
    drawFadedLine(hslOutputArray,   0,   0, DIM_X, DIM_Y, 50, 50, LEFT);
    drawFadedLine(hslOutputArray,  60,   0, DIM_X, DIM_Y, 50, 50, TOP);
    drawFadedLine(hslOutputArray, 120,   0, DIM_X, DIM_Y, 50, 50, RIGHT);
    drawFadedLine(hslOutputArray, 180,   0, DIM_X, DIM_Y, 50, 50, BOTTOM);

    drawFadedLine(hslOutputArray,   0,  60, DIM_X, DIM_Y, 50, 50, NONE);
    drawFadedLine(hslOutputArray,  60,  60, DIM_X, DIM_Y, 50, 50, BOTTOM+TOP);
    drawFadedLine(hslOutputArray, 120,  60, DIM_X, DIM_Y, 50, 50, LEFT+RIGHT);
    drawFadedLine(hslOutputArray, 180,  60, DIM_X, DIM_Y, 50, 50, LEFT+TOP+RIGHT+BOTTOM);
    
    drawFadedLine(hslOutputArray,   0, 120, DIM_X, DIM_Y, 50, 50, LEFT+TOP);
    drawFadedLine(hslOutputArray,  60, 120, DIM_X, DIM_Y, 50, 50, TOP+RIGHT);
    drawFadedLine(hslOutputArray, 120, 120, DIM_X, DIM_Y, 50, 50, RIGHT+BOTTOM);
    drawFadedLine(hslOutputArray, 180, 120, DIM_X, DIM_Y, 50, 50, LEFT+BOTTOM);
    */


    
    /**/
    /*type_string(hslOutputArray, 5, 10,  DIM_X, DIM_Y, &monofont_font, color, "Bitches, es geht!");
    type_colored_string(hslOutputArray, 5, 50,  DIM_X, DIM_Y, &monofont_font, color, "Text, Blabcdefghijklmnopqrstuvwxyz");
    type_colored_string(hslOutputArray, 5, 70,  DIM_X, DIM_Y, &monofont_font, color, "1234567890 ABCDEFGHIJKLMNOPQRSTUVW");
    type_colored_string(hslOutputArray, 5, 90,  DIM_X, DIM_Y, &monofont_font, color, "Und naturlich XYZ+-#*^%${~}[/|\\]\"");
    type_colored_string(hslOutputArray, 5,200,  DIM_X, DIM_Y, &monofont_font, color, "#2 btw...");
    */
    //type_string(hslOutputArray, 30, 215,  DIM_X, DIM_Y, & font_monofont_18, "Hier konnte Ihre Werbung stehen! - Level 69");

    //type_colored_string(hslOutputArray, 25, 1,  DIM_X, DIM_Y, & font_monofont_18, color, "PipBuck");

    //Faded Line Checks
    //drawFadedLine(hslOutputArray, 20, 50, DIM_X, DIM_Y, 50, 50, LEFT);
    
	free(hslOutputArray);

    return 0;
}

/**
 * Kopiert alpha oder nicht alphahaltige Bilder in das Ausgangsbild.
 * Das Ausgangsbild bleibt ohne Alpha Information.
 *
 * canvas       Das Bind in das hineinkopiert wird
 * canvas_ x,y  Position des Images auf dem Canvas
 *
 * canvas_ w,h  Größe des Canvas
 *
 * image        Das hinzuzufügende Bild
 *
 * image_ w,h   Größe des Bildes
 *
 * has_alpha    Ob das einzufügende Bild transparenz enthält.
 *
 *
 *
 *  Depricated: image_ type  Typ des Bildes (1 = y | 2 = y,a | 3 = r,g,b | 4 = r,g,b,a)
 */
void insertAt(double* canvas, int canvas_x, int canvas_y, struct image* image){
    
    byte* image_d = image->data;
    int image_w = image->width;
    int image_h = image->height;
    boolean has_alpha = image->has_alpha;
    for (int y = canvas_y; ( y < DIM_Y ) && ( y - canvas_y < image_h) ; y++) {
        for (int x = canvas_x; ( x < DIM_X ) && ( x - canvas_x < image_w) ; x++) {
            int canvas_pos = XY_POS(x, y);
            int image_pos = ((y-canvas_y) * image_w * (has_alpha?3:2)) + (x-canvas_x) * (has_alpha?3:2);
            double alpha = 0;
            if (has_alpha){  // effizienter mit (has_alpha ? (image[image_pos + A] / 255.0) : 1) ?
                alpha = (image_d[image_pos + A] / 255.0);
            }else{
                alpha = 1; //not transparent
            }
            canvas[canvas_pos + S] = doMathMagic(canvas[canvas_pos + S], image_d[image_pos + S] / 255.0, alpha);
            canvas[canvas_pos + L] = doMathMagic(canvas[canvas_pos + L], image_d[image_pos + L] / 255.0, alpha);
        }
    }
}
/**
 *
 * Berechnet die Zahl zwischen A (canvas) und B (image) abhängig von alpha,
 * wird genutzt um die Mitte von 2 Farben zu finden.
 * Wenn alpha = 0 ist, dann kommt die orginale Zahl A (canvas) raus
 * wenn alpha = 1 ist, dann die Zahl des einzufügenden image s B
 * wenn alpha = 0.5 genau die Mitte
 * und bei anderen alphas zwischen 0 und 1 die passende Relation.
 *
 */
double doMathMagic(double canvas, double image, double alpha){
    if (canvas < image) { // kleiner
        return (canvas + (alpha * (image - canvas)));
    } else if(image < canvas){ // größer
        return (image + ((1 - alpha) * (canvas - image)));
    } else { // gleich
        return canvas;
    }
}


void writeToFile(const char* name, double* hslColors, double colorHue) {
    
    printf("Starting image output to \"%s\".\n", name);
    FILE *fp = fopen(name, "wb"); /* b - binary mode */
    fprintf(fp, "P6\n%d %d\n255\n", DIM_X, DIM_Y);
    for (int y = 0; y < DIM_Y; y++)
    {
        for (int x = 0; x < DIM_X; x++)
        {
            static unsigned char color[3];
            struct HSLColor image_hsla_pixel;
            int i = (y * DIM_X * 2) + (x * 2);
            image_hsla_pixel.h = colorHue;
            
            image_hsla_pixel.s = (hslColors[i + S]);
            image_hsla_pixel.l = (hslColors[i + L]);
            struct RGBColor rgb_pixel  = convertHSLtoRGB(image_hsla_pixel);
            color[0] = rgb_pixel.r;
            color[1] = rgb_pixel.g;
            color[2] = rgb_pixel.b;
            fwrite(color, 1, 3, fp);
        }
    }
    fclose(fp);
    printf("Successfully printed image to \"%s\".\n", name);
}



/**
 * Converts an HSL color value to RGB. Conversion formula
 * adapted from http://en.wikipedia.org/wiki/HSL_color_space. <br />
 * Assumes h, s, and l are contained in the set [0, 1] and
 * returns r, g, and b in the set [0, 255]. <br />
 * <br />
 * http://www.easyrgb.com/index.php?X=MATH&H=19#text19 <br />
 *
 * @param   h	(<code>double</code>, from <b><code>0</code> to <code>1</code></b>)	The hue
 * @param   s	(<code>double</code>, from <b><code>0</code> to <code>1</code></b>)	The saturation
 * @param   l	(<code>double</code>, from <b><code>0</code> to <code>1</code></b>)	The lightness
 * @return  <code> int[3] = {r,g,b}</code> from <b><code>0</code> to <code>255</code></b>:	The RGB representation
 */
struct RGBColor convertHSLtoRGB(struct HSLColor color){
    int r, g, b;
    double h = color.h,
           s = color.s,
           l = color.l;
    double var1;
    double var2;
    if (s == 0) {  					//HSL from 0 to 1
        r = (int) (l * 255);
        g = (int) (l * 255);		//RGB results from 0 to 255
        b = (int) (l * 255);
    }else{
        if (l < 0.5 ) {
            var2 = (l * (1.0 + s));
        }else{
            var2 = l + s - (s * l);
        }
        var1= 2.0 * l - var2;
        //if hue is circle do h/260
        r = (int)(255 * convertHueToRGB(var1, var2, h + (1.0 / 3.0)));
        g = (int)(255 * convertHueToRGB(var1, var2, h));
        b = (int)(255 * convertHueToRGB(var1, var2, h - (1.0 / 3.0)));
    }
    //printf("Color: (h: %f, s: %f, l: %f) = (r: %d, g: %d, b: %d)\n",h,s,l ,r, g, b);
    struct RGBColor result;
    result.r=r;
    result.g=g;
    result.b=b;
    return result;
}


double convertHueToRGB(double var1, double var2, double d){
    if(d < 0) {
        d += 1;
    }
    if(d > 1) {
        d -= 1;
    }
    double result = 0.0;
    if(6 * d < 1) {
        result = var1 + (var2 - var1) * 6.0 * d;
    }else if(2 * d < 1) {
        result = var2;
    }else if(3 * d < 2) {
        result = var1 + ((var2 - var1) * (2.0/3.0 - d) * 6.0);
    }else {
        result = var1;
    }
    return result;
    
}
/**
 * Converts an RGB color value to HSL. Conversion formula
 * adapted from http://en.wikipedia.org/wiki/HSL_color_space.
 * Assumes r, g, and b are contained in the set [0, 255] and
 * returns h, s, and l in the set [0, 1].
 *
 * http://www.easyrgb.com/index.php?X=MATH&H=18#text18
 *
 * @ param   color.r	int, from 0 to 255 	 The red color value
 * @ param   color.g	int, from 0 to 255 	 The green color value
 * @ param   color.b	int, from 0 to 255	 The blue color value
 *
 * @param   color (struct RGBColor)
 *
 * @return {h,s,l} from 0 to 1           The HSL representation
 */
struct HSLColor convertRGBtoHSL(struct RGBColor color){
    //System.out.println("(R: "+red+", G: "+green+", B: "+blue+")");
	
    double r = (double) color.r / 255.0;  	//RGB from 0 to 255
    double g = (double) color.g / 255.0;
    double b = (double) color.b / 255.0;
    
    //System.out.println("RGB in Prozent (r: "+r+", g: "+g+", b: "+b+")");
	
    double max = maxOfThree(r, g, b);  //Min. value of RGB
    double min = minOfThree(r, g, b);  //Max. value of RGB
    double delta = max - min;   //Delta RGB value
    
    double h = 0.0,s,l; //Define for later.
    
    l = (max + min) / 2.0;
	
    if(delta == 0.0){ //This is a gray, no chroma...
     	h = 0.0;		 //HSL results from 0 to 1
     	s = 0.0;
    }else{
        if (l < 0.5){
    	    	s = delta / (max + min);
        }else{
     		s = delta / (2.0 - max - min);
        }
        double delta_R = (((max - r) / 6.0) + (delta / 2.0)) /delta;
        double delta_G = (((max - g) / 6.0) + (delta / 2.0)) /delta;
        double delta_B = (((max - b) / 6.0) + (delta / 2.0)) /delta;
        if (r == max) {
     		h = delta_B - delta_G;
        }else if (g == max) {
     		h = (1.0/3.0) + delta_R - delta_B;
        }else if (b == max) {
     		h = (2.0/3.0) + delta_G - delta_R;
        }
    }
    struct HSLColor result;
    result.h=h;
    result.s=s;
    result.l=l;
    return result;
}
//Basic Maths
double maxOfThree(double a, double b, double c){
    return max(max(a, b),c);
}
double minOfThree(double a, double b, double c){
    return min(min(a, b),c);
}
double max(double a, double b){
    return ((a)>(b))?(a):(b);
}
double min(double a, double b){
    return ((a)<(b))?(a):(b);
}
//Objekt-Fälschungen
struct HSLColor newHSL(double h, double s, double l){
    struct HSLColor result;
    result.h = h;
    result.s = s;
    result.l = l;
    return result;
}
struct RGBColor newRGB(double r, double g, double b){
    struct RGBColor result;
    result.r = r;
    result.g = g;
    result.b = b;
    return result;
}
struct pos calculateCenter(int canvas_x, int canvas_y, int image_x, int image_y){
    struct pos result;
    result.x = (canvas_x / 2) - (image_x / 2);
    result.y = (canvas_y / 2) - (image_y / 2);
    return result;
}
void drawNormalLine(double* canvas, int canvas_x, int canvas_y, int width, int height){
    //calc
    struct HSLColor color;
    color.h = colorHue;
    color.s = 1;//223/255;
    color.l = 127.0/255.0;//56/255;
    //printf("Drawing Line: (x: %d, y: %d, w: %d, h: %d) => (h: %f, s: %f, l: %f)\n\n", canvas_x, canvas_y, width, height, color.h, color.s, color.l);
    for (int x = canvas_x; x < canvas_x + width &&  x < DIM_X; x++) {
        for (int y = canvas_y; y < canvas_y + height &&  y < DIM_Y; y++) {
            int canvas_pos = XY_POS(x, y);
            canvas[canvas_pos + S] = color.s;
            canvas[canvas_pos + L] = color.l;
                //printf("Drawing Line Pixel: (x: %d, y: %d) => (h: %f, s: %f, l: %f)\n\n", x, y, color.h, color.s, color.l);
        }
    }
}
void drawFadedLine(double* canvas, int canvas_x, int canvas_y, int width, int height, byte where){
    //cal
    struct HSLColor color;
    color.h = colorHue;
    color.s = 1;//223/255;
    color.l = 0.5; //127.0/255.0;
                   //printf("Drawing Faded Line: (x: %d, y: %d, w: %d, h: %d) => (h: %f, s: %f, l: %f)\n\n", canvas_x, canvas_y, width, height, color.h, color.s, color.l);
                   //printf("Output: (where: %d, LEFT: %d, TOP: %d, RIGHT: %d, BOTTOM: %d, isLEFT: %s, isTOP: %s, isRIGHT: %s, isBOTTOM: %s)\n\n", where, LEFT, TOP, RIGHT, BOTTOM, (where & LEFT ? "true":"false"),(where & TOP ? "true":"false"),(where & RIGHT ? "true":"false"),(where & BOTTOM ? "true":"false"));
    //for (int y = canvas_y; ( y < DIM_Y ) && ( y - canvas_y < image_h) ; y++) {
    for (int x = canvas_x; x < canvas_x + width &&  x < DIM_X; x++) { //TODO: < oder <= ?
        for (int y = canvas_y; y < canvas_y + height &&  y < DIM_Y; y++) { //TODO: < oder <= ?
            int canvas_pos = XY_POS(x, y);
            //printf("x: %d y: %d pos: %d\n", x,y,canvas_pos);
            //canvas[canvas_pos + S] = color.s;
            double alphaX  = 1;//bla
            if((where & LEFT) && (x - canvas_x < 16)){
                alphaX  =  min(alphaX, ((x - canvas_x) * 0.0625)); // 1/8 = 0.125 alpha per px
                //printf("Fading: (x: %d, y: %d, w: %d, hue= %d, a: %f)", x, y, width, height, alphaX);
            }
            if((where & RIGHT) && width - (x - canvas_x) < 16){
                alphaX  =  min(alphaX, (width - (x - canvas_x)) * 0.0625);
            }
            if((where & TOP) && (y - canvas_y < 16)){
                 alphaX  =  min(alphaX, ((y - canvas_y) * 0.0625)); // 1/8 = 0.125 alpha per px
                                                                  //printf("Fading: (x: %d, y: %d, w: %d, hue= %d, a: %f)", x, y, width, height, alphaX);
            }
            if((where & BOTTOM) && height - (y - canvas_y) < 16){
                 alphaX  =  min(alphaX, (height - (y - canvas_y)) * 0.0625);
            }
            
            canvas[canvas_pos + S] = doMathMagic(canvas[canvas_pos + S], 1, alphaX);
            canvas[canvas_pos + L] = doMathMagic(canvas[canvas_pos + L], 0.5, alphaX);
            //printf("Drawing Line Pixel: (x: %d, y: %d) => (h: %f, s: %f, l: %f)\n\n", x, y, color.h, color.s, color.l);
        }
    }
    
}


// char Test[12] = {'H','a','l','l','o',' ','W','o','r','l','d','\0'};
// das abschliessende \0 nicht vergessen! Sonst ist
// das kein String!
//Test[11] = '\0';

// type_string("NewbieHack.com");
/**
 * @param x_pos the pixel offset to the given canvas_x, used to write more than 1 char, accounting previous char's width.
 *
 */

int type_char(double* canvas, int canvas_x, int canvas_y, int x_pos, struct font* fontfile, unsigned char character){
    if(character > fontfile->last_char) {
        printf("Error: (type_char)  Out of range!\n");
        return 0;
    }
    //printf("Running.\n");
    int charOffset = character - fontfile->first_char;
    struct charInfo char_i;
    char_i.offset = fontfile->index[charOffset];
    char_i.width  = fontfile->info[(charOffset*CHAR_ENUM) + CHAR_WIDTH];
    char_i.height = fontfile->info[(charOffset*CHAR_ENUM) + CHAR_HEIGHT];
    char_i.start  = fontfile->info[(charOffset*CHAR_ENUM) + CHAR_START];
    char_i.length = fontfile->info[(charOffset*CHAR_ENUM) + CHAR_LENGTH];
    long pos = -1;
    canvas_x = canvas_x + x_pos;
    //printf("Still Running.\n");
    //printf("Output char %d [%c] with offset %d. This is #%d\n", character,character, x_pos, charOffset);
    x_pos = x_pos + char_i.width; //after everything important
    for (int y = 0; y < char_i.height; y++) {
        for (int x = 0; x < char_i.width; x++) {
            int curr_x = canvas_x + x;
            int curr_y = canvas_y + y;
            pos = ((x) + (y * char_i.width));

            //check canvas out of bounds
            if(curr_x > DIM_X){
                //printf("[%c] Out Of Range (X)... (([x:%d|%d:y] start: %d, pos: %ld, offset:%ld, length: %d)\n", character,curr_x,curr_y,char_i.start,pos,char_i.offset, char_i.length);

                continue;
            }else if (curr_y > DIM_Y){
                // printf("[%c] Out Of Range (Y)... (([x:%d|%d:y] start: %d, pos: %ld, offset:%ld, length: %d)\n", character,curr_x,curr_y,char_i.start,pos,char_i.offset, char_i.length);
                continue;
            }else if(pos < char_i.start){ //check if we can start? else keep moving untill we reached the right pixel where to start.
                                           //TODO mayby 1 to late? running again at 74, with 73 in the file
                                           //TODO fix in java
                                           //printf("[%c] Skipping... ([x:%d|%d:y] start: %d, pos: %ld, offset:%ld, length: %d)\n", character, curr_x,curr_y, char_i.start,pos,char_i.offset, char_i.length);
                //int canvas_pos = XY_POS(curr_x,curr_y);
                //canvas[canvas_pos + S] = 1.0;
                //canvas[canvas_pos + L] = 0.7;
                continue; //used to calculate the x,y of the start, most efficient way I guess (modulo makes a for-loop too when compiled.)
            }else if(pos >= char_i.length + char_i.start){
                //writeToFile("temp.ppm", canvas, 0.5);

                //printf("[%c] Done! ([x:%d|%d:y] start: %d, pos: %ld, offset:%ld, length: %d)\n", character, curr_x,curr_y, char_i.start,pos,char_i.offset, char_i.length);
                //int canvas_pos = XY_POS(curr_x,curr_y);
                //canvas[canvas_pos + S] = 1.0;
                //canvas[canvas_pos + L] = 1.0;
                return x_pos; //done!
            } //else: we are in range of the char array.
            
            long canvas_pos =XY_POS(curr_x, curr_y);// ((curr_x) + (curr_y * DIM_Y))*2; //otherwise to small!
            canvas_pos = XY_POS(curr_x,curr_y);
            //((10+0)*2) + ((10 +0)*2*240) = 4820;
            long font_pos = char_i.offset + pos - char_i.start;
            double alpha = (fontfile->data[font_pos]/255.0);
            canvas[canvas_pos + S] = doMathMagic(canvas[canvas_pos + S], 1, alpha);
            canvas[canvas_pos + L] = doMathMagic(canvas[canvas_pos + L], 0.5, alpha);
            //writeToFile("temp.ppm", canvas, 0.9);
            //printf("[%c] Drawing (([x:%d|%d:y] start: %d, pos: %ld, offset:%ld, length: %d Alpha: %3d[%3ld] > %2f) to x:%d y:%d = %ld\n", character,curr_x,curr_y, char_i.start,pos,char_i.offset, char_i.length, fontfile->data[font_pos],font_pos,alpha, x,y, canvas_pos);
            
            
        }
    }
    //writeToFile("temp.ppm", canvas, 0.5);

    return x_pos;
}
int type_string(double* canvas, int canvas_x, int canvas_y, struct font* fontfile, char *StringOfCharacters, int spacing) {
    int i = 0;
    while(*StringOfCharacters > 0)
    {
        i = type_char(canvas, canvas_x, canvas_y, i, fontfile, *StringOfCharacters++);
        i += spacing;
    }
    return i;
}
void die(char *StringOfCharacters){
    printf("#######################\nCRITICAL ERROR.%s\n#######################",StringOfCharacters);
};
void drawBox(double* canvas, int canvas_x, int canvas_y,  int width, int height){
    for (int x = canvas_x; x < canvas_x + width &&  x < canvas_x + DIM_X; x++) { //TODO: < oder <= ?
        for (int y = canvas_y; y < canvas_y + height &&  y < canvas_y + DIM_Y; y++) { //TODO: < oder <= ?
            int canvas_pos = XY_POS(x, y);
            if (x == canvas_x || x == canvas_x + width - 1 || y == canvas_y || y == canvas_y + height - 1) {
                canvas[canvas_pos + S] = 1;
                canvas[canvas_pos + L] = 0.5;
            } else {
                canvas[canvas_pos + S] = doMathMagic(canvas[canvas_pos + S], 1, 0.3);  //alpha needed, befause of background
                canvas[canvas_pos + L] = doMathMagic(canvas[canvas_pos + L], 0.5, 0.3);
            }
        }
    }
}
void drawLifeBar(double* canvas, int canvas_x, int canvas_y, int percent, byte arrow_side){
    //TODO: implement percent ability
    int bar_px = percent * 0.34;
    for (int x = canvas_x; x < canvas_x + 29 + 34 &&  x < canvas_x + DIM_X; x++) { //TODO: < oder <= ?
         if(arrow_side & LEFT) {
            if(x-canvas_x <= 8) {      //fade part
                double alpha = (x-canvas_x)*0.125;
                int canvas_pos = XY_POS(x, canvas_y);
                canvas[canvas_pos + S] = doMathMagic(canvas[canvas_pos + S], 1, alpha);
                canvas[canvas_pos + L] = doMathMagic(canvas[canvas_pos + L], 0.5, alpha);
            } else if(x-canvas_x <= 8 + 5) { //arrow part >8
                for (int y = canvas_y; y <= (x-canvas_x-8+canvas_y); y++){
                    int canvas_pos = XY_POS(x, y);
                    canvas[canvas_pos + S] = 1;
                    canvas[canvas_pos + L] = 0.5;
                }
            }
        }else if(x-canvas_x == 8 + 5) { //left enclosing line
            int canvas_pos = XY_POS(x, canvas_y);
            canvas[canvas_pos + S] = doMathMagic(canvas[canvas_pos + S], 1, 0.5);
            canvas[canvas_pos + L] = doMathMagic(canvas[canvas_pos + L], 0.5, 0.5);
            for (int y = canvas_y + 1; y <= canvas_y + 7; y++){
                int canvas_pos = XY_POS(x, y);
                canvas[canvas_pos + S] = 1;
                canvas[canvas_pos + L] = 0.5;
            }
        }
        if((x-canvas_x == 8 + 5 + 1)) { //space before bar
            int canvas_pos = XY_POS(x, canvas_y);
            canvas[canvas_pos + S] = 1;
            canvas[canvas_pos + L] = 0.5;
        }else if((x-canvas_x > 8 + 5 + 1) &&  (x-canvas_x <= 8 + 5 + 1 + bar_px)) { // the bar itself, filled part
            int canvas_pos = XY_POS(x, canvas_y);
            canvas[canvas_pos + S] = 1;
            canvas[canvas_pos + L] = 0.5;
            for (int y = canvas_y + 2; y <= canvas_y + 7; y++){
                canvas_pos = XY_POS(x, y);
                canvas[canvas_pos + S] = 1;
                canvas[canvas_pos + L] = 0.5;
            }
        }else if((x-canvas_x > 8 + 5 + 1 + bar_px) &&  (x-canvas_x <= 8 + 5 + 1 + 34)) { // the bar itself, empty part
            int canvas_pos = XY_POS(x, canvas_y);
            canvas[canvas_pos + S] = 1;
            canvas[canvas_pos + L] = 0.5;
        }else if(x-canvas_x == 8 + 5 + 1 + 34 + 1) { //space after bar
            int canvas_pos = XY_POS(x, canvas_y);
            canvas[canvas_pos + S] = 1;
            canvas[canvas_pos + L] = 0.5;
        }
        if (arrow_side & RIGHT) {
            if(x-canvas_x > 8 + 5 + 1 + 34 + 1  && x-canvas_x <= 8 + 5 + 1 + 34 + 1 + 5) { //arrow part >8
                for (int y = canvas_y; y <= (canvas_y + (canvas_x + 8 + 5 + 1 + 34 + 1 + 6 - x)); y++){
                    int canvas_pos = XY_POS(x, y);
                    canvas[canvas_pos + S] = 1;
                    canvas[canvas_pos + L] = 0.5;
                }
            }else if((x-canvas_x > 8 + 5 + 1 + 34 + 1 + 5) && x-canvas_x <= 8 + 5 + 1 + 34 + 1 + 5 + 8 + 1) {      //fade part
                double alpha = (canvas_x + 8 + 5 + 1 + 34 + 1 + 5 + 9 - x) * 0.125;
                int canvas_pos = XY_POS(x, canvas_y);
                canvas[canvas_pos + S] = doMathMagic(canvas[canvas_pos + S], 1, alpha);
                canvas[canvas_pos + L] = doMathMagic(canvas[canvas_pos + L], 0.5, alpha);
            }
        }else{
            if(x-canvas_x == 8 + 5 + 1 + 34 + 1 + 1) { //right enclosing line
                int canvas_pos = XY_POS(x, canvas_y);
                canvas[canvas_pos + S] = doMathMagic(canvas[canvas_pos + S], 1, 0.5);
                canvas[canvas_pos + L] = doMathMagic(canvas[canvas_pos + L], 0.5, 0.5);
                for (int y = canvas_y + 1; y <= canvas_y + 7; y++){
                    int canvas_pos = XY_POS(x, y);
                    canvas[canvas_pos + S] = 1;
                    canvas[canvas_pos + L] = 0.5;
                }
            }
        }
    }
}
void drawScreen(double* canvas, byte screen, byte tab, byte part){
    int textend = 0; //Debug //TODO remove.
    insertAt(canvas,  0,  0, & bg_image);
    if (screen & SCREEN_STAT) {
        ///int textend =   printf("#######################\nEnde: %d\n#######################\n", 30 + textend);

        
        // TOP LINE
        drawFadedLine(canvas, 5, 10,  1, 18, BOTTOM); // - - - - - - - top line, faded part, left side
        drawNormalLine(canvas, 5, 10, 15, 1); // - - - - - - - - - - - top line, part one
        type_string(canvas, 27, 1, & font_monofont_18, "STATS", 2); //  STATS text in topline
        drawNormalLine(canvas, 77 , 10, DIM_X - 1 - 5 - 77, 1); // - - - - - - - - - - top line, part 2
        drawFadedLine(canvas, DIM_X - 1 - 5, 10, 1, 18, BOTTOM); // - - - - - - - top line, faded part, right side
        if (tab & TAB_STAT_STATUS) {
        // SIDE TABS
            if(tab & MODE_STATUS_CND) {
                drawBox(canvas, 5, 32,  35, 20);
            } else if(tab & MODE_STATUS_RAD) {
                drawBox(canvas, 5, 52,  35, 20);
            } else {
                drawBox(canvas, 5, 72,  35, 20);
            }
            type_string(canvas, 14, 34, & font_monofont_16, "CND", 0);
            type_string(canvas, 14, 54, & font_monofont_16, "RAD", 0);
            type_string(canvas, 14, 74, & font_monofont_16, "EFF", 0);
            // MAIN STUFF
            if(tab & MODE_STATUS_CND) {
                //insertAt(canvas,  35,  20, & pipstats_image_mono); // - - - - - fallout boy / littlepip
                insertAt(canvas,  146,  30, & pip_image); // - - - - - fallout boy / littlepip
                //x: (480/2)-(187/2) = 146,5
                //y: (272/2)-(180/2) = 46
                textend = type_string(canvas, 170, 226, & font_monofont_16_b, "LittlePip - Level 20", 0);
                //x: (480/2)-(140/2) = 170
                //y: (272/2)+(180/2) +20 = 246
                drawLifeBar(canvas,  70,  70, 90, RIGHT); //Head
                drawLifeBar(canvas, 197, 125, 75, NONE);  //Body
                drawLifeBar(canvas, 120, 170, 25, RIGHT); //Leg 1
                drawLifeBar(canvas, 120, 190, 30, RIGHT); //Leg 2
                drawLifeBar(canvas, 330, 170, 15, LEFT);  //Leg 3
                drawLifeBar(canvas, 330, 190, 40, LEFT);  //Leg 4
                                                          //TODO: make clear which legs is which.
            }
            drawBox(canvas, 20, DIM_Y - 21,  49, 20);  // - - - Status
        } else if (tab & TAB_STAT_SPECIAL) {
            drawBox(canvas, 74, DIM_Y - 21,  70, 20);  // - - - S.P.E.C.I.A.L.
            drawLifeBar(canvas, 20, 20, 50, LEFT);
            drawLifeBar(canvas, 20, 40, 50, NONE);
            drawLifeBar(canvas, 20, 60, 50, RIGHT);
        } else if (tab & TAB_STAT_SKILLS) {
            drawBox(canvas, 155, DIM_Y - 21,  50, 20); // - - - Skills
        } else if (tab & TAB_STAT_PERKS) {
            drawBox(canvas, 223, DIM_Y - 21,  44, 20); // - - - Perks
        } else if (tab & TAB_STAT_GENERAL) { //TAB_STAT_GENERAL
            drawBox(canvas,  DIM_X - 20 - 42 - 7 - 7, DIM_Y - 21,  56, 20); // - - - General

        } else {
            die("Unknown STATS tab.");
        }
        
        // BOTTOM LINE, all need that.
        drawFadedLine(canvas, 10, DIM_Y - 27,  1, 18, TOP); // - - - - - - - top line, faded part, left side
        drawNormalLine(canvas, 10, DIM_Y - 10, 10, 1); // - - - - - - - - - - - top line, part one
        type_string(canvas, 27,  DIM_Y - 19, & font_monofont_16, "Status", 0);
        drawNormalLine(canvas, 69 , DIM_Y - 10, 5, 1); // - - - - - - - - - - top line, part 2
        type_string(canvas, 81,  DIM_Y - 19, & font_monofont_16, "S.P.E.C.I.A.L.", -2);
        drawNormalLine(canvas, 144 , DIM_Y - 10, 11, 1); // - - - - - - - - - - top line, part 2
        type_string(canvas, 162,  DIM_Y - 19, & font_monofont_16, "Skills", 0);
        drawNormalLine(canvas, 205 , DIM_Y - 10, 19, 1); // - - - - - - - - - - top line, part 2
        type_string(canvas, 230  ,  DIM_Y - 19, & font_monofont_16, "Perks", 0);
        drawNormalLine(canvas, 267 , DIM_Y - 10, 18, 1); // - - - - - - - - - - top line, part 2
        type_string(canvas, DIM_X- 1 - 20 - 42 - 7 ,  DIM_Y - 19, & font_monofont_16, "General", 0);
        drawNormalLine(canvas, 340 , DIM_Y - 10, 10, 1); // - - - - - - - - - - top line, part 2

        drawFadedLine(canvas, DIM_X - 1 - 5, DIM_Y - 27, 1, 18, TOP); // - - - - - - - top line, faded part, right side

                            //(68 * 0) + 44
        
         // Tab Marker
        drawFadedLine(canvas, 48 + (96 * 0), DIM_Y - 28,  1, 18, TOP + BOTTOM);
        drawFadedLine(canvas, 48 + (96 * 1), DIM_Y - 28,  1, 18, TOP + BOTTOM);
        drawFadedLine(canvas, 48 + (96 * 2), DIM_Y - 28,  1, 18, TOP + BOTTOM);
        drawFadedLine(canvas, 48 + (96 * 3), DIM_Y - 28,  1, 18, TOP + BOTTOM);
        drawFadedLine(canvas, 48 + (96 * 4), DIM_Y - 28,  1, 18, TOP + BOTTOM);
        
        


        //int textend =
        //
        
    } else if (screen & SCREEN_GGST) {
        
    } else if (screen & SCREEN_DATEN){
        
    }
    printf("#######################\nLength: %d\n#######################\n", textend);


}






















