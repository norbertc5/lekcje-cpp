#include <iostream>

using namespace std;

class Vehicle
{
    public:
    virtual void Print()
    {
        cout << "???" << endl;
    }
};

class Car : public Vehicle
{
    public:
    void Print()
    {
        cout << "Car" << endl;
    }
};

class Bike : public Vehicle
{
    public:
    void Print()
    {
        cout << "Bike" << endl;
    }
};

int main()
{
    Vehicle* vehicles[] = {new Vehicle(), new Car(), new Bike()};

    int n = sizeof(vehicles)/sizeof(Vehicle*);
    for(int i=0; i<n; i++)
    {
        vehicles[i]->Print();
    }

    for(int i=0; i<n; i++)
    {
        delete vehicles[i];
    }

    return 0;
}
