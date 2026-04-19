#include <iostream>
using namespace std;

int main() {
    int data[100], n, key;
    bool found = false;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Data ke-" << i+1 << ": ";
        cin >> data[i];
    }

    cout << "Masukkan data yang dicari: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(data[i] == key) {
            cout << "Data ditemukan di index ke-" << i << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}
