﻿// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double h(const double x, const double y); // прототип
int main()
{
	double p, q;
		cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;
	double c = pow(h(abs(p-q), sqrt(abs(p-q))), 2)+h(1,q*q-p*p);
	cout << "c = " << c << endl;
	return 0;
}
double h(const double x, const double y) // визначення
{
	return (pow(y,2)-sqrt(pow(x,2)+pow(y,2))/(1+pow(x,2)*pow(y,2)));
}