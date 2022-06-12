#include<iostream>
using namespace std;

class Arthematic
{
    public:
    //Characteristics
    int ivalue1;
    int ivalue2;

    //Beaviour
    Arthematic()   // Default Constructor
    {
        cout<<"Inside default constuctor\n";
        ivalue1 = 0;
        ivalue2 = 0;
    }
    Arthematic(int A ,int B)   // parametrised Constructor
    {
        cout<<"Inside parametrised constuctor\n";
        ivalue1 = A;
        ivalue2 = B;
    }
    ~Arthematic()   // Distructor
    {
        cout<<"Inside Distructor \n";
    }
    int add()
    {
    int ians=0;
    ians = ivalue1+ivalue2;
    return ians;
    }
    int sub()
    {
    int ians=0;
    ians = ivalue1 - ivalue2;
    return ians;
    }
};

int main()
{
    int no1=0,no2=0,iRet=0;

    cout<<"Enter fist number \n";
    cin>>no1;

    cout<<"Enter sencond number \n";
    cin>>no2;

    Arthematic obj1;
    Arthematic obj2(no1,no2);

    iRet=obj1.add();
    cout<<"Addtion is :"<<iRet<<"\n";

    iRet=obj1.sub();
    cout<<"Addtion is :"<<iRet<<"\n";

    iRet=obj2.add();
    cout<<"Addtion is :"<<iRet<<"\n";

    iRet=obj2.sub();
    cout<<"Addtion is :"<<iRet<<"\n";

    return 0;
}