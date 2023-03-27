#include<iostream>
using namespace std;

class student
{
private :
    string name;
public :
    void setname(string x)
    {
        name = x;
    }
};
int main()
{
    student a1;
    a1.setname("Ayman Sajid");

}
