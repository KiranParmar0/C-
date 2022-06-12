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
        static int j=10;
        cout<<"Inside the non static fun \n";
        cout<<this->i<<"\n";
        cout<<this->j<<"\n";
        cout<<demo::x<<"\n";
    }
    //static gun(int value)
    static gun(int value)
    {
        cout<<"Inside static gun \n";
        //cout<<this->i<<"\n"; error
    }
};
int demo::x=30;
int main()
{

    cout<<demo::x<<"\n";
    demo::gun(11);

    demo obj(11);
    obj.fun(21); //fun(&obj,21);
    cout<<"inside main function\n";
    cout<<sizeof(obj)<<"\n";
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";

    obj.gun(11);//demo::gun(11);

    return 0;
}