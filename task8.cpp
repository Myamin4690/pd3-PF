 #include<iostream>
using namespace std;
main()
{
float veg_price;
float fruits_price;
int total_veg;
int total_fruits;
int total_earnings;
cout<<"Enter vegetable price per kilogram (in coins):";
cin>> veg_price;
cout<<" Enter fruits price per kilogram (in coins):";
cin>> fruits_price;
cout<<" Enter total kilograms  of vegetables:";
cin>> total_veg;
cout<<" Enter total kilograms of fruits:";
cin>> total_fruits;
total_earnings=(veg_price*total_veg+fruits_price*total_fruits)/1.94;
cout<<"Total earnings in Rupees:"<<total_earnings<<endl;



 






}