#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter any two numbers for the ariyhmetic operation:";
    cin>>a>>b;
    cout<<"a+b="<<a+b<<endl;
    cout<<"a-b="<<a-b<<endl;
    cout<<"a*b="<<a*b<<endl;

    if(b!=0)
    {
        cout<<"a/b="<<a/b<<endl;

    }
    else
    {
        cout<<"result is not possible";

    }


}
