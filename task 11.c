#include<stdio.h>
struct student
{
	char name[30];
	int roll;
	float marks;
	}s;

int main()
{
	printf("Enter info:\n");
	printf("enter name:");
	scanf("%s",s.name);
	
	printf("enter the roll number:");
	scanf("%d",&s.roll);
	
	printf("enter the marks:");
	scanf("%f",&s.marks);
	
	printf("displaying info:\n");
	
	printf("Name:");
	puts(s.name);
	
	printf("roll number:%d\n",s.roll);
	
	printf("marks:%.1f\n",s.marks);
	
	return 0;
}
