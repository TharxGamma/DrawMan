#pragma once

#include <iostream>
#include <stdio.h>



class Man
{

private:
	int ValueX;
	int ValueY;

	int CanvasX;
	int CanvasY;

	int Velocity = 0;

	char* cpCanvas;

	void SetPixel(char* pCanvasIn, int NX, int NY, char cBody);

public:

	Man();
	void SetCanvas(char* Canvas);
	void SetLocation(int ValX, int ValY);
	void DrawMan();

	void Update();

	void AddSpeed(int Velocity);

	void SetCanvasSize(int CanvasSizeX, int CanvasSizeY);

};

class Canvas
{
	
};
