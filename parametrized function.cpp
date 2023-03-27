#include<iostream>
using namespace std;
class students{
public :
    int id;
    double gpa;
    void display()
    {
        cout<<id<<"  "<<gpa<<endl;
    }
    void setvalue(int x, double y)
    {
        id = x;
        gpa = y;
    }
    students(int x, double y)
    {
        id = x;
        gpa = y;
    }

};
int main()
{
   students Sajid(101,3.56);
   Sajid.display();
}
