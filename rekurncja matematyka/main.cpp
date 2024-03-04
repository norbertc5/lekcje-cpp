#include <iostream>

using namespace std;

int potega(int a, int b)
{
    if(b>1)
    {
        potega(a*a, b-1);
    }
    else{
        return a;
    }
}

int silnia(int a)
{
    if(a > 1)
    {
        return a*silnia(a-1);
    }
    else{
        return a;
    }
}

int fibonacci(int a)
{
    if(a == 0 || a == 1)
    {
        return a;
    }

    return fibonacci(a-1) + fibonacci(a-2);

}

int main()
{
    ///cout << potega(5, 3) << endl;
    ///cout << silnia(3) << endl;
    cout << fibonacci(7) << endl;
    return 0;
}
