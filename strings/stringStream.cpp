#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;

int main(){
    string s = "John is a good boy";
    stringstream ss(s);

    string temp;

    while(ss >> temp){
        cout << temp << endl;
    }
}