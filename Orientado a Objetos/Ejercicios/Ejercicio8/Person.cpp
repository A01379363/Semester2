#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
    Person *mom;

public:
    Person()
    {
        name = "";
        age = 0;
    }
    Person(string name, int age, Person *mom)
    {
        this->name = name;
        this->age = age;
        this->mom = mom;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    Person getMother()
    {
        return *mom;
    }
    int getNumOfAntecessors();
    Person getAntecessor()
    {
        return getMother();
    }
};

int main()
{
    Person *sara = new Person;
    (*sara).setName("Sara");
    (*sara).setAge(97);

    Person *leticia = new Person("Leticia", 28, sara);
    Person *laura = new Person("Laura", 53, leticia);
    Person *soledad = new Person("Soledad", 34, laura);
    Person *camila = new Person("Camila", 18, soledad);

    delete sara;
    delete leticia;
    delete laura;
    delete soledad;
    delete camila;

    return 0;
}