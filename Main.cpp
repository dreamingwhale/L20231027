#include <iostream>
#include <random>
#include <windows.h>
using namespace std;

int main() {
	//random�Լ� ����
	int Num1 = 0;
	for (int i = 1; i <= 4; i++) {
	Num1 = 0;
	srand(time(NULL)*i);
	Num1 = (rand() % 52);
	cout << Num1<<endl;
	}
	cout << endl;
	//������� �ʰ� ǥ�������� �̿�.
	for (int i = 0; i < 4; i++) {

		random_device rd; 
		mt19937 gen(rd());
		uniform_int_distribution<int> Num2(0, 52);
		cout << Num2(gen) << endl;
	}


	return 0;
}