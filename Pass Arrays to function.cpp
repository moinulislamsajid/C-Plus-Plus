#include<iostream>
using namespace std;
void displayArry(int num[] , int size){
    for(int i=0; i<size; i++)
        cout<<num[i]<<"  ";
}
int main()
{
    int number[5]={10,20,30,40,50};
    displayArry(number,5);

}
