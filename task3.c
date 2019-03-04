#include<stdio.h>
int main()
{
	float eng,chem,math;
	float sum,average;
	printf("enter marks of three subjs:");
	scanf("%f %f %f",&eng, &chem, &math);
	sum = eng + chem+math;
	average = sum/3.0;
	printf("total marks=%.2f\n",sum);
	printf("average marks = %.2f\n",average);
	return 0;
}
