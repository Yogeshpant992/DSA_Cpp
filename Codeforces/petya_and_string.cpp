#include<iostream>
#include<string>
using namespace std;
int ans(string &a , string &b , int i){
    int n = a.size();
    if(i==n){
        return 0;
    }
    
    char charA = tolower(a[i]);
    char charB = tolower(b[i]);

    if(charA<charB) return -1 ;
    if(charA>charB) return 1;

    return ans(a,b,i+1);



}
int main(){
    string s , z ;
    cin >> s >> z;
    cout << ans(s,z,0);
    return 0;
}