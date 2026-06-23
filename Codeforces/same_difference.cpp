#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    for(int j=0; j < n; j++){
        long long ct;
        cin >> ct;

        vector <int> a;
        for(int i = 0; i < ct; i++){
            cin >> a[j];
       }
        long ans = 0;
        map<long,long> mp;
        for(int i =0; i<n; i++){
            long p =(long)(a[i]-i);
            ans+=mp[p];
            mp[p]++;
        }
        cout << ans << endl;
    }



}