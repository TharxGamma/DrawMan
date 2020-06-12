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

void Man::SetVelocity(int ManVelocity)
{
	Velocity = ManVelocity;
}


void Man::DrawMan()
{
	char chBodyStyle = '#';

	SetPixel(pCanvas, ValueX, ValueY, chBodyStyle);
	SetPixel(pCanvas, ValueX - 1, ValueY + 1, chBodyStyle);
	SetPixel(pCanvas, ValueX, ValueY + 1, chBodyStyle);
	SetPixel(pCanvas, ValueX + 1, ValueY + 1, chBodyStyle);
	SetPixel(pCanvas, ValueX, ValueY + 2, chBodyStyle);
	SetPixel(pCanvas, ValueX - 1, ValueY + 3, chBodyStyle);
	SetPixel(pCanvas, ValueX + 1, ValueY + 3, chBodyStyle);
}

void Man::SetPixel(char* pCanvasIn, int NX, int NY, char cBody)
{

	int Pixel = (((NY - 1) * CanvasX) + (NX - 1));

	pCanvasIn[Pixel] = cBody; 
}
