#include<iostream>
using namespace std;
int main()
{
    char alp;
    cout<<"enter the alphabet:"<<endl;
    cin>>alp;

    switch(alp)
    {
    case 'a':
        cout<<alp<<"alphabet is a vowel";
        break;
    case 'A':
        cout<<alp<<"alphabet is a vowel";
        break;
    case 'e':
        cout<<alp<<"alphabet is a vowel";
        break;
    case 'E':
         cout<<alp<<"alphabet is a vowel";
         break;
    case 'i':
         cout<<alp<<"alphabet is a vowel";
        break;
    case 'I':
         cout<<alp<<"alphabet is a vowel";
        break;
    case 'o':
         cout<<alp<<"alphabet is a vowel";
        break;
    case 'O':
         cout<<alp<<"alphabet is a vowel";
        break;
    case 'u':
         cout<<alp<<"alphabet is a vowel";
        break;
    case 'U':
         cout<<alp<<"alphabet is a vowel";
        break;

    default:
        cout<<alp<<"alphabet is a consonant";
        break;
    }
    return 0;
}
