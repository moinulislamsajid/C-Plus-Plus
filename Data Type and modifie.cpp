#include<iostream>
using namespace std;
int main()
{
    int marks[5];

    marks[0]=50;
    marks[1]=70;
    marks[2]=60;
    marks[3]=40;
    marks[4]=90;

    /*cout<<marks[0] << "  ";
    cout<<marks[1] << "  ";
    cout<<marks[2] << "  ";
    cout<<marks[3] << "  ";
    cout<<marks[4] << "  ";*/
    for(int i=0; i<=4; i++)
    {
        cout <<"  "<<marks[i];
    }

}
