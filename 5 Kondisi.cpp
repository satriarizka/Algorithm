#include <iostream>
using namespace std;

int main(){
	int nilai;
	
	cout<<"Input Nilai Mahasiswa: ";
	cin>>nilai;
	
	if (nilai > 80){
		cout<<"A";
	}
	else if (nilai > 74 && nilai < 81){
		cout<<"B";
	}
	else if (nilai > 64 && nilai < 75){
		cout<<"C";
	}
	else if (nilai > 39 && nilai < 65){
		cout<<"D";
	}
	else if (nilai >= 0 && nilai < 40){
		cout<<"E";
	}
	return 0;
}
