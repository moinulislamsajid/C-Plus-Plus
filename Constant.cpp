#include<iostream>
using namespace std;

class student
{
 public :
     int addmissionFee;
     student(int x)
     {
         addmissionFee = x;
         cout<<addmissionFee <<endl;
     }

};
int main()
{
    student(100000);
}
