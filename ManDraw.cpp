// ManDraw.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "ManHeader.h"

#define SIZEX 100 //SIZEX and SIZEY is set and defined to be used later
#define SIZEY 30

#define BORDER 5
#define NUMBEROFMEN 5 // Removed magic number

char Canvas[SIZEX][SIZEY]{'-'}; // Declare a char 2d array and set SIZEX and SIZEY


void Refresh();
void PrintFrame();

int main() // Main duh
{	
	Refresh();

	srand((unsigned)time(0));
	
	int RandomLocation = ((rand() % (SIZEX - BORDER - 5)) + BORDER);

	Man men[NUMBEROFMEN];

	for (int i = 0; i < NUMBEROFMEN; i++)
	{
		men[i].SetCanvasSize(SIZEX, SIZEY);
		men[i].SetCanvas(&Canvas[0][0]);
		men[i].SetLocation(	(	(	rand() %	(SIZEX - BORDER - 5)	) + BORDER)	, (	(rand() %	(SIZEY - BORDER - 5)	) + BORDER)	);
		men[i].DrawMan();
		//men[i].SetLocation(	(	(	rand() %	(SIZEX - BORDER - 5)	) + BORDER)	, (	(rand() %	(SIZEY - BORDER - 5)	) + BORDER)	);
	}
	PrintFrame();


	return 0; 
}


void PrintFrame()
{
	std::cout << "---------------------------------------This is a new frame----------------------------------------" << std::endl;
	//Code to print
	for (int NIndexY = 0; NIndexY < SIZEY; NIndexY++)
	{
		for (int NIndexX = 0; NIndexX < SIZEX; NIndexX++)
		{
			std::cout << Canvas[NIndexY][NIndexX];
		}

		std::cout << std::endl;
	}
}

void Refresh()
{
	//Code to refresh 
	for (int NIndexY = 0; NIndexY < SIZEY; NIndexY++) // Loop through the amount of times defined by SIZEY
	{

		for (int NIndexX = 0; NIndexX < SIZEX; NIndexX++) // Nested loop part, will loop max amount of times which is defined by SIZEX
		{

			Canvas[NIndexY][NIndexX] = '-'; // Set '-' to each postion in the 2D array 

		}

	}
}
