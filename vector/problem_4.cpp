// WAP to reverse part of array

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{1,3,2,3,4,1,6};

    int i, j;
    cin >> i >> j;

    while(i < j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;

        i++;
        j--;
    }

    for(int k = 0; k < v.size(); k++){
        cout << v[k] << " ";
    }
    cout << endl;
    return 0;
}