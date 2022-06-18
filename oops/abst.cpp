#include<iostream>
using namespace std;

class Human {
protected:
    int age;
    int weight;
    string name;
public:
    int getAge() {
        return this->age;
    }
};

class Female : private Human {

};

class Animal {
public:
    int age;
public:
    void speak() {
        cout << "Animal is speaking" << endl;
    }
};

class Dog : public Animal {

};

class Labra : public Dog {

};


class Maruti {
public:
    string name;
};

class Suzuki {
public:
    int value;
};

class Swift : public Maruti, public Suzuki {};

int main() {
    // Female fe;
    // cout << fe.age << endl;
    // Animal an;
    // cout << an.age << endl;
    // Dog dg;
    // cout << dg.age << endl;

    Swift* ra = new Swift();
    cout << ra->name;
    cout << ra->value;


    return 0;
}