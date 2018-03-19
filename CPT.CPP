#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter ther value of a \n ",a);
scanf("%d",&a);
printf("enter the value of b \n ",b);
scanf("%d",&b);
printf("enter the value of c \n ",c);
scanf("%d",&c);
if(a>b)
{
if(a>c)
{
printf("largest no %d",a);
}
else
{
printf("largest no %d",c);
}
}
else
{
if(b>c)
{
printf("largest no %d",b);
}
else
{
printf("largest no %d",c);
}
getch();
}
}
