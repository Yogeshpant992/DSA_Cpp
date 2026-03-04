#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no you want to print stars :";    //Tell the no of star you want to print..
    cin>>n;
    for(int i=n; i>0; i--){
        for(int j=1; j<=n; j++){
           if(i-j>0){
            cout<<" ";
           }
            else{
                cout<<"*";
            
           }
        }
        cout<<endl;
    }
}