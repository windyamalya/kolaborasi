#include <iostream>
#include<fstream>
using namespace std;

class Input {
	private : 
			ofstream tulis_data;
			int bnyk_aymgpr,bnyk_aymgr,bnyk_udg,bnyk_cm,bnyk_aymbkr;
	public : 
		void cetak (){
			cout<< "Selamat datang di Rumah Makan \n";
			cout<<"Menu yang tersedia  : "<<endl;
			cout << "1. Ayam geprek	: Rp.21000 \n";
			cout << "2. Ayam goreng	: Rp.17000 \n";
			cout << "3. Udang goreng	: Rp.19000 \n";
			cout << "4. Cumi goreng	: Rp.20000 \n";
			cout << "5. Ayam bakar	: Rp.25000 \n";
			cout<<"Pesan ayam geprek -> "; cin>>bnyk_aymgpr;
			cout<<"Pesan Ayam goreng -> ";cin>>bnyk_aymgr;
			cout<<"Pesan Udang goreng -> ";cin>>bnyk_udg;
			cout<<"Pesan Cumi goreng -> ";cin>>bnyk_cm;
			cout<<"Pesan Ayam bakar -> ";cin>>bnyk_aymbkr;
	}
			void toFile(){
				
				tulis_data.open("input.txt");
				tulis_data<<bnyk_aymgpr<<endl;
				tulis_data<<bnyk_aymgr<<endl;
				tulis_data<<bnyk_udg<<endl;
				tulis_data<<bnyk_cm<<endl;
				tulis_data<<bnyk_aymbkr;
				tulis_data.close();
			}				
};