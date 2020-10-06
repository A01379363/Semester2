#include <iostream>
using namespace std;

class Employee
{
private:
    int income;
    int tax_percentage;

public:
    Employee() = default;
    Employee(int income, int tax_percentage)
    {
        this->income = income;
        this->tax_percentage = tax_percentage;
    }

    int getIncome()
    {
        return income;
    }

    int getTaxPercentage()
    {
        return tax_percentage;
    }

    float taxPay(float income, float tax_percentage)
    {
        return income * tax_percentage / 100;
    }
};

int main()
{
    Employee person1 = Employee(347, 20);
    cout << person1.taxPay(person1.getIncome(), person1.getTaxPercentage()) << endl;
    return 0;
}