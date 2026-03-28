#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=2; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int combination(int n, int r){
    if(r > n) return 0;
    int ncr = factorial(n) / (factorial(r) * factorial(n-r));
    return ncr;
}

int permutation(int n, int r){
    if(r > n) return 0;
    int npr = factorial(n) / factorial(n-r);
    return npr;
}

int main(){

    int n;
    cin >> n;

    int r;
    cin >> r;

    cout << combination(n, r) << endl;
    cout << permutation(n, r) << endl;
}