#include <iostream>

using namespace std;

int main(){
	
	int i,s = 0;
	
	string a;
	
	cin >> a;
	
	for(i = 0; i < a.length(); i++){
		if(a[i] == '0'){
			s = s + 0;
		}
		if(a[i] == '1'){
			s = s + 1;
		}
		if(a[i] == '2'){
			s = s + 2;
		}
		if(a[i] == '3'){
			s = s + 3;
		}
		if(a[i] == '4'){
			s = s + 4;
		}
		if(a[i] == '5'){
			s = s + 5;
		}
		if(a[i] == '6'){
			s = s + 6;
		}
		if(a[i] == '7'){
			s = s + 7;
		}
		if(a[i] == '8'){
			s = s + 8;
		}
		if(a[i] == '9'){
			s = s + 9;
		}
	}
	
	cout << s;
}

