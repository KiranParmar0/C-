#include<iostream>
using namespace std;

void call_value(int no)
{
    no++;
}

void call_address(int *p)
{
    (*p)++;
}
void call_reference(int &ref)
{
    ref++;
}
int main()
{
    int a=10,b=10,c=10;

    call_value(a);
    cout<<a<<"\n";

    call_address(&b);
    cout<<b<<"\n";

    call_reference(c);
    cout<<c<<"\n";

    return 0;
}