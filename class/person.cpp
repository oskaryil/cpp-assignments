#include <iostream>

using namespace std;

class Person {
    public:
        char name[];
        char personnr[];
        int age;
};

int main() {
    Person person;
    cout << "Name: ";
    cin >> person.name;
    cout << "Age: ";
    cin >> person.age;
    cout << "Personnr: ";
    cin >> person.personnr;
    cout << "Hello " << person.name << endl;
    cout << "Age: " << person.age << " years old" << endl;
    cout << "Personnummer: " << person.personnr << endl;
    return 0;
}