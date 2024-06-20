#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	int count=0;
	printf("Enter the Digit number:");
	scanf("%d",&num);
	
	do
	{
		num=num/10;
		count++;	
	}
	while(num!=0);
	printf("The total digit number is:%d",count);
	getch();
}
