#include<iostream>
using namespace std;
main(){
int integar1;
int integar2;
int num1;
int num2;
int num3;
int num4;
int rem1;
int rem2;
int rem3;
int rem4;
int sum;
cout<<"Enter interger 1:";
cin>>integar1;
cout<<"Enter integar 2:";
cin>>integar2;
num1=integar1/10;
rem1=integar1%10;
num2=num1/10;
rem2=num1%10;
num3=num2/10;
rem3=num2%10;
num4=num3/10;
rem4=num3%10;
cout<<"Positions:"<<endl;
cout<<"Position 1=" <<rem4 <<endl;
cout<<"Position 2=" <<rem3 <<endl;
cout<<"Position 3=" <<rem2 <<endl;
cout<<"Position 4=" <<rem1 <<endl;
sum= (rem4+rem2)+(rem3*rem1);
cout<<"sum is";
cout<<sum;
}