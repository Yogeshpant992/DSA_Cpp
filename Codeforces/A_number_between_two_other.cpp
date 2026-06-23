#include <iostream>
using namespace std;
int main()
{
    long t;
    cin >> t;
    long long x, y, z;
    for (int i = 0; i < t; i++)
    {
        cin >> x;
        cin >> y;
        if(y/x > 2) cout << "YES"<<endl;
        else cout << "NO"<<endl;
       }
       return 0 ;
    }
