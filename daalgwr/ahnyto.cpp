#include <iostream>
#include <cmath>

using namespace std;

int anh(int n){
	int m, i, t = 0, a;
	m = sqrt(n);
	for(i = 2; i < m; i++){
		if(n % i == 0){
			t++;
		}
	}
	if(t == 0){
		return 1;
	} else {
		return 0;
	}
}
int main(){
	
	int n, a;
	
	cin >> n;
	a = anh(n);
	if(a == 0){
		cout << "Anhny bish";
	} else {
		cout << "Mon";
	}
}
