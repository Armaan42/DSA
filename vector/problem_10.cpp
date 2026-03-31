// sort all 0's, 1's and 2's in a given array (Dutch Flag Algorithm) (Leetcode - 75)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{2,0,2,1,1,0};
    int n = v.size();

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }cout << endl;

    int low = 0;
    int mid = 0;
    int high = n - 1;

    while(mid <= high){
        if(v[mid] == 2){
            swap(v[mid], v[high]);
            high--;
        }
        else if(v[mid] == 0){
            swap(v[low], v[mid]);
            low++;
            mid++;
        }
        else if(v[mid] == 1){
            mid++;
        }
    }    

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;

    return 0;
}