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

#define NUMBER_OF_MEN 10

void PrintCanvas();
void Refresh();

//char Canvas[SIZEX][SIZEY] = { {1,2,3},{4,5,6},{7,8,9} }; // Declare a char 2d array and set SIZEX and SIZEY
char Canvas[SIZEY][SIZEX] = {'-'}; // Declare a char 2d array and set SIZEX and SIZEY
void SetPixel(char* pCanvasIn, int NX, int NY, char cBody);

int main() // Main duh
{

	Refresh();

	PrintCanvas();

	//char* pTemp = &Canvas[0][0];
	//SetPixel(pTemp, 1, 1, '@');
	//SetPixel(pTemp, 10, 1, '@');
	//SetPixel(pTemp, 1, 2, '@');
	////etPixel(char* pCanvasIn, int NX, int NY, char cBody)
	//PrintCanvas();

	srand((unsigned)time(0));

	Man men[NUMBER_OF_MEN];



	//char Test[3][3] = { {1,2,3},{4,5,6},{7,8,9} }; 

	//char* pTemp2 = &Test[0][0];
	//char a = *pTemp2;
	//char b = *(pTemp2 + sizeof(char));
	//char c = *(pTemp2 + (2* sizeof(char)));
	//char d = *(pTemp2 + (3 * sizeof(char)));

	//char f = *pTemp2;
	//char g = (pTemp2[2]);
	//char h = (pTemp2[3]);
	//char i = (pTemp2[4]);

	//Move to function...
	//int X = 1;
	//int Y = 2;
	//char e = *(pTemp + ((((Y * SIZEX)) + X)*sizeof(char)));

	for (int i = 0; i < NUMBER_OF_MEN; i++)
	{
		men[i].SetCanvasSize(SIZEX, SIZEY);
		men[i].SetCanvas(&Canvas[0][0]);
		men[i].SetLocation(((rand() % (SIZEX- BORDER))+ BORDER), ((rand() % (SIZEY - BORDER)) + BORDER));
		men[i].DrawMan();

		// Need to increase the array element by one
			// Then SetLocation +5

	}

	PrintCanvas();

	men[0].AddSpeed(5);
	men[1].AddSpeed(-5);
	men[2].AddSpeed(-2);
	men[3].AddSpeed(4);
	men[4].AddSpeed(2);

	while (true)
	{
		int i;
		std::cin >> i;

		Refresh();

		for (int NIndex = 0; NIndex < NUMBER_OF_MEN; NIndex++)
		{
			men[NIndex].Update();
		}

		PrintCanvas();

	}
	

	return 0;
}

void SetPixel(char* pCanvasIn, int NX, int NY, char cBody)
{
	//Converts the 2D array into a 1D array (stretched out)
	//int X = 1;
	//int Y = 2;
	int temp = (((NY-1) * SIZEX) + (NX-1));
	//*(pCanvasIn + ((((NY * CanvasX)) + NX) * sizeof(char))) = cBody;
	pCanvasIn[temp] = cBody;
}


void Refresh()
{
	//Change to flat array...

	//Code to print
	for (int NIndex = 0; NIndex < SIZEY; NIndex++)
	{
		//Loop through rows
		for (int NIndexInner = 0; NIndexInner < SIZEX; NIndexInner++)
		{
			//Loop through columns
			Canvas[NIndex][NIndexInner] = '-';

		}
	}
}


void PrintCanvas()
{


	std::cout << "        ~~~~~~~~~~~~~~~~    NEW FRAME   ~~~~~~~~~~~~~~~~        ";
	std::cout << std::endl;

	//Code to print
	for (int NIndex = 0; NIndex < SIZEY; NIndex++)
	{
		//Loop through rows
		for (int NIndexInner = 0; NIndexInner < SIZEX; NIndexInner++)
		{
			//Loop through columns

			std::cout << Canvas[NIndex][NIndexInner];

		}

		std::cout << std::endl;
	}
}


