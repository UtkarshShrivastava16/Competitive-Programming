// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    int i, flag = 0;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return true;
    else
        return false;
}
int main()
{
    int b = 1;
    vector<int> a;
    for (int i = 1; i < 100; i++)
    {
        if (isPrime(i))
        {
            a.push_back(i);
            cout << endl;
            for (int i = 0; i < a.size(); i++)
                cout << a[i] << " ";

            cout << " || Sum = " << accumulate(a.begin(), a.end(), 0);
        }
    }

    return 0;
}