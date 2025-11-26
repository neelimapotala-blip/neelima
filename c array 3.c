#include<stdio.h>
main()
{
	int i,marks[6];
	int percentage,sum=0;
	for(i=0;i<6;i++)
	{
		printf("enter sub %d mark",i+1);
		scanf("%d",&marks[i]);
	}
	for(i=0;i<6;i++)
	{
		sum=sum+marks[i];
	}
	percentage=(sum/600.0)*100;
	printf("the total marks:%d\n",sum);
	printf("the percentage:%d",percentage);
}
