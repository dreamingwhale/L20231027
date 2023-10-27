#include <iostream>
#include <random>
#include <windows.h>
#include <algorithm>



using namespace std;
const int Count = 52;




int BlackJack()
{
	

	//Ǯ���� ������ �ǹ̸� �����غ���.
	//unsigned�� -�� ������ �ڷ���
	//1.52���� �ڷḦ ������� �迭�� �����.
	//2.������ ���´�.
	//3.4���� ����Ѵ�.

	int Pocket[Count];
	srand(time(nullptr));
	for (int i = 0; i < Count; i++)
	{
		Pocket[i] = i + 1;
	}
	//shuffle
	for (int i = 0; i < 10000; i++)
	{
		int First = rand() % Count;
		int Second = rand() % Count;
		int Temp = Pocket[First];
		Pocket[First] = Pocket[Second];
		Pocket[Second] = Temp;
	}


	//������� �����̶�� �������� �ۼ�.
	int PickedCard[4];
	for (int i = 0; i < 4; i++)
	{
		PickedCard[i] = Pocket[i];
	}
	int PlayerScore = 0;
	int ComputerScore = 0;
	for (int i = 0; i < 4; i++)
	{
		int CardNumber = Pocket[i] % 13;
		int CardType = Pocket[i] / 13;

		if (CardType == 0) //spade
		{
			cout << "�� ";
		}
		else if (CardType == 1)//clover
		{
			cout << "�� ";
		}
		else if (CardType == 2)//heart
		{
			cout << "�� ";
		}
		else if (CardType == 3)//diamond
		{
			cout << "�� ";
		}

		//���

		if (CardNumber == 10)
		{
			cout << "J" << endl;
		}
		else if (CardNumber == 11)
		{
			cout << "Q" << endl;
		}
		else if (CardNumber == 12)
		{
			cout << "K" << endl;
		}
		else
		{
			cout << CardNumber + 1 << endl;
		}

		//���ھ� ���
		{

			if (i < 2) //Computer
			{
				if (CardNumber >= 10) { //11,12,13�� 10���� ���
					ComputerScore += 10;
				}
				ComputerScore += (CardNumber + 1);
			}
			else  //Player
			{
				if (CardNumber >= 10) { //11,12,13�� 10���� ���
					PlayerScore += 10;
				}
				PlayerScore += (CardNumber + 1);
			}
		}


	}

	//score ���
	if (ComputerScore > PlayerScore || PlayerScore > 21)
	{
		cout << "Computer Win" << endl;
		cout << "Computer Score:" << ComputerScore << " Player Score:" << PlayerScore << endl;
	}
	else if (ComputerScore < PlayerScore || ComputerScore>21)
	{
		cout << "Player Win" << endl;
		cout << "Computer Score:" << ComputerScore << " Player Score:" << PlayerScore << endl;
	}

	//ǥ�������� �̿��Ұ�
	/*
	uniform_int_distribution<int> NumDis(0, 52);
	random_device rd;
	mt19937 gen(rd());
	NumDis(gen)
	*/

	return 0;
	

	
}
