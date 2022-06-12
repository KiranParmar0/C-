#include <iostream>
using namespace std;
int main()

{
    typedef int Number;
    typedef char LETTER;

    Number no =11;
    LETTER ch = 'M';

    cout<<no<<"\n";
    cout<<sizeof(no)<<"\n";

    cout<<ch<<"\n";
    cout<<sizeof(ch)<<"\n";

    // const int *p=NULL
    typedef const int *CPTR;
    CPTR p=&no;
    cout<<*p<<"\n";

    return 0;
}

