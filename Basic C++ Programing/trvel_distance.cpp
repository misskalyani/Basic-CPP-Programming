#include<iostream>
using namespace std;
int main()
{
	float u,a,t,v,s;
    cout<<"Enter u,a and t :: ";
	cin>> u >> a >> t;
	v=u+a*t;
    cout<<"FINAL VELOCITY = "<<v;
    s=u+a*t*t;
    cout<<"\nDISTANCE = "<<v;
}
