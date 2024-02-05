#pragma once
#ifndef ULAMEK_H
#define ULAMEK_H


class Ulamek
{
private:
    int l = 1, m = 1;

public:
    Ulamek(int a, int b)
    {
        l = a;
        m = b;
    }

    Ulamek(int a)
    {
        l = a;
        m = 1;
    }

    Ulamek(double a)
    {
        while(a < 1)
        {
            a *= 10;
        }
    }

    inline int get_l()
    {
        return l;
    }

    int set_l(int newL)
    {
        l = newL;
    }

    inline int get_m()
    {
        return m;
    }

    int set_m(int newM)
    {
        m = newM;
    }

    void print()
    {
        std::cout << l << "/" << m << std::endl;
    }


};

#endif // ULAMEK_H
