#include<iostream>
using namespace std;
main(){
float bagSize;
float costOfBag;
float area;
float costOfFertilizer;
cout<<"Enter size of bag in pounds:";
cin>> bagSize;
cout<<"Enter cost of the bag:";
cin>> costOfBag;
cout<<"Enter area in square feet covered by bag:";
cin>> area;
costOfFertilizer= costOfBag/bagSize;
cout<<"Cost of fertilizer per pound is:";
cout<< costOfFertilizer;
float costPerSquareFeet;
costPerSquareFeet= area*bagSize;
cout<<endl;
cout<<"Cost of fertilizing the area per square feet";
cout<< costPerSquareFeet;
}