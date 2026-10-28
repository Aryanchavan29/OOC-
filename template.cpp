#include<iostream>
using namespace std;

template <class T>
T add(T a,T b) 
{
  return a+b;
};
int main() 
{
cout<<"sum of integers:"<<add(10,10)<< endl;
cout<<"sum of floats:"<< add(10.1,5.10)<< endl;
cout<<"sum of characters:"<<add('A','B')<< endl; 
return 0;
}
