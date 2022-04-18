// Euler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;


double exact(double x)
{
	//return x+1/(1-x);
	return x*log(x)+2*x;
    //return 2 * exp(x);
}

double f(double x,double y)
{
	//return (1+(x-y)*(x-y));
	return 1+y/x;
    //return y;
}

double f1(double x, double y1, double y2)
{
	return y2;
}

double f2(double x, double y1, double y2)
{
	return -y1;
}

int _tmain(int argc, _TCHAR* argv[])
{
	
  int size = 100; 
  double h=1.0/size; 
  double y0=2,x0=1;
  double y_i,x_i;
  y_i=y0;x_i=x0;
  cout<<"   x_i     y_i     y(x_i)    err(x_i)"<<endl;
  cout.precision(3);
  cout << fixed;
  for(int i=0;i<=size;i++)
  {
    cout<<"   "<<x_i<<"   "<<y_i<<"   "<< exact(x_i) <<"   "<<y_i - exact(x_i) <<endl; 
    
	y_i = y_i + h*f(x_i,y_i); 
	x_i = x_i + h;
  }
  
    /*
  double h=0.1; int N=100;
  double y1_0=1,y2_0=1,x0=0;
  double y1_i,y1_i1,y2_i,y2_i1,x_i;
  y1_i=y1_0;y2_i=y2_0;x_i=x0;
  cout<<"x_i    y1_i    y2_i  "<<endl;
  for(int i=0;i<N;i++)
  {
    cout<<x_i<<"    "<<y1_i<<"     "<<y2_i<<endl;
    
    y1_i1 = y1_i + h*f1(x_i,y1_i,y2_i);
    y2_i1 = y2_i + h*f2(x_i,y1_i,y2_i);

    x_i = x_i + h;
    y1_i = y1_i1;
	y2_i = y2_i1;

  }
  */
	return 0;
}


