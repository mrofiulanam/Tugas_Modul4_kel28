#include <iostream>
using namespace std;


class Heading{
public:
	void methodHeading(){
	cout << "======== E-Tiket Kereta Api ========= \n";
	cout << "===================================== \n";
	}
};

void pilihan_jalur(){
	cout << "1. Jakarta - Semarang 	(Rp.50000/orang)\n";
	cout << "2. Jakarta - Jogja 	(Rp.60000/orang)\n";
	cout << "3. Jakarta - Surabaya 	(Rp.70000/orang)\n";
}
void aplikasi(){
	int a,b,hasil;
	cout << "Masukan Pilihan Jalur [angka] : ";
	cin >> a;
	cout << "\n";
	cout << "Jumlah tiket yang dipesan: ";
	cin >> b;
	
	switch(a){
			case 1:
			cout << "Anda memilih Jakarta - Semarang \n";
			hasil = b * 50000;
			cout << "Total : Rp," << hasil << "\nJumlah tiket : " << b << " orang \n";
			break;
		case 2:
			cout << "Anda memilih Jakarta - Jogja \n";
			hasil = b * 60000;
			cout << "Total : Rp," << hasil << "\nJumlah tiket : " << b << " orang \n";
			break;
		case 3:
			cout << "Anda memilih Jakarta - Surabaya \n";
			hasil = b * 70000;
			cout << "Total : Rp," << hasil << "\nJumlah tiket : " << b << " orang \n";
			break;
		default:
			cout << "Pilihan anda tidak tersedia";
	}
}
do{
		aplikasi();
		cout << "--------------------------------------\n";
		cout << "Pilih [1] jika iya \n";
		cout << "Pilih [0 atau lainnya] jika tidak \n";
		cout << "Ingin membeli tiket lagi : ";
		cin >> i;
		cout << "--------------------------------------\n";
	}while(i == 1);
	cout << "Terimakasih Telah menggunakan layanan kami ";
	return 0;
}
