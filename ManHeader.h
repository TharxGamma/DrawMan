#pragma once

#include <iostream>
#include <stdio.h>



class Man
{

public:
	void SetLocation(int ValX, int ValY);
	void DrawMan();
	//void PrintMyMan();
	void GetCanvas(char* Canvas);
		
private:
	int ValueX;
	int ValueY;	

	char* pCanvas;
};
