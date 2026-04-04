#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah buku: ";
    cin >> n;

    string buku[100];

    cin.ignore(); // biar input aman

    // Input judul buku
    for(int i = 0; i < n; i++) {
        cout << "Judul buku ke-" << i+1 << ": ";
        getline(cin, buku[i]);
    }

    // Tampilkan sebelum sorting
    cout << "\nSebelum sorting:\n";
    for(int i = 0; i < n; i++) {
        cout << buku[i] << endl;
    }

    // Bubble Sort (Ascending)
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(buku[j] > buku[j+1]) {
                string temp = buku[j];
                buku[j] = buku[j+1];
                buku[j+1] = temp;
            }
        }
    }

    // Tampilkan setelah sorting
    cout << "\nSetelah sorting:\n";
    for(int i = 0; i < n; i++) {
        cout << buku[i] << endl;
    }

    return 0;
}
