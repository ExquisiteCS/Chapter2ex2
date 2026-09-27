// Chapter2ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int EastCoast;
	int TotalSales;
	TotalSales = 8600000;
	EastCoast = TotalSales * 0.58;
	cout << "The East Coast division is predicted to generate $" << EastCoast << " if the company has $" << TotalSales << " in total sales this year." << endl;
}
