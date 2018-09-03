#include<stdio.h>
#include<stdlib.h>

void func1(int a,int b)
{
	int c=a;
	a=b;
	b=c;
	return;
}
void func2(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
	return;
}



int main()
{
	int a=5;
	int b=3;
	
	func1(a,b);//func is a function which perform swapping :) by call by value
	printf("a=%d b=%d\n",a,b);
	
	printf("After call by refrence\n");
	func2(&a,&b);
	printf("a=%d b=%d\n",a,b);
}
