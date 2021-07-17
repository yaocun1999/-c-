#include <iostream>
using namespace std;
typedef struct Lnode
{
    int data;
    struct Lnode *next;
} list;
bool initlist(list *l)
{
    l = NULL;
    return true;
}
bool initheadlist(list *l)
{
    l = (list *)malloc(sizeof(list));
    if (l == NULL)
        return false;
    l->next = NULL;
    return true;
}
bool insertlist(list *l, int *elem)
{
    list *p = (list *)malloc(sizeof(list));

    p->next = l;
    l->next = NULL;
}
int main()
{
    list a;

    if (initheadlist(&a) == true)
    {
        cout << "ok" << endl;
    }

    return 0;
}