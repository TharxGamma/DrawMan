// ManDraw.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include "Header.h"


int main() // Main duh
{

	Man men[10];
	men[0].Refresh();
	men[0].SetLocation(5, 5);
	men[0].DrawMan();
	men[0].PrintMyMan(); 
	return 0;
}



