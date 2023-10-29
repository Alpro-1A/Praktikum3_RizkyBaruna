#include <iostream>

using namespace std;

int main() {

    int nilai;

    cout << "Masukkan Nilai Anda : ";
    cin >> nilai;

    if (nilai <= 100 && nilai >= 90) { //predikat untuk nilai 90-100
        cout << "Selamat! Anda mendapatkan nilai A." << endl;
    } else if (nilai <=89 && nilai >= 80) { //predikat untuk nilai 80-89
            cout << "Anda mendapat nilai B." << endl;
    } else if (nilai <= 79 && nilai >= 70) { //predikat untuk nilai 70-79
            cout << "Anda medapat nilai C." << endl;
    } else if (nilai <= 69 && nilai >=60) {  //predikat untuk nilai 60-69
            cout << "Anda mendapat nilai D." << endl;
    } else if (nilai <60 && nilai >=0) { //predikat untuk nilai di bawah 60
            cout << "Anda mendapat nilai E." << endl;
    }

    return 0;
}
