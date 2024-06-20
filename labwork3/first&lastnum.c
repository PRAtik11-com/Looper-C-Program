#include<stdio.h>
#include<conio.h>

void main()
{
	int number,first,last,sum;
	printf("Enter your digit number: ");
	scanf("%d",&number);
	
	last=number%10;
	
	while(number>=10)
	{
		number=number/10;	
	}
	first=number;
	
	sum=first+last;
	printf("First (%d) and Last (%d) digit sum is :%d",first,last,sum);	
	
	getch();
}
