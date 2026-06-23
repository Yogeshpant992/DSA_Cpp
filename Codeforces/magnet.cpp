#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int current, next, count = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> current;
        if(count == 0){
            count ++ ;
        }
        else if (current != next)
        {
            count++;
        }
        next = current;
    }
    cout << count << endl;
}