#include<iostream> 
using namespace std;
int main()
{
	int i,j,n,ch;
     do{
     	cout<<"\n1-Three star\n2-Four star\n3-Five star";
     	cout<<"\nEnter Choice :: ";
     	cin>>ch;
     	switch(ch)
     	{
		 
		 case 1:cout<<"\nEnter LImit :: ";
				cin>>n;
		 		for(i=1;i<=n;i++)
			   	{
				  for(j=1;j<=n;j++)
	            	{
		                if(i==2 && j==2)
		                    cout<<"   ";
		            	else
	        	        cout<<" * ";
	                }
	                cout<<"\n";
	            }
	            }
	            break;
	    case 2:	cout<<"\nEnter LImit :: ";
				cin>>n;
		        for(i=1;i<=n;i++)
				{
					for(j=1;j<=n;j++)
					{     
					  if((i==2 && j==2) || (i==2 && j==3) || (i==3 && j==2) || (i==3 && j==3))
                         cout<<"   ";
             		  else
	        			cout<<" * ";
	        		}
	        		cout<<"\n";
	        	}
	        	break;
	    case 3: cout<<"\nEnter LImit :: ";
				cin>>n;
		        for(i=1;i<=n;i++)
				{
					for(j=1;j<=n;j++)
					{
            			if((i==2 && j==2) || (i==2 && j==3) || (i==3 && j==2) || (i==3 && j==3) ||(i==2 && j==4) ||(i==3 &&j==4) ||(i==4  && j==2) || (i==4 && j==3) ||(i==4 && j==4))
	        			    cout<<"   ";
						else
	        				cout<<" * ";
			    	}
						cout<<"\n";
            	}
            	break;
          }
            }while(ch<4);
	
}
