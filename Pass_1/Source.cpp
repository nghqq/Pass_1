#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "¬ведите количество строк: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		int bin = 1;
		for (int j = 1; j <= n - i; j++)
		{
			cout.width(4);
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout.width(8);
			cout << bin;
			bin = bin * (i - j) / (j + 1);
		}
		cout << endl;
	}
}