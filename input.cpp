#include <iostream>

using namespace::std;

int main() {

	char nama[51] = {};
	char hoby[51]={};

	cout << "============= Contoh program input ============="<<endl;
	cout << "masukan nama anda : ";
	cin.getline(nama, 51) ;
	cout << "apa hobby mu : ";
	cin. getline(hoby, 51) ;


	cout << endl <<"==========================";    cout << endl << "Hai " << nama <<" Selamat datang di Cpp! "; 
	cout << endl << "kamu memiliki hobi " << hoby << " ? Wow 🙊 kamu bisa membuat program berdasarkan hobby mu di cpp! " <<endl;




	return 0;
}
