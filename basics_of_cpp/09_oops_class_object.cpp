// Program 9: OOPs - Class and Object
#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int age;
    void display() {
        cout << "Name: " << name << ", Age: " << age << "\n";
    }
};
int main() {
    Student s;
    s.name = "John";
    s.age = 20;
    s.display();
    return 0;
}