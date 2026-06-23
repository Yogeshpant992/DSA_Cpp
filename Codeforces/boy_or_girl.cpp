#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    string c;
    cin>>c;
    set <char> st;
    for(char ch : c){
        st.insert(ch);
    }
    if(st.size()%2)
        cout<<"IGNORE HIM!\n";
    else
        cout<<"CHAT WITH HER!\n";
}