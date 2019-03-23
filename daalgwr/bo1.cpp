#include <iostream>

using namespace std;

int main(){
	
	int n, i, m, j;
	
	cin >> n;
	cin >> m;
	
	int a[n];
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(a[i] + a[j] == m){
				cout << a[i] << " " << a[j] << endl;
			}
		}
	}
	return 0;
}
