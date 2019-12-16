#ifndef PATIENT_H
#define PATIENT_H
#include"Person.h"
#include<fstream>
class Patient:public Person
{


public:
string history;
    Patient();

    Patient(char*patient,char* phistory,string history,string name,int age);
    void historyToFile(char *filePatient);
    void editHistory(string);
};

#endif // PATIENT_H
