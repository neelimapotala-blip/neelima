//program on local,gobal variable
#include<stdio.h>
int x=10;//gobal variable
void display();
main()
{
	int y=20;//local variable
	printf("the value of x is %d",x);
	printf("the value of y is %d",y);
	printf("the value of z is %d",z);//error
	display();
}
void display()
{
	int z=30;//local variable
	printf(" the value of x is %d",x);
	printf("the value of y is %d",y);
	printf("the  value of z is %d",z);
}
