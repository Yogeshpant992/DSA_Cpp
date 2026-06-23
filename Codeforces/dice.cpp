#include<iostream>
#include<numeric>
#include<algorithm>
using namespace std;
int main(){
    int a , b ;
    cin >> a >> b;
    int max_value = max(a,b);
    int c = 6 - max_value + 1;
    int common = __gcd(c,6);
    cout<<c/common<<"/"<<6/common<<endl;
    return 0;

}