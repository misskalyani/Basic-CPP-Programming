#include<iostream>
using namespace std;
class A
{
    public :
    void disp();
};
void A::disp()
{
    cout<<"In Display function of class A\n";
}
int main()
{
    A obj;
    obj.disp();
}
