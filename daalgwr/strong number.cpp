#include <iostream>

using namespace std;

int func(int a){
	if (a == 0){ 
	return 1;
	}
	return a * func(a - 1);
} 
int main(){
	
	int s = 0, i, a;
	
	for(i = 1; i <= 1000; i++){
	int k = i;
		while(k > 0){
			a = k % 10;
			s = s + func(a);
			k = k / 10; 
		}
		if (i == s){
			cout << i << " ";
		}
		s = 0;
	}
}
