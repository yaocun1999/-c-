#include <iostream>
using namespace std;
struct arrlist
{
    int *data;
    int length;
    int maxsize;
};
void initlst(arrlist &l)
{
    (&l)->data = (int *)malloc(10 * sizeof(int));
    l.maxsize = 10;
    l.length = 0;
}
bool insert(arrlist &l, int i, int elem)
{
    if (i < 1 || i > l.length + 1)
        return false;
    if (l.length > 10)
        return false;
    for (int j = l.length; j >= i; j--)
        l.data[j] = l.data[j - 1];
    l.data[i - 1] = elem;
    l.length++;
    return true;
}
bool deletelist(arrlist &l, int i, int &elem)
{
    if (i < 1 || i > l.length)
        return false;
    elem = l.data[i - 1];
    for (int j = i; j < l.length; j++)
        l.data[j - 1] = l.data[j];
    l.length--;
    return true;
}

int main()
{
    arrlist a;
    initlst(a);

    /* a.data = (int *)realloc(a.data, 12 * sizeof(int));
    for (int i = 0; i < 12; i++)
        a.data[i] = 1;
    cout << a.data[11];*/
    if (insert(a, 1, 4))
    {
        // insert(a, 1, 4);
        cout << "ok" << endl;
    }

    if (insert(a, 1, 5))
    {
        //insert(a, 1, 4);
        cout << "ok" << endl;
    }
    cout << a.data[0] << endl;
    cout << a.length << endl;
    int k;
    if (deletelist(a, 1, k))
    {
        //insert(a, 1, 4);
        cout << k << endl;
    }
    cout << a.data[0] << endl;
    free(a.data);
    return 0;
}