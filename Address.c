##include<stdio.h>
#include<stdlib.h>
//extern
int arr[4]={10,20,30,40};
int no;
int main()
{
    //auto
    int brr[3]={11,12,13};

    int *p=NULL;
    //static
    static int value =11;

    // register
    register int x=15;
    //Dynamic memory
    p=(int *)mmalloc(sizeof(int)*3);

    printf("Jay ganesh \n");

    return 0;
}