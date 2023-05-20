#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person
{
    public:
        Person();
        virtual ~Person();
        int getAge();
        void setAge(int age);
        string getName();
        void setName(string name);
    protected:

    private:
        int age;
        string name;
};

#endif // PERSON_H
