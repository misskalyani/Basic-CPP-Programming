#include<iostream.h>
using namespace std;
class A
{
     public:
     static int x;
};
int A::x = 10;
int main()
{
      cout<<"Class x = "<<A::x<<"\n";
}

