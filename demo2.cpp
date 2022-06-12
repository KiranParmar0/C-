#include<iostream>

using namespace std;
class demo
{
    public;
    int x;
    int y;
    void fun()
    {
        cout<<"inside fun \n";
    }
};
int main()
{
    demo obj;

    demo *ptr=NULL;

    ptr = new demo;

    obj.fun();

    ptr-> fun();

    delete ptr;

	return 0;
}
