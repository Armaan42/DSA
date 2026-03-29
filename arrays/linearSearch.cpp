#include<iostream>
using namespace std;

int linearSearch(int arr[], int target, int size){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int size;
    cin >> size;

    int target;
    cin >> target;

    int arr[size];

    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int result = linearSearch(arr, target, size);

    if(result != -1){
        cout << "Target found at index " << result << endl; 
    }
    else{
        cout << "Target not found" << endl;
    }
    return 0;
}