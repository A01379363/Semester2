#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    int *a = &num;
    int b;
    cout << "Direccion de 'a': " << *a << endl;
    cout << "Direccion de 'b': " << &b << endl;

    return 0;
}