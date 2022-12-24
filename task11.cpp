#include<iostream>
using namespace std;
main(){
float vegetablePricePerKg; 
float fruitPricePerKg;
int totalKgOfVegetables;
int totalKgOfFruits;
float total;
float fruitcost;
float vegetablecost;
float coinRate;
coinRate=0.194;
cout<<"Enter price of vegetables per kg:";
cin>>vegetablePricePerKg;
cout<<"enter price of fruits per kg:";
cin>>fruitPricePerKg;
cout<<"Enter total kgs of vegetables:";
cin>>totalKgOfVegetables;
cout<<"Enter total kgs of fruits:";
cin>>totalKgOfFruits;
vegetablecost=coinRate*totalKgOfVegetables;
cout<<"Vegetables Cost:";
cout<<vegetablecost;
cout<<endl;
fruitcost=coinRate*totalKgOfFruits;
cout<<"Fruits cost:";
cout<<fruitcost;
cout<<endl;
total=fruitcost+vegetablecost;
cout<<"Total cost is:";
cout<<total;
}
