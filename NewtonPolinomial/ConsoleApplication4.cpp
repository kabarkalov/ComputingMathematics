// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{ 
    const int MaxSize = 10;
    int N = 3;
    double x[MaxSize] = { 0,2,3,5 };
    double f[MaxSize][MaxSize] = { {1,3,2,6} };

    for (int i = 1; i < N+1; i++)
    {
        for (int j = 0; j < N-i+1; j++)
        {
            f[i][j] = (f[i - 1][j + 1] - f[i - 1][j]) / (x[j + i] - x[j]);
        }
    }

    for (int i = 0; i < N+1; i++)
    {
        for (int j = 0; j < N - i+1; j++)
        {
            cout<<f[i][j]<< " ";
        }
        cout << endl;
    }

    //Compupe Pn(x1)
    double x1 = 5;
    double Px1 = f[0][0];


    for (int i = 1; i < N + 1; i++)
    {
        double tmp = 1;
        for (int j = 1; j <= i ; j++)
        {
            tmp *= (x1 - x[j-1]);           
        }
        tmp *= f[i][0];
        Px1 += tmp;
    }
    cout << "P(" << x1 << ") = " << Px1 << endl;



    return 0;
}
