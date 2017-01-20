#include <iostream>

using namespace std;

class Base
{
    public: 
        virtual int doSomething() = 0;
};

class Child1 : public Base
{
    public: 
        int doSomething()
        {
            std::cout << "I´m in child one" << std::endl;
            return 1; //Flag it's ok 
        }
};

class Child2 : public Base
{
    public: 
        int doSomething()
        {
            std::cout << "I´m in child two" << std::endl;
            return 1; //Flag it's ok 
        }
};

class Child3 : public Base
{
    int value;
    public: 
        Child3(int value) : value(value){}
        
        int doSomething()
        {
            cout << "I´m in child three with value:" << value << endl;
            return 1; //Flag it's ok 
        }
};