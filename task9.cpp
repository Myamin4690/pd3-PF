#include<iostream>
using namespace std;
main()
{
int n,n1,n2,n3,n4;
 int sum;
cout<<"Enter a 4-digit number:";
cin>> n;
n1=n/1000;
n2=(n%1000)/100;
n3=(n%100)/10;
n4=n%10;
sum=n1+n2+n3+n4;
cout<<"sum of individaul digits:"<<sum;






}