#include<iostream>
#ifndef HOSPITAL_H
#define HOSPITAL_H
#include<string>
using namespace std;
class Hospital
{
protected:

    //	string department[int size];
    static  int neurology_room;
    static  int oncology_room;
    static  int ophthalmology_room;
    static  int pediatrics_room;
    static  int psychiatry_room;
    static  int orthopedics_room;

    int static reservedNeurology_room;
    int static reservedOncology_room;
    int static reservedOphthalmology_room;
    int static reservedPediatrics_room;
    int static reservedPsychiatry_room;
    int static reservedOrthopedics_room;


public:

    //void static setRoomsCapacity();
    void static neurology_rooms();
    void static oncology_rooms();
    void static ophthalmology_rooms();
    void static pediatrics_rooms();
    void static psychiatry_rooms();
    void static orthopedics_rooms();
    void dataRepost(char* patientName,char* patientHisotry, char* doctors);
    // void static extraCare_rooms();

};


#endif // HOSPITAL_H
