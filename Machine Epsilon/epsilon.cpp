// epsilon.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	double eps = 1.0;
	int i = 1;
	const double one = 1.0;

	while( one != one + eps)
	{
		eps = eps/2.0;
		i++;
	}

	cout<<"Machine epsilon = "<<eps<<endl;
	cout<<"Step = "<<i<<endl;

	return 0;
}

