#include<iostream>
using namespace std;
int main()
{
   int a,b,c;

   cout<<"Enter any 3 no. : ";
   cin>>a>>b>>c;

   if (a>b?a:b)
   {
       cout<<a<<" is grater";

   }
   else if(b>c?b:c)
   {
       cout<<b<<" is grater";
   }
   else
   {
       cout<<c<<" is grater";
   }

}