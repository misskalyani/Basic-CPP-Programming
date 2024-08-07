#include<iostream>
#include<stdlib.h>
#define memory (node*)malloc(sizeof(node))
using namespace std;
typedef struct node
{
	int data;
	struct node*next,*prev;
}node;
node *create(node*head)
{
	struct node*newnode,*temp;
	int i, n,num;
	cout<<"enter limit : ";
	cin>>n;
    for(i=0;i<n;i++)
	{
	newnode=memory;
	cout<<"enter value :: ";
	cin>>newnode->data;
	if(head==NULL)
	{
		head=temp=newnode;
		newnode->next=head;
		head->prev=newnode;
	}
	else
	{
		temp->next=newnode;
	    newnode->prev=temp;
		temp=newnode;
		newnode->next=head;
		head->prev=newnode;
	}
}
	return head;
}
node *disp(node*head)
{
	node*temp=head;
	do
	 {
		cout<<"\t"<<temp->data;
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
    head->prev=newnode;
    head=newnode;
    temp->next=head;
    head->prev=temp;
	return head;
}
node *insertend(node*head,int num)
{
	node *newnode,*temp;
	newnode=memory;
	newnode->data=num;
	for(temp=head;temp->next!=NULL;temp=temp->next);
	temp->next=newnode;
	newnode->prev=temp;
	newnode->next=head;
	head->prev=newnode;
	return head;
}
node *insertmid(node*head,int num,int pos)
{
	node *newnode,*temp,*temp1;
	int i;
	newnode=memory;
	newnode->data=num;
	for(i=1,temp=head;i<(pos-1)&&temp->next!=head;i++,temp=temp->next);
    temp1=temp->next;
	temp->next=newnode;
	newnode->prev=temp;
	newnode->next=temp1;
	temp1->prev=newnode;
	return head;
}
node *delbegin(node *head)
{
	node *temp1,*temp;
	for(temp=head;temp->next!=head;temp=temp->next);
	temp1=head;
	head=head->next;
	temp->next=head;
	head->prev=temp;
	free(temp1);
	return head;
}
node *delend(node *head)
{
	node *temp,*temp1;
	for(temp=head;temp->next->next!=head;temp=temp->next);
	temp1=temp->next;
	temp->next=head;
	head->prev=temp;
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
	temp1->next->prev=temp;
	free(temp1);
	return head;
}
node *insertcommon(node *head,int num,int pos)
{
	node *newnode,*temp,*temp1;
	int i;
	newnode=memory;
	newnode->data=num;
	if(pos==1)
	{
	    for(temp=head;temp->next!=head;temp=temp->next);
		newnode->next=head;
	    head->prev=newnode;
		head=newnode;
		temp->next=head;
		head->prev=temp;
	}
	else
	{
      	for(i=1,temp=head;i<(pos-1)&&temp!=NULL;i++,temp=temp->next);
     	temp1=temp->next;
	    temp->next=newnode;
     	newnode->prev=temp;
	    newnode->next=temp1;
	    temp1->prev=newnode;
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
		head->prev=temp;
	    free(temp1);
	}
	else
	{
      	for(i=1,temp=head;i<(pos-1)&&temp!=NULL;i++,temp=temp->next);
     	temp1=temp->next;
	    temp->next=temp1->next;	
	    temp1->next->prev=temp;
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
int main()
{
	node *head=NULL;
	int ch,num,pos;
	do
	{
	
	
		cout<<"\n1-create\n2-disp\n3-delbyval\n4-reverse\n5-insert begining\n6-insert end\n7-insert mid\n8-del begining";
		cout<<"\n9-del end\n10-del mid\n11-insert common\n12-del common\n13-search\n14-find max\n15-sort";
	   
	   
	    cout<<"\n\nenter choice :: ";
		cin>>ch;
		switch(ch)
		{
			case 1:head=create(head);
			       disp(head);
				   break;
			case 2:disp(head);
			       break; 
			case 3:cout<<"enter num :: ";
			       cin>>num;
			       head=delbyval(head,num);
			       disp(head);
				   break;	         
	        case 4:head=reverse(head);
	               disp(head);
				   break;
		    case 5:cout<<"enter num :: ";
			       cin>>num;
		           head=insertbegin(head,num);
	               disp(head);
				   break;
	        case 6:cout<<"enter num :: ";
			       cin>>num;
				   head=insertend(head,num);
	               disp(head);
				   break;       
		    case 7:cout<<"enter num :: ";
			       cin>>num;
		           cout<<"enter pos :: ";
			       cin>>pos;
				   head=insertmid(head,num,pos);
	               disp(head);
				   break;
		    case 8:head=delbegin(head);
	                disp(head);
				    break;
	        case 9:head=delend(head);
	                disp(head);
				    break;
		    case 10:cout<<"enter pos :: ";
			        cin>>pos;
			        head=delmid(head,pos);
	                disp(head);
					break;		          
	        case 11:cout<<"enter num :: ";
			        cin>>num;
			        cout<<"enter pos :: ";
			        cin>>pos;
			        head=insertcommon(head,num,pos);
			        disp(head);
				    break;	         
	        case 12:cout<<"enter pos :: ";
			        cin>>pos;
			        head=delcommon(head,pos);
			        disp(head);
				    break;
		   	case 13:cout<<"enter num :: ";
			        cin>>num;
			        if(search(head,num)==NULL)
			        {
			        	cout<<"not found";
					}
					else
						cout<<"found";
			        break;	 
			case 14:cout<<"maximum no = "<<findmax(head);
			        break;
			case 15:head=sort(head);
	                disp(head);
				    break;				        	         
		}
		
	}while(ch<20);
}
