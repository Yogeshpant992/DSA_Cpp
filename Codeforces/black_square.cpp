#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    int n = s.size();
    int sum = 0;
    for(int i=0; i<n; i++ )
    {
        if(s[i]=='1') sum = sum + a1;
        else if(s[i]=='2') sum = sum + a2;
        else if(s[i]=='3') sum = sum + a3;
        else if(s[i]=='4') sum = sum + a4;
    }
    cout << sum <<endl;
}