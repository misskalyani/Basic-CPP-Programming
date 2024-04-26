#include<iostream>
using namespace std;
int n=10;
int a[10];
void init()
{
   int i;
   for(i=0;i<n;i++)
     a[i]=-1;  
}
int hash(int num)
{
  return num%10;
}
void insert(int num)
{
   int key;
   key=hash(num);
   if(a[key]==-1)
   {
       a[key]=num;
       cout<<"\n Insert Succ..";
   } 
   else
   {
       cout<<"\n Collision Occurs position = "<<key;
   }
}
void del(int num)
{
   int key=hash(num);
   if(a[key]==num)
   {
       a[key]=-1;
       cout<<"\n Deleted succ..";
   }
   else
   {
      cout<<"\n Number not present in the HAsh Table";
   }
}
void search(int num)
{
   int key=hash(num);
   if(a[key]==num)
       cout<<"Record Found";
   else
     cout<<"Record not found..";
}
void disp()
{
   int i;
   for(i=0;i<n;i++)
   {
      cout<<"\t"<<a[i];
   }
}
int main()
{
   int ch,i,num;
  init();
   do
   {
       cout<<"\n Menu\n 1-insert \n 2-del \n 3-search:\n4-Dispaly:";
       cout<<"\n Enter choice:";
       cout<<ch;
       switch(ch)
       {
         case 1: cout<<"Enter number:";
                 cin>>num;
                 insert(num);
                 break;
         case 2: cout<<"Enter number:";
                 cin>>num;
                 del(num);
                 break;
         case 3: cout<<"Enter number:";
                 cin>>num;
                 search(num);
                 break;
         case 4: disp();
                 break;             
       }
   }while(ch<5);
}
