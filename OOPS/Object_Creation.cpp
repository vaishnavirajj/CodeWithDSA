#include<iostream>
using namespace std;
class Animal {
    //state or properties or data memebers
    private:
    int age;
    int weight;

    public:
    string name;
    char symbol;


    //behaviour or member function
    void eat() {
        cout<<"Eating"<<endl;
    }

    void sleep() {
        cout<<"Sleeping"<<endl;
    }

        void setWeight(int weight) {
        //this represent weight of current object
        this->weight=weight;
    }

    void setAge(int a) {
        age=a;
    }

    int getAge() {
        return age;
    }

    int getWeight() {
        return weight;
    }




};

int main () {
    //Object creation

    //Static
    Animal A1;
    A1.name="Lion";
    //To access private data member will use getter and setters
    A1.setAge(12);
    A1.setWeight(62);
    A1.symbol='L';
    cout<<A1.name<<endl;
    cout<<A1.getAge()<<endl;
    cout<<A1.getWeight()<<endl;
    cout<<A1.symbol<<endl;

    cout<<endl;


    //Dynamic

    Animal* A2=new Animal;
    A2->name="Rabbit";
    A2->setAge(23);
    A2->setWeight(50);
    A2->symbol='R';
    

    cout<<A2->name<<endl;
    cout<<A2->getAge()<<endl;
    cout<<A2->getWeight()<<endl;
    cout<<A2->symbol<<endl;

    A2->eat();
    A2->sleep();
    


    

}