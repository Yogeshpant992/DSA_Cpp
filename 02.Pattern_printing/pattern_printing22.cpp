#include<iostream>
using namespace std;
int main(){
    for(int i=5; i>=0; i--){
        char a = 'A';
        for(int j=1; j<=5; j++){
             if(i-j>0){
                cout<<"  ";
             }
             else{
             cout<<a<<" ";
             a++;
             }
        }
        cout<<endl;
    }
}