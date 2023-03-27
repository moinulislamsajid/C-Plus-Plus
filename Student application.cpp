#include<iostream>
using namespace std;
int main()
{
  int n,sum=0;
  cout<<"Enter Number of student : ";
  cin>>n;
  int student[n];
  //input
  for(int i=0; i<n; i++)
  {
      cout<<"Student " <<i+1 <<" =  ";
      cin >> student[i];
      sum=sum+student[i];
  }
  cout<<"Total Marks : " <<sum<<endl;
  float avg = (float)sum/n;
  cout<<"Average : " <<avg;
  //maxium student
  int max = student[0];
  int min = student[0];
  for(int i=1; i<n; i++)
  {
      if(max<student[i])
      {
          max=student[i];
      }
      if(min>student[i])
      {
          min=student[i];
      }
  }
  cout<<endl<<"Maximum Marks : "<<max;
  cout<<endl<<"Manimum Marks : "<<min;
}
