#include<iostream>
using namespace std;
int main(){
    long long a ,b ;
    cin >>a;
    cin >>b;
    long long pre[a+1]={0};
    for(long long i=1; i<=a; i++){
        long n; cin>>n;
        pre[i]=pre[i-1]+n;
    }
    for(long long i=1; i<=b; i++){
        long long x,y;
        cin>>x>>y;
        cout<<pre[y]-pre[x-1]<<endl;
    }

    
}