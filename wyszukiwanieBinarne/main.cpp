#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int findValue(int arr[], int toFind)
{
    int n = 10;
    int half = n/2;

    while(half > 0)
    {
        half = half / 2;
        /*if(arr[n-half] < toFind)
        {
            half += n/2;
        }*/
        cout << half <<endl;
        if(arr[half] == toFind)
        {
            return half;
        }
    }



    /*int n = 10;
    int checkPoint = n;*/
    //cout << arr[checkPoint] << endl;

   /* for(int i=0; i<4; i++)
    {

    checkPoint = checkPoint/2;
    cout << "middle: " << arr[checkPoint] << endl;

    if(toFind <= arr[checkPoint])
    {
        int newArr[n/2];
        cout << "newArr last " << newArr[sizeof(newArr) / sizeof(int)];

        if(toFind == newArr[sizeof(newArr) / sizeof(int)])
        {
            cout << "pos " << toFind;
        }

        cout << endl << "-----" << endl;

        for(int i=0; i<checkPoint; i++)
        {
            newArr[i] = arr[i];
            cout << newArr[i] << ", ";
        }
    }
    }
    */
}

int main()
{
    int arr[10];
    int minVal = 1, maxVal = 11, lastVal;
    srand(time(NULL));

    for(int i=0; i<sizeof(arr)/sizeof(int); i++)
    {
        arr[i] = minVal+rand()%maxVal-minVal;

        if(i > 0)
        {
            arr[i] = arr[i] + arr[i-1];
        }

        cout << arr[i] << ", ";
    }

    cout << "pos " << findValue(arr, 40);

    return 0;
}
