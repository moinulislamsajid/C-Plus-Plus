#include<iostream>
using namespace std;
class students{
public :
    int id;
    double gpa;
    void display()
    {
        cout<<id<<"   "<<gpa<<endl;
    }


};
int main()
{
    students Sajid,Roman;
    Sajid.id = 1010;
    Sajid.gpa = 3.56;
    Sajid.display();

    Roman.id=3030;
    Roman.gpa=3.79;
    Roman.display();





}
