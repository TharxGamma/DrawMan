#pragma once

#include <iostream>
#include <stdio.h>



class Man
{

public:
	void GetCanvas(char* pCanvas);
	void SetLocation(int ValX, int ValY);
	void DrawMan(char* pCanvas);
	void PrintMyMan();
	void Refresh();
	
private:
	int ValueX;
	int ValueY;	
};
