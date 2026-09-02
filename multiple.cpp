#include <iostream>
using namespace std;

class student 
{
    int roll;
    char name[30];
public:
    void getdata() {
        cout << "\n";
        cout << "Enter roll: \n";
        cin >> roll;
        cout << "Enter name: \n";
        cin >> name;
    }
    void putdata() {
        cout << "\n--- Student Marklist ---\n";
        cout << "Roll no: " << roll << "\n";
        cout << "Student name: " << name << endl;
    }
};
class studentexam 
{
public:
    int sub1, sub2, sub3, sub4, sub5, sub6;
    float per;
    void acceptdata() {
        getdata();
        cout << "Enter marks sub1: ";
        cin >> sub1;
        cout << "Enter marks sub2: ";
        cin >> sub2;
        cout << "Enter marks sub3: ";
        cin >> sub3;
        cout << "Enter marks sub4: ";
        cin >> sub4;
        cout << "Enter marks sub5: ";
        cin >> sub5;
        cout << "Enter marks sub6: ";
        cin >> sub6;
    }
    
    void displaydata() {
        putdata();
        cout << "Marks of subject 1: " <<sub1 <<endl;
        cout << "Marks of subject 2: " <<sub2 <<endl;
        cout << "Marks of subject 3: " <<sub3 <<endl;
        cout << "Marks of subject 4: " <<sub4 <<endl;
        cout << "Marks of subject 5: " <<sub5 <<endl;
        cout << "Marks of subject 6: " <<sub6 <<endl;
    }
};
class studentresult : public studentexam , public student
public:
    void calculate() {
        per = (sub1 + sub2 + sub3 + sub4 + sub5 + sub6) / 6.0;
        cout << "Total percentage: " << per << "%\n";
    }
};

int main() {
    int cnt, i;
    cout << "Enter no of students you want: ";
    cin >> cnt;
    
    for(i = 0; i < cnt; i++) {
        studentresult str;
        str.acceptdata();                                                                        
        str.displaydata();
        str.calculate();
    }
    return 0;
}
