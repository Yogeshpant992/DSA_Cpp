#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s1, s2;
    if (!(cin >> s1 >> s2)) return 0;

    int n1 = s1.size();
    int n2 = s2.size();

    int i = 0; 
    int j = 0; 

    while (i < n1 && j < n2) {
        if (s1[i] == s2[j]) {
        
            i++;
            j++;
        } else {
            
            j++;
        }
    }

   
    cout << i+1 << endl;

    return 0;
}