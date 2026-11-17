#include <iostream>
using namespace std;
class Student{
    private:
        string name;
        int* marks;
    public:
        Student(){
            name = "unknown";
            marks = new int(0);
            cout << "Default constructor called" << endl;
        }
        Student (string n, int m){
            name = n;
            marks = new int(m);
            cout << "Parameterized constructor called" << endl;
        }
        Student (const Student & other){
            name = other.name;
            marks = new int(* other.marks);
            cout << "Copy constructor called" << endl;
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Marks: " << *marks << endl;
        }
};
int main(){
    cout << "Default constructor" << endl;
    Student S1;
    S1.display();

    cout << "Parametrized constructor" << endl;
    Student S2 ("ABC", 90);
    S2.display();

    cout << "Copy constructor" << endl;
    Student S3 = S2;
    S3.display();
    return 0;
}