#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no. till then you want to print the numbers: ";
    cin>>m;
    for(int i=1; i<=5; i++){
        for(int j=5; j>0; j--){
            if(j-i>0){
                cout<<"  ";
            }
            else{
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}