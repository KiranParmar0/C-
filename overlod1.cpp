#include<iostream>
using namespace std;
class Demo
{
    public:
    int x;
    int y;

    Demo(int i=0, int j=0)
    {
        x=i;
        y=j;
    }
};

Demo operator +(Demo op) //op=> Operand
{

}
Demo operator  - (Demo op)
{

}


int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);


    return 0;
}
