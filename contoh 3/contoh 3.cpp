
#include <iostream>
using namespace std;
 

struct DetailAlamat {
    string desa;
    string kota;
};

struct Mahasiswa {
    string nim;
    char nama[25];
    DetailAlamat alamat;
    int umur;
};  


int main()
{
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa : ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;
    cin.getline(mhs.nama, 25);
    cin.ignore(1, \n');

    cout << "Alamat Mahasiswa :  " << endl;
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa;
    cin.ignore(1, '\n');
    cout << "\t Nama Kota : ";
    cin >> mhs.alamat.kota;
    cin.ignore(1, '\n');
    cout << "umur mahasiswa : ";
    cin >> mhs.umur;

