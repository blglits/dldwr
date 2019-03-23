#include <iostream>

using namespace std;

int hiyh(int a, int b, int c){
	while(a != 0 && b != 0){
		if(a > b){
			a = a % b;
		} else {
			b = b % a;
		}
	}
	a=a+b;
	while(a != 0 && c != 0){
		if(a > c){
			a = a % c;
		} else {
			c = c % a;
		}
	}
	return a + c;
}
int main(){
	
	int a, b, c;
	
	cin >> a;
	cin >> b; 
	cin >> c;
	
	cout << hiyh(a,b,c);
}
