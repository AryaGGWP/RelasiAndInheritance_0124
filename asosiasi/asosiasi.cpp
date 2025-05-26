#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Forward Declaration
class dokter; // <--- OK, diperlukan karena pasien menggunakan dokter*
class pasien { // asosiasi
public:
    string nama; // <--- ERROR: 'string' not found jika <string> tidak di-include
    vector<dokter*> daftar_dokter; // <--- ERROR: 'vector' not found jika <vector> tidak di-include, tapi ini sudah di-include

    pasien(string pNama) :nama(pNama) {
        cout << "Pasien \"" << nama << "\" ada\n";
    }
    ~pasien() {
        cout << "Pasien \"" << nama << "\" tidak ada\n";
    }

    void tambahDokter(dokter*);
    void cetakDokter();
};

class dokter {
public:
    string nama; // <--- ERROR: 'string' not found jika <string> tidak di-include
    vector<pasien*> daftar_pasien; // <--- OK, pasien sudah didefinisikan di atas

    dokter(string pNama) :nama(pNama) {
        cout << "Dokter \"" << nama << "\" ada\n";
    }
    ~dokter() {
        cout << "Dokter \"" << nama << "\" tidak ada\n";
    }

    void tambahPasien(pasien*);
    void cetakPasien();
};