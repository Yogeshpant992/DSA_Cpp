#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    
    int m =0; 
    int k =0;
    for(int i=0; i<n; i++){
        if(arr[i]=='A'){
         m++;
        }
        else 
        k++;
    }
   if(m==k)
   cout<<"Friendship";
   else if(m>k)
   cout<<"Anton";
   else
   cout<<"Danik";

}