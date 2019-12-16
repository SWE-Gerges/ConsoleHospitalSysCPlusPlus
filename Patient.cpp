#include "Patient.h"

Patient::Patient()
{
    Person();
    history = "Not Entered";
}


Patient::Patient(char*patient,char*phistory ,string history,string name,int age)
{
    this->name = name;
    this->age = age;
    this->history = history;
      ofstream write;
    write.open(patient, ios::app);
    write<< name;
    write<<"\n";
    write.close();
    write.open(phistory, ios::app);
    write<<history;
    write<<"\n";
    write.close();

}
void Patient::historyToFile(char *filePatient)
{
    ofstream write;
    write.open(filePatient, ios::app);
    write<< history;
    write<<"\n";
    write.close();

}
