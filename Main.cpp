#include <iostream>
#include <Windows.h>

const int MaxX = 10;
const int MaxY = 10;
using namespace std;



void ClearScrean(const bool IsClearing) 
{
	if (IsClearing)
	{
		system("cls");
	}
}

bool IsEndLocation(const int LocationX, const int LocationY)
{
	if ((LocationX == MaxX-1) || (LocationY == MaxY-1) || (LocationX == 0) || (LocationY == 0))
	{
		return true;
	}
	return false;
}


void Render()
{
	char Map[MaxY][MaxX] = { ' ', };


	for (int Y = 0; Y < MaxY; Y++)
	{
		for (int X = 0; X < MaxX; X++)
		{

			if (IsEndLocation(X, Y))
			{
				Map[Y][X] = '*';
			}
			else
			{
				Map[Y][X] = ' ';
			}
			cout << Map[Y][X];
		}
		cout << endl;
	}
}


int main()
{
	//Init();
	
	Render();

	return 0;
}
//

