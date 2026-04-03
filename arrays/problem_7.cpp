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

    // cout << "After Transpose" << endl;
    // for(int j=0; j<n; j++){
    //     for(int i=0; i<m; i++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //storing it in the new matrix
    int t[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            t[i][j] = arr[j][i];
        }
    }

    //printing the tranpose matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}