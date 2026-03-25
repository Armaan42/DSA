#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a = 1;

    for(int i = 1; i<=n; i++){
        cout << a << " ";
        a = a * 2;
    }cout << endl;
    return 0;
}