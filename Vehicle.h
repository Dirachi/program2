/*****************************************************************
	Filename:       Vehicle.h
	Date Created:   Oct 18
	Author:         Alek,Tobin,Bryson
******************************************************************/

#include <iostream>
using namespace std;

#ifndef VEHICLE_H
#define VEHICLE_H
/*
    Class: Vehicle
    purpose: class that hold the vehicle attributes along with the comparative operator overloads for plateID, and accessors. With a overload that prints car details.
*/
class Vehicle
{
    //Vehicle attributes
    private:
        string color;
        string make;
        string model;
        string plateID;
        bool isFancyOwner;
        int year;
    public:
        //constructors and deconstructor function
        Vehicle(){};
        Vehicle(string inColor, string inMake ,string inModel,string inPlateID, bool inIsFancyOwner, int inYear){
            color = inColor;
            make = inMake;
            model = inModel;
            plateID = inPlateID;
            isFancyOwner = inIsFancyOwner;
            year = inYear;
        }
        ~Vehicle(){
        }
        //comparative operators
        bool operator<(Vehicle& temp){ 
            if(this->plateID < temp.plateID){
                return true;
            };
            return false;
        }
        bool operator>(Vehicle& temp){ 
            if(this->plateID > temp.plateID){
                return true;
            };
            return false;
        }
        bool operator!=(Vehicle& temp){ 
            if(this->plateID != temp.plateID){
                return true;
            };
            return false;
        }

        //ostream overload that prints the car details when the object is attempted to be printed as a node.
        friend ostream & operator << (ostream & os, Vehicle temp){
            os << "\nColor:\t\t" << temp.color;
            os << "\nMake:\t\t" << temp.make;
            os << "\nModel:\t\t" << temp.model;
            os << "\nPlateID:\t" << temp.plateID;
            os << "\nFancy owner?:\t"; 
            if(temp.isFancyOwner){
                os << "True";
            }
            else{
                os << "False";
            };
            os << "\nYear:\t\t" << temp.year;
            return os;
        }
        //getter prototypes
        string getColor();
        string getMake();
        string getModel();
        string getPlateID();
        bool getIsFancyOwner();
        int getYear();
        bool getValue();
        //setter prototypes
        void setColor(string);
        void setMake(string);
        void setModel(string);
        void setPlateID(string);
        void setIsFancyOwner(bool);
        void setYear(int);
        void setValue(double);        
};
    //getters
    string Vehicle::getColor(){
        return this->color;
    }
    string Vehicle::getMake(){
        return this->make;
    }
    string Vehicle::getModel(){
        return this->model;
    }
    string Vehicle::getPlateID(){
        return this->plateID;
    }
    bool Vehicle::getIsFancyOwner(){
        return this->isFancyOwner;
    }
    int Vehicle::getYear(){
        return this->year;
    }

    //setters
    void Vehicle::setColor(string newColor){
        color = newColor;
    }
    void Vehicle::setMake(string newMake){
        make = newMake;
    }
    void Vehicle::setModel(string newModel){
        model = newModel;
    }
    void Vehicle::setPlateID(string newPlateID){
        plateID = newPlateID;
    }
    void Vehicle::setIsFancyOwner(bool newIsFancyOwner){
        isFancyOwner = newIsFancyOwner;
    }
    void Vehicle::setYear(int newYear){
        year = newYear;
    }
#endif