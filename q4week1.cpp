#include<iostream>
using namespace std;
int main()
{
    int phy,chm,bio,comp,mth,sum;
    float percentage;
    cout<<"enter mark of physics:"<<endl;
    cin>>phy;
    cout<<"enter mark of  chemistry:"<<endl;
    cin>>chm;
    cout<<" enter mark of computer:"<<endl;
    cin>>comp;
    cout<<"enter mark of mathematics:"<<endl;
    cin>>mth;
    cout<<"enter mark of biology:"<<endl;
    cin>>bio;
    sum=phy+chm+bio+comp+mth;
    percentage=sum/5;
    cout<<"total mark is:"<<sum<<endl;
    cout<<"percentage :"<<percentage<<"%"<<endl;
    if(percentage>=90)
    {
        cout<<"A grade";

    }
    else if(percentage>=80)
    {
        cout<<"B grade";
    }
    else if(percentage>=70)
    {
        cout<<"C grade";
    }
    else if(percentage>=60)
    {
        cout<<"D grade";
    }
    else if(percentage>=40)
    {
        cout<<"E grade";
    }
    else
    {
        cout<<"fail F grade";
    }
    return 0;


}
