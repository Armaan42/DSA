// Find the next permutations of Array.

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    vector<int> v{2,3,1};

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;

    int n = v.size();
    
    //step1: finding pivot idx
    int idx = -1;

    for(int i=n-2; i>=0; i--){
        if(v[i] < v[i+1]){
            idx = i;break;
        }
    }

    if(idx == -1){ // if our current array is the greatest
        reverse(v.begin(), v.end());
    }

    //step2: sorting after pivoting
    reverse(v.begin()+idx+1, v.end());

    //step3: Finding the just greater element than idx
    int j = -1;
    for(int i=idx+1; i<n; i++){
        if(v[i] > v[idx]){
            j = i;
            break;
        }
    }

    //step4: swapping idx  and j
    swap(v[idx], v[j]);

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }cout << endl;

    return 0;
}