//
//  main.c
//  helloC
//
//  Created by Tasso (Ich) on 10.06.14.
//  Copyright (c) 2014 Tasso (Ich). All rights reserved.
//

#include <stdio.h>
#include "main.h"

//#include "test_image_mono.h"
//#include "img_image_mono.h"
//#include "schwarzlinie_image_mono.h"
#include "bg_resized_image_mono.h"
#include "pipstats_image_mono.h"


#define XY_POS(x, y) (y * DIM_X * 3 + x * 3)


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
struct image_mono {
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
double colorHue = 0.08; //Interressante Farben sind ungefähr alle 1/7 auf der Skala.
                        //0.08 = Orange !

// Funktionen die später kommen.
void writeToFile(const char* name, byte* colors);
void insertAt(byte* canvas, int canvas_x, int canvas_y, int canvas_w, int canvas_h, struct image_mono* image_mono);
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
// Ende der Auflistung.



/**
 * Hauptfunktion.
 * Generiert den Hintergrund, und platziert dann die einzelnen Bildfagmente darauf.
 *
 */
int main() //int argc, const char * argv[]
{
    byte rgbOutputArray[DIM_X * DIM_Y * 3]; //RGB color Array
    byte hslOutputArray[DIM_X * DIM_Y * 2]; //HSL color Array
    struct HSLColor tmpColorOriginal = newHSL(colorHue, 1.0, 0.1);
    struct RGBColor tmpColor = convertHSLtoRGB(tmpColorOriginal);
    struct HSLColor tmpColorTest = convertRGBtoHSL(tmpColor);
    printf("Color Test: (h: %f, s: %f, l: %f) => (r: %d, g: %d, b: %d) => (h: %f, s: %f, l: %f)\n\n", tmpColorOriginal.h, tmpColorOriginal.s, tmpColorOriginal.l, tmpColor.r, tmpColor.g, tmpColor.b, tmpColorTest.h, tmpColorTest.s, tmpColorTest.l);
    
    for (int y = 0; y<DIM_Y; y++) {
        for (int x = 0; x<DIM_X; x++) {
            rgbOutputArray[XY_POS(x, y) + R] = tmpColor.r;
            rgbOutputArray[XY_POS(x, y) + G] = tmpColor.g;
            rgbOutputArray[XY_POS(x, y) + B] = tmpColor.b;
        }

    }
    
    //Start der Objekt-Fälschungen
    /*
    struct image_mono test_image_mono;
    test_image_mono.has_alpha = TEST_IMAGE_MONO_HAS_ALPHA;
    test_image_mono.height = TEST_IMAGE_MONO_HEIGHT;
    test_image_mono.width = TEST_IMAGE_MONO_WIDTH;
    test_image_mono.data = test_image_mono_data;
    
    struct image_mono img_image_mono;
    img_image_mono.has_alpha = IMG_IMAGE_MONO_HAS_ALPHA;
    img_image_mono.height = IMG_IMAGE_MONO_HEIGHT;
    img_image_mono.width = IMG_IMAGE_MONO_WIDTH;
    img_image_mono.data = img_image_mono_data;
    
    struct image_mono schwarzlinie_image_mono;
    schwarzlinie_image_mono.has_alpha = SCHWARZLINIE_IMAGE_MONO_HAS_ALPHA;
    schwarzlinie_image_mono.height = SCHWARZLINIE_IMAGE_MONO_HEIGHT;
    schwarzlinie_image_mono.width = SCHWARZLINIE_IMAGE_MONO_WIDTH;
    schwarzlinie_image_mono.data = schwarzlinie_image_mono_data;
     */
    
    struct image_mono bg_resized_image_mono;
    bg_resized_image_mono.has_alpha = BG_RESIZED_IMAGE_MONO_HAS_ALPHA;
    bg_resized_image_mono.height = BG_RESIZED_IMAGE_MONO_HEIGHT;
    bg_resized_image_mono.width = BG_RESIZED_IMAGE_MONO_WIDTH;
    bg_resized_image_mono.data = bg_resized_image_mono_data;
    
    struct image_mono pipstats_image_mono;
    pipstats_image_mono.has_alpha = PIPSTATS_IMAGE_MONO_HAS_ALPHA;
    pipstats_image_mono.height = PIPSTATS_IMAGE_MONO_HEIGHT;
    pipstats_image_mono.width = PIPSTATS_IMAGE_MONO_WIDTH;
    pipstats_image_mono.data = pipstats_image_mono_data;
    //Ende der Objekt-Fälschungen
    
    insertAt(rgbOutputArray,  0,  0, DIM_X, DIM_Y, & bg_resized_image_mono);
    insertAt(rgbOutputArray, 39, 30, DIM_X, DIM_Y, & pipstats_image_mono);

    //insertAt(colorArray, 100, 2, DIM_X, DIM_Y, & img_image_mono);
    //insertAt(colorArray, 55, 66, DIM_X, DIM_Y, & test_image_mono);
    //insertAt(colorArray, 200, 100, DIM_X, DIM_Y, & img_image_mono);


    writeToFile("first.ppm", rgbOutputArray);
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
void insertAt(byte* canvas, int canvas_x, int canvas_y, int canvas_w, int canvas_h, struct image_mono* image_mono){
    
    byte* image = image_mono->data;
    int image_w = image_mono->width;
    int image_h = image_mono->height;
    boolean has_alpha = image_mono->has_alpha;
    for (int y = canvas_y; ( y < canvas_h ) && ( y - canvas_y < image_h) ; y++) {
        for (int x = canvas_x; ( x < canvas_w ) && ( x - canvas_x < image_w) ; x++) {
            int canvas_pos = XY_POS(x, y);
            int image_pos = ((y-canvas_y) * image_w * (has_alpha?3:2)) + (x-canvas_x) * (has_alpha?3:2);
            //TODO: fancy mathaematics
            struct RGBColor canvas_rgb_pixel;
            canvas_rgb_pixel.r = canvas[canvas_pos + R];
            canvas_rgb_pixel.g = canvas[canvas_pos + G];
            canvas_rgb_pixel.b = canvas[canvas_pos + B];
            struct HSLColor canvas_hsl_pixel = convertRGBtoHSL(canvas_rgb_pixel);
            struct HSLAColor image_hsla_pixel;
            image_hsla_pixel.h = colorHue;
            image_hsla_pixel.s = (image[image_pos + S] / 255.0);
            image_hsla_pixel.l = (image[image_pos + L] / 255.0);
            if (has_alpha){
                image_hsla_pixel.alpha = (image[image_pos + A] / 255.0);
            }else{
                image_hsla_pixel.alpha = 1; //not transparent
            }
            struct HSLColor result;
            //delta.h = canvas_hsl_pixel.h - image_hsla_pixel.h; //WARNING: Should allways be 0 !  //TODO: Print warning ?
            //delta.s = canvas_hsl_pixel.s - image_hsla_pixel.s;
            //delta.l = canvas_hsl_pixel.l - image_hsla_pixel.l;
            
            //result.h  = doMathMagic(canvas_hsl_pixel.h, image_hsla_pixel.h, image_hsla_pixel.alpha);
            result.h = colorHue;
            result.s  = doMathMagic(canvas_hsl_pixel.s, image_hsla_pixel.s, image_hsla_pixel.alpha);
            result.l  = doMathMagic(canvas_hsl_pixel.l, image_hsla_pixel.l, image_hsla_pixel.alpha);
            canvas_rgb_pixel  = convertHSLtoRGB(result);
            canvas[canvas_pos + R] = canvas_rgb_pixel.r;
            canvas[canvas_pos + G] = canvas_rgb_pixel.g;
            canvas[canvas_pos + B] = canvas_rgb_pixel.b;
            
            //WARNING: Hue should be same, not changing. If  Hue is not the same, you failed!!

            
            /*
            canvas[canvas_pos + R] = (image[image_pos + R] + colorModifier[R]) % 0xFF;
            canvas[canvas_pos + G] = (image[image_pos + G] + colorModifier[G]) % 0xFF;
            canvas[canvas_pos + B] = (image[image_pos + B] + colorModifier[B]) % 0xFF;
            if (has_alpha){
                canvas[canvas_pos + A] = (image[image_pos + A] + colorModifier[A]) % 0xFF;
            }*/
        }
    }
}
/**
 *
 * Berechnet die Zahl zwischen A (canvas) und B (image) abhängig von alpha,
 * wenn alpha = 0 ist, dann kommt die orginale Zahl A (canvas) raus
 * wenn alpha = 1 ist, dann die Zahl des einzufügenden image s B
 * wenn alpha = 0.5 genau die Mitte
 * und bei anderen alphas zwischen 0 und 1 die passende Relation.
 *
 */
double doMathMagic(double canvas, double image, double alpha){
    if (canvas < image) {
        return (canvas + (alpha * (image - canvas)));
    } else if(image < canvas){
        return (image + ((1 - alpha) * (canvas - image)));
    } else {
        return canvas;
    }
}
void writeToFile(const char* name, byte* colors) {
    FILE *fp = fopen(name, "wb"); /* b - binary mode */
    fprintf(fp, "P6\n%d %d\n255\n", DIM_X, DIM_Y);
    for (int y = 0; y < DIM_Y; y++)
    {
        for (int x = 0; x < DIM_X; x++)
        {
            static unsigned char color[3];
            color[0] = colors[XY_POS(x, y) + R];// % 256;  /* red */
            color[1] = colors[XY_POS(x, y) + G];//j % 256;  /* green */
            color[2] = colors[XY_POS(x, y) + B];//(i * j) % 256;  /* blue */
            fwrite(color, 1, 3, fp);
        }
    }
    fclose(fp);
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






















