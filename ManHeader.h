#pragma once

#include <iostream>
#include <stdio.h>


class Man
{

public:
	void SetLocation(int ValX, int ValY);
	void DrawMan();
	void SetCanvas(char* Canvas);
	void SetPixel(char* pCanvasIn, int NX, int NY, char cBody);
	void SetCanvasSize(int CanvasSizeX, int CanvasSizeY);
	void VelocityOfTheMan(int ManVelocity);
	void Update();
	void SetVelocity(int Speed, int angle);
		
private:
	int ValueX;
	int ValueY;	

	int CanvasX;
	int CanvasY;

	int Velocity;

	char* pCanvas;
};
