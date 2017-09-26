/*

This is a simple array implementation of a stack

*/
#include<stdio.h>
int mystack[30];
int *top;
int pop()
{
	top--;			//since top points to next space, decrement to get correct pop
	
	//printf("From pop:%d\n",*top);
	return *top;
}

void push(int data)
{
	*top=data;
	//printf("From push:%d\n",*top);
	top++;				//top points to the next space
}

void print_stack()
{
	int * stack_base=&mystack[0];
	printf("This is what the stack looks like:\n");
	while(stack_base!=top)
		{
			printf("%d\t",*stack_base);
			stack_base++;
		}
	printf("\n");
}

void main()
{
	top=&mystack[0];
	push(20);
	push(15);
	print_stack();
	push(42);
	push(16);
	print_stack();
	push(1);
	push(2);
	print_stack();
	int a=pop();
	printf("1. %d\n",a);
	int b=pop();
	printf("2. %d\n",b);
	print_stack();
	
}
