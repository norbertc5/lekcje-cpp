#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void Los(int tab[], int tabLen, int minVal, int maxVal)
{
    srand(time(NULL));

    for(int i=0; i<10; i++)
    {
        tab[i] = minVal+rand()%(maxVal-minVal);
    }
}

int Min(int tab[], int start, int stop)
{
    int lowest = 1000;
    int lowestPos = 0;

    for(int i=start; i<=stop; i++)
    {
        if(tab[i] < lowest)
        {
            lowest = tab[i];
            lowestPos = i;
        }
    }
    return lowestPos;
}

void Wypisz(int tab[], int tabLen)
{
    for(int i=0; i<tabLen; i++)
    {
        cout<<tab[i]<<endl;
    }
}

int SortB(int tab[], int tabLen)
{
    int iterations=0;

    for(int i=0; i<tabLen; i++)
    {
        for(int j=0; j<tabLen-1; j++)
        {
            if(tab[i]<tab[j])
            {
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            iterations++;
        }
    }
    return iterations;
}

int SortWyb(int tab[], int tabLen)
{
    int iterations = 0;
    for(int i=0; i<tabLen; i++)
    {
        int minPos = Min(tab, i, tabLen);
        int temp = tab[i];
        tab[i] = tab[minPos];
        tab[minPos] = temp;
        iterations++;
    }
    return iterations;
}

int SortWys(int tab[], int tabLen)
{

    int iterations = 0;
    for(int i=0; i<tabLen; i++)
    {
        for(int j=i+1; j<tabLen; i++)
        {
            if(tab[j] < tab[i])
            {
                int temp = tab[j];
                tab[j] = tab[i];
                tab[j] = temp;
            }

            iterations++;
        }
    }
    return iterations;
}



int main()
{
    int tab[] = {0, 0, 0, 0};
    Los(tab, 4, 10, 15);
    ///cout << "i: " << SortB(tab, 4) << endl;
    cout << "i: " << SortWyb(tab, 4) << endl;
    ///cout << "i: " << SortWys(tab, 4) << endl;
    Wypisz(tab, 4);
    cout << "Lowest " << Min(tab, 0, 4);
    return 0;
}
