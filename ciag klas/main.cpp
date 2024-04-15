#include <iostream>

using namespace std;

class List
{
    public:
    int data = 0;

    List* pNext = NULL;

    List()
    {

    }

    List(int value)
    {
        data = value;
    }

    void Add(int value)
    {
        List* curr = this;
            //pNext = new List;
            //this->pNext->data = value;
        while(curr->pNext != NULL)
        {
            curr = curr->pNext;
        }
        curr->pNext = new List;
    }

    void Print()
    {
        cout << data << ", " << pNext->data;
    }
};

int main()
{
    cout << "Hello world!" << endl;

    List root(1);
    root.Add(2);
    root.Add(3);
    root.Print();

    return 0;
}
