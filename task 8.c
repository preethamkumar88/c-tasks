#include<stdio.h>
int main()
{
	int n1,n2,i;
	printf("enter a number:");
	scanf("%d",&n1);
	for(i=1;i<=10;i++)
	{
		n2=n1*i;
		printf("%d*%d=%d\n",n1,i,n2);
	}
	return 0;
}
