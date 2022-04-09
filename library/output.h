#include <fstream>
#include <iostream>
using namespace std;

class Output{
	public :
	  void cetak(){
	    cout<<"Anda sebagai output \n";
      cout<<"Struk Belanja \n";
      cout<<"Yang dibeli : \n";
      cout<<" Aayam geprek -> "<<data_file[3]<<endl;
      cout<<" Ayam goreng -> "<<data_file[4]<<endl;
      cout<<" Udang goreng -> "<<data_file[5]<<endl;
      cout<<" Cumi goreng -> "<<data_file[6]<<endl;
      cout<<" Ayam bakar -> "<<data_file[7]<<endl;
      cout<<" Harga total	Rp. "<< data_file[8]<<endl;
      cout<<" Diskon		RP. "<<data_file[9]<<endl;
      cout<<"Harga Bayar	Rp. "<<data_file[10];
	}
	
   void getData(){
     ambil_data.open("../dummy/out_proses.txt");
     string t;
     while(!ambil_data.eof()){
       ambil_data>>data_file[index];
       index += 1;
     }
     ambil_data.close();
   }
private :
   ifstream ambil_data;
   string data_file[30];
   int index = 0;
};s