// WAP to print the matrix in wave form

#include<iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    int arr[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    cout << endl;

    for(int i=0; i<m; i++){
        if(i%2 == 0){
            for(int j=0; j<n; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        else{ // i = 1,3,5....so on.
            for(int j=n-1; j>=0; j--){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}