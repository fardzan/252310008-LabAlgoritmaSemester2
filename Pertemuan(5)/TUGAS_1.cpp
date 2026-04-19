#include <iostream>
using namespace std;

class Mahasiswa {
private:
    string nama;
    string nim;

public:

    Mahasiswa(string n, string ni) {
        cout << "Constructor dipanggil" << endl;
        nama = n;
        nim = ni;
    }

    void tampil() {
        cout << "Nama : " << nama << endl;
        cout << "NIM  : " << nim << endl;
    }

    ~Mahasiswa() {
        cout << "Destructor dipanggil, objek dihapus" << endl;
    }
};

int main() {

    Mahasiswa mhs1("Zann", "12345");

    mhs1.tampil();

    return 0;
}
