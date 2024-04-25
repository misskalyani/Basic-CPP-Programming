
#include<iostream>
#define MAX 6
using namespace std;
typedef struct
{
   int data[MAX];
   int front,rear,cnt;
}DEQueue;
void init(DEQueue *q)
{
   q->front=q->cnt=0;
   q->rear=-1;
}
int isempty(DEQueue *q)
{
   int empty=0;
   if(q->rear==-1)
   empty=1;
        return empty;
}
int isfull(DEQueue *q)
{
   int full=0;
   if(q->cnt==MAX)
   full=1;
        return full;
}
void insert_front(DEQueue *q,int num)
{
   if(isfull(q))
   {
        cout<<"Queue Is Full Now";
        return;
   }
   else
   {
        if(q->front==0)
        q->front=MAX-1;
        else
        q->front=q->front-1;
        q->data[q->front]=num;
        q->cnt--;
        cout<<"\nAfter Insertion FRONT :: "<<q->front<<"\nREAR :: "<<q->rear;
        cout<<"\nInserted Value :: "<<num;
   }
}
void insert_rear(DEQueue *q,int num)
{
   if(isfull(q))
   {
        cout<<"Queue Is Full Now";
        return;
   }

        q->rear=(q->rear+1)%MAX;
        q->data[q->rear]=num;
        q->cnt++;
        cout<<"\nAfter Insertion FRONT :: "<<q->front<<"\nREAR :: "<<q->rear;
        cout<<"\nInserted Value :: "<<num;

}
int delete_front(DEQueue *q)
{
   int val;
   if(isempty(q))
   {
        cout<<"Queue Is empty Now";
        return -1;
   }
   val=q->data[q->front];
   q->front=(q->front+1)%MAX;
   q->cnt--;
   cout<<"\nAfter Deletion FRONT :: "<<q->front<<"\nREAR :: "<<q->rear;
   return val;
}
int delete_rear(DEQueue *q)
{
   int val;
   if(isempty(q))
   {
        cout<<"Queue Is empty Now";
        return -1;
   }
   val=q->data[q->rear];
   if(q->rear==0)
   q->rear=MAX-1;
   else
   q->rear=q->rear-1;
   q->cnt--;
   cout<<"\nAfter Deletion FRONT :: "<<q->front<<"\nREAR :: "<<q->rear;
   return val;
}
int main()
{
   int ch,val;
   DEQueue q;
   init(&q);
   do{
        cout<<"\n1-INSERT AT REAR\n2-INSERT AT FRONT\n3-DELETE AT REAR\n4-DELETE AT FRONT";
           
        cout<<"\nEnter Choice :: ";
        cin>>ch;
        switch(ch)
        {
           case 1:cout<<"\nEnter Value = ";
                  cin>>val;
                  insert_rear(&q,val);
                  break;
           case 2:cout<<"\nEnter Value = ";
                  cin>>val;
                  insert_front(&q,val);
                  break;  
           case 3:val=delete_rear(&q);
                  cout<<"\nDeleted Value = "<<val;
                  break;
           case 4:val=delete_front(&q);
                  cout<<"\nDeleted Valu e= "<<val;
                  break;
        }
   }while(ch<5);
}

