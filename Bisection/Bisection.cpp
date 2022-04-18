// Bisection.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

double f(double x)
{
	return x - cos(x);
}


int _tmain(int argc, _TCHAR* argv[])
{
	double a = 0, b = 1, c;
	double tol;
	int N;
	cout<<"Input number of steps ";
	cin>>N;
	cout<<"Input tolerance ";
	cin>>tol;
	int k = 0;

	while ( b-a > tol && k < N )
	{
		c = (a+b)/2;
		cout << "a=" << a << " b=" << b << " c=" << c << endl;

		if ( f(a)*f(c) > 0 )
		{
			a = c;
		}else
		{
			b = c;
		}
		k++;
	}


	cout << "Solution = " << c << " after " << k << " iterations" << endl;


	return 0;
}

