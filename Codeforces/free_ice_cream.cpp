#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k ;
    char ch;
    int count = 0;
    long long amount;
    for (int i = 0; i<n; i++)
    {
        cin >> ch >> amount;
        if (ch == '+')
        {
            k = k + amount;
        }
        else
        {
            if (k < amount)
            {
                count++;
            }
            else
                k = k - amount;
        }
    }
    cout << k <<" "<< count<<endl;
}