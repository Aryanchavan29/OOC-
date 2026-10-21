#include<iostream>
#include<fstream>
using namespace std;

int main() {
ofstream fout("example.txt");
fout<<"Hello Universe";
cout<<"Write position:"<<fout.tellp()<<endl;
fout.close();

ifstream fin("example.txt");
fin.seekg(6);
string word;
fin>>word;
cout<<"word after 6th byte:"<<word<<endl;
fin.close();
}
