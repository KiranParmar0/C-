#include<iostream>

using namespace std;

class Demo
{
    public:
        int i;
        const int j;

        Demo():j(20)
        {
            i=10;
            //j=20;
        }
        Demo(int a, int b):i(a),j(b)
        {
            cout<<"Insied paramiter\n";
        }
};

int main()
{
    Demo obj1;
    Demo obj(11,21);
    obj.i++;
    obj1.i++;

    //obj.j++;  //Erorr
    //obj1.j++; //Erorr

    cout<<obj1.i<<"\n";
    cout<<obj1.j<<"\n";

    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    return 0;
}

