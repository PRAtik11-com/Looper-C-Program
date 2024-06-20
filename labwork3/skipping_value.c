#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	char ans='a';
	i=0;
	
	do{
		printf("%c\n",ans);
    if(ans%2==0)
    {
    	continue;
	}
	else
	{
		ans=ans+3;
	}
	ans++;
	}
	while(ans<123);
	
	getch();
}
