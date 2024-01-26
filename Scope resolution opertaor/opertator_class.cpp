#include<iostream>
using namespace std;
class A
{
    public:
    int x;
};
int main()
{
    int A::*ptr = &A::x;
    A obj,*a_ptr;
    obj.*ptr = 20;
    cout<<"Using .* : x = "<<obj.*ptr<<"\n";
    a_ptr = new A();
    a_ptr->*ptr = 30;
    cout<<"Using->* : x = "<< a_ptr->*ptr<<"\n";
}
