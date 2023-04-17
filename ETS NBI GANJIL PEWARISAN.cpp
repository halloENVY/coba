//Yunus Dwi Bachtiar 1462100195
//ETS GANJIL
#include <iostream>
using namespace std;

class Masakan {
	public : // variabel yang di kenal di semua tempat
		string nama; // atribut (variable)
		string komposisi;
		string daerah_asal;
};

class Masakan_eropa : public Masakan{ //diturunkan
	public :
		string pemasaran;
		//konstruktor dengan parameter
		//tugas yang dikerjakan saat objek diciptakan
		Masakan_eropa(string _nama,string _komposisi,string _daerah_asal,string _pemasaran){
			nama 		= _nama;		// mengganti nama ke nama masakan yang akan di inputkan
			komposisi 	= _komposisi;
			daerah_asal = _daerah_asal;
			pemasaran 	= _pemasaran;
			
		}
		
		//prosedur/fungsi/method
		void infomasakan_eropa(){
			cout << endl;
			cout << " =====Contoh Masakan Eropa=====   "<<endl;
			cout << " Nama Makanan                   : " << nama 		<<endl;
			cout << " Komposisi Masakan              : " << komposisi 	<<endl;
			cout << " Daerah/Negara Asal             : " << daerah_asal <<endl;
			cout << " Pemasaran                      : " << pemasaran 	<<endl;	
		}
		
};

class Masakan_asia : public Masakan{
	public : 
		string pemasaran;
		//konstruktor
		Masakan_asia(string _nama,string _komposisi,string _daerah_asal,string _pemasaran){
			nama 		= _nama;		// mengganti nama ke nama masakan yang akan di inputkan
			komposisi 	= _komposisi;
			daerah_asal = _daerah_asal;
			pemasaran 	= _pemasaran;
		}
	// fungsi / method / prosedur
	void infomasakan_asia(){
		cout << endl;
		cout << "=====Contoh Masakan Asia======= "<<endl;
			cout << " Nama makanan                   : " << nama 		<<endl;
			cout << " Komposisi Masakan              : " << komposisi 	<<endl;
			cout << " Daerah/Negara asal             : " << daerah_asal <<endl;
			cout << " Pemasaran                      : " << pemasaran 	<<endl;	
	}
	
};

//fungsi/memanggil
int main(){
	Masakan_eropa _masakan_eropa( "pizza", "adonan roti, saos tomat, keju", "Italia", "Toko/Cafe" );
	Masakan_asia _masakan_asia  ("pecel", "nasi, bumbu kacang, sayuran, tempe/krupuk", "Madiun/Indonesia", "Pasar Tradisional");
	cout << "=========MASAKAN========== " << endl;
	cout << " ======================== " << endl;

//	menampilkan info yang sudah di inputkan _masakan_eropa.info();
	_masakan_eropa.infomasakan_eropa();
	_masakan_asia.infomasakan_asia();
}
