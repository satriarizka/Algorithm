#include <iostream>
using namespace std;

int main(){
	int nilai;
	
	cout<<"Input Nilai Mahasiswa: ";
	cin>>nilai;
	
	if (nilai > 80){
		cout<<"A";
	}
	else if (70<nilai<81){
		cout<<"B";
	}
	if (nilai < 71){
		cout<<"C";
	}
	return 0;
}
