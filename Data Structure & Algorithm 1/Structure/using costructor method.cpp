#include<iostream>
using namespace std;
struct rectangle
{
	int height,width;
	rectangle(int h,int w)
	{
		height=h;
		width=w;
	}
	void area()
	{
		cout<<"AREA :: "<<(height*width);
	}
};
int main()
{
	struct rectangle r=rectangle(4,6);    
    r.area();  
}

