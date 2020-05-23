#include "ManHeader.h"

void CreateObject()
{
	Man men[10];

	for (int i = 0; i < 10; i++)
	{
		men[0].Refresh();
		men[0].SetLocation(5, 5);
		men[0].DrawMan();
		men[0].PrintMyMan();

		// Need to increase the array element by one
			// Then SetLocation +5

	}
}


