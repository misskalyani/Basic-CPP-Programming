#include<iostream>
#include<stdlib.h>
#define memory (node*)malloc(sizeof(node))
using namespace std;
typedef struct node
{
	int data;
	struct node*next;
}node;
node *create(node*head)
{
	struct node*newnode,*temp;
	int i, n,num;
	cout<<"enter limit:";
	cin>>n;
    for(i=0;i<n;i++)
	{
		cout<<"enter value:: ";
		cin>>newnode->data;
		if(head==NULL)
		{
			head=temp=newnode;
			temp->next=head;
		}
		else
		{
			temp->next=newnode;
		    newnode->next=head;
			temp=newnode;
		}
   }
	return head;
}
node *disp(node *head)
{
	node *temp;
	temp=head;
	do
     {
		cout<<"%d\t"<<temp->data;
		temp=temp->next;
	 }while(temp!=head);
}
node *delbyval(node*head,int num)
{
	node*temp,*temp1;
	for(temp=head;temp->next!=head;temp=temp->next)
	{
		if(temp->data==num)
		{
			break;
		}
	}
	for(temp1=head;temp1->next!=temp;temp1=temp1->next);
	temp1->next=temp->next;
	free(temp);
	return head;
}
node *bubble(node *head)
{
    int done;
    node *temp;
    node *temp2 = NULL;

    if (head == NULL)
        return head;

    do
    {
        done = 0;
        temp = head;

        while (temp->next != temp2)
        {
            if (temp->data > temp->next->data)
            {
                int temp_data = temp->data;
                temp->data = temp->next->data;
                temp->next->data = temp_data;
                done = 1;
            }
            temp = temp->next;
        }
        temp2 = temp;
    } while (done);
   return head;
}
 node*reverse(node *head)
  {
    node *temp = NULL;
    node *current = head;
    node *next = NULL;

    while (current != NULL) 
	{
        next = current->next;
        current->next = temp;
        temp = current;
        current = next;
    }

    head =temp ;
    return head;
}
node *insertbegin(node*head,int num)
{
	node *newnode,*temp;
	newnode=memory;
	newnode->data=num;
	for(temp=head;temp->next!=head;temp=temp->next);
	newnode->next=head;
	head=newnode;
	temp->next=head;
	return head;
}
node *insertend(node*head,int num)
{
	node *newnode,*temp;
	newnode=memory;
	newnode->data=num;
	newnode->next=NULL;
	for(temp=head;temp->next!=head;temp=temp->next);
	temp->next=newnode;
	newnode->next=head;
	return head;
}
node *insertmid(node*head,int num,int pos)
{
	node *newnode,*temp;
	int i;
	newnode=memory;
	newnode->data=num;
	for(i=1,temp=head;i<(pos-1)&&temp!=NULL;i++,temp=temp->next);
	newnode->next=temp->next;
	temp->next=newnode;
	return head;
}
node *delbegin(node *head)
{
	node *temp,*temp1;
	for(temp=head;temp->next!=head;temp=temp->next);
	temp1=head;
	head=head->next;
	temp->next=head;
	free(temp1);
	return head;
}
node *delend(node *head)
{
	node *temp,*temp1;
	for(temp=head;temp->next->next!=head;temp=temp->next);
	temp1=temp->next;
	temp->next=head;
	free(temp1);
	return head;
}
node *delmid(node *head,int pos)
{
	node *temp,*temp1;
	int i;
	for(i=1,temp=head;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
	temp1=temp->next;
	temp->next=temp1->next;
	free(temp1);
	return head;
}
node *insertcommon(node *head,int num,int pos)
{
	node *newnode,*temp;
	int i;
	newnode=memory;
	newnode->data=num;
	if(pos==1)
	{
		newnode->next=head;
		head=newnode;
		for(temp=head;temp->next!=head;temp=temp->next);
		temp->next=head;
	}
	else
	{
      	for(i=1,temp=head;i<(pos-1)&&temp!=NULL;i++,temp=temp->next);
     	newnode->next=temp->next;
	    temp->next=newnode;	
	}
	return head;
}
node *delcommon(node *head,int pos)
{
	node *temp1,*temp;
	int i;
	if(pos==1)
	{
		for(temp=head;temp->next!=head;temp=temp->next);
		temp1=head;
		head=head->next;
		temp->next=head;
		free(temp1);
	}
	else
	{
      	for(i=1,temp=head;i<(pos-1)&&temp!=NULL;i++,temp=temp->next);
     	temp1=temp->next;
	    temp->next=temp1->next;	
	    free(temp1);
	}
	return head;
}
node *search(node *head,int num)
{
	node *temp;
	for(temp=head;temp->next!=head;temp=temp->next)
	{
		if(temp->data==num)
		{
			return temp;
		}
	}
   return NULL;
}
node *sort(node *head)
{
	node *i,*j;
	int t;
	for(i=head;i->next!=head;i=i->next)
	{
		for(j=head;j->next!=head;j=j->next)
		{
	    	if(i->data<j->data)
	       {
		   
			 t=i->data;
	    	 i->data=j->data;
	         j->data=t;
     	   }
   	    }
    }
    return head;
}
int findmax(node *head)
{
	node *temp;
	int max=head->data;
	for(temp=head;temp->next!=head;temp=temp->next)
	{
		if(temp->data>max)
		{
			max=temp->data;
		}
	}
	return max;
}
int main()
{
	node *head=NULL;
	int ch,num,pos;
	do
	{
	
		cout<<"\n1-create\n2-disp\n3-delbyval\n4-bubble\n5-reverse\n6-insert begining\n7-insert end\n8-insert mid";
   	    cout<<"\n9-del begining\n10-del end\n11-del mid\n12-insert common\n13-del common\n14-search\n15-sort\n16-find max";
	    
		cout<<"\n\nenter choice:: ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:head=create(head);
			       break;
			case 2:disp(head);
			       break; 
			case 3:cout<<"enter num::";
			       cin>>num;
			       head=delbyval(head,num);
			       disp(head);
				   break;	         
		    case 4:head=bubble(head);
	               disp(head);
				   break;
	        case 5:head=reverse(head);
	               disp(head);
				   break;
		    case 6:cout<<"enter num::";
			       cin>>num;
		           head=insertbegin(head,num);
	               disp(head);
				   break;
	        case 7:cout<<"enter num::";
			       cin>>num;
				   head=insertend(head,num);
	               disp(head);
				   break;       
		    case 8:cout<<"enter num::";
			       cin>>num;
		           cout<<"enter pos::";
			       cin>>pos;
				   head=insertmid(head,num,pos);
	               disp(head);
				   break;
		    case 9:head=delbegin(head);
	               disp(head);
				   break;
	        case 10:head=delend(head);
	                disp(head);
				    break;
		    case 11:cout<<"enter pos::";
			        cin>>pos;
			        head=delmid(head,pos);
	                disp(head);
				    break;		          
	        case 12:cout<<"enter num::";
			        cin>>num;
			        cout<<"enter pos::";
			        cin>>pos;
			        head=insertcommon(head,num,pos);
			        disp(head); 
					break;	         
	        case 13:cout<<"enter pos::";
			        cin>>pos;
			        head=delcommon(head,pos);
			        disp(head);
				    break;
		   	case 14:cout<<"enter num::";
			        cin>>num;
			        if(search(head,num)==NULL)
			        {
			        	cout<<"not found";
					}
					else
					    cout<<"found";
			        break;	 
			case 15:head=sort(head);
	                disp(head);
				    break;
			case 16:cout<<"maximum no = "<<findmax(head);
			        break;							        	         
		}
		
	}while(ch<20);
}
