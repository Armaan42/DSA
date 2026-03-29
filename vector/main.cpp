// #include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(4);
    v.push_back(19);
    v.push_back(51);
    v.push_back(17);

    //sort
    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}