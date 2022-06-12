#include<iostream>

using namespace std;

int main()
{
	int Arr[10];
	int *p = NULL;
	
	//p=(int *)malloc(sizeof(int)*10);

	p=new int[10];

	if(p==NULL)
	{
	    cout<<"Unable to allocat memoery";
	}
    else
    {
        cout<<"Allocat the memory "<<p<<"\n";
    }

    //free(p);
    delete []p;

	return 0;
}
