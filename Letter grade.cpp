#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter a Marks : ";
    cin>>marks;
    if(marks>100)
    {
        cout<<"Invalid Marks";
    }
    else if(marks>=80)
    {
        cout<<"A+";
    }
     else if(marks>=70)
    {
        cout<<"A";
    }

     else if(marks>=60)
    {
        cout<<"A-";
    }
     else if(marks>=50)
    {
        cout<<"B";
    }
     else if(marks>=40)
    {
        cout<<"C";
    }
     else if(marks>=33)
    {
        cout<<"D";
    }
    else{
        cout<<"F";
        cout<<endl;
        cout<<"Don't Afset please try again!";
    }

    getch();
}
