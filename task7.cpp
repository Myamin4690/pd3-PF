 #include<iostream>
using namespace std;
main()
{
string name;
int atprice;
int ctprice;
int total_at;
int total_ct;
float pcharity;
float total_amount;
float donation;
cout<<"Enter the movie name:";
cin>> name;
cout<<"Enter the adult ticket price:$";
cin>> atprice;
cout<<"Enter the child ticket price:$";
cin>> ctprice;
cout<<"Enter the number of adults tickets sold:";
cin>> total_at;
cout<<"Enter the number of child tickets sold:";
cin>> total_ct;
cout<<"Enter the percentage of the ammount to be donated to charity:";
cin>> pcharity;
total_amount=(atprice*total_at)+(ctprice*total_ct);
cout<<"Total amount generated from ticket sales:$"<<total_amount<<endl;
donation=(pcharity/100)*total_amount;
cout<<"Donation to charity"<<pcharity<<"is:"<<donation<<endl;



}