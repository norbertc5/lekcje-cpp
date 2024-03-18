#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void copyToArr(int firstArr[], int secArr[], int startIndex, int n)
{
    for(int i=0; i<n; i++)
    {
        secArr[i] = firstArr[startIndex+i];
    }
}


void print(int t[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << t[i] << ", ";

    }
    cout<<endl;
}


void mergeSort(int arr[], int n)
{
    /// dzielenie
    int nLeft, nRight;
    const int half = n/2;
    nLeft  = half;
    nRight = n - half;
    //int *leftPart = new int[nLeft];
    //int *rightPart = new int[nRight];
    //int leftPart[nLeft], rightPart[nRight];
    //int leftPart[half], rightPart[half];;

    //print(arr,n);
    if(n > 1)
    {
        int *leftPart = new int[nLeft];
        int *rightPart = new int[nRight];
       //int leftPart[nLeft], rightPart[nRight];

        copyToArr(arr, leftPart, 0, half);
        //nLeft = sizeof(leftPart)/sizeof(int);

        //print(leftPart,half);

        copyToArr(arr, rightPart, half, n-half);
        //nRight = sizeof(rightPart)/sizeof(int);
        //print(rightPart,n-half);

        mergeSort(leftPart, nLeft);
        mergeSort(rightPart, nRight);




    ///scalanie
        int l, r, k;
        l = r = k = 0;
        while(l < nLeft && r < nRight)
        {
            if(leftPart[l] < rightPart[r])
            {
                arr[k] = leftPart[l];
                l++;
            }
            else
            {
                arr[k] = rightPart[r];
                r++;
            }
            k++;
        }

        while(l < nLeft)
        {
            arr[k] = leftPart[l];
            l++;
            k++;
        }
        while(r < nRight)
        {
            arr[k] = rightPart[r];
            r++;
            k++;
        }
        delete[] leftPart;
        delete[] rightPart;
    }
}

int main()
{
    int arr[20];
    int minVal = 1, maxVal = 10;

    srand(time(NULL));

    for(int i=0; i<20; i++)
    {
        arr[i] = minVal + rand()%maxVal;
    }
    print(arr, 20);

    cout <<endl<< "------" << endl;
    mergeSort(arr, 20);

    print(arr, 20);


    return 0;
}
