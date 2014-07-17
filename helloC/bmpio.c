
#include "bmpio.h"

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void insertWord(unsigned char *data, int offset, int word) {
	data[offset] = (unsigned char)(word);
	data[offset + 1] = (unsigned char)(word >> 8);
}

void insertDWord(unsigned char *data, int offset, int word) {
	data[offset] = (unsigned char)(word);
	data[offset + 1] = (unsigned char)(word >> 8);
	data[offset + 2] = (unsigned char)(word >> 16);
	data[offset + 3] = (unsigned char)(word >> 24);
}

/**
 * Write imagedata to .bmp file
 *
 * \param data: pointer to unsigned char array with image data in BGR format
 * \param width: width of the imagen in pixels
 * \param height: heigth of the imagen in pixels
 * \param path: path where the image is saved
 */
int writeBMP(unsigned char *data, int width, int height, const char *path) {

	FILE *fp = fopen(path, "wb"); // b - binary mode

	int fill = (width * 3) % 4;

	int imageDataSize = ((width * 3) + fill) * height;
	int fileSize = imageDataSize + 14 + 40;

	unsigned char filler[] = {0, 0, 0};
	
	unsigned char bmpFileHeader[14];
	unsigned char bmpInfoHeader[40];

	bmpFileHeader[0] = 'B';
	bmpFileHeader[1] = 'M';
    insertDWord(bmpFileHeader, 2, fileSize); // size of full bmp file
	insertDWord(bmpFileHeader, 6, 0);
	insertDWord(bmpFileHeader, 10, 54);

	insertDWord(bmpInfoHeader, 0, 40);				// size of info header
	insertDWord(bmpInfoHeader, 4, width);			// width of image
	insertDWord(bmpInfoHeader, 8, height);			// heigth of image
	insertWord(bmpInfoHeader, 12, 1);				// unused but has to be 1
	insertWord(bmpInfoHeader, 14, 24);				// bits per pixel
	insertDWord(bmpInfoHeader, 16, 0);				// no compression
	insertDWord(bmpInfoHeader, 20, imageDataSize);	// size of image data
	insertDWord(bmpInfoHeader, 24, 2835);				// x dpi
    
	insertDWord(bmpInfoHeader, 28, 2835);				// y dpi
    
	insertDWord(bmpInfoHeader, 32, 0);				// no colortable
	insertDWord(bmpInfoHeader, 36, 0);				// no colors from colortable used

	fwrite(bmpFileHeader, 1, 14, fp);
	fwrite(bmpInfoHeader, 1, 40, fp);
	
	for (int y = height - 1; y > 0; y--) {
		fwrite(&data[y * width * 3], 3, width, fp);
		fwrite(filler, 1, fill, fp);
	}
    //for (int i = 0; i<fill;  i++){
    unsigned char endfill[((width * 3) + fill)];
    memset(endfill,0,sizeof(endfill));
    fwrite(endfill, ((width * 3) + fill), 1, fp);
    //}
	fclose(fp);
	return 42; //TODO.
}
