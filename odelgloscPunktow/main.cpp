#include <iostream>
#include <math.h>

using namespace std;

#define AMOUNT 4

float GetDist(int x1, int x2, int y1, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

class Punkt
{
    private:
        int x = 0, y = 0;
        string name;
    public:
        Punkt(int x, int y, string name)
        {
            this -> x = x;
            this -> y = y;
            this -> name = name;
        }
        Punkt()
        {

        }

        void Find(Punkt target, int wayLength, Punkt p[])
        {
            ///cout << name << " (" << x << ", " << y << ")" << endl;
            ///cout << target.name << " (" << target.x << ", " << target.y << ")" << endl;

            ///float dist = sqrt(pow(target.x - x, 2) + pow(target.y - y, 2));
            float dist = GetDist(x, target.x, y, target.y);
            ///cout << "Dist: " << dist << endl;

            string pointsNames = name;

            if(dist <= wayLength)
            {
                pointsNames += target.name;
            }
            else
            {
                int checkFromX = x, checkFromY = y;
                float oldDist = 0;

                for(int i=0; i<AMOUNT; i++)
                {
                    Punkt checking = p[i];

                    float d = GetDist(checkFromX, checking.x, checkFromY, checking.y) - oldDist;

                    if(d == 0)
                        continue;

                    ///cout << name << checking.name << " " << d << endl;
                    cout << name << checking.name << " " << d << endl;

                    if(d <= wayLength)
                    {
                        pointsNames += checking.name;
                        oldDist = d;
                        //checkFromX = checking.x;
                        //checkFromY = checking.y;
                    }

                }
            }

            cout << "way: " << pointsNames;
        }
};

int main()
{
    Punkt a(0, 0, "A");
    Punkt b(1, 1, "B");
    Punkt c(3, 3, "C");
    Punkt d(5, 5, "D");

    Punkt p[AMOUNT];
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;

    a.Find(c, 3, p);
    return 0;
}
