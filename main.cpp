#include<iostream>
using namespace std;

int main()
{
	unsigned long long worldPopulation;
	unsigned long long countryPopulation;
	long double ans;
	char ch;

	do
	{
		cout << "Enter the world's population: ";
		cin >> worldPopulation;
		cout << "Enter the population of the US: ";
		cin >> countryPopulation;

		ans = (long double)countryPopulation / worldPopulation * 100;

		cout << "The population of the US is "
			<< ans << "% of the "
			<< "world population. " << endl;
		cout << "Continue(y/n)?";
		cin >> ch;

	} while (ch == 'y');


	system("pause");
	return 0;
}