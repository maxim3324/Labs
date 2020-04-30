#include "stdafx.h"  
#include <iostream> 
using namespace std;
void F1(double*& mas, int& n)
{
    int k = 0;
    int l = 0;
    double* mas1 = new double[n];
    for (int i = 0; i < n; i++)
    {
        mas1[i] = mas[i] * 2;
        k++;
    }
    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";
    for (int i = 0; i < n; i++)
        cout << mas1[i] << " ";
}
int main()
{
    int n = 0;
    cin >> n;
    double* mas = new double[n];
    for (int i = 0; i < n; i++)
        cin >> mas[i];
    F1(mas, n);
    system("pause");
    return 0;
}