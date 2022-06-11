#include<iostream>
using namespace std;

class Human {

public:
    // properties -> data member
    char gender;
    int age;

    // constructor
    Human() {
        cout << "Inside constructor" << endl;
        age = 2;
        gender = 'f';
    }
    // parametrize constructor
    Human(int age, char gender) {
        cout << "Inside parametrized" << endl;
        this->age = age;
        this->gender = gender;
    }
    ~Human() {
        cout << "Distructor Called" << endl;
    }
    // copy constructor
    // Human(Human& temp) {
    //     cout << "Indide copy" << endl;
    // }
    // behavior
    char getGender() {
        return gender;
    }
    void setGender(char ch) {
        gender = ch;
    }
    void setAge(int ag) {
        age = ag;
    }
    int getAge() {
        return age;
    }
};

int main() {
    // static way
    cout << "All Good" << endl;
    Human obj;
    cout << "Size " << sizeof(obj) << endl;
    // obj.gender = 'A';
    // cout << "Gender " << obj.gender << endl;
    obj.setAge(23);
    cout << obj.getAge() << endl;

    // dynamic
    Human* b = new Human();
    b->setAge(20);
    cout << b->getAge() << endl;
    delete b;
    // copy
    // Human jignesh();
    // cout << jignesh->age << endl;
    return 0;
}