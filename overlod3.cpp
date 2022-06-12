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

Demo operator ++(Demo &op) // Per increment
{
    cout<<"Insied 1st \n";
    op.x++;
    op.y++;
    return op;
}

Demo operator ++(Demo &op,int) //int = demo argument, Post increment
{
    cout<<"Insied 2st \n";
    op.x++;
    op.y++;
    return Demo(op.x-1,op.y-1);
}

Demo operator --(Demo &op) // Per decrement
{
    cout<<"Insied 3st \n";
    op.x--;
    op.y--;
    return op;
}

Demo operator --(Demo &op,int) //int = demo argument, Post decrement
{
    cout<<"Insied 4st \n";
    op.x--;
    op.y--;
    return Demo(op.x+1,op.y+1);
}

int main()
{
    Demo obj1(10,20),obj2(10,20);
    Demo robj1(0,0),robj2=(0,0);

    robj1= ++obj1; //without dummy
    cout<< obj1.x<<" "<<obj1.y <<"\n"; //11 21
    cout<< robj1.x<<" "<<robj1.y <<"\n"; //11 21

    robj2= obj2++; // with dummy
    cout<< obj2.x<<" "<<obj2.y <<"\n"; //11 21
    cout<< robj2.x<<" "<<robj2.y <<"\n"; //10 20

    Demo obj3(10,20), obj4(10,20);
    Demo robj3(0,0),robj4=(0,0);

    robj3= --obj3; //without dummy
    cout<< obj3.x<<" "<<obj3.y <<"\n"; //9 19
    cout<< robj3.x<<" "<<robj3.y <<"\n"; //9 19

    robj4= obj4--; // with dummy
    cout<< obj4.x<<" "<<obj4.y <<"\n"; //9 19
    cout<< robj4.x<<" "<<robj4.y <<"\n"; //10 20

    return 0;
}
