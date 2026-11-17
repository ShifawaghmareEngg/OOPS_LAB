#include <iostream>
using namespace std;
int main() {
    const float PI = 3.14;
    int Age;
    float circleRadius;
    string name;
    bool isStudent = true;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> Age;
    cout << "Enter a radius of a circle: ";
    cin >> circleRadius;
    float circleArea = PI * circleRadius * circleRadius;
    int ageNextYear = Age + 1;

    cout << "\n -- Results -- \n";
    cout << "Name: " << name << "\n";
    cout << "Age Next year: " << ageNextYear << "\n";
    cout << "Area of Circle: " << circleArea << "\n";

    if (isStudent) {
        cout << "Status: Active Student \n";
    }
    return 0;
}