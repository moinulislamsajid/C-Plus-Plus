#include<iostream>
using namespace std;
template <class myfirsttem>

 myfirsttem add( myfirsttem a, myfirsttem b)
{
    return a+b;
}
/*double sum(double x,double y)
{
    return x+y;
}*/
int main()
{
    cout<<add(10,20)<<endl;
    cout<<add(10.20,30.30);
}
