#include<iostream>
using namespace std;
int main(){
    int n,temp ,police=0 , ans =0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        if(temp!=-1) 
            police += temp;
        else
        {
            if(police>0) police--;
            else ans++;
        }

    }
    cout<<ans;
}