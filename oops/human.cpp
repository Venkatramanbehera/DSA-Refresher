#include<iostream>
using namespace std;

class Human {
private:
    int price;
public:
    // properties -> data member
    int age;
    char gender;
    string name;

    Human() {
        // constructor is used for initialization
        cout << "I am in constructor " << endl;
        age = 23;
        gender = 'F';
    }

    // parametrized constructor
    Human(int ag, char gen, string na) {
        cout << "I am inside parametrized constructor " << endl;
        this->age = ag;
        this->name = na;
        this->gender = gen;
    }

    Human(int ag, char gen) {
        cout << "I am inside 2nd parametrized constructor " << endl;
        this->age = ag;
        this->gender = gen;
    }
    // copy constructor

    Human(Human& obj) {
        cout << " Inside Copy constructor " << endl;
        this->age = obj.age;
        this->gender = obj.gender;
    }

    // creating access for private member
    // using getter and setters
    // setter
    void setPrice(int money) {
        price = money;
    }

    // getter
    int getPrice() {
        return price;
    }

    ~Human() {
        cout << "Inside Destroctor" << endl;
    }
};

int main() {
    cout << " Static Allocation" << endl;
    // static allocation
    // if we are using static allocation then we use dot operator to 
    // access and set variable
    Human obj;
    obj.age = 20;
    obj.gender = 'M';
    obj.name = "Venkat";
    cout << "name " << obj.name << endl;
    cout << "age " << obj.age << endl;
    cout << "gender " << obj.gender << endl;

    // set private member using setter
    obj.setPrice(999);
    // get the private member
    cout << "price " << obj.getPrice() << endl;
    cout << " Dynamic Allocation" << endl;
    // dynamic allocation
    // new Human() gives address , so if we want to store address then
    // we need pointer
    Human* b = new Human();
    // b->age = 35;
    cout << b->age << endl;
    cout << b->gender << endl;

    // parametrized constructor
    cout << "Dynamic Allocation -> parametrized constructor" << endl;
    Human* c = new Human(23, 'F', "Rajesh");
    cout << c->age << endl;
    cout << c->gender << endl;
    cout << c->name << endl;

    cout << "Dynamic Allocation -> 2nd parametrized constructor" << endl;
    Human* d = new Human(23, 'F');
    cout << d->age << endl;
    cout << d->gender << endl;

    // copy constructor
    Human jignesh(obj);
    cout << jignesh.age << endl;

    // destroctor can not work for Dynamic allocation
    // so we need to delete the memory manually
    delete b;
    delete c;
    return 0;
}