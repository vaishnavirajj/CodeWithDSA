#include<iostream>
using namespace std;
class Animal {
    public:
    //data members
    int age;
    int weight;
    string name;
    char ch;

    // default constructor
    Animal() {
        this->age=12;
        this->weight=23;
        this->name="ramesh";
        cout<<"Constructor called"<<endl;
    }
    
    //parameterised constructor
    Animal(int age) {
        this->age=age;
        cout<<"parameterised constructor called"<<endl;
    }
    
    //parameterised constructor
    Animal(int age,int weight) {
        this->age=age;
        this->weight=weight;
        cout<<"parameterised constructor 2 called"<<endl;

    }

    //parameterised constructor
    Animal(int age,int weight,string name) {
        this->age=age;
        this->weight=weight;
        this->name=name;
        cout<<"parameterised constructor 3 called"<<endl;

    }

    //Copy constructor
    Animal(Animal &obj) {
        this->age=obj.age;
        this->weight=obj.weight;
        this->name=obj.name;
        cout<<"I am inside copy constructor"<<endl;


    }

    //Destructor
    //for static---> Automatically called
    //for dynamic---> Manually 
    ~Animal() {
        cout<<"I am inside destructor"<<endl;
    }



};

int main() {
    Animal a(21);
    Animal *b=new Animal(100,20);
    delete b;  //manually because dynamic memory allocation
    Animal *c=new Animal;
    delete c;
    Animal *x=new Animal(11,34,"rabbit");
    delete x;

    //copying object -->Two ways
    //1 way
    Animal y=a;
    //2 way
    Animal z(a);

  

    

}