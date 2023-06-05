#include <iostream>
using namespace std;

class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual ~Shape() {
        cout << "Destructor kelas Shape dipanggil" << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const {
        return length * width;
    }

    ~Rectangle() {
        cout << "Destructor kelas Rectangle dipanggil" << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const {
        return 3.14 * radius * radius;
    }

    ~Circle() {
        cout << "Destructor kelas Circle dipanggil" << endl;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculateArea() const {
        return 0.5 * base * height;
    }

    ~Triangle() {
        cout << "Destructor kelas Triangle dipanggil" << endl;
    }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Rectangle(4.0, 5.0);
    shapes[1] = new Circle(3.0);
    shapes[2] = new Triangle(6.0, 8.0);

    for (int i = 0; i < 3; i++) {
        cout << "Luas shape ke-" << (i + 1) << ": " << shapes[i]->calculateArea() << endl;
    }

    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}
