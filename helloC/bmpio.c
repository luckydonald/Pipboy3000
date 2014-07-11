
#include "bmpio.h"
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

int writeBMP(unsigned char *data, int width, int height, const char *path) {

	FILE *fp = fopen(path, "wb"); // b - binary mode

	int imageSize = width * height;
	
	unsigned char *bmpFileHeader[14];
	unsigned char *bmpInfoHeader[40];

	bmpFileHeader[0] = 'B';
	bmpFileHeader[1] = 'M';
	insertDWord(bmpFileHeader, 6, 0);
	insertDWord(bmpFileHeader, 10, 54);

	insertDWord(bmpInfoHeader, 0, 40);			// size of info header
	insertDWord(bmpInfoHeader, 4, width);		// width of image
	insertDWord(bmpInfoHeader, 8, height);		// heigth of image
	insertWord(bmpInfoHeader, 12, 1);			// unused but has to be 1
	insertWord(bmpInfoHeader, 14, 24);			// bits per pixel
	insertDWord(bmpInfoHeader, 16, 0);			// no compression
	insertDWord(bmpInfoHeader, 20, 0);			// size of image data
	insertDWord(bmpInfoHeader, 24, 0);
	insertDWord(bmpInfoHeader, 28, 0);
	insertDWord(bmpInfoHeader, 28, 0);

	fclose(fp);
}
