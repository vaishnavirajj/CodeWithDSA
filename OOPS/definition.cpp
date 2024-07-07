#include<iostream>
using namespace std;
class Student{
    private:
    int id;
    public:
    string name;
    int salary;

    int getId() {
        return id;
    }


    void setId(int i) {
        id=i;

    }

};
int main () {
    //static allocation
        Student s1;
        s1.setId(12);
        s1.salary=1500000;
        cout<<s1.getId()<<endl;
        cout<<s1.salary<<endl;

    //dynamic allocation
     Student *s2=new Student;

    (*s2).setId(134);
    (*s2).salary=1200;
    cout<<(*s2).getId()<<endl;
    cout<<(*s2).salary;

    //OR

    s2->setId(134);
    s2->salary=1200;
    cout<<s2->getId()<<endl;
    cout<<s2->salary;
}
