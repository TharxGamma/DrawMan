// ManDraw.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "ManHeader.h"

#define SIZEX 100 
#define SIZEY 30

#define BORDER 5
#define NUMBEROFMEN 1

char Canvas[SIZEY][SIZEX]{'-'};


void Refresh();
void PrintFrame();

int main() // Main duh
{	
	Refresh();

	srand((unsigned)time(0));
	
	Man men[NUMBEROFMEN];

	for (int i = 0; i < NUMBEROFMEN; i++)
	{
		men[i].SetCanvasSize(SIZEX, SIZEY);
		men[i].SetCanvas(&Canvas[0][0]);
		men[i].SetLocation(	(	(	rand() %	(SIZEX - BORDER - 5)	) + BORDER)	, (	(rand() %	(SIZEY - BORDER - 5)	) + BORDER)	);
		men[i].DrawMan();
		PrintFrame();
	}


	return 0; 
}


void PrintFrame()
{
	std::cout << "---------------------------------------This is a new frame----------------------------------------" << std::endl;
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
	for (int NIndexY = 0; NIndexY < SIZEY; NIndexY++)
	{

		for (int NIndexX = 0; NIndexX < SIZEX; NIndexX++)
		{

			Canvas[NIndexY][NIndexX] = '-'; 

		}

	}
}
