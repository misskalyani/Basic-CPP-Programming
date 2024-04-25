#include<iostream>
using namespace std;
struct rectangle
{
	int height,width;
};
int main()
{
	struct rectangle r;
	r.height=8;
	r.width=90;
	cout<<"AREA OF RECTANGLE :: "<<r.height*r.width;
}
