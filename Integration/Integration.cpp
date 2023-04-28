// Integration.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

double f(double x)
{
	return x+cos(x);
}
/*
 f(x) = x + sin(x)

 F'(x) = f(x)

 F(x) = x^2/2 + sin(x)
*/

double F(double x)
{
	return x * x / 2 + sin(x);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n = 0;
	double a = 0, b = 1;

	double real = F(b) - F(a);
	double appr = 0.0;

	cout<<"Number of intervals = ";
	cin>>n;
	double h = (b-a) / n;
	double xi = a;
/*
	//Middle point rule
	for (int i = 0; i < n; i++)
	{
		appr += f(xi + h/2 ) ;
		xi += h;
	}
	appr *= h;
*/

	//Simpson's rule
	for (int i = 0; i < n/2; i++)
	{
		appr += (f(xi) + 4*f(xi + h)+f(xi+2*h));
		xi += 2*h;
	}
	appr *= h / 3;


	/*
	//Trapezoid rule
	for(int i=0;i<n;i++)
	{
		appr += (f(xi) + f(xi+h));
		xi += h;
	}
	appr *= h/2;
	*/
	cout << "Real value = "<<real<<endl;
	cout << "Approximation = "<<appr<<endl;
	cout << "Error = "<<real - appr<<endl;

	return 0;
}

