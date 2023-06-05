#include <iostream>
using namespace std;

// Class dasar (superclass)
class Kendaraan {
public:
    Kendaraan() {
        cout << "Konstruktor Kendaraan" << endl;
    }

    virtual ~Kendaraan() {
        cout << "Destruktor Kendaraan" << endl;
    }

    void Bergerak() {
        cout << "Kendaraan bergerak." << endl;
    }
};

// Class turunan pertama (subclass)
class Mobil : public Kendaraan {
public:
    Mobil() {
        cout << "Konstruktor Mobil" << endl;
    }

    ~Mobil() {
        cout << "Destruktor Mobil" << endl;
    }

    void BahanBakar() {
        cout << "Mobil menggunakan bahan bakar." << endl;
    }
};

// Class turunan kedua (subclass)
class Motor : public Kendaraan {
public:
    Motor() {
        cout << "Konstruktor Motor" << endl;
    }

    ~Motor() {
        cout << "Destruktor Motor" << endl;
    }

    void BahanBakar() {
        cout << "Motor menggunakan bahan bakar." << endl;
    }
};

// Class turunan ketiga (subclass)
class Sepeda : public Kendaraan {
public:
    Sepeda() {
        cout << "Konstruktor Sepeda" << endl;
    }

    ~Sepeda() {
        cout << "Destruktor Sepeda" << endl;
    }

    void BahanBakar() {
        cout << "Sepeda tidak menggunakan bahan bakar." << endl;
    }
};

int main() {
    Kendaraan* kendaraanPtr = new Mobil();
    kendaraanPtr->Bergerak();
    delete kendaraanPtr;

    cout << "------------------" << endl;

    kendaraanPtr = new Motor();
    kendaraanPtr->Bergerak();
    delete kendaraanPtr;

    cout << "------------------" << endl;

    kendaraanPtr = new Sepeda();
    kendaraanPtr->Bergerak();
    delete kendaraanPtr;

    return 0;
}
