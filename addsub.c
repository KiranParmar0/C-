#include<stdio.h>
float add(float no1,float no2)
{
    float ians=0;
    ians= no1+no2;
    return ians;
}
float sub(float no1,float no2)
{
    float ians=0;
    ians= no1-no2;
    return ians;
}

int main()
{
    float no1=0,no2=0,iRet=0;
    printf("Enter 1st number \n");
    scanf("%f",&no1);
    printf("Enter 2st number \n");
    scanf("%f",&no2);

    iRet = add(no1,no2);
    printf("The addition of %f and %f is %f \n",no1,no2,iRet);

    iRet = sub(no1,no2);
    printf("The Subtraction of %f and %f is %f \n",no1,no2,iRet);
    return 0;
}