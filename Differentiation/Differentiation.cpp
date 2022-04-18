// Integration.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

double f(double x)
{
	return exp(x);
}

int _tmain(int argc, _TCHAR* argv[])
{
	double a = 0, b = 1, h = 0.001;
	double x = a, appr, error;
	while( x <= b )
	{
		appr = (f(x+h)-f(x-h))/(2*h);
		error = f(x) - appr;
		cout << x << " " << f(x) << " " << appr << " " << error << endl;
		x += h;
	}

	return 0;
}

