// find the last occurence of x in the array

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{1,3,2,3,4,1,6};

    int x;
    cin >> x;

    int idx = -1;

    for(int i=0; i<v.size(); i++){
        if(v[i] == x){
            idx = i;
        }
    }
    cout << idx << endl;
}