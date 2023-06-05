#include <iostream>
using namespace std;

class Bentuk {
public:
    virtual double hitungLuas() = 0;
};

class Persegi : public Bentuk {
private:
    double sisi;

public:
    Persegi(double s) : sisi(s) {}

    double hitungLuas() {
        return sisi * sisi;
    }
};

class Lingkaran : public Bentuk {
private:
    double radius;

public:
    Lingkaran(double r) : radius(r) {}

    double hitungLuas() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Bentuk* bentuk1 = new Persegi(5.0);        //Bisa di ganti angkanya terserah
    Bentuk* bentuk2 = new Lingkaran(3.0);      //Bisa di ganti angkanya bebas

    cout << "Luas persegi: " << bentuk1->hitungLuas() << endl;
    cout << "Luas lingkaran: " << bentuk2->hitungLuas() << endl;

    delete bentuk1;
    delete bentuk2;

    return 0;
}
