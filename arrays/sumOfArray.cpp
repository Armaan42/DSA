#include<iostream>
using namespace std;

int main(){
    
    int marks[6];

    for(int i=0; i< sizeof(marks)/sizeof(marks[0]); i++){
        cin >> marks[i];
    }

    int sum = 0;

    for(int i=0; i < sizeof(marks)/sizeof(marks[0]); i++){
        sum += marks[i];
    }
    cout << sum << endl;
    return 0;
}