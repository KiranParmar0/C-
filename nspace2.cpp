#include<iostream>
namespace kiran
{
    void fun()
    {
        std::cout<<"Inside kiran \n";
    }
}
namespace parmar
{
    void fun()
    {
        std::cout<<"Inside parmar \n";
    }
}
int main()
{
    std::cout<<"Jay ganesh \n";
    using namespace kiran;
    using namespace parmar;
    fun();

    return 0;
}
int main()
{
    std::cout<<"Jay ganesh \n";
    using namespace kiran;
    fun();

    return 0;
}
int main()
{
    std::cout<<"Jay ganesh \n";
    using namespace kiran;
    fun();

    return 0;
}