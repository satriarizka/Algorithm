#include <iostream>
using namespace std;

int main(){
	int nilai;
	cout<<"Silahkan anda inputkan nilai dengan range 0 sampai 1023: ";
	cin>>nilai;
	
	if(0 <= nilai && nilai < 1024){
		if(nilai >= 512){
			cout << 1;
			nilai%=512;
		}
		
		else
		cout<<0;
		if(nilai >= 256){
			cout << 1;
			nilai%=256;
		}
		
		else
		cout<<0;
		if(nilai >= 128){
			cout << 1;
			nilai%=128;
		}
		
		else
		cout<<0;
		
		if(nilai >= 64){
			cout << 1;
			nilai%=64;
		}
		
		else
		cout<<0;
		
		if(nilai >= 32){
			cout << 1;
			nilai%=32;
		}
		
		else
		cout<<0;
		
		if(nilai >= 16){
			cout << 1;
			nilai%=16;
		}
		
		else
		cout<<0;
		
		if(nilai >= 8){
			cout << 1;
			nilai%=8;
		}
		
		else
		cout<<0;
		
		if(nilai >= 4){
			cout << 1;
			nilai%=4;
		}
		
		else
		cout<<0;
		
		if(nilai >= 2){
			cout << 1;
			nilai%=2;
		}
		
		else
		cout<<0;
		cout << nilai << "\n";
	}
	return 0;
}
