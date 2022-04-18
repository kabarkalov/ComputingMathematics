// Newton.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

double f(double x)
{
	return cos(x)-x;
}

int _tmain(int argc, _TCHAR* argv[])
{
	double x0 = 0.0, x1 = 1.0;
	double tol;
	int N;
	cout<<"Input number of steps ";
	cin>>N;
	cout<<"Input tolerance ";
	cin>>tol;
	int k = 0;
	while ( fabs(x1-x0) > tol && k < N )
	{
		x0 = x1;
		x1 = f(x0)+x0;
		k++;
		cout << "x0=" << x0 << endl;
	}
	cout << "Solution x= " << x1 << " after " << k << " iterations" << endl;
	cout << "f(x) = " << f(x1) << endl;

}