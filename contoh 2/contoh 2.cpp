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
    std::cout << "Hello World!\n";
}

