#include<iostream>
using namespace std;
class MobileUser
{
 public :
     void call()
     {
         cout << "Hello !"<<endl;
     }
     virtual void sentmessage()=0;

};
class sajid : public MobileUser
{
public :
    void sentmessage()
    {
        cout<<"Hi ,This is Sajid"<<endl;
    }
};
class Sakib : public MobileUser
{
public :
    void sentmessage()
    {
        cout<<"Hi ,This is Sakib"<<endl;
    }
};

int main()
{
   MobileUser *m;

   sajid s;
   Sakib k;

   m=&s;
   m->sentmessage();

   m=&k;
   m->sentmessage();
}
