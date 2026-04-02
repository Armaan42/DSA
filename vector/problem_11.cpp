// Merge two sorted arrays ( Leetcode - 88 )

#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int> &arr1, vector<int> &arr2){
    int n = arr1.size();
    int m = arr2.size();

    vector<int> res(n+m);

    int i = 0;
    int j = 0;
    int k = 0;

    while( i <= n-1 && j <= m-1){
        if(arr1[i] < arr2[j]){
            res[k] = arr1[i];
            i++;
            k++;
        }
        else{
            // arr2[j] < arr1[i]
            res[k] = arr2[j];
            j++;
            k++;
        }
    }

    if(i == n){ // arr1 is empty and moved to res[] but arr2[] still have elements
        while(j<=m-1){
            res[k] = arr2[j];
            k++;
            j++;
        }
    }

    if( j == m){ //arr2 is empty and moved to res[] but arr1[] still have elements
        while(i <= n-1){
            res[k] = arr1[i];
            k++;
            i++;
        }
    }
    return res;
}

int main(){
    vector<int> v1{1,4,5,8};
    vector<int> v2{2,3,6,7,10,12};

    for(int i=0; i<v1.size(); i++){
        cout << v1[i] << " ";
    }cout << endl;

    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }cout << endl;

    vector<int> v = merge(v1, v2);

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;
}