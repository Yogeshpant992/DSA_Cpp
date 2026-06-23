#include<iostream>
#include<string>
using namespace std;
int main(){
 int n;
 cin>>n;
 string arr[n];
 for(int i=0; i<n; i++){
    cin>>arr[i];
 }
 for(int i=0; i<n; i++){
    int m = arr[i].size();
    if(m<11){
        cout<<arr[i]<<endl;
    }
    else
    cout<<arr[i][0]<< m-2 <<arr[i][m-1]<<endl;
 }

} 