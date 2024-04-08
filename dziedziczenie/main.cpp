#include <iostream>

using namespace std;

class A
{
    private:
    int x2 = 0;
    public:
    int x = 0;
    A()
    {
        cout << "Konstruktor klasy A" << endl;
    }

    ~A()
    {
        cout << "Destruktor klasy A" << endl;
    }
};

class B : A
{
    public:
    int y = 0;
    B()
    {
        cout << "Konstruktor klasy B" << endl;
        x = 1;
    }
    ~B()
    {
        cout << "Destruktor klasy B" << endl;
    }
};

class C : B
{
    public:
    int z = 0;
    C()
    {
        cout << "Konstruktor klasy C" << endl;
    }

    ~C()
    {
        cout << "Destruktor klasy C" << endl;
    }
};

int main()
{
    A obj1;
    obj1.x = 1;
    /// zmienne s¹ dziedziczone nawet gdy s¹ prywatne (wtedy po prostu nie mo¿na ich u¿ywaæ)
    cout << "\nWielkosc klasy A: " << sizeof(A) << "\nWielkosc klasy B: " << sizeof(B) << "\nWielkosc klasy C: " << sizeof(C) << endl << endl;
    return 0;
}
