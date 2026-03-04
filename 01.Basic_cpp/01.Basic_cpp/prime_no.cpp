#include<iostream>
using namespace std;
int prime(int n)
{
    if(n<=2)
    {
        cout<<"The number is not prime number";
        return 0;
    }
    else
    {
        for(int i=2; i<n; i++)
        {
            if(n%i==0){
            cout<<"The number is not prime";
            return 0;
            }
        }
           
        cout<<"The number is prime";
        
    }
}
int main()
{
    int n ;
    cout<<"Enter the number you want to find prime or not ";
    cin>>n;
    prime(n);
    return 0;
}