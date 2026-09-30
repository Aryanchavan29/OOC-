#include <iostream>
using namespace std;
class student
{
    int roll;
    char name[30];
public:
    void getdata()
    {
        cout << "\nEnter roll: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
    }
    void putdata()
    {
        cout << "\n--- Student Details ---\n";
        cout << "Roll no: " << roll << endl;
        cout << "Student name: " << name << endl;
    }
};
class studentexam : public student
{
public:
    int sub1, sub2, sub3, sub4, sub5, sub6;
    void acceptmarks()
    {
        cout << "Enter marks of subject 1: ";
        cin >> sub1;
        cout << "Enter marks of subject 2: ";
        cin >> sub2;
        cout << "Enter marks of subject 3: ";
        cin >> sub3;
        cout << "Enter marks of subject 4: ";
        cin >> sub4;
        cout << "Enter marks of subject 5: ";
        cin >> sub5;
        cout << "Enter marks of subject 6: ";
        cin >> sub6;
    }
    void displaymarks()
    {
        cout << "\n--- Exam Marks ---\n";
        cout << "Subject 1: " << sub1 << endl;
        cout << "Subject 2: " << sub2 << endl;
        cout << "Subject 3: " << sub3 << endl;
        cout << "Subject 4: " << sub4 << endl;
        cout << "Subject 5: " << sub5 << endl;
        cout << "Subject 6: " << sub6 << endl;
    }
};
class studentresult : public student
{
public:
    int marks;
    void getresult()
    {
        cout << "Enter total marks: ";
        cin >> marks;
    }
    void displayresult()
    {
        cout << "\n--- Student Result ---\n";
        putdata();
        cout << "Total Marks: " << marks << endl;
    }
};
int main()
{
    studentexam obj1;
    studentresult obj2;
    obj1.getdata();
    obj1.putdata();
    obj1.acceptmarks();
    obj1.displaymarks();
    obj2.getdata();
    obj2.getresult();
    obj2.displayresult();
    return 0;
}    


