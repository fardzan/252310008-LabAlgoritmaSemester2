#include <iostream>
using namespace std;

class Mahasiswa {
private:
    string nama;
    string nim;
    string jurusan;

public:
    void setNama(string n) {
        nama = n;
    }

    void setNIM(string n) {
        nim = n;
    }

    void setJurusan(string j) {
        jurusan = j;
    }

    string getNama() {
        return nama;
    }

    string getNIM() {
        return nim;
    }

    string getJurusan() {
        return jurusan;
    }
};

int main() {
    Mahasiswa mhs;

    string nama, nim, jurusan;

    cout << "Masukkan Nama: ";
    getline(cin, nama);

    cout << "Masukkan NIM: ";
    getline(cin, nim);

    cout << "Masukkan Jurusan: ";
    getline(cin, jurusan);

    mhs.setNama(nama);
    mhs.setNIM(nim);
    mhs.setJurusan(jurusan);

    cout << "\n=== Data Mahasiswa ===" << endl;
    cout << "Nama     : " << mhs.getNama() << endl;
    cout << "NIM      : " << mhs.getNIM() << endl;
    cout << "Jurusan  : " << mhs.getJurusan() << endl;

    return 0;
}
