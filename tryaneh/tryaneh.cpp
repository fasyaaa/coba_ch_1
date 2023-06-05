#include <iostream>
#include <vector>
using namespace std;

class Penerbit {
protected:
    string namaPenerbit;
public:
    Penerbit(string nama) : namaPenerbit(nama) {}

    string getNamaPenerbit() {
        return namaPenerbit;
    }
};

class Pengarang {
protected:
    string namaPengarang;
    vector<Penerbit*> penerbitDiikuti;
public:
    Pengarang(string nama) : namaPengarang(nama) {}

    void tambahPenerbit(Penerbit* penerbit) {
        penerbitDiikuti.push_back(penerbit);
    }

    void displayPenerbitDiikuti() {
        cout << "Daftar penerbit yang diikuti \"" << namaPengarang << "\": ";
        for (Penerbit* penerbit : penerbitDiikuti) {
            cout << penerbit->getNamaPenerbit() << " ";
        }
        cout << endl;
    }

    string getNamaPengarang() {
        return namaPengarang;
    }
};

class Buku {
protected:
    string judulBuku;
    Pengarang* pengarang;
public:
    Buku(string judul, Pengarang* pengarang) : judulBuku(judul), pengarang(pengarang) {}

    void displayInfoBuku() {
        cout << "Daftar buku yang dikarang \"" << pengarang->getNamaPengarang() << "\": " << judulBuku << endl;
    }
};

int main() {
    Penerbit penerbit1("Gama Press");
    Penerbit penerbit2("Intan Pariwara");

    Pengarang pengarang1("Joko");
    Pengarang pengarang2("Lia");
    Pengarang pengarang3("Giga");
    Pengarang pengarang4("Asroni");

    pengarang1.tambahPenerbit(&penerbit1);
    pengarang1.tambahPenerbit(&penerbit2);
    pengarang2.tambahPenerbit(&penerbit1);
    pengarang3.tambahPenerbit(&penerbit2);
    pengarang4.tambahPenerbit(&penerbit2);

    Buku buku1("Fisika", &pengarang1);
    Buku buku2("Algoritma", &pengarang1);
    Buku buku3("Basisdata", &pengarang2);
    Buku buku4("Dasar Pemrograman", &pengarang4);
    Buku buku5("Matematika", &pengarang3);
    Buku buku6("Multimedia 1", &pengarang3);

    cout << "Daftar pengarang pada penerbit \"" << penerbit1.getNamaPenerbit() << "\": " << pengarang1.getNamaPengarang() << endl;
    cout << pengarang2.getNamaPengarang() << endl;
    cout << pengarang3.getNamaPengarang() << endl;

    cout << "Daftar pengarang pada penerbit \"" << penerbit2.getNamaPenerbit() << "\": " << pengarang4.getNamaPengarang() << endl;
    cout << pengarang3.getNamaPengarang() << endl;

    pengarang3.displayPenerbitDiikuti();

    buku1.displayInfoBuku();
    buku2.displayInfoBuku();
    buku3.displayInfoBuku();
    buku4.displayInfoBuku();
    buku5.displayInfoBuku();
    buku6.displayInfoBuku();

    return 0;
}
