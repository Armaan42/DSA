// WAP to print the multiplication of two matrices

#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;

    int p,q;
    cin >> p >> q;

    if(n == p){
        int arr1[m][n];
        int arr2[p][q];

        //taking input of arr1
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin >> arr1[i][j];
            }
        }

        //taking input of arr2
        for(int i=0; i<p; i++){
            for(int j=0; j<q; j++){
                cin >> arr2[i][j];
            }
        }

        //resultant matrix
        int res[m][q];
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                //multiply
                res[i][j] = 0;

                for(int k=0; k<n; k++){
                    res[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                cout << res[i][j] << " ";
            }
            cout << endl;
        }

    }
    else{
        cout << "The matrix cannot be multiplied" << endl;
    }
}