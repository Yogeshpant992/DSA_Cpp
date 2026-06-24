#include<iostream>
using namespace std;
int main()
{
    int pow , num;
    cout<<"Enter the number you want : ";
    cin>>num;
    cout<<"Enter the power of the number : ";
    cin>>pow;
    int sum = 1;
    for(int i=1; i<=pow; i++)
    {
        sum = sum*num;
    }
    cout<<"The output is "<<sum;
}