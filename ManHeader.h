#pragma once

#include <iostream>
#include <stdio.h>



class Man
{

public:
	int ValueX;
	int ValueY;

	void SetLocation(int ValX, int ValY);
	void Refresh();
	void DrawMan();
	void PrintMyMan();
	void CreateObject();
};