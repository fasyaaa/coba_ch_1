#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string name;

public:
    Animal(const string& animalName) : name(animalName) {}

    void setName(const string& animalName) {
        name = animalName;
    }

    string getName() const {
        return name;
    }
};

class Dog : public Animal {
private:
    int age;

public:
    Dog(const string& dogName, int dogAge) : Animal(dogName), age(dogAge) {}

    void setAge(int dogAge) {
        age = dogAge;
    }

    int getAge() const {
        return age;
    }
};

int main() {
    Dog dog("Buddy", 5);
    cout << "Dog's name: " << dog.getName() << endl;
    cout << "Dog's age: " << dog.getAge() << " years" << endl;

    dog.setName("Charlie");
    dog.setAge(3);
    cout << "Dog's new name: " << dog.getName() << endl;
    cout << "Dog's new age: " << dog.getAge() << " years" << endl;

    return 0;
}
