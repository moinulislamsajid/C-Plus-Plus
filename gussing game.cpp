#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int guessn,randn,guesslimit;
    cout<<"Enter a guess number 1 to 5 : ";
    cin>>guessn;
    guesslimit=3;

    randn = 1+rand()%5;
    if(guessn==randn)
    {
        cout<<"You Win\a\n";
    }
    else{
        cout<<"You have Lost!\n";
    }
}

