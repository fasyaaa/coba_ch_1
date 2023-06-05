#include <iostream>
using namespace std;

class Hewan {
public:
    void suara() {
        cout << "Hewan mengeluarkan suara" << endl;
    }
};

class Anjing : public Hewan {
public:
    void suara() {
        cout << "Guk-guk!" << endl;
    }
};

class Kucing : public Hewan {
public:
    void suara() {
        cout << "Meong-meong!" << endl;
    }
};

int main() {
    Hewan* hewan1 = new Anjing();
    Hewan* hewan2 = new Kucing();

    hewan1->suara();  // Output: "Guk-guk!"
    hewan2->suara();  // Output: "Meong-meong!"

    delete hewan1;
    delete hewan2;

    return 0;
}
