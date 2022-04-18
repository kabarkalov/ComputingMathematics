// Integration.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

double f(double x)
{
	return x+sin(x);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n = 0;
	double real = 1.5 - cos(1.0);
	double appr = 0.0;
	double a = 0, b = 1;
	cout<<"Number of intervals = ";
	cin>>n;
	double h = 1.0 / n;
	double xi = a;
	for(int i=0;i<n;i++)
	{
		appr += f(xi + h/2 );
		xi += h;
	}
	appr *= h;
	cout << "Real value = "<<real<<endl;
	cout << "Approximation = "<<appr<<endl;
	cout << "Error = "<<real - appr<<endl;

	return 0;
}

