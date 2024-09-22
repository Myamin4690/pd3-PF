 #include<iostream>
using namespace std;
main()
{
float i;
float p;
int chance;
cout<<"Enter the imposter count:";
cin>> i;
cout<<"Enter player count:";
cin>> p;
chance=(i/p)*100;
cout<<"chance of being an imposter:"<<chance<<"%";

}