#include <iostream>
using namespace std;
class student{
public:
   string name;
   int marks;
   student(string n,int m){
      name=n;
      marks=m;
}
   friend class Result;
};
class Result{
public:
   void displayResult (student s) 
   {
   cout<<"Name:"<<s.name<<endl;
   cout<<"Marks:"<<s.marks<<endl;
}
};
int main()
{
student s1("Aryan",98);
Result r;
r.displayResult(s1);
return 0;
}

