#include<iostream>
using namespace std;
class student
{
public :

    void display()
    {
        cout<<"I am a person " <<endl;

    }
};
class teacher : public student
 {
    //display()
public :
    void display()
    {
        cout << "I am a student"<<endl;
    }
};
class person : public teacher
{
    //display()
   public :
    void display()
    {
        cout<<"I am a person"<<endl;


        cout<<"I am a person"<<endl;


        cout<<"I am a person"<<endl;
    }


};
int main()
{
    student s;
    s.display();

    teacher t;
    t.display();

    person p;
    p.display();
}
