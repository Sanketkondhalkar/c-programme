//PALINDROME NUMBER.
#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev=0,temp,rem;
clrscr();
printf("enter the  value of n:" );
scanf("%d",&n);
temp=n;
while(n!=0)
{
 rem=n%10;
 rev=rev*10+rem;
 n=n/10;
 }

 if(temp==rev)
 {
 printf("palindrome number");
 }
 else
 {
 printf("not a palindrom number");
 }

 getch();

 }
