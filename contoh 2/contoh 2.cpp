#include <iostream>
using namespace std;

struct DetailAlamat {
    string alamat;
    string kota;
};

struct Mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};


int main()
{
    Mahasiswa mhs;
    cout << "Nomer Mahasiswa : ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;

    cout << "Alamat Mahasiswa : ";
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa;
}

