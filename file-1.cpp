#include <iostream>

using namespace std;

void firstProg()
{
	int otzhimaniya, podtyagivaniya, prised, skruchivaniya;

	cout << "\tОтжимания в отказ, определение нагрузки.\n";

	cout << "Кол-во отжиманий: ";
	cin >> otzhimaniya;

	podtyagivaniya = otzhimaniya/4;
	prised = otzhimaniya*2;
	skruchivaniya = prised;

	cout << "Подтягивания = " << podtyagivaniya << "\n";
	cout << "Приседания = " << prised << "\n";
	cout << "Скручивания = "<< skruchivaniya << "\n";
}
