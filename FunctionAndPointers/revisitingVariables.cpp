#include<iostream>
using namespace std;

int main(){
    int x = 5;
    int *p1 = &x; // pointer to x
    int **p2 = &p1; // pointer to pointer to x
    int ***p3 = &p2; // pointer to pointer to pointer to x

    cout << x << endl;
    cout << *p1 << endl;
    cout << **p2 << endl;
    cout << ***p3 << endl;
    int *p = &x;

    cout << p << endl;
    cout << &x << endl;
    return 0;
}