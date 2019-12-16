#include<iostream>
#include "Hospital.h"
#include<string>
#include<fstream>




//string department[]= {"neurology","oncology","ophthalmology","pediatrics","psychiatry","orthopedics"};

void  Hospital::neurology_rooms()
{
    if (neurology_room>0)
    {
        cout<<"there is a room empty,reservation Confirmed."<<endl;
        neurology_room--;
        reservedNeurology_room++;
    }
    else
        cout<<"Sorry, there is no room empty"<<endl;

}


void  Hospital::oncology_rooms()
{
    if (oncology_room>0)
    {
        cout<<"there is a room empty, reservation Confirmed."<<endl;
        oncology_room--;
        reservedOncology_room++;
    }
    else
        cout<<"Sorry,there is no room empty"<<endl;


}
void  Hospital:: ophthalmology_rooms()
{

    if (ophthalmology_room>0)
    {
        cout<<"there is a room empty, reservation Confirmed."<<endl;
        ophthalmology_room--;
        reservedOphthalmology_room++;


        //  cout<<"the empty rooms are "<<ophthalmology_room<<endl;
        // cout<<"the reserved rooms are "<<reservedOphthalmology_room<<endl;
    }
    else

        cout<<"Sorry,there is no room empty"<<endl;


}
void  Hospital:: pediatrics_rooms()
{

    if (pediatrics_room>0)
    {
        cout<<"there is a room empty, reservation Confirmed."<<endl;
        pediatrics_room--;
        reservedPediatrics_room++;
        //  cout<<"the empty rooms are "<<pediatrics_room<<endl;
        // cout<<"the reserved rooms are "<<reservedPediatrics_room<<endl;
    }
    else
        cout<<"Sorry,there is no room empty"<<endl;


}
void  Hospital:: psychiatry_rooms()
{

    if (psychiatry_room>0)
    {
        cout<<"there is a room empty, reservation Confirmed."<<endl;
        psychiatry_room--;
        reservedPsychiatry_room++;
        //   cout<<"the empty rooms are "<<psychiatry_room<<endl;
        //   cout<<"the reserved rooms are "<<reservedPsychiatry_room<<endl;
    }
    else
        cout<<"Sorry,there is no room empty"<<endl;


}
void  Hospital:: orthopedics_rooms()
{

    if (orthopedics_room>0)
    {
        cout<<"there is a room empty, reservation Confirmed."<<endl;
        orthopedics_room--;
        reservedOrthopedics_room++;
        // cout<<"the empty rooms are "<<orthopedics_room<<endl;
        // cout<<"the reserved rooms are "<<reservedOrthopedics_room<<endl;
    }
    else
        cout<<"Sorry,there is no room empty"<<endl;


}
void Hospital::dataRepost(char* patientName,char* patientHisotry, char* doctors)
{
    ifstream read;
    string pname;
    string dname;
    cout<<"Patients names:"<<endl;
    read.open(patientName);
    while(getline(read,pname))
    {

        cout<<pname<<endl;
    }
    read.close();
    cout <<"Doctors names"<<endl;
    read.open(doctors);
    while(getline(read,dname))
    {

        cout<<dname<<endl;
    }
    read.close();
    cout <<"Rooms"<<endl;
    cout <<"Neurology Rooms, empty: "<<neurology_room<<" Reserved: "<<reservedNeurology_room<<endl;
    cout <<"Oncology Rooms, empty: "<<oncology_room<<" Reserved: "<<reservedOncology_room<<endl;
    cout <<"Pediatrics Rooms, empty: "<<pediatrics_room<<" Reserved: "<<reservedPediatrics_room<<endl;
    cout <<"Psychiatry Rooms, empty: "<<psychiatry_room<<" Reserved: "<<reservedPsychiatry_room<<endl;
    cout <<"Orthopedics Rooms, empty: "<<orthopedics_room<<" Reserved: "<<reservedOrthopedics_room<<endl;

}

