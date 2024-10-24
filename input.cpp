//Berikut ini adalah contoh program sederhana yang memanfaatkan 
//cout dan cin sebagai input dan output.



#include <iostream>

using namespace::std;

int main() {

	char nama[51] = {};
	char jenisK [11] = {};
	char tempatLahir [41] = {};
	char tanggalLahir [11] = {};
	int beratBadan ;
	int tinggiBadan ;
	

	cout << "============= Contoh program input formulir sederhana ============="<<endl;
	cout << "Nama : ";
	cin.getline(nama, 51) ;
	cout << "Jenis kelamin : ";
	cin. getline( jenisK, 51) ;
	cout << "Tempat lahir : ";
        cin.getline( tempatLahir, 41) ;
        cout << "Tanggal lahir : ";
        cin. getline( tanggalLahir, 11) ;
	cout << "Berat badan : ";
        cin >> beratBadan ;
        cout << "Tinggi badan : ";
        cin >> tinggiBadan ;


	cout << endl <<"================================================"<<endl;
    	cout << "Terimakasih telah mengisi formulir ini."<<endl<<"Berikut adalah data yang kamu masukan. silakan cek kembali! " <<endl;
       
	cout << "Nama : " << nama <<endl;
	cout << "Jenis kelamin : " << jenisK <<endl;
	cout << "Tempat lahir : " << tempatLahir <<endl;
	cout << "Tanggal lahir : " << tanggalLahir <<endl;
        cout << "Berat badan : " << beratBadan<<" kg" <<endl;
        cout << "Tinggi badan : " << tinggiBadan<<" cm" <<endl;


	return 0;
}
