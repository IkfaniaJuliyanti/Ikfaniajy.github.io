#include<iostream>

using namespace std;

int main(){
	int a, b;
	
	cout<<"Masukkan Kapasitas Bilangan : ";cin>>b;
	for(a = 1;a <= b ; a++){
		if(a% 3 == 0 && a % 5 == 1){
		cout<<" hasilnya yaitu : "<<a<<endl;
	}
}
}
