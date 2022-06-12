#include<iostream>

using namespace std;

class Base1
{
    public:
    int x,y;

    Base1()
    {
        cout<<"Inside the Bese 1 constructor \n";
    }
    ~Base1()
    {
        cout<<"Inside Bese 1 destructor \n";
    }

};
class Base2
{
    public:
    int x,y;

    Base2()
    {
        cout<<"Inside the Bese 2 constructor \n";
    }
    ~Base2()
    {
        cout<<"Inside Bese 2 destructor \n";
    }

};
class Dirived : public Base2,Base1
{
    public:
    int a,b,c;
    Dirived()
    {
        cout<<"Inside the Dirived constructor \n";
    }
    ~Dirived()
    {
        cout<<"Inside dirived destructor \n";
    }

};
class Dirived1 : public Dirived
{
    public:
    int a,b,c;
    Dirived1()
    {
        cout<<"Inside the Dirived 1 constructor \n";
    }
    ~Dirived1()
    {
        cout<<"Inside dirived 1 destructor \n";
    }

};
int main()
{
    Dirived1 obj;

    return 0;
}