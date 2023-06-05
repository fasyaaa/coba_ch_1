#include <iostream>
using namespace std;

class Animal {
public:
    virtual void eat() = 0;
    virtual ~Animal() {
        cout << "Destructor kelas Animal dipanggil" << endl;
    }
};

class Mammal : public Animal {
public:
    virtual void giveBirth() = 0;
    virtual ~Mammal() {
        cout << "Destructor kelas Mammal dipanggil" << endl;
    }
};

class Carnivore : public Mammal {
public:
    void eat() {
        cout << "Memakan daging" << endl;
    }
    void giveBirth() {
        cout << "Melahirkan bayi" << endl;
    }
    ~Carnivore() {
        cout << "Destructor kelas Carnivore dipanggil" << endl;
    }
};

class Herbivore : public Mammal {
public:
    void eat() {
        cout << "Memakan tumbuhan" << endl;
    }
    void giveBirth() {
        cout << "Melahirkan bayi" << endl;
    }
    ~Herbivore() {
        cout << "Destructor kelas Herbivore dipanggil" << endl;
    }
};

class Reptile : public Animal {
public:
    virtual void layEggs() = 0;
    virtual ~Reptile() {
        cout << "Destructor kelas Reptile dipanggil" << endl;
    }
};

class Snake : public Reptile {
public:
    void eat() {
        cout << "Memakan hewan kecil" << endl;
    }
    void layEggs() {
        cout << "Mengepakkan telur" << endl;
    }
    ~Snake() {
        cout << "Destructor kelas Snake dipanggil" << endl;
    }
};

class Turtle : public Reptile {
public:
    void eat() {
        cout << "Memakan tumbuhan dan serangga" << endl;
    }
    void layEggs() {
        cout << "Mengepakkan telur" << endl;
    }
    ~Turtle() {
        cout << "Destructor kelas Turtle dipanggil" << endl;
    }
};

int main() {
    Animal* animals[5];
    animals[0] = new Carnivore();
    animals[1] = new Herbivore();
    animals[2] = new Snake();
    animals[3] = new Turtle();
    animals[4] = new Carnivore();

    for (int i = 0; i < 5; i++) {
        animals[i]->eat();
    }

    for (int i = 0; i < 5; i++) {
        delete animals[i];
    }

    return 0;
}
