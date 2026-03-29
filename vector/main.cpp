#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(4);

    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }  
    
    v.pop_back();
    
    cout << "After pop back" << endl;

    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }  

    return 0;
}