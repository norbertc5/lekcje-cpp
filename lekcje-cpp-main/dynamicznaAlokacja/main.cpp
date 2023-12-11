#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int *p = NULL;
    p = new int[5];
    int n = 0;

    while(true)
    {
        cout << "--MENU--" << endl;
        cout << "1. Dodaj element." << endl;
        cout << "2. Zamien element." << endl;
        cout << "3. Usun element." << endl;
        cout << "4. Wyswietl." << endl;
        cout << "5. Wyjdz." << endl;

        int inp = 0;
        cin >> inp;

        switch(inp)
        {
            case 1:
            {
                int x = 0;
                cout << "Podaj wartosc: ";
                cin >> x;
                int *t = new int[n + 1];

                for(int i = 0; i < n; i++)
                {
                    t[i] = p[i];
                }
                t[n] = x;
                delete[] p;
                p = t;
                n++;
                break;
            }
            case 2:
                {
                    int miejsce;
                    int val;
                    int *t = new int[n + 1];

                    cout << "Podaj miejsce (0, n-1) i wartosc. "<<endl;
                    cin >> miejsce;
                    cin >> val;

                    for(int i = 0; i < n + 1; i++)
                    {
                        t[i] = p[i];
                    }

                    t[miejsce] = val;
                    delete[] p;
                    p = t;

                    break;
                }
            case 3:
                {
                    int x = 0;
                    cout << "Podaj element do usuniecia (od 0 do n-1): ";
                    cin >> x;
                    int *t = new int[n - 1];

                    for(int i = 0; i < n; i++)
                    {
                        if(i == x)
                        {
                            t[i] = p[i + 1];
                            continue;
                        }
                        else
                            t[i] = p[i];
                    }
                    t[n] = x;
                    delete[] p;
                    p = t;
                    n--;
                    break;
                }
            case 4:
                {
                    for(int i = 0; i < n; i++)
                    {
                        cout << p[i]<<" ";
                    }
                    cout<<endl;
                    system("pause");
                    break;
                }
            case 5: return 0; break;
            default: break;
        }
        system("CLS");
    }

    return 0;
}

