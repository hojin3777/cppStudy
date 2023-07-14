#include <iostream>
#include <string>

struct Person{
    Person(std::string n){
        name = n;
    }
    std::string name;
};
struct Student:public Person{
    Student(std::string i, int n) : Person(i){
        id = n;
    }
    int id;
};

int main(){
    Student d("이순신", 2013);
    Person& b = d;

    Student& d1 = (Student&) b;
    std::cout << d.name << ", " << b.name << ", " << d1.name << std::endl;
    std::cout << &d << ", " << &b << ", " << &d1 << std::endl;

    Student dd("원균", 2039);
    Person bb = (Person) dd;
    std::cout << bb.name << std::endl;

    std::cout << &dd << ", " << &bb << std::endl;
}