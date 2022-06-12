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
            i++; //Allpwed
           // j++; Not Allowed
        }
        void gun(int a , const int b) const
        {
            int x=10;
            const int y=20;
            cout<<"Inside gun \n";
            i++; //Not Allowed
            // j++; Not Allowed

            x++;// Allowed
            //y++;  Not Allowed

            a++; //Allowed
            // b++ not allowed
        }
};

int main()
{
   Demo obj(11,21);

    return 0;
}