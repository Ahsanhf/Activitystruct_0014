#include <iostream>
using namespace std;

struct Mahasiswa {
    int nim;
    int nama;
    int alamat;
    int umur;
};


int main()
{
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa : ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa : ";
    cin << mhs.alamat;


}

