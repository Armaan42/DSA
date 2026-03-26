#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int e;
    cin >> e;

    int ans = 1;

    for(int i=1; i<=n; i++){
        ans = ans * n;
    }
    cout << ans << endl;
    return 0;
}

