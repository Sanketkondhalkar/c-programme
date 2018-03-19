 //program to find a factorial number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,fact=1;
	clrscr();
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d",i);
		fact=fact*i;
	}
	printf("\n FACTORIAL=%d",fact);
	getch();
}