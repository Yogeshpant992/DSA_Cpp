#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int arr[n];
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    int m ;
    cin >> m;
    for(int i=1; i<=m; i++ ){
        int a , b ;
        cin >> a >> b;
        arr[a-1] = arr[a-1] + (b-1) ;
        arr[a+1] = arr[a+1] + (arr[a]-b);
        arr[a] = 0;
    }
    for(int i=1; i<=n; i++){
        cout<< arr[i]<<endl;
    }
}