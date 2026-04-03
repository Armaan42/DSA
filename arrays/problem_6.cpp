// WAP to add two matrices

#include<iostream>
using namespace std;

int main(){
    int arr1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int arr2[3][3] = {{10,11,12}, {13,14,15}, {16,17,18}};

    //first matrix
    cout << "First matrix" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    //second matrix
    cout << "Second matrix" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    // sum of matrix

    int res[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
        cout << endl;
    }

    //print of sum of matrix (res);
    cout << "Sum of matrix" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}