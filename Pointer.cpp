#include<iostream>
using namespace std;
int main()
{
    int num1 = 10;
    int num2 = 20;
    int *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;

    int sum = *ptr1 + * ptr2;
    cout<<sum;



   /* int x=5;
    int *p;
    p = &x;


    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<*p<<endl;*/
}
