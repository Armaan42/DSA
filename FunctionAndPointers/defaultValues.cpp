#include<iostream>
using namespace std;

int sum(int n = 2, int m = 5){
	return n + m;
}

int main(){
	cout << sum(1, 1) << endl;
	return 0;
}