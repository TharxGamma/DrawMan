// ManDraw.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include "ManHeader.h"


int main() // Main duh
{

	Man men[10];


	for (int i = 0; i < 10; i++)
	{
		men[i].Refresh();
		men[i].SetLocation(5,5);
		men[i].DrawMan();
		men[i].PrintMyMan();

		// Need to increase the array element by one
			// Then SetLocation +5

	}

	return 0;
}


