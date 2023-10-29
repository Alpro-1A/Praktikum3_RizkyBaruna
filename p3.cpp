#include <iostream>

using namespace std;

int main() {

    int bangun_datar;
    float luas, panjang, lebar, tinggi, alas, sisi;

    cout << "Pilih Bangun Datar : " << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Masukkan nomor bangun datar yang ingin anda pilih : ";
    cin >> bangun_datar;

    switch (bangun_datar) {
    case 1:
        cout << "Panjang sisi : ";
        cin >> sisi;
        luas = sisi * sisi;
        cout << "Luas persegi : " << luas << endl;
        break;
    case 2:
        cout << "Panjang : ";
        cin >> panjang;
        cout << "Lebar : ";
        cin >> lebar;
        luas = panjang * lebar;
        cout << "Luas persegi panjang : " << luas << endl;
        break;
    case 3:
        cout << "Alas : ";
        cin >> alas;
        cout << "Tinggi : ";
        cin >> tinggi;
        luas = 0.5 * alas * tinggi;
        cout << "Luas segitiga : " << luas << endl;
        break;
    default:
        cout << "Yang bener aja bang" << endl;

    }
    return 0;
}
