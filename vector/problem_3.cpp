// WAP to copy the contents of one array into another in the reverse order.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{1,3,2,3,4,1,6};
    
    vector<int> v1(v.size());

    int i = 0;
    int j = v.size() - 1;

    while(i < v.size()){
        v1[i] = v[j];
        i++;
        j--;
    }

    for(int i=0; i<v.size(); i++){
        cout << v1[i] << " ";
    }cout << endl;
    return 0;
}