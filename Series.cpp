#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int sum=0,num,i;
    cout<<"Enter last number : ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        sum=sum+i;  //pow ar jonno first a base then power hoba (2 3) aikahna 2 base and 3 power hoba
                    //header file <cmath> use kortah hoba
    }
    cout<<sum;


    getch();
}

