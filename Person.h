#ifndef PERSON_H
#define PERSON_H
#include<string>
#include<fstream>
using namespace std;
class Person
{

protected:
    string name, phone;
    int age;


public:
    Person();
    Person(char* person,string, int);
    Person(char* person,string, int, string);
    void setName(char* person,string );
    void setAge(int);
    void setPhone(string);
    string getName();
    int getAge();
    string getPhone();



};

#endif // PERSON_H
