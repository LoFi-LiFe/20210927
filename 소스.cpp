#include <iostream>

using namespace std;

int main()
{
	int TimesTable;
	cout << "구구단 몇단을 출력 할 까요?" << endl;
	cin >> TimesTable;

	for (int i = 1; i < 10; i++)
	{
		cout << TimesTable << "*" << i << "=" << TimesTable * i << endl;
	}

	cout << "------------------------------------------------------------" << endl;
	
	cout << "구구단표" << endl;

	for (int i = 2; i < 10; i++)
	{
		for (int j = 2; j < 10; j++)
		{
			cout << i << "*" << j << "=" << i * j << endl;
		}
	}
	return 0;
}