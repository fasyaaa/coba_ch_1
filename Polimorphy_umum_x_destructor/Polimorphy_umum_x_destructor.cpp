#include <iostream>
using namespace std;

class Kendaraan {
public:
    virtual void berkendara() = 0;
    virtual ~Kendaraan() {
        cout << "Kendaraan di hancurkan" << endl;
    }
};

class Mobil : public Kendaraan {
public:
    void berkendara() {
        cout << "Mobil sedang berkendara" << endl;
    }
    ~Mobil() {
        cout << "Mobil dihancurkan" << endl;
    }
};

class Motor : public Kendaraan {
public:
    void berkendara() {
        cout << "Motor sedang berkendara" << endl;
    }
    ~Motor() {
        cout << "Motor dihancurkan" << endl;
    }
};

int main() {
    Kendaraan* kendaraan1 = new Mobil();
    Kendaraan* kendaraan2 = new Motor();

    kendaraan1->berkendara(); // Output: "Mobil sedang berkendara"
    kendaraan2->berkendara(); // Output: "Motor sedang berkendara"

    delete kendaraan1; // Panggilan destructor kelas Mobil dan Kendaraan
    delete kendaraan2; // Panggilan destructor kelas Motor dan Kendaraan

    return 0;
}
