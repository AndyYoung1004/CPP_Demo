#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Person* a = new Person();
    a->setAge(1);
    a->setName("summer");
    cout << "name:" << a->getName() << ",age:" << a->getAge() << endl;
    return 0;
}
