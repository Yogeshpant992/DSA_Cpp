#include<iostream>
using namespace std;
int main(){
    int i, n;
    int sum =0;
    cout<<"Enter the no you want the sum till";
    cin>>n;
    for(i=1; i<=n; i=i+1)
    {
        sum = sum + i;
    }
    cout<<"The total natural sum is " << sum;
    
}