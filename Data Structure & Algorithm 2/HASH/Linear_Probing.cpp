#include<iostream>
using namespace std;
int ht[10];
void init()
{
  int i;
  for(i=0;i<10;i++)
  {
    ht[i]=-1;
  }
}
int hash(int num,int i)
{
   return (num%10+i)%10;
}
void insert(int num)
{
   int i,index;
   for(i=0;i<10;i++)
   {
      index=hash(num,i);
      if(ht[index]==-1)
      {
        ht[index]=num;
        break;
      }
   }
}
void disp()
{
   int i;
   for(i=0;i<10;i++)
   {
      cout<<"\t"<<ht[i];
   }
}
int search(int num)
{
   int i,index;
   for(i=0;i<10;i++)
   {
      index=hash(num,i);
      if(ht[index]==num)
      {
         return index;
      }
   }
  return -1;
}
void del(int num)
{
  int index=search(num);
  if(ht[index]==-1)
      cout<<"Not found";
  else
  {
     ht[index]=-1;
      cout<<"\n Del succ..";
  }
}
int main()
{
   int ch,num,index;
   init();
   do
   {
	     cout<<"\n 1-insert \n 2 disp \n 3-search \n 4-del :";
	     cout<<"\nEnter Choice :: ";
		 cin>>ch;
	     switch(ch)
	     {
		      case 1:cout<<"Enter number:";
				     cin>>num;
				     insert(num);
				     break;
		      case 2:disp();
				     break;
		      case 3:cout<<"Enter number:";
				     cin>>num;
				   	 index=search(num);
				  	 if(index==-1)
				          cout<<"Number not found";
				     else
				          cout<<"\n Number found position = "<<index;
				     break;
		      case 4:cout<<"Enter number:";
				     cin>>num;
				     del(num);
				     break;
	
	     }
	   }while(ch<5);
}
