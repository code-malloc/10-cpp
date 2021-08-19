#include <iostream>
#include "header.h"

using namespace std;

int main()
{
	int num;

	cout << "\tЕдинорог\n";
	cout << "1. Отжимания в отказ. Программа\n";
	cout << "2. Три золотых упражнения. Программа\n";
	cout << "3. Распределение максимальноого кол-ва повторений на подходы\n\n";

	cout << "Выбор: ";
	cin >> num;

	switch(num)
	{
	case 1: cout << "\n-------\n"; firstProg();break;
	case 2: cout << "\n-------\n"; secondProg();break;
	case 3: cout << "\n-------\n"; thirdProg();break;
	default:
		cout << "\nчто то пошло не так\n";
	}

	return 0;
}
