#include <fstream>
#include <iostream>
using namespace std;

class Proses {
    public :
    void cetak() {
        cout <<"Anda sebagai Proses \n";
    }

    void getData() {
        ambil_data.open("../pra_data/input.txt");
        bool ayam_geprek, ayam_goreng, udang_goreng = true;
        bool cumi_goreng, ayam_bakar = true;
        while(!ambil_data.eof()) {
            if(ayam_geprek) {
                ambil_data >> bnyk_ayamGp;
                ayam_geprek = false;
            } else if(ayam_goreng) {
                ambil_data >> bnyk_ayamGr;
                ayam_goreng = false;
            } else if(udang_goreng) {
                ambil_data >> bnyk_udgGr;
                udang_goreng = false;
            } else if(cumi_goreng) {
                ambil_data >> bnyk_cmiGr;
                cumi_goreng = false;           
            } else if(ayam_bakar) {
                ambil_data >> bnyk_ayamBk;
                ayam_bakar = false;
            } else {
                ambil_data >> jarak;
            }
        }
            ambil_data.close();
    }

    void toFile() {
        int total = (hrg_ayamGp * bnyk_ayamGp) + (hrg_ayamGr * bnyk_ayamGr) + (hrg_udgGr * bnyk_udgGr)
                    + (hrg_cmiGr * bnyk_cmiGr) + (hrg_ayamBk * bnyk_ayamBk);
    
        int ongkir, potkir;
        int keseluruhan;
        float t2 = float(total);
        float diskon;

        if(jarak < 3) {
		    ongkir = 15000;
	    } else if(jarak >= 3) {
		    ongkir = 25000;
	    } 
	    if(total > 25000 && total <= 50000 ){
		    potkir = ongkir - 3000;
            diskon = 0;
	    } else if(total > 50000 && total <= 150000) {
		    potkir = ongkir - 5000;
		    diskon = 0.15 * total;
            t2 = total - diskon;
	    } else if(total > 150000) {
		    potkir = ongkir - 8000;
		    diskon = 0.35 * total;
            t2 = total - diskon;
	    } else {
		    cout << "\nTidak mendapat potongan";
        }   keseluruhan = t2 + potkir;

        tulis_data.open("../pra_data/proses.txt");
        tulis_data << total <<endl;
        tulis_data << diskon <<endl;
        tulis_data << t2 <<endl;
        tulis_data << ongkir <<endl;
        tulis_data << potkir <<endl;
        tulis_data << keseluruhan <<endl;
        tulis_data << bnyk_ayamGp <<endl;
        tulis_data << bnyk_ayamGr <<endl;
        tulis_data << bnyk_udgGr <<endl;
        tulis_data << bnyk_cmiGr <<endl;
        tulis_data << bnyk_ayamBk <<endl;
        tulis_data << jarak <<" KM";
        tulis_data.close();
    }

    private : 
        ifstream ambil_data;
        ofstream tulis_data;
        int bnyk_ayamGp;
        int bnyk_ayamGr;
        int bnyk_udgGr;
        int bnyk_cmiGr;
        int bnyk_ayamBk;
        int jarak;
        int hrg_ayamGp = 21000;
        int hrg_ayamGr = 17000;
        int hrg_udgGr = 19000;
        int hrg_cmiGr = 20000;
        int hrg_ayamBk = 25000;
};