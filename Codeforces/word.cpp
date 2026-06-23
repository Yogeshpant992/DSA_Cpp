#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a = 0, b = 0;
    int n = s.size();
    for(int i = 0; i < n; i++ ){
        if(isupper((unsigned char)s[i])) a++;
        else b++;
    } 
    if(a>b){
       transform(s.begin(), s.end(), s.begin(), ::toupper);
       cout<<s;
    }
    else{
         transform(s.begin(), s.end(), s.begin(), ::tolower);
         cout<<s;
    }
}