#include <iostream>
using namespace std;
struct arrlist
{
    int data[5];
    int length;
};
void initlist(arrlist &l)
{
    for (int i = 0; i < 5; i++)
    {
        //(*(l)).data[i] = 1;
        (&l)->data[i] = 2;
    }
    (&l)->length = 0;
}
void initlist2(arrlist *l)
{
    arrlist **k = &l;
    for (int i = 0; i < 5; i++)
    {
        //(*(l)).data[i] = 1;
        l->data[i] = 2;
        (*k)->data[4] = 4;
    }
    (*l).length = 0;
}

int main()
{
    arrlist a;
    cout << &a << endl;
    initlist(a);
    initlist2(&a);
    cout << a.data[1] << endl;
    cout << a.data[4] << endl;
    cout << (&a)->data[1];
    return 0;
}