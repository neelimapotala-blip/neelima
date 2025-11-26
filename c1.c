#include<stdio.h>
main()
{
	int a,b,c,d;
	float s;
	printf("enter the values");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	s=a/b*c-b+a*d/3;
	printf("%f",s);
}

