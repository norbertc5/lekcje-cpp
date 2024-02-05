#include <iostream>
#include "Ulamek.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Ulamek a(1, 5);
    Ulamek b(10);
    Ulamek c(0.2);
    //a.set_l(5);
    a.print();
    b.print();
    c.print();

    return 0;
}
