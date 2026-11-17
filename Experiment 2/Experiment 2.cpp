#include <iostream>
using namespace std;
class Vehicle {
private:
    int speed;
public:
    void setSpeed(int s) {
        speed = s;
    }
    int getSpeed() {
        return speed;
    }
};
class Car : public Vehicle {
private:
    string brand;
public:
    void setBrand(string b) {
        brand = b;
    }
    void display() {
        cout << "Brand: " << brand << "\n";
        cout << "Speed: " << getSpeed() << " km/h\n";
    }
};
int main() {
    Car c;
    c.setBrand("Tesla");
    c.setSpeed(120);
    c.display();
    return 0;
}