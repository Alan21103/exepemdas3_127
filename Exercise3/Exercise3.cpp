#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;		//variabel untuk menyimpan input dari lingkaran maupun bujungsangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } // fungsi menghitung luas
	virtual float keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { // fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar {		//Membuat class lingkaran untuk menghitung Luas dan Keliling
public:
	void input () {							//Membuat method memasukkan jejari
		cout << "Masukkan jejari: ";
		int r;
		cin >> r;
		setX(r);

	}
	float Luas(int a) {					// membuat fungsi luas lingkaran
		return 3.14 * a * a;
	}

	float Keliling(int a) {				//membuat fungsi keliling lingkaran
		return 2 * 3.14 * a;
	}
};
class Bujursangkar :public bidangDatar { //Membuat class untuk menghitung luas dan keliling bujursangkar
public:
public:
	void input() {						// Membuat method memasukkan sisi
		cout << "Masukkan sisi: ";
		int s;
		cin >> s;
		setX(s);
	}
			
	float Luas(int a) {					// Membuat fungsi Luas bujursangkar
		return a * a;
	}

	float Keliling(int a) {				// membuat fungsi keliling bujursangkar
		return 4 * a;
	}

};

int main() {				//Memanggil semua fungsi getX dan menampilkan hasil Luas dan keliling lingkaran dan bujursangkar
	Lingkaran lingkaran;
	Bujursangkar bujursangkar;

	cout << "Lingkaran dibuat" << endl;
	lingkaran.input();
	cout << "Luas Lingkaran : " << lingkaran.Luas(lingkaran.getX()) << endl;
	cout << "Keliling Lingkaran : " << lingkaran.Keliling(lingkaran.getX()) << endl;

	cout << "Bujursangkar dibuat" << endl;
	bujursangkar.input();
	cout << "Luas Bujursangkar : " << bujursangkar.Luas(bujursangkar.getX()) << endl;
	cout << "Keliling Bujursangkar :" << bujursangkar.Keliling(bujursangkar.getX()) << endl;

	return 0;
}
