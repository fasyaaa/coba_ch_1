#include <iostream>
using namespace std;

class Bentuk {
public:
    ~Bentuk() {
        cout << "Bentuk bangun datar dihancurkan" << endl;
    }
};

class Persegi : public Bentuk {
public:
    ~Persegi() {
        cout << "Destructor kelas Persegi dipanggil" << endl;
    }
};

class Lingkaran : public Bentuk {
public:
    ~Lingkaran() {
        cout << "Destructor kelas Lingkaran dipanggil" << endl;
    }
};

int main() {
    Bentuk* bentuk1 = new Persegi();
    Bentuk* bentuk2 = new Lingkaran();

    delete bentuk1; // Panggilan destructor kelas Persegi dan Bentuk
    delete bentuk2; // Panggilan destructor kelas Lingkaran dan Bentuk

    return 0;
}
