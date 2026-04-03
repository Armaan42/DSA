// WAP to print the tranpose of the matrix entered by the user and stored it in a new matrix.

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
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "After Transpose" << endl;
    for(int j=0; j<n; j++){
        for(int i=0; i<m; i++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}