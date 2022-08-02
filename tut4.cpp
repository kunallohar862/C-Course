#include<iostream>
using namespace std;
int glo=6;
void sum()
{
    int a;
    cout<<"\n"<<glo;
}
int main()
{
    // int a=4;
    // int b=5;

    int a=14,b=15; 
    float pi=3.14;
    char c='k';
    bool d=true;
    bool e=false;

    int glo=98;
    glo=56;     

    cout<<"ths is tutorial 4"<<endl;
    cout<<"here is the value of a : "<<a<<endl<<"here is the value of b : "<<b<<endl;
    cout<<"the value of pi : "<<pi<<endl;
    cout<<"the value of char : "<<c<<endl;
    cout<<"the value of bool : "<<d;
    cout<<"\nthe value of bool_e : "<<e;

    sum(); 
    cout<<"\n"<<glo;
    return 0;
}