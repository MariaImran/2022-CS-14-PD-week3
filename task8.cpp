#include<iostream>
using namespace std;
main(){
int num1;
int num2;
int num3;
int num4;
int sum;
int remainder1;
int remainder2;
int remainder3;
int remainder4;
cout<<"Enter four-digit number:";
cin>>num1;
remainder1=num1%10;
num2=num1/10;
remainder2=num2%10;
num3=num2/10;
remainder3=num3%10;
num4=num3/10;
remainder4=num4%10;
sum=remainder1+remainder2+remainder3+remainder4;
cout<<"Sum is:";
cout<<sum;
}