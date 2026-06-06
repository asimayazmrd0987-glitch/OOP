#include <iostream>
using namespace std;

class B;   // this actually called -> forward declaration

class A {
    int x;
public:
    A(int val) { x = val; }
    friend int sum(A, B);   // this is --> friend declaration
};
// also that the friend function is mere declared inside class A and B but will be defined 
// outside both the classes
class B {
    int y;
public:
    B(int val) { y = val; }
    friend int sum(A, B);
};

int sum(A a, B b) {
    return a.x + b.y;    // ------->>>>> accessing private members
}

int main() {
    A objA(10);
    B objB(20);
    cout << "Sum = " << sum(objA, objB) << endl;
    return 0;
}

