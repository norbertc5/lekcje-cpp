#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void Print(int* t, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<t[i] << ", ";
    }
}

int Random(int* t, int n, int minVal, int maxVal, bool duplicates)
{
    srand(time(NULL));
    int* used = new int[n];
    int usedAmount = 0;
    int iter = 0;

    for(int i=0; i<n; i++)
    {
        t[i] = minVal + rand()%(maxVal-minVal);


        if(!duplicates)
        {
            if(n < (maxVal-minVal))
                return -1;

            for(int j=0; j<usedAmount; j++)
            {
                for(int k=0; k<usedAmount; k++)
                {
                    while(t[i] == used[k])
                    {
                        t[i] = minVal + rand()%(maxVal-minVal);
                        iter++;
                    }
                }
            }

            used[usedAmount] = t[i];
            usedAmount++;
        }
    }

    cout << iter << endl;
    delete[] used;
    return 0;
}

int main()
{
    int* arr = new int[10];
    Random(arr, 10, 0, 10, false);
    Print(arr, 10);

    delete[] arr;
    return 0;
}
