#include<iostream>

namespace kiran
{
    void fun()
    {
        std::cout<<"Inside fun \n";
    }

}
int main()
{
    std::cout<<"Jay ganesh \n";
    kiran::fun();
    return 0;
}