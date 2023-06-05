#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;

public:
    Animal(const string& animalName) : name(animalName) {}

    virtual void makeSound() = 0; // Metode murni virtual

    void setName(const string& animalName) {
        name = animalName;
    }

    string getName() const {
        return name;
    }
};

class Dog : public Animal {
public:
    Dog(const string& dogName) : Animal(dogName) {}

    void makeSound() {
        cout << "Dog " << name << " barks!" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(const string& catName) : Animal(catName) {}

    void makeSound() {
        cout << "Cat " << name << " meows!" << endl;
    }
};

int main() {
    Dog dog("Buddy");
    Cat cat("Whiskers");

    Animal* animalPtr;

    animalPtr = &dog;
    animalPtr->makeSound();
    cout << "Animal's name: " << animalPtr->getName() << endl;

    animalPtr = &cat;
    animalPtr->makeSound();
    cout << "Animal's name: " << animalPtr->getName() << endl;

    return 0;
}
