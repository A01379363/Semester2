#include <iostream>
using namespace std;

void cambiaValores(int &num1, int num2)
{
    num1 = 11111;
    num2 = 22222;
}

int main()
{
    int num1 = 1;
    int num2 = 2;

    cout << "num1 antes: " << num1 << endl;
    cout << "num2 antes: " << num2 << endl;

    cambiaValores(num1, num2);

    cout << "num1 despues: " << num1 << endl;
    cout << "num2 despues: " << num2 << endl;
    return 0;
}