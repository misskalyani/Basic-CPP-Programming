#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
  int data;
  struct node *next;
};

struct node *f;
struct node *r;
initq()
{
	f=r=NULL;
}
void enqueue (int d)			
{
  struct node *n;
  n = (struct node *) malloc (sizeof (struct node));
  n->data = d;
  n->next = NULL;
  if ((r == NULL) && (f == NULL))
    {
      f = r = n;
      r->next = f;
    }
  else
    {
      r->next = n;
      r = n;
      n->next = f;
    }
}

void dequeue ()			
{
  struct node *t;
  t = f;
  if ((f == NULL) && (r == NULL))
    cout<<"\nQueue is Empty";
  else if (f == r)
    {
      f = r = NULL;
      free (t);
    }
  else
    {
      f = f->next;
      r->next = f;
      free (t);
    }


}

void display ()
{
  struct node *t;
  t = f;
  if ((f == NULL) && (r == NULL))
    cout<<"\nQueue is Empty";
  else
    { 
      cout<<"Circular Queue: ";
      do
	{
	  cout<<t->data<<" ";
	  t = t->next;
	}
      while (t != f);
    }
}

int main ()
{
  int ch,num;
  initq();
  do{
      cout<<"\n1 :: enqueue. \n 2 :: dequeue \n 3 :: display";
      cout<<"\nEnter choice :: ";
      cin>>ch;
      switch(ch)
      {
      case 1 : cout<<"Enter number to insert :: ";
               cin>>num;
               enqueue (num);
               break;
      case 2 : dequeue();
               break;
      case 3 : display(); 
                break;
            
      }
  }while(ch<4);
}
