#include<iostream>
using namespace std;
class payment
{
public:
virtual void pay() {
cout<<"Payment made by cash"<<endl;
}
};
class creditcard : public payment{
public:
void pay() override{
cout<<"payment made by creditcard"<<endl;
}
};
class upipayment : public payment {
public:
void pay() override{
cout<<"Payment made by UPI"<<endl;
}
};
int main(){
payment*paymentptr;
creditcard Payment credit;
upipayment upi;
paymentptr-& credit::
paymentptr->pay();
paymentptr-& upi::
paymentptr->pay();
return 0;
}

