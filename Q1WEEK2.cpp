#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int num,sum=0,mod;
printf("Enter a number: \n");
scanf("%d", &num);
while(num>0){
    mod=num%10;
    sum=sum+mod;
    num=num/10;
}
printf("Sum of the integers of the number is %d", sum);
}

