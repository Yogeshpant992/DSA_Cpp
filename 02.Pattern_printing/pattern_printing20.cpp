#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no till then you want to print the no. ";
    cin>>n;
    for(int i=n; i>0; i--){
        for(int j=1; j<=n; j++){
            if(i-j>0){
                cout<<"  ";
            }
            else
            cout<<i<<" ";
        }
        cout<<endl;
    }
}