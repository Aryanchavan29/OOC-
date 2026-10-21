#include<iostream>
#include<fstream>
using namespace std;

int main() {
ifstream fin("myfile.txt");
if (!fin) {
 cout<<"File not found"<<endl;
 return 1;
}
cout<<"File Opened successfully"<<endl;
fin.close();
return 0;
}

