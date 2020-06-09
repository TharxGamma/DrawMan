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
		
private:
	int ValueX;
	int ValueY;	

	char* pCanvas;
};
