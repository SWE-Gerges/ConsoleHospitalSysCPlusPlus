#include <iostream>
#include"Person.h"
#include"Hospital.h"
#include"Patient.h"
#include"Doctor.h"
#include<fstream>
#include<string>
#include<vector>
using namespace std;

int main()
{
 Hospital h1;
 Doctor d;
    int age, numofPatients,key, counter =0;
    string name,department, history, newHistory, extraCareRoom;
    char* patienName = "/home/goosa/Desktop/Hospital Managment System/ourData/Patient.txt";
    char* patientHistory = "/home/goosa/Desktop/Hospital Managment System/ourData/PatientHistory.txt";
    char* doctors = "/home/goosa/Desktop/Hospital Managment System/ourData/Doctors.txt";

    cout <<"                          Hospital Management System                      "<<endl;
    cout<<"."<<endl;
    cout<<"."<<endl;
    cout<<"."<<endl;

    vector<Patient>patientlist;
    vector<Doctor>doctorlist;

        cout<<"Hello,"<<endl;
        cout<<"If you want to add new patient please enter '1' "<<endl;
        cout<<"For new Doctor in the system enter '2'"<<endl;
        cout<<"to edit patient history enter '3'"<<endl;
        cout<<"To request a room for extra-care enter '4'"<<endl;
        cout<<"To print all hospital Data enter '5'"<<endl;
        cout<<"To stop enter '0'"<<endl;
    do
    {


        cin>>key;
        if (key == 1)
        {
            cout<<"Enter patient name"<<endl;
            cin>>name;
            cout<<"Enter patient age"<<endl;
            cin>>age;
            cout<<"Enter History"<<endl;
            cin>>history;
            patientlist.push_back(Patient(patienName,patientHistory,history,name,age));
        }
        else if (key ==2)
        {
            cout<<"Enter Doctor name"<<endl;
            cin>>name;
            cout<<"Enter Doctor age"<<endl;
            cin>>age;
            cout<<"Enter Department"<<endl;
            cin>>department;
            cout<<"Enter number of patients under your care"<<endl;
            cin>>numofPatients;

            doctorlist.push_back(Doctor(doctors,department,numofPatients,name,age));
        }
      else  if(key==3)
        {
            cout<<"Please enter the new History"<<endl;
            cin>>newHistory;
            doctorlist.at(counter).editHistory(newHistory);
           counter++;
        }
       else if(key == 4)
        {
            cout<<"Please enter the department you want to reserve extra-care room in "<<endl;
            cin>>extraCareRoom;
          d.roomRequest(extraCareRoom);

        }
       else if(key == 5)
        {

            cout<<"Hospital Data:"<<endl;
            h1.dataRepost(patienName,patientHistory,doctors);
        }


        else if(key !=0 && key>5)
            cout<<"Invalid input"<<endl;

        cout<<"If you want any other service, please enter the key again"<<endl;
    }
    while(key!=0);




    return 0;
}
int Hospital::neurology_room =30;
int Hospital::oncology_room=20;
int Hospital::ophthalmology_room=15;
int Hospital::pediatrics_room=17;
int Hospital::psychiatry_room=10;
int Hospital::orthopedics_room=15;


int Hospital::reservedNeurology_room =0;
int Hospital::reservedOncology_room=0;
int Hospital::reservedOphthalmology_room=0;
int Hospital::reservedPediatrics_room=0;
int Hospital::reservedPsychiatry_room=0;
int Hospital::reservedOrthopedics_room=0;
