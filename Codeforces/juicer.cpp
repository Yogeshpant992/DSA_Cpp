#include<bits\stdc++.h>
using namespace std;
int main(){
    long long n , b , d ;
    cin >> n >> b >> d ;
    vector <long long> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    long long size = 0 , count = 0;
    for(int i =0; i<n; i++){
        if(a[i]>b){
            continue;
        }
        else
        {
         size += a[i];
           if(size > d){
            count ++ ;
            size = 0 ;
           }
        }
    }
    cout << count ;
}