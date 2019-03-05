#include<stdio.h>
main()
{
	int n,i,temp,sum=0;
	printf("\n enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		i=n%10;
		sum=sum+(i*i*i);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("\n%d is armstrong number",temp);
	}
	else
	{
		printf("\n%d is not armstrong number",temp);
	}
}
