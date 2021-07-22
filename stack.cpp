#include <iostream>
using namespace std;
#define MAX_SIZE 10
typedef struct
{
    int a[MAX_SIZE];
    int top;
} stack;
void initstack(stack &b)
{

    b.top = -1;
}
bool pushstack(stack &b, int elems)
{
    if (b.top == MAX_SIZE - 1)
        return false;
    b.top++;
    b.a[b.top] = elems;
    return true;
}

int popstack(stack &b)
{
    int x;
    if (b.top == -1)
        return -1;
    x = b.a[b.top];
    b.top--;
    return x;
}
int main()
{
    stack a;
    cout << sizeof(a) << endl;
    initstack(a);
    pushstack(a, 10);
    pushstack(a, 120);
    pushstack(a, 30);
    pushstack(a, 4);
    cout << popstack(a) << endl;
    cout << popstack(a) << endl;
    cout << popstack(a) << endl;
    cout << popstack(a) << endl;
    cout << popstack(a) << endl;
    cout << popstack(a) << endl;
    return 0;
}