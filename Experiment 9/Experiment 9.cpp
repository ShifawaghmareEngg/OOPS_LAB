#include <iostream>
#include <string>
using namespace std;
template <class T>
class Stack
{
public:
    static const int size = 100;
    T arr[size];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(T x)
    {
        if (top == size - 1)
            cout << "Stack Overflow!" << endl;
        else
            arr[++top] = x;
    }

    void pop()
    {
        if (top == -1)
            cout << "Stack Underflow!" << endl;
        else
        {
            cout << "Popped element: " << arr[top] << endl;
            top--;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty!" << endl;
            return;
        }

        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";

        cout << endl;
    }
};

int main()
{
    cout << "Integer Stack:" << endl;

    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    s1.pop();

    cout << "\nFloat Stack:" << endl;

    Stack<float> s2;
    s2.push(1.5f);
    s2.push(2.5f);
    s2.push(3.5f);
    s2.display();
    s2.pop();

    cout << "\nString Stack:" << endl;

    Stack<string> s3;
    s3.push("Hello");
    s3.push("World");
    s3.push("C++");
    s3.display();
    s3.pop();

    return 0;
}