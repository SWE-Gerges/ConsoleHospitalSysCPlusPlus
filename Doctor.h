#ifndef DOCTOR_H
#define DOCTOR_H
#include<Person.h>

class Doctor:public Person
{
 protected:
     string department;
     int numPatients;
     string edithistory;
 public:
    Doctor();
    Doctor(char* doctors,string department , int numPatients , string name , int age);
    void nameToFile(char*);
    void roomRequest(string);
    void editHistory(string);

};

#endif // DOCTOR_H
