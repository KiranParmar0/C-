#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;
    void fun()  // 1000 concrete non virtual
    {
        cout<<"Base fun\n";
    }
    virtual void gun() // 2000 concrete virtual
    {
        cout<<"Base gun\n";
    }
    virtual void sun()  // 3000 concrete  virtual
    {
        cout<<"Base sun\n";
    }
    virtual void run()=0; // abstract function
};
class Derived : public Base
{
    public:
        int i,j;
    void fun()   //4000 redefination (concrete) function
    {
        cout<<"Derived fun \n";
    }
    virtual void gun()
    {
        cout<<"Derived gun \n";
    }
    void run()
    {
        cout<<"Derived run \n";
    }
};

int main()
{
    return 0;
}