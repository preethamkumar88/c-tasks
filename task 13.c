#include<stdio.h>
int main()
{
   int a[30],i,n,large,small;
   printf("how many elements:");
   scanf("%d",&n);
   printf("enter the array");
   
   for(i=0;i<n;++i)
     scanf("%d",&a[i]);
     
     large=small=a[0];
     for(i=1;i<n;++i)
     {
     	if(a[i]>large)
     	   large=a[i];
     	if (a[i]<small)
     	small=a[i];
	 }
	 printf("largest element is %d",large);
	 printf("smallest element is %d",small);
	 
	 return 0;
}
