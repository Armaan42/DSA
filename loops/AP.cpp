#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cin >> n;
    int d = 2;

    for(int i = 1; i<=(2*n-1); i+=d){
        cout << i << " ";
    }cout << endl;
    return 0;
}