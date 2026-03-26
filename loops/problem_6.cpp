#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int last_digit = 0;
    int sum = 0;

    while (n > 0){
        last_digit = n % 10;
        sum = sum + last_digit;
        n = n / 10;
    }
    cout << sum << endl;

    return 0;
}