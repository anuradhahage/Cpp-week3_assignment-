#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of Shape" << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void area() override {
        cout << "Area of Rectangle = "
             << length * width << endl;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle = "
             << 3.14 * radius * radius << endl;
    }
};

int main() {
    Rectangle rectangle(10, 5);
    Circle circle(7);

    rectangle.area();
    circle.area();

    return 0;
}
