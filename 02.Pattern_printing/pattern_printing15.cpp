#include<iostream>
using namespace std;
int main(){
    for(char i='a'; i<='e'; i++){
        for(int j=97; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}