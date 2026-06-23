#include <bits/stdc++.h>
using namespace std;
/*int shoes(int n, int k,int i)
{
    if ((n * i) % 10 == k)
        return i;
    else if ((n * i) % 10 == 0) return i;
    else return shoes(n,k,i++);
}*/
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= 10; i++)
    {
        if ((n * i) % 10 == k){
            cout << i << " ";
            break;
        }
        else if ((n * i) % 10 == 0){
            cout << i;
            break ;
        }
    }
}