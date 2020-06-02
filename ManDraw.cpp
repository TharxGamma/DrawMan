// ManDraw.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "ManHeader.h"

#define SIZEX 100 //SIZEX and SIZEY is set and defined to be used later
#define SIZEY 30

char Canvas[SIZEX][SIZEY]; // Declare a char 2d array and set SIZEX and SIZEY
char* pCanvas = Canvas[0];

void Refresh();

int main() // Main duh
{

	srand((unsigned)time(0));

	Man men[10];


	for (int i = 0; i < 10; i++)
	{
		men[i].Refresh();
		men[i].SetLocation((rand() % 100) - 5 , (rand() % 30) - 5);
		men[i].DrawMan(pCanvas);
		men[i].PrintMyMan();

		// Need to increase the array element by one
			// Then SetLocation +5

	}

	return 0;
}


void Refresh()
{
	//Code to refresh 
	for (int NIndexY = 0; NIndexY < SIZEY; NIndexY++) // Loop through the amount of times defined by SIZEY
	{

		for (int NIndexX = 0; NIndexX < SIZEX; NIndexX++) // Nested loop part, will loop max amount of times which is defined by SIZEX
		{

			Canvas[NIndexX][NIndexY] = '-'; // Set '-' to each postion in the 2D array 

		}

	}
}

