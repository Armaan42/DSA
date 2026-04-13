//max in string array

#include<iostream>
#include<climits>
#include<string>
using namespace std;

int main(){
    string arr[] = {"0123", "0023", "456", "00182", "940", "2901"};
    // int max = stoi(arr[0]);
    int max = INT_MIN;

    for(int i=1; i<=5; i++){
        int x = stoi(arr[i]);
        if(x > max){
            max = x;
        }
    }
    cout << max << endl;
}