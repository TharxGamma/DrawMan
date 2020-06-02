#include "ManHeader.h"

Man::Man()
{

}

void Man::SetCanvasSize(int CanvasSizeX, int CanvasSizeY)
{
	CanvasX = CanvasSizeX;
	CanvasY = CanvasSizeY;
}

void Man::SetCanvas(char* Canvas)
{
	cpCanvas = Canvas;
}

void Man::SetLocation(int ValX, int ValY)
{
	ValueX = ValX;
	ValueY = ValY;
}

void Man::AddSpeed(int Velocity)
{
	this->Velocity = Velocity;
}


void Man::DrawMan()
{
	//Code to draw man
	//Properties of the man
	char chBodyStyle = '#';
	//Canvas[ValueX][ValueY] = chBodyStyle; // Set the postion of the canvas at location 5 (Which is what we declared) and change it to a hashtag
	//Canvas[ValueX - 1][ValueY + 1] = chBodyStyle; // Same again but this time increment and decrement the locations 
	//Canvas[ValueX][ValueY + 1] = chBodyStyle;
	//Canvas[ValueX + 1][ValueY + 1] = chBodyStyle;
	//Canvas[ValueX][ValueY + 2] = chBodyStyle;
	//Canvas[ValueX - 1][ValueY + 3] = chBodyStyle;
	//Canvas[ValueX + 1][ValueY + 3] = chBodyStyle;

	SetPixel(cpCanvas, ValueX, ValueY, chBodyStyle);
	SetPixel(cpCanvas, ValueX - 1, ValueY + 1, chBodyStyle);
	SetPixel(cpCanvas, ValueX, ValueY + 1, chBodyStyle);
	SetPixel(cpCanvas, ValueX + 1, ValueY + 1, chBodyStyle);
	SetPixel(cpCanvas, ValueX, ValueY + 2, chBodyStyle);
	SetPixel(cpCanvas, ValueX - 1, ValueY + 3, chBodyStyle);
	SetPixel(cpCanvas, ValueX + 1, ValueY + 3, chBodyStyle);

	//SetPixel(cpCanvas, ValueX, ValueY, chBodyStyle);
	//SetPixel(cpCanvas, ValueX, ValueY+1, chBodyStyle);
	//SetPixel(cpCanvas, ValueX, ValueY+2, chBodyStyle);
}

void Man::Update()
{
	//Code to draw man
	//Properties of the man
	char chBodyStyle = '#';

	ValueX = ValueX + Velocity;

	if (ValueX > CanvasX - 5)
	{
		Velocity = -Velocity;
	}
	if (ValueX < 5)
	{
		Velocity = -Velocity;
	}

	SetPixel(cpCanvas, ValueX, ValueY, chBodyStyle);
	SetPixel(cpCanvas, ValueX - 1, ValueY + 1, chBodyStyle);
	SetPixel(cpCanvas, ValueX, ValueY + 1, chBodyStyle);
	SetPixel(cpCanvas, ValueX + 1, ValueY + 1, chBodyStyle);
	SetPixel(cpCanvas, ValueX, ValueY + 2, chBodyStyle);
	SetPixel(cpCanvas, ValueX - 1, ValueY + 3, chBodyStyle);
	SetPixel(cpCanvas, ValueX + 1, ValueY + 3, chBodyStyle);

}

void Man::SetPixel(char* pCanvasIn, int NX, int NY, char cBody)
{
	//int X = 1;
	//int Y = 2;
	int temp = (((NY - 1) * CanvasX) + (NX - 1));
	//*(pCanvasIn + ((((NY * CanvasX)) + NX) * sizeof(char))) = cBody;
	pCanvasIn[temp] = cBody;
}



