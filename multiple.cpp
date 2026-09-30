#include <iostream>
using namespace std;
class Student
{
public:
    int roll;
    char name[30];
    void getdata()
    {
        cout << "\nEnter the roll no: ";
        cin >> roll;
        cout << "Enter the name: ";
        cin >> name;
    }
};
class Marks
{
public:
    int marks;
    void getResult()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }
};
class Result : public Student, public Marks
{
public:
    void display()
    {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
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

