#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;
    int age;

public:
    Animal(string n, int a) : name(n), age(a) {
        cout << "Animal constructor called for " << name << endl;
    }

    virtual void speak() {
        cout << "Animal speaks" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    virtual ~Animal() {
        cout << "Animal destructor called for " << name << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string n, int a) : Animal(n, a) {
        cout << "Dog constructor called for " << name << endl;
    }

    void speak() override {
        cout << "Dog barks" << endl;
    }

    ~Dog() {
        cout << "Dog destructor called for " << name << endl;
    }
};

class Cat : public Animal {
public:
    Cat(string n, int a) : Animal(n, a) {
        cout << "Cat constructor called for " << name << endl;
    }

    void speak() override {
        cout << "Cat meows" << endl;
    }

    ~Cat() {
        cout << "Cat destructor called for " << name << endl;
    }
};

int main() {
    Animal* animals[2];
    animals[0] = new Dog("Bruno", 3);
    animals[1] = new Cat("Whiskers", 2);

    cout << "\n--- Calling speak() and display() ---\n" << endl;

    for (int i = 0; i < 2; i++) {
        animals[i]->display();
        animals[i]->speak();
        cout << endl;
    }

    for (int i = 0; i < 2; i++) {
        delete animals[i];
    }

    return 0;
}