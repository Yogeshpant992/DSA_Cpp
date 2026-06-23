#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , t , k , d;
    cin >> n >> t >> k >> d;
    int batches = (n + k - 1) / k;
    int total_time_one_oven = batches * t;

if (d + t < total_time_one_oven) {
    cout << "YES";
} else {
    cout << "NO";
}

}