#include <iostream>
#include <random>
#include <windows.h>
using namespace std;

int main()
{
	//random함수 사용시
	int Num1 = 0;
	int Array[4] = { 0,0,0,0 };
	for (int i = 0; i < 4; i++)
	{
		Num1 = 0;
		srand(time(NULL)*i);
		Num1 = (rand() % 52);
		while (Num1 != Array[i])
		{
			Num1 = 0;
			srand(time(NULL) * i);
			Num1 = (rand() % 52);
			Array[i] = Num1;
		}
		cout << Array[i]<<endl;
	}
	cout << endl;


	//사용하지 않고 표준편차를 이용.
	//현재 문제가 있음.
	/*
	int Array2[4] = { 0,0,0,0 };
	int Num2 = 0;
	uniform_int_distribution<int> NumDis(0, 52);
	random_device rd;
	mt19937 gen(rd());
	for (int i = 0; i < 4; i++)
	{
		Num2 = NumDis(gen);
		while (Num2 != Array2[i])
		{
			Num2 = NumDis(gen);
			Array2[i] = Num2;
		}
		cout << Array2[i] << endl;


	}

	*/

	return 0;
}