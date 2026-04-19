#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah buku: ";
    cin >> n;

    string judul[100];
    int rak[100];

    cin.ignore();

    for(int i = 0; i < n; i++) {
        cout << "Judul buku ke-" << i+1 << ": ";
        getline(cin, judul[i]);

        cout << "Nomor rak: ";
        cin >> rak[i];
        cin.ignore();
    }

    string cari;
    cout << "\nMasukkan judul buku yang dicari: ";
    getline(cin, cari);

    int left = 0, right = n - 1;
    bool found = false;

    while(left <= right) {
        int mid = (left + right) / 2;

        if(judul[mid] == cari) {
            cout << "Buku ditemukan di rak: " << rak[mid] << endl;
            found = true;
            break;
        }
        else if(cari < judul[mid]) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    if(!found) {
        cout << "Buku tidak ditemukan" << endl;
    }

    return 0;
}
