#include <iostream>
using namespace std;

int main()
{
    struct Demo
    {
        int mo1;
        int no2;
    };

    typedef struct Demo DEMO;
    typedef struct Demo *PDEMO;
    typedef struct Demo **PPDEMO;

    /*
    same as line no 7-15
    typedef struct Demo
    {
        int no1,no2;
    }DEMO,*PPDEMO,**PPDEMO;
    */
    //struct Demo obj;
    DEMO obj;
    //struct Demo *p=&obj;
    PDEMO p =&obj;

    //struct Demo **q=&p;
    PPDEMO q =&p;

    return 0;
}