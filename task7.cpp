#include<iostream>
using namespace std;
main(){
string movieName;
int adultTicketPrice;
int childTicketPrice;
int numOfAdTicSold;
int numOfChTicSold;
float percentageDonate;
float totalAmountGenerated;
float amountAfterDonation;
cout<<"Enter movie name:";
cin>>movieName;
cout<<"enter adult ticket price:";
cin>>adultTicketPrice;
cout<<"enter child ticket price:";
cin>>childTicketPrice;
cout<<"enter number of adult tickets sold:";
cin>>numOfAdTicSold;
cout<<"enter number of child tickets sold:";
cin>>numOfChTicSold;
cout<<"enter percentage donate:";
cin>>percentageDonate;
totalAmountGenerated=(adultTicketPrice*numOfAdTicSold)+(childTicketPrice*numOfChTicSold);
amountAfterDonation=totalAmountGenerated-percentageDonate;
cout<<"Total amount generated is:";
cout<<totalAmountGenerated;
cout<<"Amount generated after donation:";
cout<<amountAfterDonation;
}