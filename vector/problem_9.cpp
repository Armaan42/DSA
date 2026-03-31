// move all the negative number to beginning and positive to end with constant extra space

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{1, -2, 3, -4, -5, 6, 8};

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    int i = 0;
    int j = v.size() - 1;

    while(i < j){
        if(v[i] < 0){
            i++;
        }
        else if(v[j] > 0){
            j--;
        }
        else{
            // swap positive (left) with negative (right)
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;

            i++;
            j--;
        }
    }

    for(int k = 0; k < v.size(); k++){
        cout << v[k] << " ";
    }
    cout << endl;

    return 0;
}