#include <iostream>

using namespace std;

int main(){
	
	int n,i,j, s = 0;
	
	cin >> n;
	
	int a[n];
	
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(a[i] == a[j] && i != j){
				s++;
			}
		}
		if(s == 0){
			cout << a[i] << " ";
		}
		s = 0;
	}
}
