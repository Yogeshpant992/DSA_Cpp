#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"Enter the no ";
     cin>>no;
      int sum = 0;
    for(int i=1;i<=10; i=i+1)
    {
        sum = sum + no;
        cout<<sum<<endl;
         
    }
}