#include <iostream>
#include <stdlib.h>

using namespace std;

class Employee
{
private:
    string name="", sname="";
    int exp=0;

public:
    Employee()
    {

    }
    Employee(string n, string sn)
    {
        name = n;
        sname = sn;
    }

    virtual void Wizytowka()
    {
        cout << name << " " << sname << endl;
    }

    friend class Programmer;
    friend class Manager;
};

class Programmer : public Employee
{

public:

    Programmer(string n, string sn): Employee(n, sn)
    {

    }
    void Wizytowka()
    {
        cout << name << " " << sname << " programista" << endl;
    }
};

class Manager : public Employee
{
    public:
    Manager(string n, string sn) : Employee(n, sn)
    {

    }
    void Wizytowka()
    {
        cout << name << " " << sname << " manager" << endl;
    }
};

void AddEmployee()
{

}

int main()
{
    Employee* employees[100] = {};

    int inp = 0;
    int employeesAmount = 0;

    while(true)
    {
        cout << "1-Dodaj pracownika\n2-wyswietl pracownikow \n";
        cin >> inp;
        system("CLS");

        switch(inp)
        {
            case 1:
                {

                    string n = "", sn = "", job = "";

                    cout << "Dodaj pracownika.\n\nPodaj imie: " << endl;
                    cin >> n;
                    cout << "\nPodaj nazwisko: " << endl;
                    cin >> sn;

                    cout << "\nPodaj prace: " << endl;
                    cin >> job;

                    if(job == "programista")
                    {
                        employees[employeesAmount] = new Programmer(n, sn);
                    }
                    else if(job == "manager")
                    {
                        employees[employeesAmount] = new Manager(n, sn);
                    }
                    else
                    {
                        employees[employeesAmount] = new Employee(n, sn);
                    }
                    employeesAmount++;
                    break;
                }

            case 2:
                for(int i=0; i<employeesAmount; i++)
                {
                    employees[i]->Wizytowka();
                }
                break;
        }
    }



    return 0;
}
