#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

main()
{
	int a,t,nomer,c,d;
	char ulang;
	cout<<"Menu Segitiga Siku-Siku \n";
	cout<<"=======Rizha Atchafa======\n";
	cout<<"--------------------------\n;";
	
	cout<<"Daftar menu Segitiga Siku-siku \n";
	cout<<"1. Menghitung panjang sisi miring \n";
	cout<<"2. Menghitung luas \n";
	cout<<"3. Menghitung keliling \n";
	cout<<"4. Keluar program \n";
	
	cout<<"======================================\n";
	
	cout<<"Masukkan Nomer Menu :"; cin >> nomer;
	cout<<"========================================\n";
	switch(nomer){
		case 1:
			cout << "Masukkan Nilai Alas \t ="; cin >> a;
			cout << "Masukkan Nilai Tinggi \t ="; cin >> t;
			c=sqrt((a*a)+(t*t));
			cout << "Hasil panjang sisi miring adalah "<<c;
			break;
		 
		 case 2:
		 	cout << "Masukkan Nilai Alas \t ="; cin >> a;
		 	cout << "Masukkan Nilai Tinggi \t ="; cin >> t;
		 	c=((a*t)/2);
		 	cout << "Hasil Luas segitga adalah " << c;
		 	break;
		
		case 3:
			cout << "Masukkan Nilai Alas \t\t ="; cin >> a;
			cout << "Masukkan Nilai tinggi \t\t ="; cin >> t;
			cout << "Masukkan Nilai Sisi miring \t ="; cin >> d;
			c=a+t+d;
			cout << "Hasil dari keliling segitiga adalah " << c;
			break;
			
	      case 4: cout<<"Yakin mau Keluar?(Y/T)";
    		cin>>ulang;
    		break;
    default:cout<<"Maaf Inputan Salah";
			break;
	}
} 
