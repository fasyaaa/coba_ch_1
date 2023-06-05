#include <iostream>
using namespace std;

// Class dasar (superclass)
class Bentuk {
protected:
    double panjang;
    double lebar;

public:
    Bentuk(double p, double l) : panjang(p), lebar(l) {}

    virtual double HitungLuas() const = 0;
};

// Class turunan (subclass)
class PersegiPanjang : public Bentuk {
public:
    PersegiPanjang(double p, double l) : Bentuk(p, l) {}

    double HitungLuas() const override {
        return panjang * lebar;
    }
};

// Class turunan lainnya
class Segitiga : public Bentuk {
public:
    Segitiga(double p, double l) : Bentuk(p, l) {}

    double HitungLuas() const override {
        return 0.5 * panjang * lebar;
    }
};


int main() {
    double panjang, lebar;

    cout << "Masukkan panjang: ";
    cin >> panjang;

    cout << "Masukkan lebar: ";
    cin >> lebar;

    PersegiPanjang pp(panjang, lebar);
    Segitiga st(panjang, lebar);

    cout << "Luas Persegi Panjang: " << pp.HitungLuas() << endl;
    cout << "Luas Segitiga: " << st.HitungLuas() << endl;

    return 0;
}
