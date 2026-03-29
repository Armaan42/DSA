//find the maximum value out of all elements in the array

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {100,2,30,4,5};

    int max = INT_MIN;

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << max << endl;
}

