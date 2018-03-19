//AVG OF ENTER NUMBERS.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,num[10],sum=0,avg;
	clrscr();
	printf("enter the number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("\nenter the number:");
	scanf("%d",&num[i]);
	sum=sum+num[i];
	}
	avg=sum/n;
	printf("\n add=%d",sum);
	printf("\n avg=%d",avg);
	getch();
}