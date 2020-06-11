#include "ManHeader.h"

void Man::SetLocation(int ValX, int ValY)
{
	ValueX = ValX;
	ValueY = ValY;
}

void Man::SetCanvasSize(int CanvasSizeX, int CanvasSizeY)
{
	CanvasX = CanvasSizeX;
	CanvasY = CanvasSizeY;
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

	SetPixel(pCanvas, ValueX, ValueY, chBodyStyle);
	SetPixel(pCanvas, ValueX - 1, ValueY + 1, chBodyStyle);
	SetPixel(pCanvas, ValueX, ValueY + 1, chBodyStyle);
	SetPixel(pCanvas, ValueX + 1, ValueY + 1, chBodyStyle);
	SetPixel(pCanvas, ValueX, ValueY + 2, chBodyStyle);
	SetPixel(pCanvas, ValueX - 1, ValueY + 3, chBodyStyle);
	SetPixel(pCanvas, ValueX + 1, ValueY + 3, chBodyStyle);
	//pCanvas[ValueX][ValueY] = chBodyStyle; // Set the postion of the canvas at location 5 (Which is what we declared) and change it to a hashtag
	//pCanvas[ValueX - 1][ValueY + 1] = chBodyStyle; // Same again but this time increment and decrement the locations 
	//pCanvas[ValueX][ValueY + 1] = chBodyStyle;
	//pCanvas[ValueX + 1][ValueY + 1] = chBodyStyle;
	//pCanvas[ValueX][ValueY + 2] = chBodyStyle;
	//pCanvas[ValueX - 1][ValueY + 3] = chBodyStyle;
	//pCanvas[ValueX + 1][ValueY + 3] = chBodyStyle;
}

void Man::SetPixel(char* pCanvasIn, int NX, int NY, char cBody)
{
	char chBodyStyle = '#';
	int Pixel = (((NY - 1) * CanvasX) + (NX - 1));

	pCanvasIn[Pixel] = cBody;
}
