#include<iostream>

using namespace std;
class demo
{
    public:
    int i,j;
    static int x;

    demo(int a=10,int b=20)
    {
        cout<<"Inside the constructor \n";

        //(*this).i=a;
        this->i=a;
        this->j=b;

    }
    //void(demo*this,int no)
    void fun(int no)
    {
        cout<<"Inside the non static fun \n";
        cout<<this->i<<"\n";
        cout<<this->j<<"\n";
    }
    //static gun(int value)
    static gun(int value)
    {
        cout<<"Inside static gun \n";
    }
};
int demo::x=30;
int main()
{
    cout<<demo::x<<"\n";
    demo::gun(11);

    return 0;
}