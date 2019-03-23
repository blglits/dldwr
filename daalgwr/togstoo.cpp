#include <iostream>

using namespace std;

int main(){
	
	int n, s = 0, j, p, h, l = 0, k = 0, i;
	
	cin >> n;
	
	for (i = n; i > 0; i--){
		for(j = 1; j < i; j++){
			if(i % j == 0){
				s = s + j;
			}
		}
		k++;
		if(s == i){
			p = s;
			break;
		}
		s = 0;
	}
	for (i = n; i < n*n*n; i++){
		for(j = 1; j < i; j++){
			if(i % j == 0){
				s = s + j;
			}
		}
		l++;
		if(s == i){
			h = s;
			break;
		}
		s = 0;
	}
	if(l > k){
		cout << p;
	} else {
		cout << s;
	}
}
