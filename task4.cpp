#include<iostream>
using namespace std;
main(){
string name;
float subject1;
float subject2;
float subject3;
float subject4;
float subject5;
float percentage;
int totalMarks=500;
float marksObtained;
cout<<"Enter name:";
cin>> name;
cout<<"Enter subject 1 marks:";
cin>> subject1;
cout<<"Enter subject 2 marks:";
cin>> subject2;
cout<<"Enter subject 3 marks:";
cin>> subject3;
cout<<"Enter subject 4 marks:";
cin>> subject4;
cout<<"Enter subject 5 marks:";
cin>> subject5;
marksObtained= subject1+subject2+subject3+subject4+subject5;
percentage=(marksObtained*100)/totalMarks;
cout<<"your name is:";
cout<< name;
cout<<endl;
cout<<"Your percentage is:";
cout<<percentage;
}