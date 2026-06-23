#include<iostream>
#include<cmath>
using namespace std;
int main(){
     int c ;
    for(int i =1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin>>c;
            if(c==1){
                int distance = abs(3-i)+abs(3-j);
                cout<<distance;
            }
        }
    }

}