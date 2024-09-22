 #include<iostream>
using namespace std;
main()
{
float sizeb;
float costb;
float costf;
float area;
float costf_persquare;
cout<<"Enter the size of the fertilizer bag in pounds:";
cin>> sizeb;
cout<<"Enter the cost of bag:$";
cin>> costb;
cout<<"Enter the area in square feet that can be covered by the bag: "<<endl;
cin>> area;
costf=costb/sizeb;
costf_persquare=sizeb*area;
cout<<"cost of fertilizer per pound:$"<<costf<<endl;
cout<<"cost of fertilizing per square foot:$"<<costf_persquare<<endl;



}