#include<iostream>
using namespace std;
class person
{
public :
    string name;
    int age;
    void display1()
    {
        cout<<"Name : " <<endl<<"Age : "<<age;
    }
} ;
class student : public person
{
   public :
       int id;
       void display2()
          {

            display1();
       }

};

int main()
{
    student s1;
    s1.id = 101;
    s1.name = "Sajid";
    s1.age = 27;
    s1.display1();
}
