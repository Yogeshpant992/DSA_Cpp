#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no till you want to calculate : ";
    cin>>m;
    for(int i=m; i>=0; i--){
        int n = 1;
        for(int j=1; j<=m; j++){
            if(i-j>0){
                cout<<"  ";
            }
            else{
                cout<<n<<" ";
                n++;
            }
            
        }
        cout<<endl;
    }
}