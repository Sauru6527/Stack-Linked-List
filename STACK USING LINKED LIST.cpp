#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* top = NULL;
void isempty();
void ispush();
void ispop();
void displayver();
void peek();
void count();
void search();


int main()

{
	
	int choice;
	while(1)
	{
	
	puts("\n********STACK OPERATION********\n");
	puts("|------------------------------------|");
	puts("            1->>> IS EMPTY         ");
	puts("|------------------------------------|");
	

	puts("|------------------------------------|");
	puts("            2->>> PUSH       ");
	puts("|------------------------------------|");
	
	puts("|------------------------------------|");
	puts("            3->>> POP       ");
	puts("|------------------------------------|");
	
	puts("|------------------------------------|");
	puts("            4->>> DISPLAYVER       ");
	puts("|------------------------------------|");
	
	puts("|------------------------------------|");
	puts("            5->>> PEEK   ");
	puts("|------------------------------------|");
	
	puts("|------------------------------------|");
	puts("            6->> COUNT        ");
	puts("|------------------------------------|");
	
	puts("|------------------------------------|");
	puts("            10->> EXIT        ");
	puts("|------------------------------------|");
	
	puts("|------------------------------------|");
	puts("            11->> SEARCH        ");
	puts("|------------------------------------|");
	

	

	printf("\nENTER CHOICE = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
	  case 1:
	         isempty();
	  	     break;
	  	
	
	  		case 2:
	  			   ispush();
	  			    break;
	  			
	  			case 3:
	  			      ispop();
	  				   break;
	  				
	  				case 4:
	  			           displayver();
	  			     	   break;
	  			     	
	  			     	case 5:
	  			               peek();
	  			     	       break;
	  			     	       
	  			     	    case 6:
	  			               count();
	  			     	       break;
	  			     	       
	  			     	       case 9:
	  			     	      
	  			     	              case 10:
	  			     	                      printf("PROGRAM CLOSED...THANKYOU MEET AGAIN...");
	  			     	                      return 0;
	  			     	              
	  			     	              case 11:
	  			     	              search();
	  			     	              break;
	  			     	              
	  			     	             			
	  				default:
	  					printf("PLEASE ENTER VALID CHOICE");
	  				
	  			
	  					
	    }
     } 
	return 0;
}


void isempty()
{
	if(top==NULL)
	{
		printf("\nYOUR STACK IS EMPTY");
	}
	else
	{
		printf("\nYOUR STACK IS NOT EMPTY");
	}
}
  				
	  	
void ispush()
{
	struct node* ptr=NULL;
	int value=0;
	ptr = (struct node*)malloc(sizeof(struct node));
	
	if(ptr==NULL)
	{
		printf("MEMORY ALLOCATION FAILED\n");
		return;
	}
	printf("ENTER VALUE = ");
	scanf("%d",&value);
	
	ptr->data=value;
	ptr->next=NULL;
	
	if(top==NULL)
	{
		top=ptr;
	}
	else
	{
	    ptr->next = top;
	    top=ptr;
	}
	 return;	
	}	
		
void ispop()
{
	struct node* temp = top;
	int value=0;
	
	if(top==NULL)
	{
		printf("STACK IS EMPTY\n");
		return;
	}
	
	else if(top->next==NULL)
	{
	value=top->data;
	free(temp);
	top=NULL;
	}
	else
	{
		value = top->data;
		top=temp->next;
		free(temp);
	}
	printf("%d VALUE POPED\n",value);
	return ;
	}

void peek()
{
	if(top==NULL)
	{
		printf("STACK IS EMPTY\n");
	}
	else
	{
		printf("TOP MOST ELEMENTS = %d",top->data);
	}
	return;
}

void displayver()  
{
   struct node *temp=top;
 
   if(top==NULL)
   {
 	printf("LIST IS EMPTY");
   }
   
   else
   {
   	while(temp!=NULL)
     	{
   		   printf("%d\n",temp->data);
   		   temp = temp->next;
	     }
   }
   return;
}

void count()
{
	int cnt=0;
	struct node *temp=top;
 
   if(top==NULL)
   {
 	printf("LIST IS EMPTY");
 	return;
   }
   
   else
   {
   	while(temp!=NULL)
     	{
   		   cnt++;
   		   temp = temp->next;
	     }
   }
   printf(" COUNT = %d",cnt);
   return;
}

void search()
{
	struct node *temp=top;
	int flag=0;
	int value=0;	
   	printf("ENTER VALUE = ");
   scanf("%d",&value);
   
   if(top==NULL)
   {
   	printf("LIST IS EMPTY\n");
   }
   else
   {
   
   	while(temp!=NULL)
     	{
     		flag=0;
   		   if(value==temp->data)
   		      {
   		     	flag==1;
   		     	break;
		       }
		       temp=temp->next;
        }


	     if(flag==0)
	     {
	     	printf(" %d  VALUE NOT FOUND",value);
		 }
		 
		 else
		 {
		 	printf("%d VALUE FOUND",value);
		 	return;
		 }
     }
     return;
}
