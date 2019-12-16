#include "Doctor.h"
#include"Person.h"
#include"Hospital.h"
#include"Patient.h"
Doctor::Doctor()
{
    Person();
    department = "non";
    numPatients = 0;
}

Doctor::Doctor(char* doctors,string department, int numPatients, string name, int age)
{
    this->name = name;
    this->age = age;
    this->department = department;
    this->numPatients = numPatients;
      ofstream write;
    write.open(doctors, ios::app);
    write<< name;
    write<<"\n";
    write.close();
}
void Doctor:: nameToFile(char* doctors)
{
    ofstream write;
    write.open(doctors, ios::app);
    write<< Doctor::name;
    write<<"\n";
    write.close();
}
void Doctor::roomRequest(string rquestedDepartment)
{
    if (rquestedDepartment == "neurology")
        Hospital::neurology_rooms();
    if(rquestedDepartment=="oncology")
        Hospital::oncology_rooms();
    if(rquestedDepartment=="ophthalmology")
        Hospital::ophthalmology_rooms();
    if(rquestedDepartment=="pediatrics")
        Hospital::pediatrics_rooms();
    if(rquestedDepartment=="psychiatry")
        Hospital::psychiatry_rooms();
    if(rquestedDepartment=="orthopedics")
        Hospital::orthopedics_rooms();
}
void Doctor::editHistory(string newHistory)
{
Doctor::edithistory = newHistory;
}

