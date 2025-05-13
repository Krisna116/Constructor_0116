#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
    int nim;
    string nama;
    public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);
    void cetak();
};

mahasiswa :: mahasiswa() {

}

mahasiswa :: mahasiswa(int iNim){
    nim = iNim; // definisi hanya nim
}

mahasiswa :: mahasiswa(string iNama){
    nama = iNama; // Definisi hanya nama
}
mahasiswa :: mahasiswa(int iNim, string iNama){
    nim = iNim; //Definisi nim dan nama

}


void mahasiswa::cetak(){
    cout << "Nimm : " << nim << endl;
    cout << "Nama : " << nama << endl;
};

int main() {
    mahasiswa mhs1(102030);          //hanya nim
    mahasiswa mhs2("Krisna") ;        // Hanya nama
    mahasiswa mhs3("010203, Santi"); // Nim dan nama

}
