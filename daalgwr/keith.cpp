#include <iostream>

using namespace std;

int main(){
	
	int n, g, q, h=0, k = 1, j, m, i, s=0;
	
	cin >> n;
	
	m = n;
	j = n;
	q = n;
	while(n > 0){
		g = n % 10;
		n = n / 10;
		s++;
	}
	cout << s << endl;
	int a[s];
	for(i = s; i > 0; i--){
		a[i] = m % 10;
		m = m / 10;
	}
	cout << s << endl;
	for(i = s; i > 0; i++){
		h = h + a[i];
	}
	cout << a[i+3];
}
