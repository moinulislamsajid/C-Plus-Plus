#include<iostream>
using namespace std;
int main()
{
    int main[2][3];
    A[0][0]=20;
    A[0][1]=30;
    A[0][2]=40;

    A[1][0]=50;
    A[1][1]=60;
    A[1][2]=70;

    for(int row=0; row<2; row++)
    {
            for(int col=0; col<2; col++)
            {
                cout<< A[row][col] <<" ";
            }
            cout<<endl;

    }


}
