#include <iostream>
using namespace std;
int main() 
{
	int arry[5][5] = {};
	srand(time(NULL));

	int min = 0;
	int max = 20;
	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arry[i][j] = min + rand() % (max - min + 1);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arry[i][j];
		}

		for (int j = 0; j < 5; j++)
		{
			sum += arry[i][j];
		}
	}
		cout << endl;
		cout << "cemi:" << sum << endl;
}