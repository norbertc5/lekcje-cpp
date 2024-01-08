#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void pause(string message)
{
    cout << endl << message << endl;
    system("pause");
}

int main()
{
    int *p = NULL;
    p = new int[5];
    int n = 0;  /// wielkosc wskaznika p

    while(true)
    {
        cout << "------MENU------" << endl;
        cout << "1. Dodaj element." << endl;
        cout << "2. Zamien element." << endl;
        cout << "3. Usun element." << endl;
        cout << "4. Wyswietl." << endl;
        cout << "5. Zapisz do pliku." << endl;
        cout << "6. Wyswietl z pliku. (tylko wyswietla wartosci na ekran)" << endl;
        cout << "7. Odczytaj z pliku. (wartosci z pliku spowrotem sa w wskazniku)" << endl;
        cout << "0. Wyjdz." << endl;
        cout << "----------------" << endl;

        int inp = 0;
        cin >> inp;

        switch(inp)
        {
            case 1:  /// dodawanie danych
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
            case 2:  /// zamienianie danych
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
            case 3:  /// usuwanie danych
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
            case 4:  /// wyswietlanie
                {
                    for(int i = 0; i < n; i++)
                    {
                        cout << p[i]<<" ";
                    }
                    cout<<endl;
                    system("pause");
                    break;
                }
            case 5:   /// zapisywanie
                {
                    fstream file;
                    file.open("data.txt", ios::out);

                    for(int i = 0; i < n; i++)
                    {
                        file << p[i] << "\n";
                    }

                   // file << "tekst z pliku";
                    file.close();

                    pause("Zapisano do pliku.");

                    break;
                }
            case 6:  /// wyswietlanie z pliku
                {
                    fstream file;
                    file.open("data.txt", ios::in);

                    string s;
                    while(getline(file, s))
                    {
                        cout << s << ", ";
                    }

                    file.close();
                    pause("Dane z pliku.");
                    break;
                }
            case 7:  /// odczytaj z pliku
                {
                    // to nie dzia³a
                    fstream file;
                    file.open("data.txt", ios::in);

                    /*for(int i = 0; i < n; i++)
                    {
                        t[i] = p[i];
                    }*/

                    /*fstream file;
                    file.open("data.txt", ios::in);
                    int iloscLiczbZPilku = 0;
                    //int liczbyZPliku[0];
                    string s;

                    while(getline(file, s))
                    {
                         //cout << s << endl;
                        iloscLiczbZPilku++;
                    }

                    int liczbyZPliku[iloscLiczbZPilku];
                    getline(file, s);
                    cout << s << endl;
                    liczbyZPliku[0] = atoi(s.c_str());*/
                   /* while(getline(file, s))
                    {
                        //liczbyZPliku[0] = atoi(s.c_str());
                        cout << iloscLiczbZPilku << endl;
                    }*/

                    //delete[] p;
                    //n += iloscLiczbZPilku;
                    //cout << n;
                    //int *t = new int[n];

                    /*for(int i = 0; i < n; i++)
                    {
                        t[i] = p[i];
                    }*/
                    pause("aa");
                    break;
                }
            case 0:  /// wyjscie z aplikacji
                {
                    return 0;
                }

            default: break;
        }
        system("CLS");
    }

    return 0;
}

