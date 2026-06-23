#include<iostream>
using namespace std;
int main(){
    long long  x;
    cin >> x;
    for(int i = 1;i <= x;i++){
        long long  n , q;
        cin >> n >> q;
        long long a;
        long long pre[n+1] = {0};
        for(int i = 1; i <= n; i++){
            cin >> a;
            pre[i] = pre[i-1] + a;
        }    
        for(int i = 0; i < q; i++){
            long long l , r, k;;
            cin >> l >> r >> k;
            long long  sum = pre[n] - (pre[r] - pre[l-1]) + (r - l + 1)*k;
            if(sum % 2 == 1){
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
}
}