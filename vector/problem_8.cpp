// sort all 0's, 1's and 2's in a given array (Leetcode - 75)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{2,0,2,1,1,0};

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;

    int noz = 0;
    int noo = 0;
    int no2 = 0;

    //counting
    for(int i=0; i<v.size(); i++){
        if(v[i] == 0){
            noz++;
        }
        if(v[i] == 1){
            noo++;
        }
        if(v[i] == 2){
            no2++;
        }
    }

    //filling
    for(int i=0; i<v.size(); i++){
        if(i < noz){
            v[i] = 0;
        }
        else if(i < (noz + noo)){
            v[i] = 1;
        }
        else{
            v[i] = 2;
        }
    }   

    //final solution
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;
}