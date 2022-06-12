#include<iostream>

using namespace std;

class Base
{
    public:
    int x,y;

    Base()
    {
        cout<<"Inside the Bese constructor \n";
    }
    ~Base()
    {
        cout<<"Inside Bese destructor \n";
    }

};
class Dirived : public Base
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