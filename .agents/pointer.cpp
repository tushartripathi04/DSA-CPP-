#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    cout << &a << endl;

    int *ptr = &a;
    cout << ptr << endl;// address of a 
    cout<< *ptr << endl;// value of a
    int  b =20;
    ptr = &b;
    cout << ptr << endl;// address of b
    cout<< *ptr << endl;// value of b
    float m = 2.6;
    float *ptr1 = &m;
    cout << ptr1 << endl;// address of m
    cout << *ptr1 << endl;// value of m

    return 0;
};