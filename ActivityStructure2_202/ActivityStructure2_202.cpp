#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa
{
	string nim;
	string nama;
	string alamat;
	int umr;
};

int main() {
	Mahasiswa mhs;
	cout << "Masukan nim : ";
	cin >> mhs.nim;
	cout << "Masukan nama : ";
	cin >> mhs.nama;
	cout << "Alamat: " << endl;
	cout << "\tNama Desa : ";
	cin >> mhs.alamat.desa;
	cout << "\tNama kota : ";
	cin >> mhs.alamat.kota;
	cout << "Masukan Umur : ";
	cin >> mhs.umur;
}

