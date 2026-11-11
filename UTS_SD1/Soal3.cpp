#include <iostream>
#include <string>
#define MAX 100

using namespace std;

// Struktur Data Stack berbasis Array
class Stack {
private:
    int top;
    char arr[MAX];

public:
    Stack() {
        top = -1;
    }
    void push(char c) {
        if (top == MAX - 1) {
            cout << "Stack Penuh!" << endl;
        } else {
            arr[++top] = c;
        }
    }

    // Mengeluarkan dan mengembalikan karakter paling atas (Pop)
    char pop() {
        if (top == -1) {
            cout << "Stack Kosong!" << endl;
            return '\0';
        } else {
            return arr[top--];
        }
    }

    // Memeriksa apakah stack kosong
    bool isEmpty() {
        return (top == -1);
    }
};

int main() {
    Stack s;
    string kataAsli, kataTerbalik = "";

    cout << " PROGRAM CEK KATA PALINDROM  \n";
    cout << "Masukkan sebuah kata : ";
    cin >> kataAsli;

    for (int i = 0; i < kataAsli.length(); i++) {
        s.push(kataAsli[i]);
    }

    while (!s.isEmpty()) {
        kataTerbalik += s.pop();
    }

    cout << "\nKata Asli     : " << kataAsli << endl;
    cout << "Kata Terbalik : " << kataTerbalik << endl;

    if (kataAsli == kataTerbalik) {
        cout << "Hasil: Palindrom" << endl;
    } else {
        cout << "Hasil: Bukan Palindrom" << endl;
    }

    return 0;
}