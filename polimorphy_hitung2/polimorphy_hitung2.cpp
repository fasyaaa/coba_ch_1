#include <iostream>

using namespace std;

class Shape {
protected:
    int width, height;

public:
    Shape(int w, int h) : width(w), height(h) {}

    void area() {
        cout << "Parent class area: " << width * height << endl;
    }

    ~Shape() {
        cout << "Parent class destructor" << endl;
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
    Shape* shapePtr;
    Rectangle rectangle(4, 5);
    Triangle triangle(4, 5);

    shapePtr = &rectangle;
    shapePtr->area();

    shapePtr = &triangle;
    shapePtr->area();

    return 0;
}
