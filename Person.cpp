#include "Person.h"

Person::Person()
{
    name = "empty";
    age = 0;
    phone = "empty";
}

Person::Person(char* person,string name, int age)
{
    this->name = name;
    this->age = age;


}
Person::Person(char* person,string name, int age, string phone)
{
    this->name = name;
    this->age = age;
    this->phone = phone;
       ofstream write;
    write.open(person, ios::app);
    write<< name;
    write<<"\n";
    write.close();
}

void Person::setName(char* person,string name)
{
    this->name = name;
     ofstream write;
    write.open(person, ios::app);
    write<< name;
    write<<"\n";
    write.close();
}
void Person::setAge(int age)
{
    this->age = age;
}
void Person::setPhone(string phone)
{
    this->phone = phone;
}
string Person::getName()
{
    return name;
}
int Person::getAge()
{
    return age;
}


string Person::getPhone()
{
    return phone;
}


