#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> vec(t);
    for (int i = 0; i < t; i++)
    {
        cin >> vec[i];
    }
    int n = vec.size()-1;
    int picked_value = 0;
    int a = 0;
    int v = 0, c = 0;
    bool turn = true;
    while (a <= n)
    {
            if (vec[a] > vec[n])
            {
                picked_value = vec[a];
                a++;
            }
            else {
              picked_value = vec[n];
               n-- ;
            }
            if(turn){
                v = v + picked_value;
            }
            else 
            c = c + picked_value;
            turn = !turn;
    }

    cout<< v << " "<< c << " ";
}
    