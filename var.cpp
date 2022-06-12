#include<iostream>
using namespace std;

class Base
{
    public:
    int x,y;
};
class Deried : public Base
{
    int i,j;
}
};

int main()
{
    Base bobj;
    Deried dobj;

    Base *bp=new Base();
    Deried *dp= new Deried();

    Base *bp1=new Deried();
    Deried *dp = new Base();

    return 0;
}