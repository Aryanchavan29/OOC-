#include<iostream>
using namespace std;
class colour
{
public:
colour()
{
cout<<"i like colour\n";
}
};
class white : public colour
{
public:
white()
{
cout<<"i like white\n";
}
};
class blue: public colour
{
public:
blue()
{
cout<<"i like blue\n";
}
};
class pink:public white,blue
{
public:
pink()
{
cout<<"i like pink\n";
}
};
int main()
{
white obj1;
blue obj2;
pink obj3;
return 0;
}
