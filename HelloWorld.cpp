#include <iostream>
using namespace std;
int max(int n1, int n2);

int main()
{
    cout<< "Hello World" << endl;

    int a,b,res;

    res=a+b;

    cout<< "result " << res << endl;
    int n1=5;
    int n2=6;
    int ret;
    ret = max(n1,n2);
    cout<< "Max Val is :" << ret <<endl;
    return 0;
}

int max(int n1, int n2)
{
    int res;

    if(n1<n2)
        res=n1;

    else
        res=n2;

    return res;
}