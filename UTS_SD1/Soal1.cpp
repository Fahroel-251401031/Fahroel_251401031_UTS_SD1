#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int arr[2][3][4];

    int genap = 2;
    int ganjil = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[0][i][j] = genap;
            genap += 2; // Kelipatan genap berikutnya
        }
    }

    // Lapis 1 (Ganjil mulai dari 1)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[1][i][j] = ganjil;
            ganjil += 2; // Kelipatan ganjil berikutnya
        }
    }

    cout << "=========================================\n";
    cout << " HASIL PENJUMLAHAN LAPIS 0 DAN LAPIS 1\n";
    cout << "=========================================\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            int hasilJumlah = arr[0][i][j] + arr[1][i][j];
        
            cout << setw(5) << hasilJumlah;
        }
        cout << endl; // Pindah baris
    }

    return 0;
}