//using functions
#include<stdio.h>
void addition();
main()
{
	addition();
	addition();
	addition();
}
void addition()
{
		int a,b,c;
		printf(" \nEnter a&b values");
		scanf("%d %d",&a,&b);
		c=a+b;
		printf("the sum is:  %d",c);
}

