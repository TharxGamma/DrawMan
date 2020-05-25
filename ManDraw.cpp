// ManDraw.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include "ManHeader.h"


int main() // Main duh
{
	Man men;

	men.CreateObject();
	men.SetLocation(5, 5);
	men.Refresh();
	men.DrawMan();
	men.PrintMyMan();
	return 0;
}


