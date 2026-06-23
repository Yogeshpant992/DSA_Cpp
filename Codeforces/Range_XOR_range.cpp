#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , q ;
    cin >> n >> q;
    vector<int> arr(n);
    for(auto &i : arr) cin >> i;
    int prefix[n+1] = {0};
    for(int i=1; i<=n; i++) {
        prefix[i] = prefix[i-1] ^ arr[i-1];
    }
    while(q--){
        int l , r;
        cin >> l >> r;
        cout <<(prefix[r]^prefix[r-1])<<endl;

    }
    return 0;
}