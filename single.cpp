#include<iostream>
using namespace std;
class Student
{
public:
int roll;
char name[30];
int marks;
  void getdata()
  {
    cout<<"\n Enter the roll no:";
    cin>>roll;
    cout<<"\n Enter the name :";
    cin>>name;
  }
  void getResult()
   {
     cout<<"Enter marks";
     cin>>marks;
   }
};
class Result : public Student
{
public:
  void display()
   {
      cout<<"\n Student Details"<<endl;
      cout<<"Name: "<<name<<endl;
      cout<<"Roll Number :"<<roll<<endl;
      cout<<"Marks :"<<marks<<endl;
   }   
};
int main()
{
  Result obj;
  obj.getdata();
  obj.getResult();
  obj.display();
return 0;
}
