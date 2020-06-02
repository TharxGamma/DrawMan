#include "ManHeader.h"

void Man::SetLocation(int ValX, int ValY)
{
	ValueX = ValX;
	ValueY = ValX;
}

void Man::SetCanvas(char* Canvas)
{
	pCanvas = Canvas;
}


void Man::DrawMan()
{
	//Code to draw man
	//Properties of the man
	char chBodyStyle = '#';
	pCanvas[ValueX][&ValueY] = chBodyStyle; // Set the postion of the canvas at location 5 (Which is what we declared) and change it to a hashtag
	pCanvas[ValueX - 1][&ValueY + 1] = chBodyStyle; // Same again but this time increment and decrement the locations 
	pCanvas[ValueX][&ValueY + 1] = chBodyStyle;
	pCanvas[ValueX + 1][&ValueY + 1] = chBodyStyle;
	pCanvas[ValueX][&ValueY + 2] = chBodyStyle;
	pCanvas[ValueX - 1][&ValueY + 3] = chBodyStyle;
	pCanvas[ValueX + 1][&ValueY + 3] = chBodyStyle;
}


