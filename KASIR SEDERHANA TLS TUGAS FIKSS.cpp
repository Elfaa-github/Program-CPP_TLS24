#include <iostream> // Library ntuk input dan output standar (cin dan cout)
#include <string>    // Library untuk menggunakan tipe data string
#include <iomanip>  // Library ntuk memformat output (mengatur presisi angka)
using namespace std;

int main() {

    char pembeli[30];  // Nama pembeli
    int harga, jumlah, total, jumbayar, kembalian;
    string input, kode;
    
    awal:
    cout << "\nTOKO ATK JAYA" << endl;
    cout << "================================" << endl;
    cout << "Nama Pembeli   : ";
    cin >> pembeli;

    cout << "Pilihan Barang yang Tersedia" << endl;
    cout << "001 - Bolpen tiga warna - RP.4000" << endl;
    cout << "002 - Penggaris butterfly - RP.1500" << endl;
    cout << "003 - Penghapus baver castle - RP.4000" << endl;

    cout << endl;
    cout << "Barang yang dipilih   : ";
    cin >> kode;
    cout << "Jumlah Beli    : ";
    cin >> jumlah;

    // Menentukan harga barang berdasarkan kode
    if (kode == "001") {
        cout << "Bolpen tiga warna" << endl;
        harga = 4000;
    } else if (kode == "002") {
        cout << "Penggaris butterfly" << endl;
        harga = 1500;
    } else if (kode == "003") {
        cout << "Penghapus baver castle" << endl;
        harga = 4000;
    } else {
        cout << "Barang yang dipilih tidak tersedia" << endl;
        return 0;  // Keluar jika barang tidak tersedia
    }
    
    // Menghitung total 
    total = harga * jumlah;

    // Menampilkan struk pembayaran
    cout << endl;
    cout << "================================" << endl;
    cout << "Struk Pembayaran" << endl;
    cout << "================================" << endl;
    cout << "Nama pembeli   : " << pembeli << endl;
    cout << "Harga          : " << harga << endl;
    cout << "Jumlah         : " << jumlah << endl;
    cout << "Total Bayar    : " << total << endl;

    // Input pembayaran dan hitung kembalian
    cout << "Jumlah Bayar   : ";
    cin >> jumbayar;

    if (jumbayar >= total) {
        kembalian = jumbayar - total;
        cout << "Kembalian      : " << kembalian << endl;
        cout << "============================" << endl;
    } else { 
        cout << "Pembayaran kurang!" << endl;
    }
        
    // Input untuk melakukan transaksi lagi atau tidak
    cout << "Mau input lagi [Y/N] : ";
    cin >> input;
        
    if (input == "y" || input == "Y") {
        goto awal;
    } else {
        return 0;
    }
}
