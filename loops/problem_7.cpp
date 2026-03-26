// WAP to print reverse of a given number

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n > 0){
        int last_digit = n % 10;
        cout << last_digit;
        n = n / 10;
    }
    
    cout << endl;
    return 0;
}