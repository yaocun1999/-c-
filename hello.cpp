#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int *b = &a;
    int **c = &b;
    cout << b << endl;
    cout << &b << endl;
    cout << c << endl;
    cout << *(c) << endl;
    cout << *(b) << endl;
    *b += 1;
    cout << &a << endl;
    cout << *b << endl;
}
/* 
int **  c  b的地址  c的地址
int *   b  a的地址  b的地址
int     a   值     a的地址

&取地址  *(&/地址)按地址取值
 */