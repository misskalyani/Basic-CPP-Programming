#include<iostream>
using namespace std;
int x = 10;

int main()
{
     int x = 20;
     cout<<"Local x = " << x <<"\n";
     cout<<"Golbal x = " << ::x <<"\n";
     {
         int x = 30;
         cout<<"In Nested Block x = "<< x <<"\n";
         cout<<"Golbal x = " << ::x <<"\n";
     
     }
     
}
