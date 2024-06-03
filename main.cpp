#include <iostream>

using namespace std;

string czyAnagram(string s1, string s2)
{
    int l = s1.length();

    if(l != s2.length())
        return "nie anagram";

    for(int i=0; i<l; i++)
    {
        for(int j=0; j<l; j++)
        {
            if(s1[i] == s2[j] && s2[j] != '%')
            {
                //cout << s1 << endl;
                s1[i] = '%';
                s2[j] = '%';
            }
        }
    }

    for(int i=0; i<l; i++)
    {
        if(s1[i] != '%' && s2[i] != '%')
        {
            return "nie anagram";
        }
    }

    return "anagram";

}

int* dodajTablice(int t1[], int t2[], int n)
{
    int* p = new int[n];
    for(int i=0; i<n; i++)
    {
        p[i] = t1[i] + t2[i];
    }

    return p;
}

void permutacje(/*int a, int b*/)
{
    int tab[] = {1,2,3};
    int n = 3;

    for(int i=0; i<n*2; i++)
    {
        int permutacja[] = {1,2,3};
        for(int j=0; j<(n*2)-1; j++)
        {
            int temp = permutacja[i];
            permutacja[i] = permutacja[j];
            permutacja[j] = temp;

            for(int k=0; k<n; k++)
            {
                cout << permutacja[k];
            }
            cout << endl;
        }
    }
}

int main()
{
    //cout << czyAnagram("abb", "baa");

    /*int tab1[] = {1,2,3};
    int tab2[] = {1,2,3};

    int* w = dodajTablice(tab1, tab2, 3);

    for(int i =0; i<3; i++)
    {
        cout << w[i] << endl;
    }

    delete[] w;*/

    permutacje();

    return 0;
}
