#include <iostream>
#include <string>
using namespace std;

class person
{
private:
    int age;
    string name;

protected:
    string address;
    void setAge(int age)
    {
        this->age = age;
    }
    int getAge()
    {
        return this->age;
    }

public:
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
};

class employee : public person
{

private:
    int money;

public:
    
    void setMoney(int money)
    {
        this->money = money;
    }
    int getMoney()
    {
        return this->money;
    }
    void plus_ultra()
{
    this ->money = this -> money+1000;
}


};