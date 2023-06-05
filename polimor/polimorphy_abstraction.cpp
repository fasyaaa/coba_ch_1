#include <iostream>

using namespace std;

class Shape {
protected:
    int width, height;

public:
    Shape(int w, int h) : width(w), height(h) {}

    virtual void area() = 0; // Metode murni virtual

    virtual ~Shape() {
        cout << "Shape class destructor" << endl;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h) {}

    void area() {
        cout << "Rectangle class area: " << width * height << endl;
    }

    ~Rectangle() {
        cout << "Rectangle class destructor" << endl;
    }
};

class Triangle : public Shape {
public:
    Triangle(int w, int h) : Shape(w, h) {}

    void area() {
        cout << "Triangle class area: " << 0.5 * width * height << endl;
    }

    ~Triangle() {
        cout << "Triangle class destructor" << endl;
    }
};

int main() {
    int width, height;
    cout << "Masukkan lebar dan tinggi persegi panjang: ";
    cin >> width >> height;

    Shape* shapePtr;
    Rectangle rectangle(width, height);
    Triangle triangle(width, height);

    shapePtr = &rectangle;
    shapePtr->area();

    shapePtr = &triangle;
    shapePtr->area();

    return 0;
}
