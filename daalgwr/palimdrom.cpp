#include <iostream>

using namespace std;

int main(){
	
	int i, s = 0;
	string vg;
	
	cout << "vge orulnu" << endl;
	getline(cin, vg);

	for(i = 0; i <= vg.length(); i++){	
			if(vg[i] != vg[vg.length()-(i+1)]){
				s++;
			}
	}
	if (s == 0){
		cout << "Palimdrom vg mon";
	} else {
		cout << "Palimdrom bish";
	}
	return 0;	
	}
