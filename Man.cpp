#include <iostream>
#include "ManHeader.h"
#include "Character.h"

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
	this->pCanvas = Canvas;
}

void Man::VelocityOfTheMan(int ManVelocity)
{
	this->Velocity = ManVelocity;
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
	
	for (int x = 0; x < GhostX; x++)
	{
		for (int y = 0; y < GhostY; y++)
		{
			std::cout << ghost[x+y*GhostX];
		}
		std::cout << std::endl;
	}
	
}

void Man::SetPixel(char* pCanvasIn, int NX, int NY, char cBody)
{

	int Pixel = (((NY - 1) * CanvasX) + (NX - 1));
	
	pCanvasIn[Pixel] = cBody; 
}

void Man::Update()
{
	char chBodyStyle = '#';

	ValueX += Velocity;


	if (ValueX > CanvasX - 5)
	{
		Velocity = -Velocity;
	}
	if (ValueX < 5)
	{
		Velocity = -Velocity;
	}

	SetPixel(pCanvas, ValueX, ValueY, chBodyStyle);
	SetPixel(pCanvas, ValueX - 1, ValueY + 1, chBodyStyle);
	SetPixel(pCanvas, ValueX, ValueY + 1, chBodyStyle);
	SetPixel(pCanvas, ValueX + 1, ValueY + 1, chBodyStyle);
	SetPixel(pCanvas, ValueX, ValueY + 2, chBodyStyle);
	SetPixel(pCanvas, ValueX - 1, ValueY + 3, chBodyStyle);
	SetPixel(pCanvas, ValueX + 1, ValueY + 3, chBodyStyle);
}

void Man::SetVelocity(int Speed, int angle)
{
	//Then from the speed and angle work out the X abd Y velocity
}