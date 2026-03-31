// WAP to sort all 0's and 1's ( two sum method)

#include<bits/stdc++.h>
using namespace std;

void sort01(vector<int> &v){
    int n = v.size();

    int noo = 0;
    int noz = 0;

    for(int i=0; i<v.size(); i++){
        if(v[i] == 0){
            noz++;
        }noo++;
    }

    for(int i=0; i<v.size(); i++){
        if(i < noz) v[i] = 0;
        else v[i] = 1;
    }
}

int main(){
    vector<int> v{0,1,1,1,0,0,1,0,0};

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;

    sort01(v);

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;

    return 0;
}