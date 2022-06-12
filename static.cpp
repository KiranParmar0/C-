#include<iostream>

using namespace std;

class Demo
{
    public:
    int i,j;
    static int x;
    Demo()
    {
        cout<<"incide the Default counstructor \n";
       i=10;
       j=20;
    }
    ~Demo()
    {
        cout<<"incide the Default decstructor \n";
    }
};
int Demo ::x=30;
int main()
{
    cout<<Demo::x<<"\n"; //30
    Demo obj1;
    Demo obj2;
    cout<<sizeof(obj1)<<"\n"; //8
    cout<<sizeof(obj2)<<"\n"; //8

    cout<<obj1.i<<"\n"; //10
    cout<<obj2.i<<"\n"; //10

    return 0;
}