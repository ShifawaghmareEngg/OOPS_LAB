#include <iostream>
using namespace std;

class shape
{
protected:
    double length;
    double breadth;
    float pie = 3.14;
    double radius;
    double base;
    double height;
public:
    virtual void getArea() = 0;
};

class Rectangle : public shape
{
public:
    void getArea()
    {
        cout << "Enter length" << endl;
        cin >> length;
        cout << "Enter Breadth" << endl;
        cin >> breadth;
        cout << length * breadth << endl;
    }
};

class Circle : public shape
{
public:
    void getArea()
    {
        cout << "Enter radius" << endl;
        cin >> radius;
        cout << 2 * pie * radius * radius << endl;
    }
};

class Triangle : public shape
{
public:
    void getArea()
    {
        cout << "Enter Base" << endl;
        cin >> base;
        cout << "Enter Height" << endl;
        cin >> height;
        cout << 0.5 * base * height;
    }
};

int main()
{
    Rectangle r1;
    r1.getArea();
    Circle c1;
    c1.getArea();
    Triangle t1;
    t1.getArea();
}