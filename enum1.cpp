#include<iostream>
using namespace std;
int main()
{
    enum Class{ PPA=0, LB=1,LSP=3,Paython=4};
    const int Fees[]={15000,16000,17000,18000};
    const float Duration[]={3.5,4.0,3.5,4.5};
    int choice=0;

    cout<<"Select the batch taht you want to join \n";
    cout<<"0= PPA\n";
    cout<<"1=LB \n";
    cout<<"3=LSP \n";
    cout<<"4= Paython \n";
    cin>>choice;


    switch(choice)
    {
        case PPA:
            cout<<"Thank for selecting PPA Batch \n";
            cout<<"Duration is %f"<<Duration[PPA]<<"\n";
            cout<<"Fees of the Batch %d"<<Fees[PPA]<<"\n";
            break;
        case LB:
            cout<<"Thank for selecting PPA Batch \n";
            cout<<"Duration is %f "<<Duration[LB]<<"\n";
            cout<<"Fees of the Batch %d"<<Fees[LB]<<"\n";
            break;
        case LSP:
            cout<<"Thank for selecting PPA Batch \n";
            cout<<"Duration is %f"<<Duration[LSP]<<"\n";
            cout<<"Fees of the Batch %d"<<Fees[LSP]<<"\n";
            break;
        case Paython:
            cout<<"Thank for selecting PPA Batch \n";
            cout<<"Duration is %f "<<Duration[Paython]<<"\n";
            cout<<"Fees of the Batch %d"<<Fees[Paython]<<"\n";
            break;
        default:
        cout<<"Ther is no such batch please contact 879658007 thank for visiting ";
        break;
    }

    return 0;
}