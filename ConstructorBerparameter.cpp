#include <iostream>
#include <string>
using namespace std;

class mahasiswa { 
    public:
    // constructor dengan parameter
    mahasiswa(int nim, string nama);
};

// Definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Constructor dengan parameter terpanggil" << endl;
    cout << " NIM   : " << nim << endl;
    cout << " Nama  : " << nama << endl;
}

int main() {
    // Memanggil contructor dengan parameter
    mahasiswa mhs(23456, "Krisna");
    return 0;
}
1010