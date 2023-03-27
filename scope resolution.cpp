#include<iostream>
using namespace std;
int x = 10;
int main()
{
    int x = 50;
    :: x = 80;
    cout<<::x<<endl;//:: ai vabe global variable print kortah hoi
    // (: :)scope resolution operator
}
