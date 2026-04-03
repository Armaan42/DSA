// Trapping Rain Water ( Leetcode - 42 )

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v{0,1,0,2,1,0,1,3,2,1,2,1};

    int n = v.size();

    //step1: previous greatest element
    int prev[n];
    prev[0] = -1;

    int max = v[0];

    for(int i=1; i<n; i++){
        prev[i] = max;
        if(max < v[i]){
            max = v[i];
        }
    }

    //step2: Next greatest element;
    int next[n];
    next[n-1] = -1;

    max = v[n-1];
    for(int i=n-2; i>=0; i--){
        next[i] = max;
        if(max < v[i]){
            max = v[i];
        }
    }

    //step3: minimum array of prev and next 
    int mini[n];
    for(int i=0; i<n; i++){
        mini[i] = min(prev[i], next[i]);
    }

    //step4: calculating water
    int water = 0;
    for(int i=1; i<n; i++){
        if(v[i] < mini[i]){
            water = water + (mini[i] - v[i]);
        }
    }
    cout << water << endl; 
}