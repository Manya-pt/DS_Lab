#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int top=-1,arr[SIZE];
void push();
void pop();
void peek();
void display();
int main()
{
	int ch;
	while(1)
	{
         printf("\n\n\nPerform operations on the stack");
         printf("\n1.Push \n2.Pop\n3.Peek\n4.Display\n5.Exit");
         printf("\n\nEnter the choice: ");
         scanf("%d",&ch);

         switch (ch)
         {
          case 1:
            push();
            break;
          case 2:
            pop();
            break;
          case 3:
            peek();
            break;
          case 4:
            display();
            break;
          case 5:
             exit(0);
          default:
            printf("\nInvalid choice!!");
        }
       }
}
void push()
{
  int n;
  if(top==SIZE-1)
  {
    printf("Stack Overflow!!");
  }
  else
  {
     printf("Enter the Element to Insert into Stack:");
     scanf("%d",&n);
     top=top+1;
     arr[top]=n;
     printf("%d is inserted into the stack",n);
  }
}
void pop()
{
  if(top==-1)
  {
  printf("Stack Underflow!!");
  }
  else
  {
   printf("\n%d is Deleted from Stack.",arr[top]);
   top=top-1;
  }
}
void peek()
{
  if(top==-1)
  {
    printf("Stack Empty!!");
  }
  else
  {
   printf("The Top of the Stack is %d",arr[top]);
  }
}
void display()
{
  if(top==-1)
  {
    printf("Stack Underflow!!");
  }
  else
  {
  for(int i=0;i<=top;i++)
  {
   printf("\n%d ",arr[i]);
  }
  }
}
