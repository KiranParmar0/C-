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
    using namespace kiran;
    fun();

    return 0;
}

