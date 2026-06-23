#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    int count = 0;
    for(int i=0; i<n; i++){
      if(arr[i]==arr[i+1]){
        count++;
      }
    }
    cout<<count;
}