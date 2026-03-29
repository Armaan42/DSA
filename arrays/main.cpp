#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    int *ptr = &arr[0];

    ptr[0] = 10;

    for(int i=0; i<5; i++){
        cout << ptr[i] << endl;
    }
}