#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=25; i++){
     cout<<i<<" ";
     if(i%5==0){
        cout<<endl;
     }
    }
}
/* alternarte approach as per */
/*int count =1;
for(int i=1; i<5; i++){
for(int j=1; j<5; j++)
{
cout<<count<<" ";
cout=cout+1;                //count use to store the numbers and print it 
}
} */