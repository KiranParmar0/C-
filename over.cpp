#include<iostream>
using namespace std;

class demo
{
    public:
    int i,j;
    void fun() // Def.
    {
    cout<<"Inside the fun\n";
    }
    void fun(int no)      //overloded def.
    {
    cout<<"Inside the fun\n";
    }
};

int main()
{

    return 0;
}