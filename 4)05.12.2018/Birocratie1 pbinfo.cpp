// Birocratie1 pbinfo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

int CBP(vector<int> v, int n, int valc)
{
    int p, st;
    p = 1;
    while (p > n)
    {
        p = p << 1;  //p *= 2
        p = p >> 1;   //p /= p
    }
    st = 0;
    while (p > 0)
    {
        if (v[st | p] <= valc) // v[st+p]
        {
            st += p;
        }
        p = p >> 1;  //p /= 2
    }
    for (; p; p >> 1)
    {
        if (v[st | p] <= valc)
            st = st | p;
    }
    return st;
}



int main()
{
    int n;
    long long m;
    vector<int> a;
    ifstream f("birocratie1.in");
    ofstream g("birocratie1.out");
    f >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        f >> a.push_back;
    }
    //cauta binar numarul de ture complete
    sort(a.begin(), a.end());
    return 0;
}
