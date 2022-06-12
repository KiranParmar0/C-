#include <iostream>
using namespace std;

class Demo
{
    public:
    int Add(int no1, int no2);   // Not inline function
    inline int Sub(int no1,int no2); //Inline function
    int Mult(int no1,int no2)      //Inline function
    {
        int ans=0;
        ans= no1*no2;
        return ans;
    }
};
int Demo:: Add(int no1, int no2)
{
    int ans=0;
    ans=no1+no2;
    return ans;
}
int Demo:: Sub(int no1,int no2)
{
    int ans=0;
    ans=no1-no2;
    return ans;
}
int main()
{
    Demo obj;
    cout<<"Size of obj:"<<sizeof(obj)<<"\n"; // Size of obj:1
    int ret=0;

    ret =obj.Add(10,11);
    cout<<"Addition is:"<<ret<<"\n"; //Addition is: 21

    ret =obj.Sub(10,11);
    cout<<"Subtraction is:"<<ret<<"\n"; //Subtraction is:-1

    ret =obj.Mult(10,11);
    cout<<"Multiplication is:"<<ret<<"\n"; //Multiplication is:110

    return 0;
}
