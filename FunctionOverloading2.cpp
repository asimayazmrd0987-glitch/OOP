/*
 * INTERMEDIATE: Advanced Function Overloading
 * 
 * What you'll learn:
 * - Different parameter counts
 * - Default arguments interaction
 * - Reference vs value parameters
 * - const overloading
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Calculator {
public:
  
    int multiply(int a, int b) {
        cout << "multiply(int, int): ";
        return a * b;
    }
    
    int multiply(int a, int b, int c) {
        cout << "multiply(int, int, int): ";
        return a * b * c;
    }
    
    double multiply(double a, double b) {
        cout << "multiply(double, double): ";
        return a * b;
    }
    
    void process(int x) {
        cout << "process by value: " << x << endl;
        x = 999;  
    }
    
    void process(int& x) {
        cout << "process by reference: " << x << endl;
        x = 888;  
    }
    
    void process(const int& x) {
        cout << "process by const reference: " << x << endl;
    }
};

void display(int a) {
    cout << "One arg: " << a << endl;
}

void display(int a, int b) {
    cout << "Two args: " << a << ", " << b << endl;
}

void display(string msg, int times = 1) {
    for (int i = 0; i < times; i++) {
        cout << msg << " ";
    }
    cout << endl;
}

class Array {
    int data[10];
public:
    int& get(int index) {
        cout << "Non-const get: ";
        return data[index];  
    }
  
    int get(int index) const {
        cout << "Const get: ";
        return data[index];  
    }
};

int main() {
    Calculator calc;
    
    cout << "=== Overload by Count ===" << endl;
    cout << calc.multiply(2, 3) << endl;
    cout << calc.multiply(2, 3, 4) << endl;
    
    cout << "\n=== Overload by Type ===" << endl;
    cout << calc.multiply(2.5, 3.5) << endl;
    
    cout << "\n=== Value vs Reference ===" << endl;
    int num = 100;
    calc.process(num);        
    cout << "After process: " << num << endl;
    
    const int constNum = 200;
    calc.process(constNum);     
    
    calc.process(300);          
    
    cout << "\n=== Default Arguments ===" << endl;
    display(42);
    display(10, 20);
    display("Hello");
    display("Hi", 3);
    
    cout << "\n=== Const Overloading ===" << endl;
    Array arr;
    const Array constArr;
    
    arr.get(0) = 5;              
    int x = constArr.get(0);    
    
    return 0;
}