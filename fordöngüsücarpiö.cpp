#include<iostream>

using namespace std;

int main(){
	cout<<"Hosgeldiniz!"<<endl;
	cout<<"Lutfen carpmak istediginiz sayilari giriniz:"<<endl;
	int sayi1 , sayi2;
	cout<<"1.Sayi:";
	cin>>sayi1;
	cout<<"2.Sayi:";
	cin>>sayi2;
	
	int sonuc=0;
	
	for(int i=0;i<sayi2;i++){
		sonuc += sayi1;
	}
	cout<<"Girilen sayilarin carpim sonucu: "<<sonuc<<endl;
	return 0;
}
