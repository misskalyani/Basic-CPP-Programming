#include<iostream>
#define MAX 5
using namespace std;
struct queue 
{
   int data[MAX];
   int front, rear;
};
void initQ(struct queue *q) 
{
    q->front = q->rear = -1;
}
int isEmptyQ(struct queue *q)
{
   if(q->front == q->rear)
     return 1;
   else
     return 0;
}
int isFullQ(struct queue *q)
{
    if (q -> rear == MAX - 1)
      return 1;
    else
      return 0;
}
void insertQ(struct queue *q, int num)
{
    if(isFullQ(q))
        cout<<"Queue is Overflow\n";
    else
    	q ->data[++(q -> rear)] = num;
}
int deleteQ(struct queue *q)
{
    if(isEmptyQ(q))
        cout<<"Queue is Underflow\n";
    else
	    return (q -> data[++(q -> front)]);
}
void display(struct queue *q)
{
    int i;
    cout<<"\nQueue contents are : \t";
    for(i = q -> front + 1 ;i <= q -> rear; i++)
   {
      cout<<q -> data[i];
   }
}
int peek(struct queue *q)
{
   return q->data[q->rear];
}
int main()
{
    struct queue q1;
    int ch,num;
    initQ(&q1);
    do
    {
       cout<<"\n1-Insert\n2-Delete\n3-display\n4-peek";
      
	   cout<<"\nEnter your choice :: ";
       cin>>ch;
       switch(ch)
         {
            case 1: cout<<"Enter element to be insert\n";
                    cin>>num;
                    insertQ(&q1,num);
                    break;
            case 2: cout<<"Deleted element is "<< deleteQ(&q1);
					break;
            case 3: display(&q1);
                    break;
            case 4: cout<<"peek element is "<<peek(&q1);
			        break;     
        }
    }while(ch<5);
}

