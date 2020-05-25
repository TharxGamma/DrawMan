#pragma once

#include <iostream>
#include <stdio.h>



class Man
{

public:
	int ValueX;
	int ValueY;

	void SetLocation(int ValX, int ValY);
	void DrawMan();
	void PrintMyMan();
	void CreateObject();
};

class Canvas
{
	char Canvas[100][30];
	void Refresh();
};