#include<iostream>
using namespace std;
int main()
{
int num,rev=0,digit,temp;
cout<<"Enter a number \t";
cin>>num;
temp=num;
while(num>0)
{
digit=num%10;
rev=rev*10+digit;
num=num/10;
}
if(temp==rev)
cout<<temp<<"is palindrome";
else
cout<<temp<<"is not palindrome";
return0;
}