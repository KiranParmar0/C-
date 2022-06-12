#include<iostream>

using namespace std;

class demo
{
    public:
    //addition@2ii
    int addtion(int no1,int no2)
    {
        int ans=0;
        ans=no1+no2;
        return ans;
    }
    //addition@3iii
    int addtion(int no1,int no2,int no3)
    {
        int ans=0;
        ans=no1+no2+no3;
        return ans;
    }
    //addition@4iiii
    int addtion(int no1,int no2,int no3,int no4)
    {
        int ans=0;
        ans=no1+no2+no3+no4;
        return ans;
    }
};
int main()
{
    demo obj;
    int ret=0;
    cout<<ret<<"\n";

    ret=obj.addtion(10,11);    //obj.addition@2ii(10,11);
    cout<<ret<<"\n";

    ret=obj.addtion(10,11,21);  //obj.addition@2ii(10,11,21);
    cout<<ret<<"\n";

    ret=obj.addtion(10,11,21,51);  ////obj.addition@2ii(10,11,21,51);
    cout<<ret<<"\n";
    return 0;
}