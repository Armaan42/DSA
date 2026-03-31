// WAP to sort all 0's and 1's ( Two pointer )

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{0,1,1,1,0,0,1,0,0};

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;

    int n = v.size();

    int i = 0;
    int j = n-1;

    while( i < j){
        if(v[j] == 1) j--;
        else if(v[i] == 0) i++;

        else if(v[i] == 1 && v[j] == 0){
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;

    return 0;
}