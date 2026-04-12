#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // string s = "joan";
    // cout << "Before updation: " << s << endl;
    // s[0] = 'm';
    // cout << "After updation: " << s << endl;



    // return the first half of the string
    string s = "abcdefgh";

    int len = s.length() / 2;

    reverse(s.begin()+0, s.begin() + len);

    cout << s << endl;



    int n = 12345;
    string str = to_string(n);
    cout << str.length() << endl;
    
    return 0;
}