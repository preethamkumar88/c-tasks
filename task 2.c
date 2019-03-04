#include<stdio.h>
main()
{
	float c,f;
	printf("enter temperature in c: ");
	scanf("%f",& c);
	f = ( c*9/5)+32;
	printf("%.2f c = %.2f",c,f);
	return 0 ;
}
