#include "Person.h"

Person::Person()
{
    //ctor
}

Person::~Person()
{
    //dtor
}

void Person::setAge(int age) {
    this->age = age;
}

int Person::getAge() {
    return age;
}

void Person::setName(string name) {
    this->name = name;
}

string Person::getName() {
    return name;
}

