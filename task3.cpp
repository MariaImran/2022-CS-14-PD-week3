#include<iostream>
using namespace std;
main(){
float initialVelocity;
float acceleration;
float time;
float finalVelocity;
cout<<"Enter initial velocity:";
cin>> initialVelocity;
cout<<"Enter acceleration:";
cin>> acceleration;
cout<<"Enter time:";
cin>> time;
finalVelocity= initialVelocity+ (acceleration*time);
cout<<"Final velocity is:";
cout<<finalVelocity;
}