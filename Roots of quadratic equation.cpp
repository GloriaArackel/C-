#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float a,b,c,root1,root2,d;
cout<<"Enter the three coefficients";
cin>>a>>b>>c;
if(a==0)
cout<<"The value of<<a<<should not be zero\n";
else
{
d=b*b-4*a*c;
if(d>0)
{
root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/(2*a);
cout<<"Roots are REAL and UNEQUAL \n";
cout<<"Root1="<<root1<<"\tRoot2="<<root2;
}
else if(d==0)
{
root1=-b/(2*a);
cout<<"Roots are REAL and EQUAL \n";
cout<<"Root1=""<<root1;
}
else
cout<<"Roots are COMPLEX and IMAGINARY";
}
return0;
}
