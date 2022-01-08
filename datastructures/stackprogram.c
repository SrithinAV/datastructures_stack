#include<stdio.h>
#include<conio.h>
#define MAX 7
static int TOP=-1;
int stack[MAX];
int item;
void push(void);
void pop(void);
void display(void);

void main()
{
    int choice;

    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
	printf("\n Enter the Choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	    case 1:

		push();
		break;

	    case 2:

		pop();
		break;

	    case 3:

		display();
		break;

	    case 4:

		printf("\n\t EXIT POINT ");


	    default:

		printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");


	}
    }
    while(choice!=4);

}
void push()
{

    if(TOP==MAX-1)
    {
	printf("\n\tSTACK is over flow");

    }
    else
    {
	printf(" Enter an item to be pushed:");
	scanf("%d",&item);
	TOP++;
	stack[TOP]=item;
    }
}
void pop()
{

    if(TOP==-1)
    {
	printf("\n\t Stack is under flow");
    }
    else
    {
	printf("\n\t The popped elements is %d",stack[TOP]);
	TOP--;
    }
}
void display()
{
   int i;
   if(TOP!=-1)
   {
    printf("STACK ELEMENT\n");
    for(i=TOP;i>=0;i--)
    printf("\nstack[%d]=%d",i,stack[i]);
   }
else
{
printf("stack is empty\n");
}
}
