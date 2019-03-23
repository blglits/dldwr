#include <iostream>

using namespace std;

int main(){
	
	int i;
	
	int a[20] = {1};
	for(i = 1; i < 20; i++){
		a[i] = a[i - 1] * 2 + a[i - 2];
	}
	for(i = 0; i < 20; i++){
		cout << a[i] << " ";
	}
}
