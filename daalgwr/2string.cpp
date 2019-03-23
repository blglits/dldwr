#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	string first;
	string scnd;
	int t = 0, i, j;
	getline(cin,first);
	getline(cin,scnd);
	
	for(i = 0; i < first.length(); i++){
		for(j = 0; j < scnd.length(); j++){
			if(first[i] == scnd[j]){
				t++;
			}
		}
		if(t == 0){
			cout << first[i];
		}
		t = 0;
	}
}
