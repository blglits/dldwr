#include <iostream>

using namespace std;

int main(){
	
	int n,m,b,i,j,p;
	
	cout << "Mass1 hemje" << endl;
	cin >> n;
	
	int a[n];
	cout << "Mass1 dahi toonuudyg orulnu" << endl;
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << "Mass2 hemje" << endl;
	cin >> m;
	int c[m];
	cout << "Mass2 dahi toonuudyg orulnu" << endl;
	for(j = 0; j < m; j++){
		cin >> c[j];
	}
	cout << "Mass3 hemje" << endl;	
	cin >> b;
	int k[b];
	cout << "Mass3 dahi toonuudyg orulnu" << endl;
	for(p = 0; p < b; p++){
		cin >> k[p];
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			for(p = 0; p < b; p++){
				if(a[i] == c[j] && a[i] == k[p] && c[j] == k[p]){
					cout << a[i] << " ";
				}
			}
		}
	}
}
