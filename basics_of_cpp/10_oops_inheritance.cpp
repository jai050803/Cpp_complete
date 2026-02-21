// Program 10: OOPs - Inheritance
#include <iostream>
using namespace std;
class Animal {
public:
    void speak() { cout << "Animal speaks\n"; }
};
class Dog : public Animal {
public:
    void speak() { cout << "Dog barks\n"; }
};
int main() {
    Animal a;
    Dog d;
    a.speak();
    d.speak();
    return 0;
}