#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;

        Demo() : j(20)
        {
            i = 10;
            // j = 20;
        }

        Demo(int a, int b) :j(b)
        {
            i=a;
        }
        void fun()
        {
            cout<<"Inside fun\n";
            i++;
           // j++; Not Allowed
        }
        void gun() const
        {
            cout<<"Inside gun \n";
            i++;
            // j++; Not Allowed
        }
};

int main()
{
   Demo obj(11,21);


    return 0;
}