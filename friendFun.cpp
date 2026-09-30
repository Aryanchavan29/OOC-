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
   friend void studentDetails(student);
};
void studentDetails(student s)
   {
   cout<<"Name:"<<s.name<<endl;
   cout<<"Marks:"<<s.marks<<endl;
   }
int main()
{
student s1("Aryan",98);
studentDetails(s1);
return 0;
}

