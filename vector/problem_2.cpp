// find the doublet in the array whose sum is equal to the given value of x

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{1,3,2,3,4,1,6};

    int x = 7;

    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if (v[i] + v[j] == x){
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}