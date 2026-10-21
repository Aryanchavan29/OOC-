#include<iostream>
#include<fstream>
using namespace std;
int main() {
ofstream fout("example.txt");
fout<<"Welcome"<<endl;
fout<<"File Handling program";
fout.close();
ifstream fin("example.txt");
string line;
getline(fin,line);
fin.close();
}
